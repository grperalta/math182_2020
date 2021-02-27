/* C++ implementation of Algorithm 1.16. */
#include <iostream>

// Algorithm 1.16: Computes the factorial of a (long) integer.
long factorial(long n) {
	if (n > 1)
		return n * factorial(n-1);
	return 1;
}

int main() {
	std::cout << "0! = " << factorial(0) << "\t\t";
	std::cout << "1! = " << factorial(1) << "\t\t";
	std::cout << "2! = " << factorial(2) <<	"\t\t";
	std::cout << "9! = " << factorial(9) << std::endl;
	return 0;
}
