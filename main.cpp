#include <iostream>

#include "definitions.h"

int main()
{
    std::string result_a = a();
    std::string result_b = b();
    std::string result_c = c();
    std::cout << "Hello, World!" << result_a << " " << result_b << " " << result_c << std::endl;
    return 0;
}