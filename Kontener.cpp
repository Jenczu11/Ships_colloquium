//
// Created by Bartłomiej Jencz on 07.01.2019.
//

#include "Kontener.h"
#include <sstream>
Kontener::Kontener(int masa, int objetosc) : Ladunek(masa), objetosc(objetosc) {}

Kontener::~Kontener() {

}

std::string Kontener::toString() {
    std::stringstream ss;
    ss << "Kontener: Masa - " << this->getMasa() << "kg rozmiar - " << objetosc << "";
    return ss.str();
}
