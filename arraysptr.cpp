#include <iostream>

int main() {
	// Initialize an array of int.
	int a[3] = {1, 8, 2};
	std::cout << "Console output of int array a: " << a << std::endl;
	std::cout << "Address of int array a:        " << &a << std::endl;

	std::cout << "\nAddresses of elements using pointers and references:\n";
	for (int i = 0; i < 3; i++) {
		int *pai = &a[i];
		std::cout << "&a[" << i << "] = " << pai << std::endl;
	}

	std::cout << "\nAddresses of elements using pointers and addition:\n";
	for (int i = 0; i < 3; i++) {
		int *pai = a + i;
		std::cout << "a + " << i << " = " << pai << std::endl;
	}

	std::cout << "\nDereferencing of &a[k] for k = 0, 1, 2:\n";
	for (int i = 0; i < 3; i++) {
		int *pai = &a[i];
		std::cout << "*&a[" << i << "] = " << *pai << std::endl;
	}
	return 0;
}
