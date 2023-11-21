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

    return 0;
}