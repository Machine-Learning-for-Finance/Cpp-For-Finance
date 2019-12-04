#include <iostream>

int main()
{
    // Creating Integer
    std::cout << "\n\nBasic Variable Examples\n\n" << std::endl;

    std::cout << "Creating An Integer, `x`" << std::endl;
    int x = 0;
    std::cout << "x Value: " << x << "\n" << std::endl;

    std::cout << "Creating An Floating Point, `y`" << std::endl;
    float y = 0.00001;
    std::cout << "y Value: " << y << "\n" << std::endl;

    std::cout << "Creating An Double Floating Point, `z`" << std::endl;
    double z = 0.00000001;
    std::cout << "z Value: " << z << "\n" << std::endl;

    std::cout << "Creating An Char, `c`" << std::endl;
    char c = 'c';
    std::cout << "c Value: " << c << "\n" << std::endl;

    std::cout << "Constant Variable" << std::endl;
    const int foo = 10;
    int const bar = 11;

    std::cout << foo << std::endl;
    std::cout << bar << std::endl;

    return 0;
}
