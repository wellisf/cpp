#include "PhoneCheck.h"

PhoneCheck::PhoneCheck(int ddd, int phone) {

    setDdd(ddd);
    setPhone(phone);
    checked();
}

int PhoneCheck::getPhone() {

    return phone;
}

void PhoneCheck::setPhone(int phone) {

    this->phone = phone;
}

int PhoneCheck::getDdd() {

    return ddd;
}

void PhoneCheck::setDdd(int ddd) {

    this->ddd = ddd;
}

bool PhoneCheck::checkMobile() {

    bool result = false;

    /* se o numero não for menor ou igual a 10 - 2 (ddd)  e menor ou igual a 11 - 2 (ddd),
     * se o numero tiver 11 dígitos, o 3° digito deve ser 9,
     * se o numero tiver 11 dígitos, o 4° digito deve ser de 6 a 9,
     * caso contrario informe a mensagem "Numero invalido";
    */

    //if ( (getPhone() - 800000000) > 0  && ((getPhone() - 900000000) > 59999999 ) ) {

    if ( (getPhone()) > 959999999 )  {

        result = true;

    }

    return result;
}

bool PhoneCheck::checkFixed() {

    bool result = false;

    // se o numero tiver 10 - 2  dígitos, o 3° digito deve ser de 2 a 5,
    // caso contrario informe a mensagem "Numero invalido";

    if (( ( getPhone() ) >  2000000 ) && (getPhone() < 6000000  ) )   {

        result = true;
    }

    return result;
}

bool PhoneCheck::checkNumber() {

    bool result = false;

    if (checkMobile() && (! checkFixed()) )
        result = true;


    if (!checkMobile() && (checkFixed()) )
        result = true;

    return result;
}

bool PhoneCheck::checkDdd() {

    bool result = false;

    /* se os dois primeiros dígitos (ddd) for igual a 0,
     * informe a mensagem "Numero invalido"; */

    if ( getDdd() > 0 )
        result = true;

    return result;
}

void PhoneCheck::checked() throw(std::string) {

    if ( ( !checkDdd() ) && ( !checkNumber() ) ) {

        throw std::string(" Error: DDD e numero invalido ");
    }

    if ( !checkDdd() ) {

        throw std::string(" Error: DDD invalido ");
    }

    if ( !checkNumber() ) {
        throw std::string(" Error: Numero invalido ");
    }
}
