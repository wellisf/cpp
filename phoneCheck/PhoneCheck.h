#ifndef PHONECHECK_H
#define PHONECHECK_H

#include <cstdio>
#include <cstring>
#include <iostream>
#include <sstream>

#include <cstdlib>

/**
 * @brief PhoneCheck::PhoneCheck
 *
 * Validação de Telefone fixo/móvel
 *
 *  Não utilizar String e Vetor.

    Regra de validação:

    Móvel [1-9][1-9] 9 [6-9] [0-9] [0-9] [0-9] [0-9] [0-9] [0-9] [0-9]
    Fixo  [1-9][1-9] [2-5] [0-9] [0-9] [0-9] [0-9] [0-9] [0-9] [0-9]﻿

    se o numero não for menor ou igual a 10 e menor ou igual a 11, informe a mensagem "Numero invalido";
    se os dois primeiros dígitos (ddd) for igual a 0, informe a mensagem "Numero invalido";
    se o numero tiver 11 dígitos, o 3° digito deve ser 9, caso contrario informe a mensagem "Numero invalido";
    se o numero tiver 11 dígitos, o 4° digito deve ser de 6 a 9, caso contrario informe a mensagem "Numero invalido";
    se o numero tiver 10 dígitos, o 3° digito deve ser de 2 a 5, caso contrario informe a mensagem "Numero invalido";

    Exemplo:

    input - 1081234567
    output - Numero invalido

    A exigência é que seja informado se o numero é invalido. Se o numero for valido, fica a seu critério informar ou não.
 */

class PhoneCheck {

private:
    int ddd;
    int phone;

public:
    PhoneCheck(int ddd, int phone);

    int getPhone();
    void setPhone(int phone);

    int getDdd();
    void setDdd(int ddd);

    bool checkMobile();
    bool checkFixed() ;

    bool checkNumber();
    bool checkDdd();

    void checked() throw(std::string);

};

#endif // PHONECHECK_H
