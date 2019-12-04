#include <iostream>
#include "float_function.hpp"

int main()
{
    // Creating Integer

    float x, y, z;
    x = 1.0;
    y = 2.4;

    z = add_two_floats(x, y);

    std::cout << "x + y = " << z << std::endl;

    return 0;
}
