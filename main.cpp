//
// Created by SmashMaker on 21/11/2023.
//

#include <iostream>

#include "Objet2D.h"
#include "Rectangle.h"
#include "Carre.h"

int main(){
    // Test carré et rectangle
    Objet2D *obj1 = new Rectangle(5, 10);
    std::cout << obj1->afficheInfo() << std::endl;

    Objet2D *obj2 = new Carre(5);
    std::cout << obj2->afficheInfo() << std::endl;

    // Test pointeur Suivant
    obj1->setSuivant(obj2);
    obj1->getSuivant()->setX(10);
    std::cout << obj1->getSuivant()->afficheInfo() << std::endl;

    delete obj1, obj2;
    return 0;
}