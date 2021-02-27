#include <iostream>

// A call-by-value function.
void funval(int x) {
    std::cout << "\nAddress of input variable in a call-by-value:     ";
    std::cout << &x << std::endl;
    x++;
    std::cout << "Incremented value of the input variable: ";
    std::cout << x << std::endl;
}

// A call-by-reference function.
void funref(int &x) {
    std::cout << "\nAddress of input variable in a call-by-reference: ";
    std::cout << &x << std::endl;
    x++;
    std::cout << "Incremented value of the input variable: ";
    std::cout << x << std::endl;
}

int main()
{
    int y = 1;
    std::cout << "y = " << y << std::endl;
    std::cout << "Address of variable y: ";
    std::cout << &y << std::endl;
    funval(y);
    std::cout << "y = " << y << std::endl;
    funref(y);
    std::cout << "y = " << y << std::endl;
	return 0;
}
