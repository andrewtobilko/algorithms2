//
// Created by Andrew Tobilko on 8/18/17.
//

#include <iostream>
#include "JohnsonTrotterAlgorithm.h"

Algorithm::Permutations::JohnsonTrotterAlgorithm::JohnsonTrotterAlgorithm() {
    std::cout << "constructor" << std::endl;
}

Algorithm::Permutations::JohnsonTrotterAlgorithm::~JohnsonTrotterAlgorithm() {
    std::cout << "destructor" << std::endl;
}

std::string Algorithm::Permutations::JohnsonTrotterAlgorithm::get_input_data() {
    return "[n=" + std::to_string(this->n) + "]";
}
