#include <iostream>

int main()
{
	int num_continue = 0;
	for (int k = 0; k < 100; k++) {
		std::cout << "Iteration " << k << ": ";
		if ((k == 1) || (k == 8) || (k == 2)) {
			num_continue++;
			std::cout << "continue to next iteration\n";
			continue;
		}
		std::cout << "num_continue = " << num_continue << "\n";
		if (num_continue == 3) {
			std::cout << "exiting the loop\n";
			break;
		}
	}
	std::cout << "we are now outside of the loop\n";
	return 0;
}
