#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "AfficherGraphe.h"
#include "CException.h"
#include "CCouplage.h"

using namespace std;




void lireGraphe(const string& nomFichier, int option);
/************************************
* Nom : lireGraphe
* Description : Lit un graphe dans un fichier
* Retour : void
* Param : const string& nomFichier , entier option pour savoir si le graphe est orient ou non
* Conditions : Le fichier doit exister
**************************************/


void lireGraphe_string(const string& nomFichier, int option);
/************************************
* Nom : lireGraphe_string
* Description : Lit un graphe dans un fichier
* Retour : void
* Param : const string& nomFichier , entier option pour savoir si le graphe est orient ou non
* Conditions : Le fichier doit exister
* Conditions : le type des donnes doivent etre chaine de caractere
**************************************/

#include "../InlineFonctions/Liregraphe.hin"






