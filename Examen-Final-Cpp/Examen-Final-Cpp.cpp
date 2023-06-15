#include <iostream>
#include "Boxeur.h"
#include "Combat.h"

using namespace std;
int main()
{
    Boxeur boxeur_1("Box_1", 75.0);

    // info de boxeur_1
    cout << "boxeur_1 - Adresse : " << &boxeur_1 << endl;
    cout << "Nom : " << boxeur_1.getNom() << endl;
    cout << "Poids : " << boxeur_1.getPoids() << " kg" << endl << endl;

    // Instanciation dynamique de boxeur_2
    Boxeur* boxeur_2 = new Boxeur("Box_2", 78.0);

    // info de boxeur_2
    cout << "boxeur_2 - Adresse : " << boxeur_2 << endl;
    cout << "Nom : " << boxeur_2->getNom() << endl;
    cout << "Poids : " << boxeur_2->getPoids() << " kg" << endl << endl;

    // Libération de la mémoire allouée dynamiquement pour boxeur_2
    delete boxeur_2;

    // Instanciation automatique de combat_1
    Combat combat_1("Comb_1_1/8");

    // infor combat_1
    cout << "combat_1 - Adresse : " << &combat_1 << endl;
    cout << "Niveau : " << combat_1.getNiveau() << endl << endl;

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
