//
// Created by Andrew Tobilko on 8/18/17.
//

#include <iostream>
#include "JohnsonTrotterAlgorithm.h"

Algorithm::JohnsonTrotterAlgorithm::JohnsonTrotterAlgorithm() {
    std::cout << "constructor" << std::endl;
}

Algorithm::JohnsonTrotterAlgorithm::~JohnsonTrotterAlgorithm() {
    std::cout << "destructor" << std::endl;
}

std::string Algorithm::JohnsonTrotterAlgorithm::to_string() {
    std::string details{typeid(this).name()};
    return details + "[n=" + std::to_string(this->n) + "]";
}
