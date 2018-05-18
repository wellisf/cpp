#include "FarmAge.h"

FarmAge::FarmAge(std::vector<Cow> cows) {

    setAgeOfCow(cows);
}

FarmAge::FarmAge(std::vector<Chicken> chickens) {

    setAgeOfChicken(chickens);
}

FarmAge::FarmAge(std::vector<Chicken> chickens,std::vector<Cow> cows) {

    setAgeOfCow(cows);
    setAgeOfChicken(chickens);
}

FarmAge::~FarmAge() {
    ageOfChicken.clear();
    ageOfCow.clear();
}

void FarmAge::setAgeOfCow(std::vector<Cow> cows) {

    for(size_t i=0; i < cows.size(); i++)
        ageOfCow.push_back(cows[i].getAge());
}

void FarmAge::setAgeOfChicken(std::vector<Chicken> chickens) {

    for(size_t i=0; i < chickens.size(); i++) {
        ageOfChicken.push_back(chickens[i].getAge());
    }
}

std::vector<unsigned int> FarmAge::getAgeOfCow() {

    return ageOfCow;
}

std::vector<unsigned int> FarmAge::getAgeOfChicken() {

    return ageOfChicken;
}

//medidas
size_t FarmAge::amount(std::vector<unsigned int> vectorOfAge) {

    return vectorOfAge.size();
}

double FarmAge::average(std::vector<unsigned int> vectorOfAge) {

    double sum=0.0;

    for(size_t i=0; i < vectorOfAge.size(); i++)
        sum += vectorOfAge[i];

    return (sum/vectorOfAge.size());
}

double FarmAge::standardDeviation(std::vector<unsigned int> vectorOfAge) {

    double sum=0.0;
    double mean;
    mean = average(vectorOfAge);

    for(size_t i=0; i< vectorOfAge.size(); i++) {

        double temp;

        temp = vectorOfAge[i] - mean;
        temp = temp*temp;
        sum += temp;
    }

    double result;
    if(vectorOfAge.size() > 1)
        result = (sum/ (vectorOfAge.size() -1));
    else
        result = (sum/ vectorOfAge.size());

    return sqrt(result);
}

void FarmAge::nextYear(double probability, std::vector<unsigned int> vectorOfAge, unsigned int death) {

    std::vector<unsigned int> temp;

    for(size_t i=0; i < vectorOfAge.size(); i++) {
        if (!(vectorOfAge[i] == death - 1)) {
            vectorOfAge[i]++;
            temp.push_back(vectorOfAge[i]);
        }
    }

    vectorOfAge.clear();
    vectorOfAge = temp;
    temp.clear();

    size_t count=0;

    for(size_t i=0; i < vectorOfAge.size(); i++){
        if(vectorOfAge[i] > ADULT)
            count++;
    }

    double coinProb;
    size_t population;
    double probabilityOfPopulation;

    coinProb = (double) (rand() % 21);
    probabilityOfPopulation = ((PROB + coinProb)/100);
    population = (size_t) (count*probabilityOfPopulation);

    for(size_t i=0; i < population; i++) {
        double coin;
        coin = (double) (rand() % 101);
        coin /= 100;

        if (coin < probability) {
            vectorOfAge.push_back(0);
        }
    }
}

void FarmAge::nextYearOfCow(double probability) {
    std::vector<unsigned int> temp;

    for(size_t i=0; i < ageOfCow.size(); i++) {
        if (!(ageOfCow[i] == DEATH_COW - 1)) {
            ageOfCow[i]++;
            temp.push_back(ageOfCow[i]);
        }
    }

    ageOfCow.clear();
    ageOfCow = temp;
    temp.clear();

    size_t count=0;

    for(size_t i=0; i < ageOfCow.size(); i++){
        if(ageOfCow[i] > ADULT)
            count++;
    }

    double coinProb;
    size_t population;
    double probabilityOfPopulation;

    coinProb = (double) (rand() % 21);
    probabilityOfPopulation = ((PROB + coinProb)/100);
    population = (size_t) (count*probabilityOfPopulation);

    for(size_t i=0; i < population; i++) {
        double coin;
        coin = (double) (rand() % 101);
        coin /= 100;

        if (coin < probability) {
            ageOfCow.push_back(0);
        }
    }

}

void FarmAge::nextYearOfChicken(double probability) {

    std::vector<unsigned int> temp;

    for(size_t i=0; i < ageOfChicken.size(); i++) {
        if(ageOfChicken[i] < DEATH_CHICKEN) {
            ageOfChicken[i]++;
            temp.push_back(ageOfChicken[i]);
        }
    }

    //std::cout << temp.size() << std::endl;

    ageOfChicken.clear();
    ageOfChicken = temp;
    temp.clear();

    size_t count=0;

    for(size_t i=0; i < ageOfChicken.size(); i++) {
        if(ageOfChicken[i] > ADULT)
            count++;
    }

    //std::cout << count << std::endl;

    double coinProb;
    size_t population;
    double probabilityOfPopulation;

    coinProb = (double) (rand() % 21);
    probabilityOfPopulation = ((PROB + coinProb)/100);
    population = (size_t) (count*probabilityOfPopulation);

    //std::cout << population << std::endl;

    size_t c=0;

    for(size_t i=0; i < population; i++) {
        double coin;
        coin = (double) (rand() % 101);
        coin /= 100;

        if (coin < probability) {
            ageOfChicken.push_back(0);
            c++;
        }
    }

    //std::cout << c << std::endl;
}
