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

    // M�thode pour acc�der au nom
    string getNom() { return nom; }

    // M�thode pour acc�der au poids
    double getPoids() { return poids; }

    // M�thode pour modifi� le poids
    void setPoids(double nouveauPoids) {
        poids = nouveauPoids;
    }
};

