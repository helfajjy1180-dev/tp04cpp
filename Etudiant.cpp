#include <iostream>
#include <string>
#include "Universite.cpp"

class Etudiant {
private:
    std::string nom;
    int age;
    Universite* universite;
    static int nbetudiants;
public:
    Etudiant(std::string n, int a, Universite* u);
    void afficher();
    static void afficherTotal();
};