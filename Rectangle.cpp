//
// Created by paull on 21/11/2023.
//

#include "Rectangle.h"

// Construct
Rectangle::Rectangle(void) : Objet2D() {}

Rectangle::Rectangle(int longueur, int largeur) : Objet2D(longueur, largeur) {}


// Methods
int Rectangle::getPerimetre() {
    return (x*2) + (y*2);
}

int Rectangle::getAire() {
    return x*y;
}

std::string Rectangle::afficheInfo() {
    return
    std::string("Rectangle: x=") + std::to_string(x) +
    std::string(" y=") + std::to_string(y) +
    std::string(" aire=") + std::to_string(getAire()) +
    std::string(" perimetre=") + std::to_string(getPerimetre());
}


