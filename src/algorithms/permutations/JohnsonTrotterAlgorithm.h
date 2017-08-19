//
// Created by Andrew Tobilko on 8/18/17.
//

#ifndef ALGORITHMS_JOHNSONTROTTERALGORITHM_H
#define ALGORITHMS_JOHNSONTROTTERALGORITHM_H

#include "../Algorithm.h"

namespace Algorithm::Permutations {

    class JohnsonTrotterAlgorithm : public Algorithm {

    private:
        int n;
    public:
        JohnsonTrotterAlgorithm();

        virtual ~JohnsonTrotterAlgorithm();

        virtual std::string get_input_data();
    };

}

#endif //ALGORITHMS_JOHNSONTROTTERALGORITHM_H
