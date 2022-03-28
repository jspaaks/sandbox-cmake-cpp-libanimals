#ifndef ANIMALS_CAT_H
#define ANIMALS_CAT_H

#include <libanimals/animal.hpp>
#include <string>

namespace animals {

    class Cat : public Animal {

        public:
            
            Cat(std::string);
            std::string getName(void) override;
            std::string name;

        private:

    };
}

#endif
