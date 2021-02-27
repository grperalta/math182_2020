#include <iostream>

int main()
{
    int i = 1;
    std::cout << "i   = " << i << std::endl;        // i   = 1
    std::cout << "i++ = " << i++ << std::endl;      // i++ = 1
    std::cout << "i   = " << i << std::endl;        // i   = 2
    std::cout << "++i = " << ++i << std::endl;      // ++i = 3
    std::cout << "i   = " << i << std::endl;        // i   = 3
    return 0;
}
