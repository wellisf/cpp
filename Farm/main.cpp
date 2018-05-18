#include <QCoreApplication>

#include <Chicken.h>
#include <Cow.h>
#include <Dog.h>
#include <Creator.h>
#include <Farm.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Chicken hotDog();

    printf("OLa");

    std::cout << "ola";

    //std::cout << hotDog.getAge() << std::endl;

    /*
    Creator midwife("/home/wellington/Documentos/project/nomes.txt");
    std::vector<Chicken> chickens;
    std::vector<Cow> cows;
    int coin;

    // 3,5,7,9,11 população. com dez iterações
    // para 3mil a media de idade
    // numberofmale + 1 param
    // media e desv pad p/ vetor

    try {
        for ( size_t i = 0; i < 5000; i++ ) {

            coin = rand()%2;

            if ( coin ) {
                Chicken chicken( midwife.getNameRandom(), midwife.getAgeRandom(DEATH_CHICKEN/10), midwife.getSexRandom() );
                chickens.push_back(chicken);
            } else {
                Cow cow( midwife.getNameRandom(), midwife.getAgeRandom(DEATH_COW/3), midwife.getSexRandom() );
                cows.push_back(cow);
            }
        }

        size_t year = 1;
        /*Farm cow(cows);
        cows.clear();

        std::cout << "0 : " << cow.numberCow() << std::endl;

        while( (cow.numberCow() > 0) && (year<1001) ) {

            cow.nextYear(0.4, "cow");
            //if( (year == 1) || ( year == 10) || ( year == 100) || ( year == 1000) )
                std::cout << year << " : " << cow.numberCow() << std::endl;

            year++;
        }

        year = 1;
        //
        Farm chicken(chickens);
        chickens.clear();

        std::cout << "0 : " << chicken.numberChicken() << std::endl;

        while( (chicken.numberChicken() > 0) && (year<1001) ) {
            chicken.nextYear(1,"chicken");
            //if( (year == 1) || ( year == 10) || ( year == 100) || ( year == 1000) )
                std::cout << chicken.numberChicken() << std::endl;
            year++;
        }

    } catch ( std::string notification ) {
        std::cout << notification << std::endl;
    }*/

    return a.exec();
}
