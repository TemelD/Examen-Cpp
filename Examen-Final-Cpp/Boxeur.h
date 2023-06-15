#include <iostream>
#include <string>

class Boxeur {
private:
    std::string nom;
    double poids;

public:
    // Constructeur
    Boxeur(const std::string& nom, double poids) : nom(nom), poids(poids);

    // Destructeur
    ~Boxeur();

    // M�thode d'acc�s en lecture pour le nom
    std::string getNom() const {
        return nom;
    }

    // M�thode d'acc�s en lecture pour le poids
    double getPoids() const {
        return poids;
    }

    // M�thode de modification pour le poids
    void setPoids(double nouveauPoids) {
        poids = nouveauPoids;
    }
};

