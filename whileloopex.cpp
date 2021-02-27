/* C++ implementation of Algorithm 1.13. */
#include <iostream>

// Algorithm 1.13: Computes the sum of an array of integers.
long whilesum(long arr[], int arr_size) {
	long s = 0;
	int n = 0;
	while (n < arr_size) {
		s += arr[n];
		n++;
	}
	return s;
}

int main() {
	long numbers[] = {1, 8, 2, 9, 10, 20};
	std::cout << "Sum of elements in array {1, 8, 2, 9, 10, 20} is "
		<< whilesum(numbers, 6) << "." << std::endl;
	return 0;
}
