//
// Created by paull on 21/11/2023.
//

#ifndef PROSIT4_RECTANGLE_H
#define PROSIT4_RECTANGLE_H

#include "Objet2D.h"

class Rectangle : public Objet2D{
public:
    // Construct
    Rectangle();
    Rectangle(int longueur, int largeur);

    // Methods
    virtual int getPerimetre();
    virtual int getAire();
    virtual std::string afficheInfo();
};


#endif //PROSIT4_RECTANGLE_H
