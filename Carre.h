//
// Created by paull on 21/11/2023.
//

#ifndef PROSIT4_CARRE_H
#define PROSIT4_CARRE_H

#include "Rectangle.h"
#include <iostream>

class Carre : public Rectangle{
public:
    // Construct
    Carre();
    Carre(int cote);

    // Methods
    virtual std::string afficheInfo();
    // (Pas de redéfinition pour le perimeter et l'aire
    // car c'est la même chose que pour un rectangle)
};


#endif //PROSIT4_CARRE_H