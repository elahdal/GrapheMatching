#pragma once
#include <exception>
#include <iostream>
using namespace std;
#define EXC_SOMMET_DEBUT_FIN 010
#define EXC_PAS_ASSEZ_DE_SOMMET 011
#define EXC_SOMMET_INTROUVABLE 012
#define EXC_PAS_ASSEZ_DE_ARC 013
#define EXC_FICHIER_INTROUVABLE 000
#define EXC_SOMMET_EXISTE_DEJA 014
#define EXC_ARC_EXISTE_DEJA 017
#define EXC_INDICE_HORS_TABLEAU 015
#define EXC_ERREUR_GESTION_ESPACE_MEMOIRE 016
#define EXC_GRAPHE_NON_ORIENT 001
#define EXC_OPTION_INVALIDE 111
#define EXC_ARC_EXISTE_PAS 112
#define EXC_Erreur_id 113





class CException : public exception
{
	private:
		int eEXC_code;
		string sEXC_Message;
	public:

		void EXC_ModifierMessage(int code);
		/***********************************
		* Nom: EXC_ModifierMessage
		* Description: Modifie le message d'erreur
		* Parametre: code
		* Retour: void
		*************************************/

		string EXC_GetMessage();
		/***********************************
		* Nom: EXC_GetMessage
		* Description: Retourne le message d'erreur
		* Parametre: aucun
		* Retour: string
		* *************************************/

};
