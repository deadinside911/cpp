#include <iostream> // for std::cout

int main()
{
    // character output
    // std::cout << "hello world!"; // prins hello world! to console

    // define integer variable x, initialized with value 5, and print to console
    // int x{ 5 };
    // std::cout << x;

    // insertion operator (<<) can be used multiple times to concatenate multiple pieces
    // of output
    // std::cout << "hello" << " world!";

    // a new line is an OS-specific character/sequence of characters that moves the 
    // cursor to the start of the next line
    // std::cout << "hello," << " world!" << std::endl;

    // std::cout is buffered, i.e if the program crashes before the buffer is flushed, 
    // output in the buffer might not be displayed

    // std::endl flushes the buffer, which is often inefficient, it is better to use \n
    std::cout << "hello, world!\n";

    // character input
    // define variable x to hold user input (and value-initialize it), get the input
    // and store it in variable x
    // int x{};
    // std::cin >> x;

    // std::cout << "you entered " << x << '\n';

    // std::cin is buffered, each line of input data in the input buffer is terminated by
    // \n, the newline character

    // multiple extraction operators (>>) can be used, inputs separated using a space,
    // or on two separate lines
    int x{};
    int y{};
    std::cin >> x >> y;

    std::cout << "you entered " << x << " and " << y << '\n';

    return 0;
}