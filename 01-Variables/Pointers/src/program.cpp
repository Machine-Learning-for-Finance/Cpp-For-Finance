#include <iostream>

int main()
{
    // Creating Integer
    std::cout << "\n\nPointers ¯\\_(ツ)_/¯\n\n" << std::endl;

    std::cout << "Pointers are a variable which references the" << std::endl;
    std::cout << "memory location of another variable" << std::endl;
    std::cout << "First, let's create an integer variable and initialize it to 5." << std::endl;

    int x=5;

    std::cout << "X = " << x << std::endl;

    int *y = &x;

    std::cout << "Y = " << y << std::endl;
    std::cout << "Y Value: " << *y << std::endl;

    std::cout << "\nSo we see that the value stored by 'y' is the memory location" << std::endl;
    std::cout << "while the value referenced by '*y' is the integer value _at_ that location." << std::endl;

    std::cout << "\nWe can have pointers to a large number of different types, including" << std::endl;
    std::cout << "custom designed classes and arrays, which we'll discuss in upcoming examples" << std::endl;

    return 0;
}
