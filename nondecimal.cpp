#include <iostream>

int main()
{
    int d = 182;              // decimal integer
    int o = 0266;             // octal integer
    int h = 0xb6;             // hexadecimal integer
    std::cout << std::showbase;
    std::cout << std::dec << d << " in octal base is "
        << std::oct << d << std::endl;
    std::cout << std::dec << d << " in hexadecimal base is "
        << std::hex << d << std::endl;
    std::cout << std::oct << o << " in decimal base is "
        << std::dec << o << std::endl;
    std::cout << std::hex << h << " in decimal base is "
        << std::dec << h << std::endl;
    return 0;
}
