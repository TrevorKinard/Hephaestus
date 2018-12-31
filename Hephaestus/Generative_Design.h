#ifndef _Generative_Design_
#define _Generative_Design_

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>
#include "Object.h"

class Growth
{
public:
	Growth::Growth(double densityGrab, double elasticityGrab, double yieldGrab, int limitGrab, double gravityGrab, double nodeSpacingGrab, int seedGrab[3], int targetGrab[3]);

	//Print .obj format
	System::String^ format();

private:
	//Needs code to skip over taken vertices & a check of the nearestnodes code
	void growthFactor();

	//Matrix creation of the displacement of each node
	void stressAnalysis();

	// Calculation of the drag on the whole part
	void Growth::dragAnalysis();

	//Find the nearest node to the target and seed and create a vertex there
	void nearestNode(int i);


	//Return the distance between two points (std::array<int, 3>, std::array<int, 3> Polymorph)
	int Growth::distance(std::array<double, 3> A, std::array<double, 3> B);
	//Return the distance between two points (std::array<int, 3>, int[3] Polymorph)
	int Growth::distance(std::array<double, 3> A, double B[3]);

	//Variables
	double density, elasticity, yield, nodeSpacing, limit, gravity[3], seed[3], target[3], displacement[3];
	std::vector<double> matrix, resultantDisplace;
	Obj generate;	
};
#endif