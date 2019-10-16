//
// Created by w on 15/10/2019.
//

#include <string>
#include <iostream>
#include "definitions.h"

std::string b() {
    std::cout << "implementation B" << std::endl;
    return a() + "b";
}