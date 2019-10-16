//
// Created by w on 15/10/2019.
//

#include <string>
#include <iostream>
#include "definitions.h"

std::string c() {
    std::cout << "implementation C" << std::endl;
    return b() + "c";
}