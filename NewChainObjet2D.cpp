//
// Created by paull on 23/11/2023.
//

#include "NewChainObjet2D.h"

Objet2D *NewChainObjet2D::processTail() {
    Objet2D* current_obj = this->getHead();

    while (current_obj != nullptr && current_obj->getSuivant() != nullptr) {
        current_obj = current_obj->getSuivant();
    }
    return current_obj;
}

bool NewChainObjet2D::IsHeadLeadingToTail() {
    return processTail() == this->tail;
}

// Construct
NewChainObjet2D::NewChainObjet2D(void) {
    this->head = nullptr;
    this->tail = nullptr;
}

NewChainObjet2D::NewChainObjet2D(Objet2D *head) {
    this->head = head;
    this->tail = processTail();
}

NewChainObjet2D::NewChainObjet2D(Objet2D *head, Objet2D *tail) {
    this->head = head;
    this->tail = tail;

    if (!IsHeadLeadingToTail()) {
        std::cout << "Head is not leading to tail" << std::endl;
    }
}

// Setters & Getter
void NewChainObjet2D::setHead(Objet2D *new_head) {
    if (new_head != nullptr) {
        new_head->setSuivant(this->head);
    }
    this->head = new_head;
}

void NewChainObjet2D::setTail(Objet2D *new_tail) {
    if (this->tail != nullptr) {
        this->tail->setSuivant(new_tail);
    }
    if (new_tail != nullptr) {
        new_tail->setSuivant(nullptr);
    }
    this->tail = new_tail;
}

Objet2D *NewChainObjet2D::getHead() const {
    if(this->head==nullptr){
        std::cout << "Head is null !" << std::endl;
        return nullptr;
    }
    return this->head;
}

Objet2D *NewChainObjet2D::getTail() const {
    if(this->tail==nullptr){
        std::cout << "Tail is null !" << std::endl;
        return nullptr;
    }
    return this->tail;
}

// Methods
void NewChainObjet2D::printChain() {
    std::cout << "Affichage de la chain" << std::endl;
    Objet2D* current_obj = this->getHead();
    while (current_obj != nullptr) {
        std::cout << current_obj->afficheInfo() << std::endl;
        current_obj = current_obj->getSuivant();
    }
    std::cout << std::endl;
}

void NewChainObjet2D::addAtHead(Objet2D *obj) {
    this->setHead(obj);
}

void NewChainObjet2D::addAtTail(Objet2D *obj) {
    this->setTail(obj);
}

void NewChainObjet2D::removeHead() {
    if (this->head != nullptr) {
        this->head = this->head->getSuivant();
    }
}

void NewChainObjet2D::removeTail() {
    if (this->head == nullptr) {
        return;
    }

    if (this->head->getSuivant() == nullptr) {
        this->head = nullptr;
        this->tail = nullptr;
        return;
    }

    Objet2D* current_obj = this->head;
    while (current_obj->getSuivant() != this->tail) {
        current_obj = current_obj->getSuivant();
    }

    current_obj->setSuivant(nullptr);
    this->tail = current_obj;
}

Objet2D* NewChainObjet2D::getFromIndex(int index, bool error_if_out_of_range) {
    if (index < 0 || head == nullptr) {
        if (error_if_out_of_range) {
            std::cout << "Index or Head Null" << std::endl;
        }
        return nullptr;
    }

    Objet2D* current = head;
    Objet2D* previous = nullptr;

    for (int i = 0; i < index && current != nullptr; i++) {
        previous = current;
        current = current->getSuivant();
    }

    if ((current == nullptr && index > 0) && error_if_out_of_range) {
        std::cout << "Index out of range" << std::endl;
        return nullptr;
    }

    return previous;
}


void NewChainObjet2D::addAtIndex(Objet2D *obj, int index) {
    if (index < 0 || obj == nullptr) return;

    if (index == 0) {
        addAtHead(obj);
        return;
    }

    Objet2D* previous = getFromIndex(index);
    if (previous == nullptr || previous->getSuivant() == nullptr) {
        // Index est hors de portée
        return;
    }

    obj->setSuivant(previous->getSuivant());
    previous->setSuivant(obj);

    if (previous == tail) {
        tail = obj;
    }
}

void NewChainObjet2D::removeFromIndex(int index) {
    if (index < 0 || head == nullptr) return;

    if (index == 0) {
        removeHead();
        return;
    }

    Objet2D* previous = getFromIndex(index);
    if (previous == nullptr || previous->getSuivant() == nullptr) {
        // Index est hors de portée
        return;
    }

    Objet2D* toDelete = previous->getSuivant();
    previous->setSuivant(toDelete->getSuivant());
    if (toDelete == tail) {
        tail = previous;
    }
}





