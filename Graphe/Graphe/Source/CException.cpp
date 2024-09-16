#include "../Header/CException.h"
#include <iostream>
#include <string>
using namespace std;

void CException::EXC_ModifierMessage(int code) {
		eEXC_code = code;
}
string CException::EXC_GetMessage()
{
	switch (eEXC_code) {
	case 010:
		sEXC_Message = "Sommet Debut est egal au Sommet Fin. Veuillez choisir un sommet different";
		break;
	case 011:
		sEXC_Message = "Il n'y a pas assez de sommet pour l'arc. Veuillez ajouter d'autres sommets";
		break;
	case 012:
		sEXC_Message = "Sommet Introuvable ";
		break;
	case 013:
		sEXC_Message = "Pas D'assez D'arc";
		break;
	case 000:
		sEXC_Message = "Erreur lors de l'ouverture du fichier : Fichier Introuvable";
		break;

	case 014:
		sEXC_Message = "Sommet existe deja dans la liste. Changez l'identifiant pour ajouter un nouveau sommet. ";
		break;
	case 015:
		sEXC_Message = "Indice hors tableau ";
		break;
	case 016:
		sEXC_Message = "Erreur d'allocation ou de désallocation de l'espace memoire. ";
		break;
	case 017:
		sEXC_Message = "L'arc existe deja. ";
		break;
	case 001:
		sEXC_Message = "vous essayez de créer un graphique orienté avec des données qui appartiennent à un graphique non orienté, vérifiez vos données.";
		break;
	case 111:
		sEXC_Message = "Option invalide";
		break;
	case 112:
		sEXC_Message = "Arc Introuvable. Merci de rentrer un arc existant";
		break;
	case 113:
		sEXC_Message = "Erreur dans L'id. Merci de ressayer";
		break;
	}
	return sEXC_Message;
}
