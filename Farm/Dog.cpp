#include "Dog.h"

Dog::Dog() {
    setPaws(4);
}

Dog::Dog(unsigned int age) {

    setAge(0);
    setPaws(4);
}

bool Dog::timeDie() {

    return (getAge() >= DEATH_PORK );
}

