#pragma once
#include "CArc.h"
#include <list>
#include <string.h>
#include <iostream>
using namespace std;



class CSommet {
	//Les attributs
private:
	string sSOM_IdSommet;
	list<CArc*> lpSOM_ArcSortant;
	list<CArc*> lpSOM_ArcEntrant;
public:
	//LES CONSTRUCTEURS
	//temps

	CSommet();
	/*************************************
	* Nom: CSommet
	* Description: Constructeur par defaut
	* Parametre d'entree: Aucun
	* Parametre de sortie: Aucun
	* Pre-condition: Aucune
	* Post-condition: Un objet CSommet est cree
	* ************************************/

	CSommet(const CSommet& SOMParam);
	/*************************************
	* Nom: CSommet
	* Description: Constructeur par copie
	* Parametre d'entree: CSommet&
	* Parametre de sortie: Aucun
	* Pre-condition: Objet CSommet existant
	* Post-condition: Un objet CSommet est cree
	* ************************************/

	~CSommet();
	/*************************************
	* Nom: ~CSommet
	* Description: Destructeur
	* Parametre d'entree: Aucun
	* Parametre de sortie: Aucun
	* Pre-condition: Objet CSommet existant
	* Post-condition: L'objet CSommet est detruit
	* ************************************/

	//LES METHODES

	string SOM_GetIdSommet();
	/*************************************
	* Nom: SOM_GetIdSommet
	* Description: Retourne l'identifiant du sommet
	* Parametre d'entree: Aucun
	* Parametre de sortie: string
	* Pre-condition: Aucune
	* Post-condition: Aucune
	* retour: string
	* ************************************/

	list<CArc*> SOM_GetArcSortant() { return lpSOM_ArcSortant; }
	/*************************************
	* Nom: SOM_AjouterArcEntrant
	* Description: Ajoute un arc entrant
	* Parametre d'entree: Arc*
	* Parametre de sortie: List du pointeur de CArc
	* Pre-condition: Aucune
	* Post-condition: Aucune
	* ************************************/

	list<CArc*> SOM_GetArcEntrant() { return lpSOM_ArcEntrant; }
	/*************************************
	* Nom: SOM_AjouterArcEntrant
	* Description: Ajoute un arc entrant
	* Parametre d'entree: Arc*
	* Parametre de sortie: List du pointeur de CArc
	* Pre-condition: Aucune
	* Post-condition: Aucune
	* ************************************/


	void SOM_SetIdSommet(string id);
	/*************************************
	* Nom: SOM_SetIdSommet
	* Description: Modifie l'identifiant du sommet
	* Parametre d'entree: string
	* Parametre de sortie: Aucun
	* pre-condition: Aucune
	* Post-condition: L'identifiant du sommet est modifie
	* ************************************/

	void SOM_AjouterArcSortant(CArc* arc);
	/*************************************
	* Nom: SOM_AjouterArcSortant
	* Description: Ajoute un arc sortant
	* Parametre d'entree: Arc*
	* Parametre de sortie: Aucun
	* pre-condition: Aucune
	* Post-condition: Un arc sortant est ajoute
	* ************************************/

	void SOM_AjouterArcEntrant(CArc* arc);
	/*************************************
	* Nom: SOM_AjouterArcEntrant
	* Description: Ajoute un arc entrant
	* Parametre d'entree: Arc*
	* Parametre de sortie: Aucun
	* pre-condition: Aucune
	* Post-condition: Un arc entrant est ajoute
	* ************************************/


	void SOM_SuprimerArcEntrant(CArc* arc);
	/*************************************
	* Nom: SOM_AjouterArcEntrant
	* Description: Ajoute un arc entrant
	* Parametre d'entree: Arc*
	* Parametre de sortie: Aucun
	* pre-condition: Aucune
	* Post-condition: Un arc entrant est supprime
	* ************************************/

	void SOM_SuprimerArcSortant(CArc* arc);
	/*************************************
	* Nom: SOM_AjouterArcEntrant
	* Description: Ajoute un arc entrant
	* Parametre d'entree: Arc*
	* Parametre de sortie: Aucun
	* pre-condition: Aucune
	* Post-condition: Un arc sortant est supprime
	* ************************************/

};


#include "../InlineFonctions/CSommet.hin"