#ifndef FARMAGE_H
#define FARMAGE_H

#include <math.h>
#include <vector>
#include <ctime>
#include <fstream>

#include <Animal.h>
#include <Chicken.h>
#include <Cow.h>
#include <Pork.h>

#define PROB 30

class FarmAge {

private:
    std::vector<unsigned int> ageOfChicken;
    std::vector<unsigned int> ageOfCow;

private:
    void setAgeOfCow(std::vector<Cow> Cow);
    void setAgeOfChicken(std::vector<Chicken> chickens);

public:

    FarmAge(std::vector<Cow> cows);
    FarmAge(std::vector<Chicken> chickens);
    FarmAge(std::vector<Chicken> chickens,std::vector<Cow> cows);
    ~FarmAge();

    std::vector<unsigned int> getAgeOfCow();
    std::vector<unsigned int> getAgeOfChicken();

    size_t amount(std::vector<unsigned int> vectorOfAge);

    double average(std::vector<unsigned int> vectorOfAge);
    double standardDeviation(std::vector<unsigned int> vectorOfAge);

    void nextYear(double probability, std::vector<unsigned int> vectorOfAge, unsigned int death);
    void nextYearOfCow(double probability);
    void nextYearOfChicken(double probability);
};

#endif // FARMAGE_H
