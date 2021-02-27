/* C++ implementation of Algorithms 1.11 and 1.12 */
#include <iostream>

// Algorithm 1.11: Computes the sum of an array of integers.
long loopsum(long arr[], int arr_size) {
	long s = 0;
	for (int n = 0; n < arr_size; n++)
		s += arr[n];		// s = s + arr[n]
	return s;
}

// Algorithm 1.12: Reverses the order in function loopsum.
long backwardloopsum(long arr[], int arr_size) {
	long s = 0;
	for (int n = arr_size-1; n > -1; n--)
		s += arr[n];
	return s;
}

int main() {	
	long numbers[] = {1, 8, 2, 9, 10, 20};
	std::cout << "Sum of elements in array {1, 8, 2, 9, 10, 20}.\n"; 
	std::cout << "\tForward Loop:  " << loopsum(numbers, 6) << std::endl;
	std::cout << "\tBackward Loop: " << backwardloopsum(numbers, 6) 
		<< std::endl;
	return 0;
}
