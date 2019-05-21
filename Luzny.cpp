//
// Created by Bartłomiej Jencz on 07.01.2019.
//

#include "Luzny.h"
#include <sstream>
Luzny::Luzny(int masa, int rozmiar) : Ladunek(masa), rozmiar(rozmiar) {}

Luzny::~Luzny() {

}

std::string Luzny::toString() {
    std::stringstream ss;
    ss << "Luzny: Masa - " << this->getMasa() << "kg rozmiar - " << rozmiar << "";
    return ss.str();
}
