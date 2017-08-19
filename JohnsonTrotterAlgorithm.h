//
// Created by Andrew Tobilko on 8/18/17.
//

#ifndef ALGORITHMS_JOHNSONTROTTERALGORITHM_H
#define ALGORITHMS_JOHNSONTROTTERALGORITHM_H

namespace Algorithm {

    class JohnsonTrotterAlgorithm {

    private:
        int n;
    public:
        JohnsonTrotterAlgorithm();

        virtual ~JohnsonTrotterAlgorithm();

        virtual std::string to_string();

    };

}

#endif //ALGORITHMS_JOHNSONTROTTERALGORITHM_H
