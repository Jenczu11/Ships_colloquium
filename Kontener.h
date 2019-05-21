//
// Created by Bartłomiej Jencz on 07.01.2019.
//

#ifndef STATKI_KONTENER_H
#define STATKI_KONTENER_H

#include "Ladunek.h"
#include <string>
class Kontener: public Ladunek {
private:
    int objetosc;
public:
    std::string toString();

    Kontener(int masa, int objetosc);

    virtual ~Kontener();
};


#endif //STATKI_KONTENER_H
