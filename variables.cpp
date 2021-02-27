#include <iostream>

int main()
{
    int i1 = 1;                         // integer
    std::cout << "i1 = " << i1 << std::endl;

    unsigned int i2(8), i3{2};          // list of unsigned integers
    std::cout << "i2 = " << i2 << std::endl;
    std::cout << "i3 = " << i3 << std::endl;

    float pi = 3.1416f;                 // single-precision floating-point no.
    std::cout << "pi = " << pi << std::endl;

    double planck = 6.62607e-34;    // double-precision floating-point no.
    std::cout << "planck = " << planck << std::endl;

    char uppercase_a = 'A';             // character
    std::cout << "uppercase_a = " << uppercase_a << std::endl;

    bool is_one_positive = (1 > 0);     // boolean
    std::cout << "is_one_positive = " << is_one_positive << std::endl;

    return 0;
}
