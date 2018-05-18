#include "Chicken.h"

Chicken::Chicken() {
    setSpecie(Tspecies::CHICKEN);
    setFood("corn");
    setPaws(2);
    setProduct("meat");
    setSex(true);
    setSkin("feather");
    setSound("co-co");
}


Chicken::Chicken(std::string name) {

    setName(name);

    setSex(false);
    setSpecie(Tspecies::CHICKEN);
    setFood("corn");
    setPaws(2);
    setProduct("meat");
    setSkin("feather");
    setSound("co-co");
}

Chicken::Chicken(std::string name, bool sex) {

    setName(name);
    setSex(sex);

    setSpecie(Tspecies::CHICKEN);
    setFood("corn");
    setPaws(2);
    setProduct("meat");
    setSkin("feather");
    setSound("co-co");
}


Chicken::Chicken(std::string name, unsigned int age, bool sex) {

    setName(name);
    setAge(age);
    setSex(sex);

    setSpecie(Tspecies::CHICKEN);
    setFood("corn");
    setPaws(2);
    setProduct("meat");
    setSkin("feather");
    setSound("co-co");
}



unsigned int Chicken::getAge() {

    return Animal::getAge() * 10;
}



bool Chicken::timeDie() {

    /*bool result=false;

    if( getAge() >= DEATH_CHIKEN ) {
        result =true;
    }
    return result;
    */
    // ? ( getAge() >= DEATH_CHIKEN ) : return true; return false;

    return (getAge() >= DEATH_CHICKEN);
}


/*
const double Chicken::ageOfDeath() {

    return (DEATH_CHICKEN/10);
}
*/
