#include <libanimals/cat.hpp>
#include <string>


namespace animals {

    Cat::Cat(std::string name)
        : name(name)
    {};

    std::string Cat::getName(void) {
        return name;
    }
}