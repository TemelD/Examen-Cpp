

#include <iostream>
#include "Boxeur.h"

int main()
{
    Boxeur boxeur_1("Box_1", 75.0);

    // info de boxeur_1
    std::cout << "boxeur_1 - Adresse : " << &boxeur_1 << std::endl;
    std::cout << "Nom : " << boxeur_1.getNom() << std::endl;
    std::cout << "Poids : " << boxeur_1.getPoids() << " kg" << std::endl;

    // Instanciation dynamique de boxeur_2
    Boxeur* boxeur_2 = new Boxeur("Box_2", 78.0);

    // info de boxeur_2
    std::cout << "boxeur_2 - Adresse : " << boxeur_2 << std::endl;
    std::cout << "Nom : " << boxeur_2->getNom() << std::endl;
    std::cout << "Poids : " << boxeur_2->getPoids() << " kg" << std::endl;

    // Libération de la mémoire allouée dynamiquement pour boxeur_2
    delete boxeur_2;

    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
