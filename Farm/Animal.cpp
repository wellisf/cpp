#include "Animal.h"

Animal::Animal() {
    setSpecie(Tspecies::UNKNOWN);
    setAge(0);
    setName("unknown");
    setFood("unknown");
    setPaws(0);
    setProduct("unknown");
    setSex(false);
    setSkin("unknown");
    setSound("unknown");
}



Tspecies Animal::getSpecie() {
    return specie;
}

std::string  Animal::getName() {
    return name;
}

std::string Animal::getSkin() {
    return skin;
}

std::string Animal::getFood() {
    return food;
}

std::string Animal::getSound() {
    return sound;
}

std::string Animal::getProduct() {
    return product;
}

unsigned int Animal::getPaws() {
    return paws;
}

unsigned int Animal::getAge() {
    return age;
}

bool Animal::getSex() {

    return sex;
}


void Animal::setSpecie( Tspecies specie ) {
    this -> specie = specie;
}

void Animal::setName( std::string name ) {
    this -> name = name;
}

void Animal::setSkin( std::string skin ) {
    this -> skin = skin;
}

void Animal::setFood( std::string food ) {
    this -> food = food;
}

void Animal::setSound( std::string sound ) {
    this -> sound = sound;
}

void Animal::setProduct( std::string product ) {
    this -> product = product;
}

void Animal::setPaws( unsigned int paws ) {
    this -> paws = paws;
}

void Animal::setAge( unsigned int age ) {
    this -> age = age;
}

void Animal::setSex( bool sex ) {
    this -> sex = sex;
}



std::string Animal::toString() {
    std::string result;
    std::stringstream ageConverter;
    std::stringstream pawsConverter;
    std::string species;

    switch ( getSpecie() ) {
      case 0 : species = "unknown";
      break;
      case 1 : species = "chicken";
      break;
      case 2 : species = "cow";
      break;
      case 3 : species = "pork";
      break;
      default : species = " error unknown";
      break;
    }

    ageConverter << getAge();
    pawsConverter << getPaws();

    result = " Name : ";
    result += getName();
    result += "\n Specie : ";
    result += species;
    result += "\n Skin : ";
    result += getSkin();
    result += "\n Food : ";
    result += getFood();
    result += "\n Sound : ";
    result += getSound();
    result += "\n Product : ";
    result += getProduct();
    result += "\n Age : ";
    result += ageConverter.str();
    result += "\n Paws : ";
    result += pawsConverter.str();
    result += "\n Sex : ";
    if(getAge()) {
        result += "M";
    } else {
        result += "F";
    }

    return result;
}



std::string Animal::summaryToString() {
    std::string result;
    std::string species;
    std::stringstream ageConverter;

    ageConverter << getAge();

    switch ( getSpecie() ) {
      case 0 : species = "unknown";
      break;
      case 1 : species = "chicken";
      break;
      case 2 : species = "cow";
      break;
      case 3 : species = "pork";
      break;
      default : species = " error unknown";
      break;
    }

    result = "\n Name : ";
    result += getName();
    result += "\n Specie : ";
    result += species;
    result += "\n Sex : ";
    if(getAge()) {
        result += "M";
    } else {
        result += "F";
    }
    result += "\n Age : ";
    result += ageConverter.str();

    return result;
}



std::string Animal::specieToString() {
    std::string species;

    switch ( getSpecie() ) {
      case 0 : species = "unknown";
      break;
      case 1 : species = "chicken";
      break;
      case 2 : species = "cow";
      break;
      case 3 : species = "pork";
      break;
      default : species = " error unknown";
      break;
    }

    return species;
}



bool Animal::timeDie() {
    return false;
}




