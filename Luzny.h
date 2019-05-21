//
// Created by Bartłomiej Jencz on 07.01.2019.
//

#ifndef STATKI_LUZNY_H
#define STATKI_LUZNY_H


#include "Ladunek.h"
#include <string>
class Luzny: public Ladunek {
private:
    int rozmiar;
public:
    Luzny(int masa, int rozmiar);

    virtual ~Luzny();

public:
    std::string toString();
};



#endif //STATKI_LUZNY_H
