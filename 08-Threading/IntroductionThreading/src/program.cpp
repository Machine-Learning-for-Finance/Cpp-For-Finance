#include <iostream>
#include <thread>
#include "print_statement.hpp"

int main()
{
    std::thread t0(print_statement, "Hello");
    std::thread t1(print_statement, "World");

    t0.join();
    t1.join();
    return 0;
}
