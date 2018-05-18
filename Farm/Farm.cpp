#include "Farm.h"

Farm::Farm( std::vector<Chicken> chickens ) {
    setVector( chickens );
}

Farm::Farm(std::vector<Cow> cows) {
    setVector( cows );
}

Farm::Farm(std::vector<Chicken> chickens, std::vector<Cow> cows) {
    setVector( chickens );
    setVector( cows );
}

Farm::~Farm() {
    this-> cows.clear();
    this-> chickens.clear();
}

size_t Farm::numberCow() {

    return cows.size();
}

size_t Farm::numberChicken() {

    return chickens.size();
}

size_t Farm::baseAmount(std::vector<Animal> animal, bool genre) {

    size_t amount=0;

    if(genre) {
        for(size_t i=0; i < animal.size(); i++) {
            if( animal[i].getSex()) {
                amount++;
            }
        }
    } else {
        for(size_t i=0; i < animal.size(); i++) {
            if(!animal[i].getSex()) {
                amount++;
            }
        }
    }

    return amount;
}

size_t Farm::amount(std::vector<Chicken> chickens, bool genre) {

    std::vector<Animal> result;

    for(size_t i = 0; i < chickens.size(); i++) {
        if(chickens[i].getAge() >= ADULT_CHICKEN)
            result.push_back(chickens[i]);
    }

    size_t value;
    value = baseAmount(result, genre);
    result.clear();

    return value;
}

size_t Farm::amount(std::vector<Cow> cows, bool genre) {

    std::vector<Animal> result;

    for(size_t i = 0; i < cows.size(); i++) {
        if(cows[i].getAge() >= ADULT_COW)
            result.push_back(cows[i]);
    }

    size_t value;
    value = baseAmount(result, genre);
    result.clear();

    return value;
}


void Farm::setVector( std::vector<Chicken> chickens ) {

    for(size_t i=0; i < chickens.size(); i++)
        this->chickens.push_back(chickens[i]);
}

std::vector<Chicken> Farm::getChickens() {

    return chickens;
}


void Farm::setVector( std::vector<Cow> cows ) {

    for(size_t i=0; i < cows.size(); i++)
        this->cows.push_back(cows[i]);
}

std::vector<Cow> Farm::getCows() {

    return cows;
}


//MEAN
double Farm::baseMean( std::vector<Animal> animals ) throw(std::string) {

    double sum=0.0;

    for( size_t i = 0; i < animals.size(); i++ ) {
        sum += animals[i].getAge();
    }

    if( ( sum <= 0 ) || ( animals.size() <= 0 ) ) {
        throw std::string(" Error: Number less than zero ");
    }

    double temp = sum/animals.size();
    animals.clear();

    return temp;
}

double Farm::mean( std::vector<Chicken> chickens ) {

    std::vector<Animal> result;

    for(size_t i = 0; i < chickens.size(); i++) {
        result.push_back(chickens[i]);
    }

    double value;
    value = ( baseMean(result)*10 );
    result.clear();
    return value;

    //constroi um vetor de size_t
    //preenche com idades
    //chama metodo
    //destroi objeto
}


double Farm::mean( std::vector<Cow> cows ) {

    std::vector<Animal> result;

    for(size_t i = 0; i < cows.size(); i++) {
        result.push_back(cows[i]);
    }

    double value;
    value = ( baseMean(result)*3 );
    result.clear();
    return value;
}

//STANDAR DEVIATION
double Farm::baseStandardDeviation( std::vector<Animal> animals ) {

    double sum=0.0;
    double tempMean;
    tempMean = baseMean(animals);

    for(size_t i=0; i < animals.size(); i++ ) {
        double temp;

        temp = ( (animals[i].getAge() - tempMean) );
        temp = temp*temp;
        sum += temp;
    }

    double result;
    if (animals.size() > 1)
        result = (sum/(animals.size()-1));
    else
        result = (sum/(animals.size()));

    return sqrt(result);
}

double Farm::standardDeviation( std::vector<Chicken> chickens ) {

    std::vector<Animal> result;

    for(size_t i = 0; i < chickens.size(); i++) {
        result.push_back(chickens[i]);
    }

    double value;
    value = ( baseStandardDeviation(result)*10 );
    result.clear();
    return value;
}

double Farm::standardDeviation( std::vector<Cow> cows ) {

    std::vector<Animal> result;

    for(size_t i = 0; i < cows.size(); i++) {
        result.push_back(cows[i]);
    }

    double value;
    value = ( baseStandardDeviation(result)*3 );
    result.clear();
    return value;
}

bool Farm::farmEmpty() {

    return (numberChicken() + numberCow() == 0);
}


void Farm::nextYear(double probability, std::string specie) {

    if(specie == "chicken") {

        std::vector<Chicken> tempChicken;

        for(size_t i=0; i < chickens.size(); i++) {
            chickens[i].setAge( ( (Animal) chickens[i]).getAge() +1);
            if(chickens[i].getAge() <= DEATH_CHICKEN) {
                tempChicken.push_back(chickens[i]);
            }
        }

        chickens.clear();
        chickens = tempChicken;
        tempChicken.clear();

        size_t male, female;
        male = amount(chickens,true);
        female = amount(chickens,false);

        Creator midwife("/home/wellington/Documentos/project/nomes.txt");

        for(size_t i=0; i < std::min(male, female); i++) {
            double coin;
            coin = (double) (rand() % 101);
            coin /= 100;

            if( coin < probability ) {
                Chicken chicken(midwife.getNameRandom(), midwife.getSexRandom());
                chickens.push_back(chicken);
            }
        }
    }

    if(specie == "cow") {
        std::vector<Cow> temp;

        for(size_t i=0; i < cows.size(); i++) {
            cows[i].setAge( ( (Animal) cows[i]).getAge() +1);
            if(cows[i].getAge() <= DEATH_COW) {
                temp.push_back(cows[i]);
            }
        }

        cows.clear();
        cows = temp;
        temp.clear();

        size_t male, female;
        male = amount(cows,true);
        female = amount(cows,false);

        Creator midwife("/home/wellington/Documentos/project/nomes.txt");

        for(size_t i=0; i < std::min(male, female); i++) {
            double coin;
            coin = (double) (rand() % 101);
            coin /= 100;

            if( coin < probability ) {
                Cow cow(midwife.getNameRandom(), midwife.getSexRandom());
                cows.push_back(cow);
            }
        }
    }
}

void Farm::printFarm() {

    std::cout.precision(2);
    std::cout << std::endl;
    std::cout << " Chicken         | Cow " << std::endl;
    std::cout << " ----------------------------------" << std::endl;
    std::cout << " Amount   : "   << std::fixed << numberChicken() << " | Amount   : "   << std::fixed << numberCow() << std::endl;
    std::cout << " Mean age : " << std::fixed << mean( getChickens() )  << "| Mean age : " << std::fixed << mean( getCows() ) << std::endl;
    std::cout << " Std. dev.: " << std::fixed << standardDeviation( getChickens() )  << " | Std. dev.: " << std::fixed << standardDeviation( getCows() ) <<  std::endl;
    std::cout << std::endl;
}
