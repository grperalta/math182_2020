#include <iostream>

int main()
{
    int var = 0;
    std::cout << "Line " << __LINE__ << " : var = " << var << std::endl;
    {
        std::cout << "Line " << __LINE__ << " : var = " << var << std::endl;
        int var = 1;
        std::cout << "Line " << __LINE__ << ": var = " << var << std::endl;
    }
    std::cout << "Line " << __LINE__ << ": var = " << var << std::endl;
    return 0;
}
