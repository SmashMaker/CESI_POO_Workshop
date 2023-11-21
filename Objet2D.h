//
// Created by paull on 21/11/2023.
//

#ifndef PROSIT4_OBJET2D_H
#define PROSIT4_OBJET2D_H

#include <iostream>

class Objet2D {
private:
    Objet2D* Suivant;
protected:
    int x,y;
public:
    // Construct
    Objet2D();
    Objet2D(int x);
    Objet2D(int x, int y);

    // Setters & Getters
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();

    void setSuivant(Objet2D* obj);
    Objet2D* getSuivant();

    // Methods
    virtual int getPerimetre() = 0;
    virtual int getAire() = 0;
    virtual std::string afficheInfo() = 0;
};


#endif //PROSIT4_OBJET2D_H
