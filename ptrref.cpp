/* Sample code illustrating pointers and references. */
#include <iostream>

int main() {
    int v = 1;
    int *pv = &v;
    int &rv = v;

    std::cout << "     Value of v: " << v << std::endl;
    std::cout << "   Address of v: " << &v << std::endl;
    std::cout << "    Value of pv: " << pv << std::endl;
    std::cout << "  Address of pv: " << &pv << std::endl;
    std::cout << "Dereferenced pv: " << *pv << std::endl;
    std::cout << "    Value of rv: " << rv << std::endl;
    std::cout << "  Address of rv: " << &rv << std::endl;
    std::cout << std::endl;

    *pv = -1;
    std::cout << "     Value of v: " << v << std::endl;
    std::cout << "   Address of v: " << &v << std::endl;
    std::cout << "    Value of pv: " << pv << std::endl;
    std::cout << "  Address of pv: " << &pv << std::endl;
    std::cout << "Dereferenced pv: " << *pv << std::endl;
    std::cout << "    Value of av: " << rv << std::endl;
    std::cout << "  Address of av: " << &rv << std::endl;
    return 0;
}
