#ifndef CREATOR_H
#define CREATOR_H

#include <vector>
#include <ctime>
#include <fstream>

#include <Animal.h>
#include <Chicken.h>
#include <Cow.h>
#include <Pork.h>

typedef unsigned int Tvector;

class Creator {

private:
    std::ifstream file;
    std::string namePath;

private:
    void openFile() throw ( std::string );
    void setNamePath( std::string namePath );
    std::string getNamePath();

public:

    Creator( std::string namePath );

    unsigned int getAgeRandom( int maxAge );
    std::string getNameRandom();
    bool getSexRandom();
};

#endif // CREATOR_H
