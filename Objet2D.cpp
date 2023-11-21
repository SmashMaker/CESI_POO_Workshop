//
// Created by paull on 21/11/2023.
//

#include "Objet2D.h"

Objet2D::Objet2D(void) {
    this->x = 0;
    this->y = 0;
}

Objet2D::Objet2D(int x) {
    this->x = x;
    this->y = 0;
}

Objet2D::Objet2D(int x, int y) {
    this->x = x;
    this->y = y;
}
