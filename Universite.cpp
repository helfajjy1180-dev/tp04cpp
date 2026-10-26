#ifndef UNIVERSITE_HPP
#define UNIVERSITE_HPP
#include <iostream>
#include <string>

class Universite {
    std::string nom;
public:
    Universite(std::string n);
    void afficherNom();
};

#endif 
