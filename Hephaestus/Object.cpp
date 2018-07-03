#include "Object.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

	Growth::Growth() {}
	Growth::Growth(double densityGrab, double elasticityGrab, double yieldGrab, int limitGrab, double gravityGrab, double nodeSpacingGrab, int seedGrab[3], int targetGrab[3])
	{
		density = densityGrab;
		elasticity = elasticityGrab * pow(10, 9);
		yield = yieldGrab * pow(10, 6);
		limit = limitGrab;
		gravity = gravityGrab;
		nodeSpacing = nodeSpacingGrab * pow(10, -4);
		seed[0] = seedGrab[0];
		seed[1] = seedGrab[1];
		seed[2] = seedGrab[2];
		target[0] = targetGrab[0];
		target[1] = targetGrab[1];
		target[2] = targetGrab[2];
		addVertex(seedGrab[0], seedGrab[1], seedGrab[2]);

		//3D distance
		double Mag = sqrt(pow((targetGrab[0] - seedGrab[0]), 2) + pow((targetGrab[1] - seedGrab[1]), 2) + pow((targetGrab[2] - seedGrab[2]), 2));
		//Horizontal direction
		double Hdir;
		if ((targetGrab[0] - seedGrab[0]) != 0)
			Hdir = atan((targetGrab[1] - seedGrab[1]) / (targetGrab[0] - seedGrab[0]));
		else
			Hdir = 0;
		//Vertical direction
		double Vdir;
		if (sqrt(pow((targetGrab[0] - seedGrab[0]), 2) + pow((targetGrab[1] - seedGrab[1]), 2)) != 0)
			Vdir = atan((targetGrab[2] - seedGrab[2]) / sqrt(pow((targetGrab[0] - seedGrab[0]), 2) + pow((targetGrab[1] - seedGrab[1]), 2)));
		else
			Vdir = 0;
		double vectorMagDir[3]
		{
			Mag,Hdir,Vdir
		};

		growthFactor();
	}

	//Needs code to skip over taken vertices & a check of the nearestnodes code
	void Growth::growthFactor()
	{
		while (true)
		{
			stressAnalysis();

			for (int i = 0; i < resultantDisplace.size(); i++)
			{
				//Check if the node is at its breaking point or is not feeling any strain
				if ((resultantDisplace[i] > yield || resultantDisplace[i] <= .1) && vertices.size() != 1)
				{
					removeVertex(vertices[i][0], vertices[i][1], vertices[i][2]);
					i--;
				}
				//Check to see if the node needs supports
				else if (resultantDisplace[i] <= yield && resultantDisplace[i] >= yield * limit * .01)
				{
					nearestNode(i);
				}
				else
				{
					//Check if target has been met
					if (vertices[i][0] == target[0] && vertices[i][1] == target[1] && vertices[i][2] == target[2])
					{
						//Check to see if any nodes need supports
						for (int g = 0; g < vertices.size(); g++)
						{
							if (resultantDisplace[i] <= yield && resultantDisplace[i] >= yield * limit * .01)
							{
								std::vector<int> xup{ vertices[i][0] + 1, vertices[i][1], vertices[i][2] };
								std::vector<int> xdown{ vertices[i][0] - 1, vertices[i][1], vertices[i][2] };
								std::vector<int> yup{ vertices[i][0], vertices[i][1] + 1, vertices[i][2] };
								std::vector<int> ydown{ vertices[i][0], vertices[i][1] - 1, vertices[i][2] };
								std::vector<int> zup{ vertices[i][0], vertices[i][1], vertices[i][2] + 1 };
								std::vector<int> zdown{ vertices[i][0], vertices[i][1], vertices[i][2] - 1 };

								std::vector<std::vector<int> > linked{ xup,xdown,yup,ydown,zup,zdown };

								std::vector<double> nearnodes
								{
									sqrt(pow((target[0] - xup[0]), 2) + pow((target[1] - xup[1]), 2) + pow((target[2] - xup[2]), 2)),
									sqrt(pow((target[0] - xdown[0]), 2) + pow((target[1] - xdown[1]), 2) + pow((target[2] - xdown[2]), 2)),
									sqrt(pow((target[0] - yup[0]), 2) + pow((target[1] - yup[1]), 2) + pow((target[2] - yup[2]), 2)),
									sqrt(pow((target[0] - ydown[0]), 2) + pow((target[1] - ydown[1]), 2) + pow((target[2] - ydown[2]), 2)),
									sqrt(pow((target[0] - zup[0]), 2) + pow((target[1] - zup[1]), 2) + pow((target[2] - zup[2]), 2)),
									sqrt(pow((target[0] - zdown[0]), 2) + pow((target[1] - zdown[1]), 2) + pow((target[2] - zdown[2]), 2)),
								};

								for (int i = 0; i < nearnodes.size(); i++)
								{
									if (nearnodes[i] > nearnodes[5])
									{
										double temp = nearnodes[5];
										std::vector<int> tempPos = linked[5];
										nearnodes[5] = nearnodes[i];
										linked[5] = tempPos;
										nearnodes[i] = temp;
									}
								}
								addVertex(linked[5][0], linked[5][1], linked[5][2]);
							}
						}
						return;
					}
					//Build towards target
					else
					{
						nearestNode(i);
					}
				}
			}
		}
	}

	//Matrix creation of the displacement of each node
	void Growth::stressAnalysis()
	{
		resultantDisplace.clear();
		resultantDisplace.resize(vertices.size());

		for (int i = 0; i < vertices.size(); i++)
		{
			for (int c = 0; c < 3; c++)
			{
				xref.clear();
				yref.clear();
				zref.clear();
				matrix.clear();
				matrix.resize(vertices.size() * 3);

				///This for loop creates a random NULL vertex
				displacement->clear();
				for (int a = 0; a < vertices.size() * 3; a++)
				{
					displacement[a].resize(vertices.size() * 3);
				}

				matrix[3 * i + c] = elasticity / nodeSpacing;

				if (c == 0)
					for (int t = 0; t < vertices.size(); t++)
					{
						xref.push_back(vertices[i][0] + 1);
						xref.push_back(vertices[i][1]);
						xref.push_back(vertices[i][2]);

						if (vertices[t] == xref)
						{
							matrix[t - 2] = -elasticity / nodeSpacing;
						}
					}
				if (c == 1)
					for (int t = 0; t < vertices.size(); t++)
					{
						yref.push_back(vertices[i][0]);
						yref.push_back(vertices[i][1] + 1);
						yref.push_back(vertices[i][2]);

						if (vertices[t] == yref)
						{
							matrix[t - 1] = -elasticity / nodeSpacing;
						}
					}
				if (c == 2)
					for (int t = 0; t < vertices.size(); t++)
					{
						zref.push_back(vertices[i][0]);
						zref.push_back(vertices[i][1]);
						zref.push_back(vertices[i][2] + 1);

						if (vertices[t] == zref)
						{
							matrix[t] = -elasticity / nodeSpacing;
						}
					}
				displacement[i][c] = gravity * density / matrix[3 * i + c];
			}
			resultantDisplace[i] += sqrt(pow((displacement[i][0] - vertices[i][0]), 2) + pow((displacement[i][1] - vertices[i][1]), 2) + pow((displacement[i][2] - vertices[i][2]), 2));
		}
		matrix.clear();
	}

	//Find the nearest node to the target and seed and create a vertex there
	void Growth::nearestNode(int i)
	{
		//Get Nearest nodes
		//////////////////////////////////////////////////////////////////////////////////////
		std::vector<int> xup{ vertices[i][0] - 1, vertices[i][1], vertices[i][2] };
		std::vector<int> xdown{ vertices[i][0] + 1, vertices[i][1], vertices[i][2] };
		std::vector<int> yup{ vertices[i][0], vertices[i][1] - 1, vertices[i][2] };
		std::vector<int> ydown{ vertices[i][0], vertices[i][1] + 1, vertices[i][2] };
		std::vector<int> zup{ vertices[i][0], vertices[i][1], vertices[i][2] - 1 };
		std::vector<int> zdown{ vertices[i][0], vertices[i][1], vertices[i][2] + 1 };

		std::vector<std::vector<int> > linked{ xup,xdown,yup,ydown,zup,zdown };

		//Find nearest nodes distance to target
		//////////////////////////////////////////////////////////////////////////////////////
		std::vector<double> nearnodes
		{
			rint(sqrt(pow((target[0] - xup[0]), 2) + pow((target[1] - xup[1]), 2) + pow((target[2] - xup[2]), 2))),
			rint(sqrt(pow((target[0] - xdown[0]), 2) + pow((target[1] - xdown[1]), 2) + pow((target[2] - xdown[2]), 2))),
			rint(sqrt(pow((target[0] - yup[0]), 2) + pow((target[1] - yup[1]), 2) + pow((target[2] - yup[2]), 2))),
			rint(sqrt(pow((target[0] - ydown[0]), 2) + pow((target[1] - ydown[1]), 2) + pow((target[2] - ydown[2]), 2))),
			rint(sqrt(pow((target[0] - zup[0]), 2) + pow((target[1] - zup[1]), 2) + pow((target[2] - zup[2]), 2))),
			rint(sqrt(pow((target[0] - zdown[0]), 2) + pow((target[1] - zdown[1]), 2) + pow((target[2] - zdown[2]), 2))),
		};

		//Order nodes based on distance from target
		//////////////////////////////////////////////////////////////////////////////////////
		for (int v = 0; v < nearnodes.size(); v++)
		{
			if (nearnodes[v] > nearnodes[5])
			{
				double temp = nearnodes[5];
				std::vector<int> tempPos = linked[5];
				nearnodes[5] = nearnodes[v];
				linked[5] = tempPos;
				nearnodes[v] = temp;
			}
		}

		//////////////////////////////////////////////////////////////////////////////////////
		addVertex(linked[5][0], linked[5][1], linked[5][2]);
	}

	/*
	bool Growth::lineIntersect(double start )
	{
	double lineIntersect =
	x1 * Ax * 2−x1*Ax*Cx−x1*Ax*Bx +
	x1 * Cx*Bx +
	y1 * Ay * 2−y1*Ay*By−y1*Ay*Cy +
	y1 * By*Cy +
	z1 * Bz*Cz−z1*Bz*Az−z1*Cz*Az +
	z1 * Az * 2−Ax * 3 +
	Ax * 2 * Cx +
	Ax * 2 * Bx−Ax*Cx*Bx−Ay * 3 +
	Ay * 2By +
	Ay * 2 * Cy−Ay*By*Cy−Bz*Cz*Az +
	Bz * Az * 2 +
	Cz * Az * 2−Az * 3 * x1*Ax * 2−x1*Ax*Cx−x1*Ax*Bx +
	x1 * Cx*Bx +
	y1 * Ay * 2−y1*Ay*By−y1*Ay*Cy +
	y1 * By*Cy +
	z1 * Bz*Cz−z1*Bz*Az−z1*Cz*Az +
	z1 * Az * 2−x2*Ax * 2 +
	x2 * Ax*Cx +
	x2 * Ax*Bx−x2*Cx*Bx−z2*Bz*Cz +
	z2 * Bz*Az +
	z2 * Cz*Az−z2*Az * 2−Ay * 2 * y2 +
	Ay * By*y2 +
	Ay * Cy*y2−By*Cy*y2;
	if (lineIntersect <= 1 || lineIntersect >= 0)
	{
	}
	}*/

	//Create and remove functions for 3D frame
	void Growth::addVertex(int x, int y, int z)
	{
		std::vector<int> add{ x, y, z };
		vertices.push_back(add);
	}
	void Growth::addFace(int a, int b, int c)
	{
		std::vector<int> add{ a, b, c };
		faces.push_back(add);
	}
	void Growth::removeVertex(int x, int y, int z)
	{
		std::vector<int> points{ x, y, z };
		vertices.erase(std::remove(vertices.begin(), vertices.end(), points), vertices.end());
	}
	void Growth::removeFace(int a, int b, int c)
	{
		std::vector<int> points{ a, b, c };
		faces.erase(std::remove(faces.begin(), faces.end(), points), faces.end());
	}
	/*void Growth::moveVertex(int x, int y, int z, int n_x, int n_y, int n_z)
	{
	vertices[std::find(vertices.begin, vertices.end, (x, y, z))] = (n_x, n_y, n_z);
	}*/

	//Print .obj format
	System::String^ Growth::format()
	{
		std::string list;
		System::String^ simulate = gcnew System::String(list.c_str());
		for (int i = 0; i < vertices.size(); i++)
		{
			simulate += " v " + vertices[i][0] + " " + vertices[i][1] + " " + vertices[i][2] + "\r\n";
		}
		for (int i = 0; i < faces.size(); i++)
		{
			simulate += "f " + faces[i][0] + " " + faces[i][1] + " " + faces[i][2] + "\r\n";
		}

		return simulate;
	}