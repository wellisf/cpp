#include "Creator.h"

Creator::Creator( std::string namePath ) {

    setNamePath(namePath);
    openFile();
    srand(time(NULL));
}

//NAME

void Creator::openFile() throw ( std::string ) {

    if (file.is_open() ) {
        file.close();
    }

    file.open( getNamePath() );

    if ( !file.is_open() ) {
        throw std::string(" Error: File not exists ");
    } else {
      if ( file.eof() ) {
          throw std::string(" Error: end of file ");
      }
    }
}

std::string Creator::getNameRandom() {

    std::string result;

    if ( file.eof() ) {
        openFile();
    } else {
        file >> result;
    }

    return result;
}

void Creator::setNamePath( std::string namePath ) {

    this->namePath = namePath;
}

std::string Creator::getNamePath() {

    return namePath;
}

//SEX

bool Creator::getSexRandom() {

    int coin;
    coin = rand() % 2;

    return (coin == 0);
}

//AGE
unsigned int Creator::getAgeRandom(int maxAge ) {

    int coin;
    coin = rand() % maxAge;

    return coin;
}
