#include <iostream>


// Function Types

void voidFunction(){
    std::cout << "A Void Function has no return" << std::endl;
}

int intFunction(){
    std::cout << "An Int Function returns an integer" << std::endl;
    return 1;
}

float floatFunction(){
    std::cout << "A Float Function returns a float" << std::endl;
    return 1.0f;
}

// The return can also be custom designed classes (objects) and pointers as well.


/*
    Functions can also take arguments and work with the arguments.
*/

int addTwoInts(int x, int y){
    return x + y;
}

int main()
{
    // Creating Integer

    voidFunction();

    int x;
    x = intFunction();

    float y;
    y = floatFunction();

    std::cout << "X = " << x << std::endl;
    std::cout << "Y = " << y << std::endl;

    int x0 = 2;
    int x1 = 5;

    int sum;

    sum = addTwoInts(x0, x1);

    std::cout << "Sum Is: " << sum << std::endl;

    return 0;
}
