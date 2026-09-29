#include <iostream>

int main()
{
    int x { 5 }; // variable x defined

    // but not used anywhere

    // An integer can only hold non-fractional values.
    // Initializing an int with fractional value 4.5 requires the compiler to convert 4.5 to a value an int can hold.
    // Such a conversion is a narrowing conversion, since the fractional part of the value will be lost.

    // int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion

    // int w2 = 4.5;   // compiles: w2 copy-initialized to value 4
    // int w3 (4.5);   // compiles: w3 direct-initialized to value 4

    [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused
    [[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
    [[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // The compiler will no longer warn about gravity not being used

    return 0;
}