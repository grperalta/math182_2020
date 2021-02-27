/* Sample implementation of the geom2d header file. */
#include "geom2d.hpp"

int main()
{	// Creation of Point objects.
	std::cout << "Example 0. Constuction of Points\n";
	Point P, Q(1.0, 0.0), R(0.0, 1.0);
	std::cout << "\tP = " << P << std::endl;
	std::cout << "\tQ = " << Q << std::endl;
	std::cout << "\tR = " << R << std::endl;

	// Accessing data members of Point.
	std::cout << "\nExample 1. Data members of Q\n";
	std::cout << "\tQ.x = " << Q.x << std::endl;
	std::cout << "\tQ.y = " << Q.y << std::endl;

	// Difference of two points.
	std::cout << "\nExample 2. Difference of Q from P\n";
	std::cout << "\tP - Q = " << (P - Q) << std::endl;

	// Comparison of Point objects.
	std::cout << "\nExample 3. Dictionary ordering of Points\n";
	std::cout << std::boolalpha;
	std::cout << "\tIs P < Q? " << (P < Q) << std::endl;
	std::cout << "\tIs R < P? " << (R < P) << std::endl;

	// Changing x and y members of a Point.
	P.x = -1.0;
	P.y = -1.0;
	std::cout << "\nExample 4. After performing P.x = -1.0 and P.y = -1.0\n";
	std::cout << "\tP = " << P << std::endl;
	
	// Distance between two points.
	double d = distance(Q, R);
	std::cout << "\nExample 5. Distance between Q and R\n";
	std::cout << "\tdist(Q, R) = " << d << std::endl;

	// Creation of Triangle objects.
	Triangle TriDefault, TriPQR(P, Q, R);
	std::cout << "\nExample 6. Construction of Triangles\n";
	std::cout << "\tTriDefault = " << TriDefault << std::endl;
	std::cout << "\t    TriPQR = " << TriPQR << std::endl;

	// Indexing operator
	std::cout << "\nExample 7. Index operator for TriPQR\n";
	for (int k = 0; k < 3; k++) 
		std::cout << "\tTriPQR[" << k << "] = " << TriPQR[k] << std::endl;

	// Calculation of perimeters and areas of triangles.
	double p_TriDefault = TriDefault.perimeter();
	double p_TriPQR = TriPQR.perimeter();
	std::cout << "\nExample 8. Perimeter of Triangles\n";
	std::cout << "\tperimeter of TriDefault = " << p_TriDefault << " units\n";
	std::cout << "\t    perimeter of TriPQR = " << p_TriPQR << " units\n";
	double a_TriDefault = TriDefault.area();
	double a_TriPQR = TriPQR.area();
	std::cout << "\nExample 9. Area of Triangles\n";
	std::cout << "\tarea of TriDefault = " << a_TriDefault << " sq units\n";
	std::cout << "\t    area of TriPQR = " << a_TriPQR << " sq units\n";

	// Example of a degenerate triangle.
	Point S(2.0, -1.0);
	Triangle TriSQR(S, Q, R);
	std::cout << "\nExample 10. S = " << S << ", TriSQR = " << TriSQR << std::endl;
	std::cout << "\tIs TriSQR degenerate? " 
		<< TriSQR.is_degenerate() << std::endl;
	return 0;
}
