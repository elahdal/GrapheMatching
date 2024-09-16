#include <iostream>
using namespace std;

#include "../Graphe/Header/liregraphe.h"
#include "../Graphe/Header/CException.h"


int main() {
    int choix;
    int choix_type;
    string nomFichier;

    cout << "Bienvenue dans le programme de lecture de graphe" << endl;
    cout << "Veuillez entrer le chemin complet du fichier a lire : ";
    getline(cin, nomFichier);
    cout << "Quel est le type de donne a lire ?" << endl;
    cout << "1. Entier" << endl;
    cout << "2. chaine de caracteres" << endl;
    cin >> choix_type;
    cout << "Veuillez choisir le type de graphe a lire : " << endl;
    cout << "1. Graphe oriente" << endl;
    cout << "2. Graphe non oriente" << endl;
    cin >> choix;

    switch (choix) {
    case 1:
        switch (choix_type)
        {
            case 1:
			try {
				lireGraphe(nomFichier, 1);
                break;
			}
			catch (CException& e) {
				cout << e.EXC_GetMessage() << endl;
				break;
			}
            case 2:
                try {
                    lireGraphe_string(nomFichier, 1);
                    break;
                    }
                catch (CException& e) {
                    cout << e.EXC_GetMessage() << endl;
					break;
				}
                break;
        default:
            break;
        }
    case 2:
        switch (choix_type)
        {
        case 1:
            try {
                lireGraphe(nomFichier, 2);
            }
            catch (CException& e) {
                cout << e.EXC_GetMessage() << endl;
                break;
            }
        case 2:
            try {
                lireGraphe_string(nomFichier, 2);
            }
            catch (CException& e) {
                cout << e.EXC_GetMessage() << endl;
                break;
            }
            break;
        default:
            break;
        }
        default:
            break;
         }   
    system("pause");
    return 0;
}