#include "Cow.h"

Cow::Cow() {

    setSpecie(Tspecies::COW);
    setFood("grass");
    setPaws(4);
    setProduct("meat");
    setSex(false);
    setSkin("leather");
    setSound("moo");
}

Cow::Cow( std::string name ) {

    setName(name);

    setSpecie(Tspecies::COW);
    setFood("grass");
    setPaws(4);
    setProduct("meat");
    setSex(false);
    setSkin("leather");
    setSound("moo");
}

Cow::Cow( std::string name, bool sex) {

    setName(name);
    setSex(sex);

    setSpecie(Tspecies::COW);
    setFood("grass");
    setPaws(4);
    setProduct("meat");
    setSkin("leather");
    setSound("moo");
}

Cow::Cow( std::string name, unsigned int age, bool sex ) {

    setName(name);
    setAge(age);
    setSex(sex);

    setSpecie(Tspecies::COW);
    setFood("grass");
    setPaws(4);
    setProduct("meat");
    setSkin("leather");
    setSound("moo");
}


unsigned int Cow::getAge() {

    return Animal::getAge() * 3;
}



bool Cow::timeDie() {

    return (getAge() >= DEATH_COW);
}

/*
const double Cow::ageOfDeath() {

    return (DEATH_COW/3);
}
*/

