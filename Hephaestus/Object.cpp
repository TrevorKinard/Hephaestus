#include "Object.h"

	Obj::Obj() {}

	//Create and remove functions for vertices and faces
	void Obj::addVertex(double x, double y, double z)
	{
		std::array<double, 3> add{ x, y, z };
		vertices.push_back(add);
	}
	void Obj::addFace(double a, double b, double c)
	{
		std::array<double, 3> add{ a, b, c };
		faces.push_back(add);
	}
	
	void Obj::removeVertex(double x, double y, double z)
	{
		std::array<double,3> points{ x, y, z };
		vertices.erase(std::remove(vertices.begin(), vertices.end(), points), vertices.end());
	}
	void Obj::removeFace(double a, double b, double c)
	{
		std::array<double, 3> points{ a, b, c };
		faces.erase(std::remove(faces.begin(), faces.end(), points), faces.end());
	}

	//Get stored variables
	std::vector<std::array<double, 3> > Obj::getVertices()
	{	
		return vertices;
	}
	std::vector<std::array<double, 3> > Obj::getFaces()
	{
		return faces;
	}