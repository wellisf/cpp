#ifndef PORK_H
#define PORK_H

#include <Animal.h>

class Pork : public Animal  {

public:
    Pork();
    Pork( std::string name );
    Pork( std::string name, unsigned int age, bool sex );

    unsigned int getAge();

    bool timeDie();

    //const double ageOfDeath();
};

#endif // PORK_H
