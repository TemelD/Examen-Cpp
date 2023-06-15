#include <iostream>
#include <string>

using namespace std;

class Combat {
private:
    string niveau;
    Boxeur* coinBleu;
    Boxeur* coinRouge;
    Boxeur* vainqueur;

public:
    // Constructeur
    Combat(const string& niveau) : niveau(niveau), coinBleu(nullptr), coinRouge(nullptr), vainqueur(nullptr) {
        cout << "Constructeur de Combat : Niveau " << niveau << endl;
    }

    // Destructeur
    ~Combat() {
        cout << "Destructeur de Combat : Niveau " << niveau << endl;
    }

    // Méthode pour accéder au niveau
    string getNiveau() { return niveau; }

    // Setter pour l'attribut coinBleu
    void setCoinBleu(Boxeur* boxeur) {
        if (coinRouge != boxeur) {
            coinBleu = boxeur;
        }
    }

    // Getter pour l'attribut coinBleu
    Boxeur* getCoinBleu() { return coinBleu; }

    // Setter pour l'attribut coinRouge
    void setCoinRouge(Boxeur* boxeur) {
        if (coinBleu != boxeur) {
            coinRouge = boxeur;
        }
    }

    // Getter pour l'attribut coinRouge
    Boxeur* getCoinRouge() { return coinRouge; }

    // Setter pour l'attribut Vainqueur
    void setVainqueur(const string& couleur) {
        if (couleur == "bleu") {
            vainqueur = coinBleu;
        }
        else if (couleur == "rouge") {
            vainqueur = coinRouge;
        }
    }

    Boxeur* getVainqueur() { return vainqueur; }
};
