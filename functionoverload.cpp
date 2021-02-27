#include <iostream>

// Maximum of two integers.
int max(int i, int j) {
    if (i > j)
        return i;
    else
        return j;
}

// Maximum of two double precision floating-point numbers.
double max(double x, double y) {
    if (x > y)
        return x;
    else
        return y;
}

int main() {
    int ix = 3, iy = 5;
    std::cout << "max(" << ix << ", " << iy << ") = " << max(ix, iy) 
		<< std::endl;
    double dx = 3.0, dy = 5.0;
    std::cout << "max(" << dx << ", " << dy << ") = " << max(dx, dy) 
		<< std::endl;
    return 0;
}
