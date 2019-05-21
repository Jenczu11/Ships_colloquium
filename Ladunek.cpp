//
// Created by Bartłomiej Jencz on 07.01.2019.
//

#include "Ladunek.h"

Ladunek::Ladunek(int masa) : masa(masa) {}

int Ladunek::getMasa() const {
    return masa;
}

std::string Ladunek::toString() {
return "Ladunek";
}
