#include <iostream>
#include <random>

int main()
{
    const int number_of_rolls = 10000;

    std::default_random_engine generator;
    std::normal_distribution<double> distribution(0.0, 1.0);

    double mean = 0.0;

    for (int i=0; i<number_of_rolls; ++i){
        double number = distribution(generator);
        mean += number;
    }

    std::cout << "Mean Value: " << mean / number_of_rolls << std::endl;

    return 0;
}
