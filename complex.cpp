#include <iostream>
#include <complex>

int main()
{
    std::complex<double> z(1.0, 2.0);
    double z_real = z.real(), z_imag = z.imag(), z_abs = std::abs(z);
    std::complex<double> z_conj = std::conj(z);
    std::cout << "z = " << z << std::endl;
    std::cout << "The real part of z is " << z_real << ".\n";
    std::cout << "The imaginary part of z is " << z_imag << ".\n";
    std::cout << "The conjugate of z is " << z_conj << ".\n";
    std::cout << "The modulus of z is " << z_abs << ".\n";
    return 0;
}
