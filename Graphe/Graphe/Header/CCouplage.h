#pragma once
#include "CGraph.h"
template <typename TArc>

class CCouplage {
public:
	
	 bool COU_TestCouplageMaximal(const CGraph<CArc, CSommet>& graph, list<TArc*> couplage);
	/***********************************************
	* Nom : GRA_TestCouplage
	* Description : Teste si un couplage est maximum
	* Parametre d'entree : le graphe non oriente
	* Parametre de sortie : aucun
	* Pré-condition : Graphe non oriente
	* Post-condition : id des sommets du couplage
	* return : true si le couplage est maximum, false sinon
	* ***********************************************/

	bool COU_TestCouplage(const CGraph<CArc, CSommet>& graph, list<TArc*> couplage);

	 list<TArc*> COU_Couplage(const CGraph<CArc, CSommet>& graph);
};
