#ifndef ANIMALS_ANIMAL_H
#define ANIMALS_ANIMAL_H

#include <string>

namespace animals {

    class Animal {
        public:
            virtual std::string getName(void) = 0;
        private:

    };
}

#endif