#include "Generative_Design.h"

Growth::Growth(double densityGrab, double elasticityGrab, double yieldGrab, int limitGrab, double gravityGrab, double nodeSpacingGrab, int seedGrab[3], int targetGrab[3])
{
	density = densityGrab;
	elasticity = elasticityGrab * pow(10, 9);
	yield = yieldGrab * pow(10, 6);
	limit = limitGrab;
	gravity[0] = 0;
	gravity[1] = 0;
	gravity[2] = gravityGrab;
	nodeSpacing = nodeSpacingGrab * pow(10, -4);
	seed[0] = seedGrab[0];
	seed[1] = seedGrab[1];
	seed[2] = seedGrab[2];
	target[0] = targetGrab[0];
	target[1] = targetGrab[1];
	target[2] = targetGrab[2];
	generate.addVertex(seedGrab[0], seedGrab[1], seedGrab[2]);

	growthFactor();
}

//Needs code to skip over taken generate.getVertices() & a check of the nearestnodes code
void Growth::growthFactor()
{
	while (true)
	{
		stressAnalysis();

		for (unsigned int i = 0; i < resultantDisplace.size(); i++)
		{
			//Check if the node is at its breaking point or is not feeling any strain
			if ((resultantDisplace[i] > yield) && generate.getVertices().size() != 2)
			{
				generate.removeVertex(generate.getVertices()[i][0], generate.getVertices()[i][1], generate.getVertices()[i][2]);
				--i;
			}
			//Check to see if the node needs supports
			else if (resultantDisplace[i] <= yield && resultantDisplace[i] >= yield * limit * .01)
			{
				nearestNode(i);
			}
			else
			{
				//Check if target has been met
				if (generate.getVertices()[i][0] == target[0] && generate.getVertices()[i][1] == target[1] && generate.getVertices()[i][2] == target[2])
				{
					//Check to see if any nodes need supports
					for (unsigned int g = 0; g < resultantDisplace.size(); g++)
					{
						if (resultantDisplace[i] <= yield && resultantDisplace[i] >= yield * limit * .01)
						{
							nearestNode(g);
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
	resultantDisplace.resize(generate.getVertices().size());

	//Add axis specific displacement from neighboring node to matrix
	//////////////////////////////////////////////////////////////////////////////////////
	///All connecting nodes on axis are -k, diagonal number is k * amount of connecting nodes on axis, 
	///Diagonaly symetric, indiviual element matrix put in global
	for (unsigned int i = 0; i < generate.getVertices().size(); ++i)
	{
		matrix.clear();
		matrix.resize(generate.getVertices().size() * 3);
		displacement[0] = 0;
		displacement[1] = 0;
		displacement[2] = 0;
		std::array<double, 3> ref;
		//loop through each axis
		for (unsigned int c = 0; c < 3; ++c)
		{
			//Number of linked nodes
			int linked_count = 0;
			//Find how many nodes are connected on axis
			switch (c)
			{
				//X axis
			case 0:
				for (unsigned int t = 0; t < generate.getVertices().size(); t++)
				{
					//Positive connection
					ref[0] = generate.getVertices()[i][0] + 1;
					ref[1] = generate.getVertices()[i][1];
					ref[2] = generate.getVertices()[i][2];

					if (generate.getVertices()[t] == ref)
					{
						matrix[3 * t + c] = -elasticity / nodeSpacing;
						++linked_count;
					}

					//Negative connection
					ref[0] = generate.getVertices()[i][0] - 1;
					ref[1] = generate.getVertices()[i][1];
					ref[2] = generate.getVertices()[i][2];

					if (generate.getVertices()[t] == ref)
					{
						matrix[3 * t + c] = -elasticity / nodeSpacing;
						++linked_count;
					}
				}
				//Y axis
			case 1:
				for (unsigned int t = 0; t < generate.getVertices().size(); t++)
				{
					//Positive connection
					ref[0] = generate.getVertices()[i][0];
					ref[1] = generate.getVertices()[i][1] + 1;
					ref[2] = generate.getVertices()[i][2];

					if (generate.getVertices()[t] == ref)
					{
						matrix[3 * t + c] = -elasticity / nodeSpacing;
						++linked_count;
					}

					//Negative connection
					ref[0] = generate.getVertices()[i][0];
					ref[1] = generate.getVertices()[i][1] - 1;
					ref[2] = generate.getVertices()[i][2];

					if (generate.getVertices()[t] == ref)
					{
						matrix[3 * t + c] = -elasticity / nodeSpacing;
						++linked_count;
					}
				}
				//Z axis
			case 2:
				for (unsigned int t = 0; t < generate.getVertices().size(); t++)
				{
					//Positive connection
					ref[0] = generate.getVertices()[i][0];
					ref[1] = generate.getVertices()[i][1];
					ref[2] = generate.getVertices()[i][2] + 1;

					if (generate.getVertices()[t] == ref)
					{
						matrix[3 * t + c] = -elasticity / nodeSpacing;
						++linked_count;
					}

					//Negative connection
					ref[0] = generate.getVertices()[i][0];
					ref[1] = generate.getVertices()[i][1];
					ref[2] = generate.getVertices()[i][2] - 1;

					if (generate.getVertices()[t] == ref)
					{
						matrix[3 * t + c] = -elasticity / nodeSpacing;
						++linked_count;
					}
				}
			}
			//Creates a matrix on the node's axis' relations
			matrix[3 * i + c] = elasticity / nodeSpacing * linked_count;

			//Determine each node's axis' displacement
			for (int t = 0; t < matrix.size(); ++t)
			{
				if (generate.getVertices()[i][0] == seed[0] && generate.getVertices()[i][1] == seed[1] && generate.getVertices()[i][2] == seed[2])
				{
					displacement[c] = 0;
				}
				else 
				{
					//Needs proper matrix division
					displacement[c] += gravity[c] * density / matrix[t];
				}
			}
		}
		//determine how far the node moved
		resultantDisplace.push_back(distance(generate.getVertices()[i], displacement));
	}
}



// Calculation of the drag on the whole part
void Growth::dragAnalysis()
{
	double dragForce;
	double fluidDensity;
	double velocity;
	double area;
	double dragCoefficient;

	/*
	velocity - magnitude and direction
	viscocity - mass
	individual stress element

	Drag equation = Fd = .5 * fluidDensity * velocity^2 * dragCoefficient * area
	Bernoulli Flow Equation = Pressure1 + .5 * density * velocity1^2 + density * gravity * height = Pressure2 + .5 * density * velocity2^2 + density * gravity * height

	momentum = mass * velocity

	Example;
	32 kph
	First Node - xplane: 45* yplane: 45*
	
	*/
}

//Find the nearest node to the target and seed and create a vertex there
void Growth::nearestNode(int i)
{
	//Get Nearest nodes
	//////////////////////////////////////////////////////////////////////////////////////
	std::vector<std::array<double, 3> > linked
	{
	{ generate.getVertices()[i][0] - 1, generate.getVertices()[i][1], generate.getVertices()[i][2] },
	{ generate.getVertices()[i][0] + 1, generate.getVertices()[i][1], generate.getVertices()[i][2] },
	{ generate.getVertices()[i][0], generate.getVertices()[i][1] - 1, generate.getVertices()[i][2] },
	{ generate.getVertices()[i][0], generate.getVertices()[i][1] + 1, generate.getVertices()[i][2] },
	{ generate.getVertices()[i][0], generate.getVertices()[i][1], generate.getVertices()[i][2] - 1 },
	{ generate.getVertices()[i][0], generate.getVertices()[i][1], generate.getVertices()[i][2] + 1 }
	};

	//Find nearest node's distance to target & sort from smallest to largest (std::array<int, 3> A, int B[3] Polymorph)
	//////////////////////////////////////////////////////////////////////////////////////
	double nearnodes[6]
	{
		distance(linked[0], target), distance(linked[1], target), 
		distance(linked[2], target), distance(linked[3], target),
		distance(linked[4], target), distance(linked[5], target)
	};

	//Sort nodes
	std::sort(nearnodes, nearnodes + (sizeof(nearnodes) / sizeof(nearnodes[0])));

	//Create a node as close as possible to target wihthout duplicating a node
	//////////////////////////////////////////////////////////////////////////////////////
	std::vector<std::array<double, 3> > local = generate.getVertices();
	for (unsigned int side = 6; side > 0; --side)
	{
			if (std::find(local.begin(), local.end(), linked[side-1]) == local.end())
			{
				generate.addVertex(linked[side-1][0], linked[side-1][1], linked[side-1][2]);
				return;
			}
	}
}

//Polymorphed Function
////////////////////////////////////////////////////////////////////////////////////////////
//Return the distance between two points (std::array<double, 3>, std::array<double, 3> Polymorph)
int Growth::distance(std::array<double, 3> A, std::array<double, 3> B)
{
	return rint(sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2) + pow((B[2] - A[2]), 2)));
}
//Return the distance between two points (std::array<int, 3>, int[3] Polymorph)
int Growth::distance(std::array<double, 3> A, double B[3])
{
	return rint(sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2) + pow((B[2] - A[2]), 2)));
}

//Print .obj format
System::String^ Growth::format()
{
	std::string list;
	System::String^ simulate = gcnew System::String(list.c_str());
	for (unsigned int i = 0; i < generate.getVertices().size(); i++)
	{
		simulate += " v " + generate.getVertices()[i][0] + " " + generate.getVertices()[i][1] + " " + generate.getVertices()[i][2] + "\r\n";
	}
	for (unsigned int i = 0; i < generate.getFaces().size(); i++)
	{
		simulate += "f " + generate.getFaces()[i][0] + " " + generate.getFaces()[i][1] + " " + generate.getFaces()[i][2] + "\r\n";
	}

	return simulate;
}