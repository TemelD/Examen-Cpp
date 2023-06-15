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

    // Méthode pour accéder au nom
    string getNom() { return nom; }

    // Méthode pour accéder au poids
    double getPoids() { return poids; }

    // Méthode pour modifié le poids
    void setPoids(double nouveauPoids) {
        poids = nouveauPoids;
    }
};

