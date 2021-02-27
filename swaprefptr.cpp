#include <iostream>

// Swap using references.
void swap_by_references(int &x, int &y) {
	int t = x;			// Store value of x to the temporary variable t.
	x = y;				// Assign value of y to x.
	y = t;				// Assign value of t to y.
}

// Swap using pointers.
void swap_by_pointers(int *x, int *y) {
	int t = *x;			// Dereference pointer x and assign value to t.
	*x = *y;			// Assign derefenced y to derefenced x.
	*y = t;				// Assign t to derefenced x.
}

int main()
{
	int a = 1, b = 2;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap_by_references(a, b);
	std::cout << "After invoking swap_by_references(a, b):\n";
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap_by_pointers(&a, &b);
	std::cout << "After invoking swap_by_pointers(&a, &b):\n";
	std::cout << "a = " << a << ", b = " << b << std::endl;
	return 0;
}
