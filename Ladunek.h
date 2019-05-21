//
// Created by Bartłomiej Jencz on 07.01.2019.
//

#ifndef STATKI_LADUNEK_H
#define STATKI_LADUNEK_H

#include <string>
class Ladunek {
private:
    int masa;
public:
    Ladunek(int masa);

    virtual std::string toString();

    int getMasa() const;
};




#endif //STATKI_LADUNEK_H
