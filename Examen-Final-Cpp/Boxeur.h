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

    // M�thode d'acc�s en lecture pour le nom
    string getNom() const {
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

