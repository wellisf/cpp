#ifndef COW_H
#define COW_H

#include <Animal.h>

class Cow : public Animal {

public:
    Cow();
    Cow( std::string name );
    Cow( std::string name, bool sex);
    Cow( std::string name, unsigned int age, bool sex );

    unsigned int getAge();

    bool timeDie();

    //const double ageOfDeath();
};

#endif // COW_H
