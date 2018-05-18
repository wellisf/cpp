#ifndef ANIMAL_H
#define ANIMAL_H

#include <cstdio>
#include <cstring>
#include <iostream>
#include <sstream>

#include <cstdlib>

#define DEATH_CHICKEN 20
#define DEATH_COW 30
#define DEATH_PORK 15

#define ADULT 2
#define ADULT_CHICKEN 2
#define ADULT_COW 10
#define ADULT_PORK 5

enum Tspecies{ UNKNOWN , CHICKEN , COW , PORK };

class Animal {

private:

    Tspecies specie;
    std::string name;
    std::string skin;
    std::string food;
    std::string sound;
    std::string product;
    unsigned paws;
    unsigned age;
    bool sex;

protected:

    void setSpecie( Tspecies specie );
    void setSkin( std::string skin );
    void setSound( std::string sound );
    void setProduct( std::string product );
    void setPaws( unsigned int paws );

public:

    Animal();

    Tspecies     getSpecie();
    std::string  getName();
    std::string  getSkin();
    std::string  getFood();
    std::string  getSound();
    std::string  getProduct();
    unsigned int getPaws();
    unsigned int getAge();
    bool  getSex();

    void setName( std::string name );
    void setFood( std::string food );
    void setAge(unsigned int age );
    void setSex( bool sex );

    std::string toString();
    std::string summaryToString();
    std::string specieToString();
    virtual bool timeDie();

   //virtual const double ageOfDeath()=0;

};

#endif // ANIMAL_H
