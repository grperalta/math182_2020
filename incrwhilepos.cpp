/* C++ implementation of Algorithm 1.14. */
#include <iostream>

int increment_while_positive(int n) {
	while (n > 0)
		n += 1;
	return n;
}

int main() {
	std::cout << "Input -1: Output: " << increment_while_positive(-1) << "\n";
	std::cout << "Input  0: Output: " << increment_while_positive(0) << "\n";
	std::cout << "Input  1: Output: " << increment_while_positive(1) << "\n";
	return 0;
}
