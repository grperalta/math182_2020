/* C++ implementation of Algorithms 1.3 and 1.4 for integers. */
#include <iostream>

// A function with no input and ouput. First keyword void is required, while
// second keyword void is optional.
void print_info(void) {			// void print_info()
	std::cout << "C++ implementation of Algorithms 1.3 and 1.4 for integers." 
		<< std::endl;
	return;						// optional
}

// Algorithm 1.3: Computes the sum of three integers.
int sum(int x, int y, int z) {
	int s = x + y;
	s = s + z;				
	return s;
}

// Algorithm 1.4: Another way to compute the sum of three integers.
int alternative_sum(int x, int y, int z) {
	int s = y + z;
	s = x + s;
	return s;
}

int main() {
	print_info();
	std::cout << "Algorithm 1.3:\n";
	std::cout << "\tsum(1, 8, 2) = " << sum(1, 8, 2) << std::endl;
	std::cout << "Algorithm 1.4:\n";
	std::cout << "\talternative_sum(1, 8, 2) = " << alternative_sum(1, 8, 2) 
		<< std::endl;
	return 0;
}
