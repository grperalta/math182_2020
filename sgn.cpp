/* C++ implementations of Algorithms 1.9, 1.10 and 1.15. */
#include <iostream>

// Algorithm 1.9: Computes the signum of a number.
double sgn(double x) {
	double s;
	if (x > 0.0)
		s = 1.0;
	else if (x < 0.0)
		s = -1.0;
	else
		s = 0.0;
	return s;
}

// Algorithm 1.10: Same output as with the function sgn.
double alternative_sgn(double x) {
	if (x > 0.0)
		return 1.0;
	if (x < 0.0)
		return -1.0;
	return 0.0;
}

// Algorithm 1.15: Computes the absolute value of a real number.
double abs(double x) {
	return sgn(x) * x;
}

int main() {
	double x;
	std::cout << "Enter a real number: "; std::cin >> x;
	std::cout << "            sgn(" << x << ") = " << sgn(x) << std::endl;
	std::cout << "alternative_sgn(" << x << ") = " << alternative_sgn(x) 
		<< std::endl;
	std::cout << "            abs(" << x << ") = " << abs(x) << std::endl;
	return 0;
}

