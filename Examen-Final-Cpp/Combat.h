#include <iostream>
#include <string>

class Combat {
private:
    std::string niveau;

public:
    // Constructeur
    Combat(const std::string& niveau) : niveau(niveau) {
        std::cout << "Constructeur de Combat : Niveau " << niveau << std::endl;
    }

    // Destructeur
    ~Combat() {
        std::cout << "Destructeur de Combat : Niveau " << niveau << std::endl;
    }

    // Méthode d'accès en lecture pour le niveau
    std::string getNiveau() const {
        return niveau;
    }
};
