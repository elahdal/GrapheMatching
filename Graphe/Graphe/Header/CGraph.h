#pragma once
#include "CGraphOrient.h"

template <typename TArc, typename TSommet>
class CGraph : public CGraphOrient<TArc, TSommet> {
public:
	void GRA_AjouterArcNonOriente(string SommetDebut, string SommetFin);

	/***********************************************
	* Nom : GRA_AjouterArcNonOriente
	* Description : Ajoute un arc non oriente entre deux sommets
	* Parametre d'entree : id du sommet de debut et du fin
	* Parametre de sortie : aucun
	* Pré-condition : les deux sommets doivent exister
	* Post-condition : un arc non oriente est ajoute entre les deux sommets
	* return : aucun
	***********************************************/

	void GRA_SuprimerSommet(string id);
	/***********************************************
	* Nom : GRA_SuprimerSommet
	* Description : Supprime un sommet du graphe
	* Parametre d'entree : id du sommet a supprimer
	* Parametre de sortie : aucun
	* Pré-condition : le sommet doit exister
	* Post-condition : le sommet est supprime du graphe
	* return : aucun
	* ***********************************************/


	void GRA_ModifierArcNonOriente(string sommetDebutInitial, string sommetFinInitial, string NvSommmetDebut, string NvSommetFin);
	/***********************************************
	* Nom : GRA_ModifierArcNonOriente
	* Description : Modifie un arc non oriente entre deux sommets
	* Parametre d'entree : id du sommet de debut et du fin, les nouveaux id des sommets de debut et de fin
	* Parametre de sortie : aucun
	* Pré-condition : les deux sommets doivent exister
	* Post-condition : l'arc non oriente est modifie
	* return : aucun
	* ***********************************************/

	void GRA_SuprimerArcNonOriente(string sommetDebut, string sommetFin);
	/***********************************************
	* Nom : GRA_SuprimerArcNonOriente
	* Description : Supprime un arc non oriente entre deux sommets
	* Parametre d'entree : id du sommet de debut et du fin
	* Parametre de sortie : aucun
	* Pré-condition : les deux sommets doivent exister
	* Post-condition : l'arc non oriente est supprime
	* return : aucun
	* ***********************************************/
};


#include "../TemplateClasse/CGraph.th"

