/* Sample C++ header file illustrating structs and classes. */
#ifndef GEOM2D_HPP_INCLUDED
#define GEOM2D_HPP_INCLUDED

#include <iostream>
#include <cmath>

// Object for points on the Euclidean plane.
struct Point
{
	double x = 0.0;		// x-coordinate
	double y = 0.0;		// y-coordinate
	
	// Default constructor. 
	// Creates a point corresponding to the origin.
	Point() {}
	
	// Constructor with the coordinates as parameters.
	Point(double x, double y) {
		this->x = x;	// (*this).x = x
		this->y = y;	// (*this).y = y
	}
};

// Returns output stream of struct Point. 
std::ostream& operator<<(std::ostream &output, const Point &P) 
{
	output << "(" << P.x << ", " << P.y << ")";
	return output;
}

// Distance between two points.
double distance(const Point &P, const Point &Q) 
{
	double dx = P.x - Q.x;
	double dy = P.y - Q.y;
	double d = std::sqrt(dx*dx + dy*dy);
	return d;
}

// Returns the difference of two points.
Point operator-(const Point &P, const Point &Q) {
	return Point(P.x - Q.x, P.y - Q.y);
}

// Dictionary ordering of points.
bool operator<(const Point &P, const Point &Q) {
	if (P.x < Q.x) 
		return true;
	if (P.x == Q.x && P.y < Q.y)
		return true;
	return false;
}

// Class for a triangle on the plane. 
// A triangle is determined by three points on the plane called vertices.
class Triangle
{
private:
	Point vertex1 = Point();
	Point vertex2 = Point(1.0, 0.0);
	Point vertex3 = Point(0.0, 1.0);

public:
	// Default constructor. 
	// Creates a triangle with vertices at (0, 0), (1, 0) and (0, 1).
	Triangle() {}

	// Constructor with the three vertices as parameters.
	Triangle(Point &v1, Point &v2, Point &v3) {
		this->vertex1 = v1;
		this->vertex2 = v2;
		this->vertex3 = v3;
	}

	// Returns perimeter of the triangle.
	double perimeter() const {
		double p = distance(vertex1, vertex2);
		p += distance(vertex2, vertex3);
		p += distance(vertex3, vertex1);
		return p;
	}

	// Returns the area of the triangle.
	double area() const {
		Point side12 = vertex2 - vertex1; 
		Point side13 = vertex3 - vertex1;
 		double signed_area = 0.5 * (side12.x * side13.y - side12.y * side13.x);
		return std::abs(signed_area);
	}

	// Check if triangle is degenerate.
	bool is_degenerate() {
		if (area() > 0.0) 
			return false;
		else
			return true;
	}

	// Indexing operator.
	Point operator[](int idx) {
		int idx_mod3 = idx % 3;
		if (idx_mod3 == 0) 
			return vertex1;
		if (idx_mod3 == 1)
			return vertex2;
		return vertex3;
	}
	
	// Class output stream.
	friend std::ostream& operator<<(std::ostream &, const Triangle &);
};

// Returns output stream of class Triangle.
std::ostream& operator<<(std::ostream &output, const Triangle &tri) {
	output << "Tri{" << tri.vertex1 << ", " 
		<< tri.vertex2 << ", " << tri.vertex3 << "}";
	return output;
}

#endif 
