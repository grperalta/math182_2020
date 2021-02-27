/* Some functions in the <cmath> library. */
#include <iostream>
#include <cmath>

int main()
{
	std::cout << "Algebraic Functions:\n";
	std::cout << "\tabs(-pi)  = " << std::abs(-M_PI) << std::endl;
	std::cout << "\tpow(e, 3) = " << std::pow(M_E, 3) << std::endl;
	std::cout << "\t  sqrt(2) = " << std::sqrt(2.0) << std::endl;

	std::cout << "Exponential and Logarithmic Functions:\n";
	std::cout << "\texp(2)    = " << std::exp(2.0) << std::endl;
	std::cout << "\texp2(2)   = " << std::exp2(2) << std::endl;
	std::cout << "\tlog(e)    = " << std::log(M_E) << std::endl;
	std::cout << "\tlog10(10) = " << std::log10(10) << std::endl;
	
	std::cout << "Trigonometric Functions:\n";
	std::cout << "\tsin(pi/3)  = " << std::sin(M_PI/3) << std::endl;
	std::cout << "\tasin(pi/4) = " << std::asin(M_PI/4) << std::endl;

	std::cout << "Hyperbolic Functions:\n";
	std::cout << "\tcosh(1)  = " << std::cosh(1.0) << std::endl;
	std::cout << "\tacosh(1) = " << std::acosh(1.0) << std::endl;

	return 0;
}
