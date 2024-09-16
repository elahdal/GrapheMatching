#pragma once

#include<iostream>
#include<vector>
#include<list>
using namespace std;

class CArc {
	//LES ATTRIBUTS
private:
	string sARCSommetDebut;
	string sARCSommetFin;
public:
	//lES CONSTRUCTEURS

	/****************************************
	* Nom: CArc
	* Description: Constructeur par parametre
	* Parametre: T sommeDeb, T sommeFin
	* Retour: void
	* Pre-condition: aucun
	* Post-condition: aucun
	* *************************************/
	CArc(string sommeDeb, string sommeFin);

	/****************************************
	* Nom: CArc
	* Description: Constructeur par defaut
	* Parametre: void
	* Retour: void
	* Pre-condition: aucun
	* Post-condition: aucun
	****************************************/
	CArc();

	/****************************************
	* Nom: CArc
	* Description: Constructeur par copie
	* Parametre: CArc& ARCParam
	* Retour: void
	* Pre-condition: aucun
	* Post-condition: aucun
	*****************************************/
	CArc(const CArc& Arc);

	/****************************************
	* Nom: ~CArc
	* Description: Destructeur
	* Parametre: void
	* Retour: void
	* Pre-condition: l'Arc doit être initialisé
	* Post-condition: l'Arc est detruit
	****************************************/
	~CArc();

	//Les methodes
	/****************************************
	* Nom: ARCGetSommetDebut
	* Description: Retourne le sommet de debut
	* Parametre: void
	* Retour: T
	* Pre-condition: l'Arc doit initialiser
	* Post-condition: aucun
	*****************************************/
	string ARCGetSommetDebut();

	/****************************************
	* Nom: ARCGetSommetFin
	* Description: Retourne le sommet de fin
	* Parametre: void
	* Retour: T
	* Pre-condition: l'Arc doit être initialisé
	* Post-condition: aucun
	****************************************/
	string ARCGetSommetFin();

	/****************************************
	* Nom: ARCSetSommetDebut
	* Description: Modifie le sommet de debut
	* Parametre: T sommeDeb
	* Retour: void
	* Pre-condition: l'Arc doit être initialisé
	* Post-condition: aucun
	*****************************************/
	void ARCSetSommetDebut(string sommetDebutDeb);

	/****************************************
	* Nom: ARCSetSommetFin
	* Description: Modifie le sommet de fin
	* Parametre: T sommeFin
	* Retour: void
	* Pre-condition: l'Arc doit être initialisé
	* Post-condition: le sommet de fin est modifie
	****************************************/
	void ARCSetSommetFin(string sommetFin);

};

#include "../InlineFonctions/CArc.hin"

