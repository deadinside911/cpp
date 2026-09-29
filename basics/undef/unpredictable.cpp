#include <iostream>

int main()
{
    // uninitialized variable x
    int x;

    // print the value of x to the screen
    std::cout << x << '\n';

    // avoid implementation-defined and unspecified behavior as they 
    // cause the program to malfunction

    return 0;
}