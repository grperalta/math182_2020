#include <iostream>
#include <cmath>
#include <iomanip>

#define N_DIGIT_PRECISION 16

int main()
{
    const float pi = 3.1416f;
    std::cout << "Value of pi:\n\t" << pi << std::endl;
    std::cout << std::setprecision(N_DIGIT_PRECISION);
    std::cout << "Value of M_PI using a scientific format with 16 digits "
        "of precision:\n\t" << std::scientific << M_PI << std::endl;
    std::cout << "Value of M_E using a fixed-point format with 16 digits "
        "of precision:\n\t" << std::fixed << M_E << std::endl;
    return 0;
}
