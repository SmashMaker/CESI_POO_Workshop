//
// Created by paull on 21/11/2023.
//

#include "Objet2D.h"

// Construct
Objet2D::Objet2D(void) {
    this->x = 0;
    this->y = 0;
    this->Suivant = nullptr;
}

Objet2D::Objet2D(int x) {
    this->x = x;
    this->y = 0;
    this->Suivant = nullptr;
}

Objet2D::Objet2D(int x, int y) {
    this->x = x;
    this->y = y;
    this->Suivant = nullptr;
}

// Setters & Getters
void Objet2D::setX(int x) {
    this->x = x;
}

void Objet2D::setY(int y) {
    this->y = y;
}

int Objet2D::getX() {
    return this->x;
}

int Objet2D::getY() {
    return this->y;
}

void Objet2D::setSuivant(Objet2D *obj) {
    this->Suivant = obj;
}

Objet2D *Objet2D::getSuivant() {
    return this->Suivant;
}
