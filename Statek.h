//
// Created by Bartłomiej Jencz on 07.01.2019.
//

#ifndef STATKI_STATEK_H
#define STATKI_STATEK_H

#include <string>
#include <memory>
#include <vector>
class Ladunek;
class Statek {
private:
    std::vector<std::shared_ptr<Ladunek>> ladnunki;
    int ladownosc;
public:
    Statek(int ladownosc);

    int getLadownosc() const;

    virtual ~Statek();

    std::string toString();
    bool dodajLadunek(std::shared_ptr<Ladunek> ladunek_do_dodania);
    bool  usunLadunek(std::shared_ptr<Ladunek> ladunek_do_usuniecia);
    int pobierzLiczbeLadunkow();
    int pobierzLacznaMaseLadunkow();
    float pobierzSredniaMasaLadunkow();



};


#endif //STATKI_STATEK_H
