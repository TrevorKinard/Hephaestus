#ifndef _Object
#define _Object

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>

class Obj
{
public:
	Obj();

	//Create and remove functions for 3D frame
	void addVertex(double x, double y, double z);
	void addFace(double a, double b, double c);
	void removeVertex(double x, double y, double z);
	void removeFace(double a, double b, double c);

	//Getters
	std::vector<std::array<double, 3> > getVertices();
	std::vector<std::array<double, 3> > getFaces();

private:
	std::vector<std::array<double, 3> > vertices, faces;
};
#endif