//
// Created by paull on 21/11/2023.
//

#include "Carre.h"

Carre::Carre() : Rectangle() {}
// error: type 'Objet2D' is not a direct base of 'Carre'
Carre::Carre(int cote) : Rectangle(cote, cote) {}

std::string Carre::afficheInfo() {
    return std::string("Carre: cote=") + std::to_string(x) +
           std::string(" aire=") + std::to_string(getAire()) +
           std::string(" perimetre=") + std::to_string(getPerimetre());
}
