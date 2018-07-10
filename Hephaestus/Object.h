#ifndef _Object
#define _Object

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>

class Growth
{
public:
	Growth::Growth();
	Growth::Growth(double densityGrab, double elasticityGrab, double yieldGrab, int limitGrab, double gravityGrab, double nodeSpacingGrab, int seedGrab[3], int targetGrab[3]);

	//Needs code to skip over taken vertices & a check of the nearestnodes code
	void growthFactor();

	//Matrix creation of the displacement of each node
	void stressAnalysis();
	
	//Find the nearest node to the target and seed and create a vertex there
	void nearestNode(int i);

	/*
	bool lineIntersect(double start );
	*/

	//Create and remove functions for 3D frame
	void addVertex(int x, int y, int z);
	void addFace(int a, int b, int c);
	void removeVertex(int x, int y, int z);
	void removeFace(int a, int b, int c);
	/*
	void moveVertex(int x, int y, int z, int n_x, int n_y, int n_z);
	*/

	//Print .obj format
	System::String^ format();

private:
	double density, elasticity, yield, nodeSpacing, gravity;
	int limit, seed[3], target[3];
	std::vector<double> matrix, displacement[3], resultantDisplace;
	std::vector<std::array<int, 3> > vertices, faces;
	std::array<int, 3> xref, yref, zref;
};
#endif