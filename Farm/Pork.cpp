#include "Pork.h"

Pork::Pork() {

    setSpecie(Tspecies::PORK);
    setFood("ration");
    setPaws(4);
    setProduct("meat");
    setSex(false);
    setSkin("leather");
    setSound("oinc");
}

Pork::Pork( std::string name ) {

    setName(name);

    setSpecie(Tspecies::PORK);
    setFood("ration");
    setPaws(4);
    setProduct("meat");
    setSex(false);
    setSkin("leather");
    setSound("oinc");
}

Pork::Pork( std::string name, unsigned int age, bool sex ) {

    setName(name);
    setAge(age);
    setSex(sex);

    setSpecie(Tspecies::PORK);
    setFood("ration");
    setPaws(4);
    setProduct("meat");
    setSkin("leather");
    setSound("oinc");
}


unsigned int Pork::getAge() {
    return Animal::getAge() * 5;
}



bool Pork::timeDie() {

    return (getAge() >= DEATH_PORK );
}

/*
const double Pork::ageOfDeath() {

    return (DEATH_PORK/5);
} */


