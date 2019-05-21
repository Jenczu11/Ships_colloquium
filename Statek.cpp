//
// Created by Bartłomiej Jencz on 07.01.2019.
//

#include "Statek.h"
#include "Ladunek.h"
#include <algorithm>
#include <sstream>
Statek::Statek(int ladownosc) : ladownosc(ladownosc) {}

Statek::~Statek() {

}

std::string Statek::toString() {
    std::stringstream ss;
    ss << "Statek: pozostala ladownosc Statku: " << getLadownosc() << "\n";
    for(auto ladunek : ladnunki)
    {
        ss << ladunek->toString() << "\n";
    }
    return ss.str();
}

bool Statek::dodajLadunek(std::shared_ptr<Ladunek> ladunek_do_dodania) {
    if(this->ladownosc-ladunek_do_dodania->getMasa()>=0) {
        ladnunki.push_back(ladunek_do_dodania);
      ladownosc=ladownosc-ladunek_do_dodania->getMasa();
        return true;
    }
    return false;
}

bool Statek::usunLadunek(std::shared_ptr<Ladunek> ladunek_do_usuniecia) {
    auto it = std::find(ladnunki.begin(), ladnunki.end(), ladunek_do_usuniecia);
    if(it != ladnunki.end())
    {
        ladnunki.erase(it);
        ladownosc=ladownosc+ladunek_do_usuniecia->getMasa();
        return true;
    }
    return false;
}

int Statek::pobierzLiczbeLadunkow() {
    return (int)ladnunki.size();
}

int Statek::pobierzLacznaMaseLadunkow() {
    float Suma=0;
    for (auto ladunek : ladnunki)
    {
        Suma+=ladunek->getMasa();
    }
    return (int)Suma;
}

float Statek::pobierzSredniaMasaLadunkow() {

    return Statek::pobierzLacznaMaseLadunkow()/Statek::pobierzLiczbeLadunkow();

}

int Statek::getLadownosc() const {
    return ladownosc;
}
