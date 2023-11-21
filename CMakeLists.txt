cmake_minimum_required(VERSION 3.15)
project(CESI_POO_Workshop_4)

set(CMAKE_CXX_STANDARD 17)
add_executable(CESI_POO_Workshop_4 main.cpp
        Objet2D.h
        Objet2D.cpp
        Rectangle.h
        Rectangle.cpp
        Carre.h
        Carre.cpp
        ChainObjet2D.h
        ChainObjet2D.cpp)