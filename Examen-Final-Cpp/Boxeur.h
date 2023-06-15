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

    // Méthode d'accès en lecture pour le nom
    std::string getNom() const {
        return nom;
    }

    // Méthode d'accès en lecture pour le poids
    double getPoids() const {
        return poids;
    }

    // Méthode de modification pour le poids
    void setPoids(double nouveauPoids) {
        poids = nouveauPoids;
    }
};

