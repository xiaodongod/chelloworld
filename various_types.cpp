#include <iostream>

enum color {red, green = 0, blue};


int main()
{

    std::cout << red << std::endl;
    std::cout << green << std::endl;
    std::cout << blue << std::endl;
    return 0;
}