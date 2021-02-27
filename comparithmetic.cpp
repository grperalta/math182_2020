#include <iostream>
#include <iomanip>

int main()
{
    std::cout.precision(17);

    double eps = 7.0/3.0 - 4.0/3.0 - 1.0;
    std::cout << "Round-off errors for floating-point arithmetic:\n";
    std::cout << "7.0/3.0 - 4.0/3.0 - 1.0 = " << eps << std::endl;

    double x = 1.0, y = 1e-16, z = 1e-16;
    double sum1 = (x + y) + z;
    double sum2 = x + (y + z);
    std::cout << "\nNon-associativity of floating-point addition:\n";
    std::cout << "(x + y) + z = " << sum1 << std::endl;
    std::cout << "x + (y + z) = " << sum2 << std::endl;

    x = 10.0; y = 1e-8; z = 1e-8;
    double prod1 = (x * y) * z;
    double prod2 = x * (y * z);
    std::cout << "\nNon-associativity of floating-point multiplication:\n";
    std::cout << "(x * y) * z = " << prod1 << std::endl;
    std::cout << "x * (y * z) = " << prod2 << std::endl;

    return 0;
}
