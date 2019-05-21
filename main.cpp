#include <iostream>
#include "Statek.h"
#include "Ladunek.h"
#include "Luzny.h"
#include "Kontener.h"
#include <memory>
int main() {
    Statek Statek1(330);
    auto Luzny1 = std::make_shared<Luzny>(100,100);
    auto Luzny2 = std::make_shared<Luzny>(100,100);
    auto Kontener1 = std::make_shared<Kontener>(100,100);
    auto Kontener2 = std::make_shared<Kontener>(100,100);
    std::cout<<std::endl;
    std::cout<<Statek1.dodajLadunek(Luzny1);
    std::cout<<Statek1.dodajLadunek(Luzny2);
    std::cout<<Statek1.dodajLadunek(Kontener1);
    std::cout<<Statek1.dodajLadunek(Kontener2);
    std::cout<<Statek1.toString();
    std::cout<<std::endl;
    std::cout<<Statek1.pobierzLiczbeLadunkow();
    std::cout<<std::endl;
    std::cout<<Statek1.pobierzLacznaMaseLadunkow();
    std::cout<<std::endl;
    std::cout<<Statek1.pobierzSredniaMasaLadunkow();

    //Drugi test
    Statek Statek2(333);
    auto Luzny3 = std::make_shared<Luzny>(100,100);
    auto Luzny4 = std::make_shared<Luzny>(100,100);
    auto Luzny5 = std::make_shared<Luzny>(100,100);
    std::cout<<std::endl;
    std::cout<<Statek2.dodajLadunek(Luzny3);
    std::cout<<Statek2.dodajLadunek(Luzny4);
    std::cout<<Statek2.dodajLadunek(Luzny5);
    std::cout<<Statek2.usunLadunek(Luzny3);
    std::cout<<std::endl;
    if(Statek2.pobierzLiczbeLadunkow()==2) std::cout<<"Zgadza sie";
    std::cout<<std::endl;
    if(Statek2.pobierzLacznaMaseLadunkow()==200) std::cout<<"Zgadza sie";
    std::cout<<std::endl;
    if(Statek2.pobierzSredniaMasaLadunkow()==100) std::cout<<"Zgadza sie";


    return 0;
}