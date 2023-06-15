#include <iostream>
#include <string>

using namespace std;

class Boxeur {
private:
    string nom;
    double poids;

public:
    // Constructeur
    Boxeur(const string& nom, double poids) : nom(nom), poids(poids) {
        cout << "Constructeur de Boxeur : " << nom << endl;
    }

    // Destructeur
    ~Boxeur() {
        cout << "Destructeur de Boxeur : " << nom << endl << endl;
    }

    // Méthode d'accès en lecture pour le nom
    string getNom() const {
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

