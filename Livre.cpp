#include <string>
#include <iostream>
class Livre {
private:
    std::string titre;
    std::string auteur;
    int annee;
    static int nblivres;
public:
    Livre(std::string t, std::string a, int an){
        titre = t;  
        auteur = a;
        annee = an;
        nblivres++;
    }
    void afficher() {
        std::cout << "Titre: " << titre << ", Auteur: " << auteur << ", Annee: " << annee << std::endl;
    }   
static void aafficherTotal(){
        std::cout << "Nombre total de livres: " << nblivres << std::endl;
   }
};