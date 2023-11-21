//
// Created by paull on 21/11/2023.
//

#ifndef CESI_POO_WORKSHOP_4_CHAINOBJET2D_H
#define CESI_POO_WORKSHOP_4_CHAINOBJET2D_H

#include "Objet2D.h"

class ChainObjet2D {
private:
    Objet2D* head;
    Objet2D* tail;
    Objet2D* processTail();
public:
    void checkIfAllGood(); // Debugging
    // Construct
    ChainObjet2D(void);
    ChainObjet2D(Objet2D* head);
    ChainObjet2D(Objet2D* head, Objet2D* tail);

    // Setters & Getters
    void setHead(const Objet2D& obj);
    void setTail(const Objet2D& obj);

    Objet2D* getHead();
    Objet2D* getTail();

    // Methods
    Objet2D* getFromIndex(int index);

    void addAtIndex(const Objet2D& obj, int index);
    void addAtHead(const Objet2D& obj);
    void addAtTail(const Objet2D& obj);

    void removeFromIndex(int index);
    void removeHead();
    void removeTail();

    void deleteFromIndex(int index);
    void deleteHead();
    void deleteTail();
};


#endif //CESI_POO_WORKSHOP_4_CHAINOBJET2D_H
