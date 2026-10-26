#include <iostream>
#include "Etudiant.cpp"
#include "Universite.cpp"


int main() {

    Universite u("Université de Casablanca");
    Etudiant e1("Amine", 20, &u);
    Etudiant e2("Sara", 21, &u);
    Etudiant e3("Youssef", 22, &u);
    Etudiant e4("Fatima", 23, &u);
    e1.afficher();
    e2.afficher();
    e3.afficher();
    e4.afficher();

    Etudiant::afficherTotal(); // Doit afficher 4
}