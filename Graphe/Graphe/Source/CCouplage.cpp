using namespace std;
#include <iostream>
#include "../Header/CCouplage.h"
#include "../Header/CGraph.h"
#include "../Header/CArc.h"
#include "../Header/CSommet.h"
#include <string>

template <typename TArc>
 bool CCouplage<TArc>::COU_TestCouplageMaximal(const CGraph<CArc, CSommet>& graph, list<TArc*> couplageArc) {
	CException exception;

	list<pair<CSommet*, CSommet*>> couplage;

	for (const auto& arc1 : couplageArc) {
		CSommet* sommet1 = graph.GRO_GetInstanceSommet(arc1->ARCGetSommetDebut());
		CSommet* sommet2 = graph.GRO_GetInstanceSommet(arc1->ARCGetSommetFin());

		if (sommet1 && sommet2) {
			couplage.emplace_back(sommet1, sommet2);
		}
		else {
			exception.EXC_ModifierMessage(EXC_Erreur_id);
			throw exception;
		}

	}

	for (const auto& arc : graph.GRO_GetListeArc()) {
		bool peutEtreAjouter = true;
		for (const auto& arcCouplage : couplage) {
			if (arc->ARCGetSommetDebut() == arcCouplage.first->SOM_GetIdSommet() || arc->ARCGetSommetDebut() == arcCouplage.second->SOM_GetIdSommet() ||
				arc->ARCGetSommetFin() == arcCouplage.first->SOM_GetIdSommet() || arc->ARCGetSommetFin() == arcCouplage.second->SOM_GetIdSommet()) {
				peutEtreAjouter = false;
				break;
			}
		}
		if (peutEtreAjouter) {
			return false;
		}
	}

	return true;
}

template <typename TArc>
bool CCouplage<TArc>::COU_TestCouplage(const CGraph<CArc, CSommet>& graph, list<TArc*> couplageArc) {
	CException exception;
	list<pair<CSommet*, CSommet*>> couplage;

	for (const auto& arc1 : couplageArc) {
		CSommet* sommet1 = graph.GRO_GetInstanceSommet(arc1->ARCGetSommetDebut());
		CSommet* sommet2 = graph.GRO_GetInstanceSommet(arc1->ARCGetSommetFin());

		if (sommet1 && sommet2) {
			couplage.emplace_back(sommet1, sommet2);
		}
		else {
			exception.EXC_ModifierMessage(EXC_Erreur_id);
			throw exception;
		}

	}

	for (const auto& arc1 : couplage) {
		for (const auto& arc2 : couplage) {
			if (arc1 != arc2 && (arc1.first == arc2.first || arc1.second == arc2.second)) {
				return false;
			}
		}
	}
	return true;
}

template <typename TArc>
 list<TArc*> CCouplage<TArc>::COU_Couplage(const CGraph<CArc, CSommet>& graph) {
	list<TArc*> Couplage;
	Couplage.push_back(graph.GRO_GetInstanceArc("1", "2"));
	Couplage.push_back(graph.GRO_GetInstanceArc("3", "4"));
	//Couplage.push_back(graph.GRO_GetInstanceArc("6", "7"));
	return Couplage;

}
