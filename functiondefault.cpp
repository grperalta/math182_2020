#include <iostream>
#include <iomanip>
#include <cmath>

// Computes the p-norm of a 2d-vector (x, y).
// Default value of p is 2, corresponding to the Euclidean norm.
double norm(double x, double y, int p = 2) {
	double z = std::pow(std::abs(x), p) + std::pow(std::abs(y), p);
	return std::pow(z, 1.0 / p);
}

int main()
{
	std::cout << std::fixed << std::setprecision(16);
	std::cout << "norm(-10, 7, 1) = " << norm(-10.0, 7.0, 1)  << std::endl;
	std::cout << "norm(-10, 7, 2) = " << norm(-10.0, 7.0, 2)  << std::endl;
	std::cout << "norm(-10, 7)    = " << norm(-10.0, 7.0)     << std::endl;
	std::cout << "norm(-10, 7, 3) = " << norm(-10.0, 7.0, 10) << std::endl;
	return 0;
}
