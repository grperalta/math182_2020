#include <iostream>

int main()
{
	// Initialize array of int.
	int a[] = {1, 8, 2};			// int a[3] = {1, 8, 2}; 
	std::cout << "Array of int: a = {1, 8, 2}." << std::endl;
	// Access array of elements.
	std::cout << "a[0] = " << a[0] << std::endl;
	std::cout << "a[1] = " << a[1] << std::endl;
	std::cout << "a[2] = " << a[2] << std::endl;
	// Assign an array element.
	a[0] = 2;
	std::cout << "After performing a[0] = 2" << std::endl;
	std::cout << "a[0] = " << a[0] << std::endl;
	return 0;
}
