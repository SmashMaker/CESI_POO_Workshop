//
// Created by paull on 21/11/2023.
//

#include "ChainObjet2D.h"

// Check if head is leading to the tail
void ChainObjet2D::checkIfAllGood() {
    Objet2D* supposed_tail = processTail();
    if(this->tail != supposed_tail) {
        std::cout << "Error: Head is not leading to the tail" << std::endl;
    } else {std::cout << "All good Sir !" << std::endl;}
}

Objet2D* ChainObjet2D::processTail() {
    Objet2D* current_obj = this->getHead();

    // Go all the way through the chain
    while (current_obj->getSuivant() != nullptr && current_obj != nullptr) {
        current_obj = current_obj->getSuivant();
    }

    return current_obj;
}


// Construct
ChainObjet2D::ChainObjet2D(void) {
    this->head = nullptr;
    this->tail = nullptr;
}

ChainObjet2D::ChainObjet2D(Objet2D *head) {
    this->head = head;
    this->tail = processTail();
}

ChainObjet2D::ChainObjet2D(Objet2D *head, Objet2D *tail) {
    this->head = head;
    this->tail = tail;
    checkIfAllGood();
}


// Setters & Getters
void ChainObjet2D::setHead(const Objet2D &obj) {
    this->head = (Objet2D*) &obj;
    this->tail = processTail();
}

void ChainObjet2D::setTail(const Objet2D &obj) {
    this->tail = (Objet2D*) &obj;
    checkIfAllGood();
}

Objet2D *ChainObjet2D::getHead() {
    return this->head;
}

Objet2D *ChainObjet2D::getTail() {
    return this->tail;
}


// Methods
Objet2D *ChainObjet2D::getFromIndex(int index) {
    Objet2D* current_obj = this->getHead();

    // Go through the chain
    for(int i = 0; i < index; i++) {
        current_obj = current_obj->getSuivant();

        if(current_obj == nullptr) {
            std::cout << "Error: Index out of range" << std::endl;
            return nullptr;
        }
    }
    return current_obj;
}

void ChainObjet2D::addAtIndex(const Objet2D &obj, int index) {

}

void ChainObjet2D::addAtHead(const Objet2D &obj) {

}

void ChainObjet2D::addAtTail(const Objet2D &obj) {

}

void ChainObjet2D::removeFromIndex(int index) {

}

void ChainObjet2D::removeHead() {

}

void ChainObjet2D::removeTail() {

}

void ChainObjet2D::deleteFromIndex(int index) {

}

void ChainObjet2D::deleteHead() {

}

void ChainObjet2D::deleteTail() {

}

