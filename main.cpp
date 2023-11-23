//
// Created by SmashMaker on 21/11/2023.
//

#include <iostream>

#include "Objet2D.h"
#include "Rectangle.h"
#include "Carre.h"

#include "ChainObjet2D.h"
#include "NewChainObjet2D.h"


void resolution1(){
    // Test carré et rectangle
    std::cout << "#### Debut du programme ####" << std::endl;
    Objet2D *obj1 = new Rectangle(5, 10);
    std::cout << obj1->afficheInfo() << std::endl;

    Objet2D *obj2 = new Carre(5);
    std::cout << obj2->afficheInfo() << std::endl;


    // Test pointeur Suivant
    std::cout << std::endl << "#### Partie 1 ####" << std::endl;

    obj1->setSuivant(obj2);
    obj1->getSuivant()->setX(10);

    std::cout << obj1->getSuivant()->afficheInfo() << std::endl;
    std::cout << "Value is supposed to be 0 : " <<
              obj2->getSuivant() << std::endl;
    delete obj1, obj2;
}

void resolution2(){
    std::cout << std::endl << "#### Partie 2 ####" << std::endl;

    Objet2D* obj1 = new Rectangle(5, 10);
    Objet2D* obj2 = new Carre(5);
    Objet2D* obj3 = new Rectangle(10, 10);

    ChainObjet2D *chain = new ChainObjet2D(obj1);
    chain->checkIfAllGood();
    chain->printChain();


    std::cout << "Ajout et Suppr Head" << std::endl;
    chain->addAtHead(obj2);
    chain->printChain();
    chain->removeHead();
    chain->printChain();
    chain->checkIfAllGood();

    std::cout << "Ajout et Suppr Tail" << std::endl;
    chain->addAtTail(obj2);
    chain->printChain();
    chain->removeTail();
    chain->printChain();
    chain->checkIfAllGood();

    std::cout << "Ajout et Suppr Index" << std::endl;
    chain->addAtTail(obj2);
    chain->addAtIndex(obj3, 1);
    chain->printChain();
    chain->removeFromIndex(1);
    chain->printChain();
    chain->checkIfAllGood();

    delete obj1,obj2,obj3;
    delete chain;
}

void resolution2v2(){
    std::cout << std::endl << "#### Partie 2 ####" << std::endl;

    Objet2D* obj1 = new Rectangle(5, 10);
    Objet2D* obj2 = new Carre(5);
    Objet2D* obj3 = new Rectangle(10, 10);

    NewChainObjet2D *chain = new NewChainObjet2D(obj1);
    chain->printChain();

    std::cout << "Ajout et suppression de la head" << std::endl;
    chain->addAtHead(obj2);
    chain->printChain();
    chain->removeHead();
    chain->printChain();

    std::cout << std::endl << "Ajout et suppression de la tail" << std::endl;
    chain->addAtTail(obj2);
    chain->printChain();
    chain->removeTail();
    chain->printChain();

    std::cout << std::endl << "Ajout et suppression par index" << std::endl;
    chain->addAtTail(obj2);
    chain->printChain();
    chain->addAtIndex(obj3, 1);
    chain->printChain();
    chain->removeFromIndex(1);
    chain->printChain();

    delete obj1,obj2,obj3;
    delete chain;
}

void resolution3(){
    std::cout << std::endl << "#### Partie 3 ####" << std::endl;

    Objet2D* obj1 = new Rectangle(5, 10);
    Objet2D* obj2 = new Carre(5);
    Objet2D* obj3 = new Rectangle(10, 10);
    NewChainObjet2D *chain = new NewChainObjet2D(obj1);
    chain->addAtTail(obj2);
    chain->addAtTail(obj3);
    chain->printChain();
    // Obj1 -> Obj2 -> Obj1

    // Itérations
    Objet2D* current = chain->getHead();
    while (current != nullptr){
        std::cout << current->getAire() << std::endl;
        if(current->getX()==current->getY()){ // Si c'est un carré
            break;
        }
        current = current->getSuivant();
    }
}


int main(){
    resolution3();
    return 0;
}