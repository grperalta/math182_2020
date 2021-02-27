#include <iostream>

// A function that assigns the sum and difference of
// the input x and y to the input sum and dif, respectively.
void sumdiff(double x, double y, double &sum, double &dif) {
	sum = x + y;
	dif = x - y;
}

int main()
{
	// Initialize numbers a, b, s, and d.
	double a, b, s, d;
	// Ask user to type two numbers.
	std::cout << "Enter two numbers:\n";
	std::cout << "a = "; std::cin >> a;
	std::cout << "b = "; std::cin >> b;
	// Calculate the sum and difference of a and b.
	// The sum and difference will be stored on s and d.
	sumdiff(a, b, s, d);
	// Display sum and difference.
	std::cout << "a + b = " << s << std::endl;
	std::cout << "a - b = " << d << std::endl;
	return 0;
}
