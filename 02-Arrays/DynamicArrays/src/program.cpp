#include <iostream>

int main()
{
    // Creating Integer
    int number_of_elements;
    std::cout << "Enter Number of Elements: ";
    std::cin >> number_of_elements;
    std::cout << "\n\nNow Printing Elements" << std::endl;
    int *x = new int[number_of_elements];

    for (int i=0; i<number_of_elements;++i){
        x[i] = i+1;
    }

    for (int i=0; i<number_of_elements;++i){
        std::cout << x[i] << std::endl;
    }

    delete[] x;

    return 0;
}
