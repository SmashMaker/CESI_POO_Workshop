//
// Created by paull on 21/11/2023.
//

#ifndef PROSIT4_OBJET2D_H
#define PROSIT4_OBJET2D_H

#include <iostream>

class Objet2D {
protected:
    int x,y;
public:
    // Construct
    Objet2D();
    Objet2D(int x);
    Objet2D(int x, int y);

    // Methods
    virtual int getPerimetre() = 0;
    virtual int getAire() = 0;
    virtual std::string afficheInfo() = 0;
};


#endif //PROSIT4_OBJET2D_H
