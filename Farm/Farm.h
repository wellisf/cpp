#ifndef FARM_H
#define FARM_H

#include <math.h>

#include <Creator.h>

#define YEAR 1

class Farm {

private:
    std::vector<Chicken> chickens;
    std::vector<Cow> cows;
    std::vector<unsigned int> ageOfChickens;
    std::vector<unsigned int> ageOfCows;

private:
    size_t baseAmount(std::vector<Animal> animal, bool genre);
    double baseMean( std::vector<Animal> animals ) throw(std::string);
    double baseStandardDeviation( std::vector<Animal> animals );

public:
    Farm(std::vector<Cow> cows);
    Farm(std::vector<Chicken> chickens);
    Farm(std::vector<Chicken> chickens, std::vector<Cow> cows);
    ~Farm();

    size_t numberCow();
    size_t numberChicken();

    size_t amount(std::vector<Chicken> chickens, bool genre);
    size_t amount(std::vector<Cow> cows, bool genre);

    void setVector( std::vector<Cow> cows );
    std::vector<Cow> getCows();

    void setVector( std::vector<Chicken> chickens );
    std::vector<Chicken> getChickens();

    double mean( std::vector<Chicken> chickens );
    double mean( std::vector<Cow> cows );
    double standardDeviation(std::vector<Chicken> chickens );
    double standardDeviation( std::vector<Cow> cows );

    bool farmEmpty();
    void nextYear(double probability, std::string specie);
    void printFarm();
};

#endif // FARM_H
