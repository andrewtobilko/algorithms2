//
// Created by Andrew Tobilko on 8/19/17.
//

#ifndef ALGORITHMS_ALGORITHM_H
#define ALGORITHMS_ALGORITHM_H

#include <string>

namespace Algorithm {

    class Algorithm {
    public:

        virtual ~Algorithm() {};

        virtual std::string get_input_data() = 0;

    };

}

#endif //ALGORITHMS_ALGORITHM_H
