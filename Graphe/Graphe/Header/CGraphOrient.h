#pragma once

using namespace std;
#include <list>
#include <string.h>
#include "CArc.h"
#include "CSommet.h"
#include "CException.h"


template <typename Arc, typename Sommet>
class CGraphOrient {
	//LES ATTRIBUTS
private:
	list<Sommet*> lpGRO_listeSommet;
	list<Arc*> lpGRO_listeArc;
public:

	//LES CONSTRUCTEURS 
	
	CGraphOrient();
	/****************************************
	* Nom: CGraphOrient
	* ****************************************
	* Entree: Rien
	* Nécessite: Rien
	* Sortie: Rien
	* Entraine: Constructeur de la classe CGraphOrient
	* Post-condition: rien
	* *************************************/

	~CGraphOrient();
	/****************************************
	* Nom: ~CGraphOrient();
	* ****************************************
	* Entree: void
	* Nécessite: Rien
	* Sortie: void
	* Entraine: Destructeur de la classe CGraphOrient
	* Pré-condition: rien
	* *************************************/

	CGraphOrient(const CGraphOrient& Graph);
	/****************************************
	* Nom: CGraphOrient()
	* ****************************************
	* Entree: void
	* Nécessite: Rien
	* Sortie: void
	* Entraine: Copie de l'objet
	* Pré-condition: l'objet doit etre initialisé
	* *************************************/

	//LES METHODES 

	list<Sommet*> GRO_GetlisteSommet();
	/****************************************
	* Nom: GRO_GetlisteSommet
	* ****************************************
	* Entree: void
	* Nécessite: Rien
	* Sortie: liste de pointeurs vers des Sommets
	* Entraine: (Recuperer la liste de pointeurs des sommets)
		ou (EXCEPTION: EXC_PAS_ASSEZ_DE_SOMMET )
	* Pré-condition: rien
	* *************************************/

	int GRO_GetSizeListeSommet();
	/****************************************
	* Nom: GRO_GetSizeListeSommet
	* ****************************************
	* Entree: rien
	* Nécessite: Rien
	* Sortie: entier
	* Entraine: (Recupere la taille de la liste de sommet)
	* *************************************/

	Sommet* GRO_GetInstanceSommet(string id) const;
	/****************************************
	* Nom: GRO_GetInstanceSommet
	* ****************************************
	* Entree: string id
	* Nécessite: Rien
	* Sortie: Sommet*
	* Entraine: (Recupere l'instance du sommet voulu)
		ou (EXCEPTION EXC_SOMMET_INTROUVABLE)
		ou (EXCEPTION EXC_PAS_ASSEZ_DE_SOMMET)
	* *************************************/

	bool GRO_SommetEstDansGraph(string id);
	/****************************************
	* Nom: GRO_SommetEstDansGraph
	* ****************************************
	* Entree: string id
	* Nécessite: Rien
	* Sortie: booléen
	* Entraine: (Revoie vrai ou faux si le sommet est dans le graphe)
	* Pré-condition: rien
	* *************************************/

	bool GRO_ArcEstDansGraph(string SommetDebut, string SommetFin);
	/****************************************
	* Nom: GRO_ArcEstDansGraph
	* ****************************************
	* Entree: string sommetdebut, string sommetfin
	* Nécessite: Rien
	* Sortie: booléen
	* Entraine: (Revoie vrai ou faux si l'arc est dans le graphe)
	* Pré-condition: rien
	* *************************************/

	void GRO_VerifierAllocationMemoire(Sommet* sommet);
	/****************************************
	* Nom: GRO_VerifierAllocationMemoire
	* ****************************************
	* Entree: Sommet*
	* Nécessite: Rien
	* Sortie: Rien
	* Entraine: (Revoie une exception si le sommet n'a pas bien été alloué: EXC_ERREUR_GESTION_ESPACE_MEMOIRE )
	* Pré-condition: rien
	* *************************************/

	void GRO_VerifierAllocationMemoire(Arc* arc);
	/****************************************
	* Nom: GRO_VerifierAllocationMemoire
	* ****************************************
	* Entree: Arc*
	* Nécessite: Rien
	* Sortie: Rien
	* Entraine: (Revoie une exception si l'arc n'a pas bien été alloué: EXC_ERREUR_GESTION_ESPACE_MEMOIRE )
	* Pré-condition: rien
	* *************************************/

	void GRO_AjouterSommet(string id);
	/****************************************
	* Nom: GRO_AjouterSommet
	* ****************************************
	* Entree: string id
	* Nécessite: Rien
	* Sortie: rien
	* Entraine: (Ajoute un sommet au garphe)
		ou (EXCEPTION EXC_SOMMET_EXISTE_DEJA)
		ou (EXCEPTION EXC_ERREUR_GESTION_ESPACE_MEMOIRE)
	* Pré-condition: rien
	* *************************************/

	void GRO_ModifierSommet(string id, string newId);
	/****************************************
	* Nom: GRO_ModifierSommet
	* ****************************************
	* Entree: string id, string newId
	* Nécessite: Rien
	* Sortie: rien
	* Entraine: (Modifie un sommet du garphe)
		ou (EXCEPTION EXC_SOMMET_INTROUVABLE)
		ou (EXCEPTION EXC_SOMMET_EXISTE_DEJA)
	* Pré-condition: rien
	* *************************************/

	void GRO_AjouterArc(string SommetDebut, string SommetFin);
	/****************************************
	* Nom: GRO_AjouterArc
	* ****************************************
	* Entree: string sommetdebut, string sommetfin
	* Nécessite: Rien
	* Sortie: Rien
	* Entraine: (Ajoute un arc du sommet de debut au sommet de fin )
		ou (EXCEPTION EXC_PAS_ASSEZ_DE_SOMMET)
		ou (EXCEPTION EXC_SOMMET_DEBUT_FIN)
		ou (EXCEPTION EXC_SOMMET_INTROUVABLE)
		ou (EXCEPTION EXC_ARC_EXISTE_DEJA)
	* *************************************/

	void GRO_SuprimerToutArcEntrantAuSommet(string id);
	/****************************************
	* Nom: GRO_SuprimerToutArcEntrantAuSommet
	* ****************************************
	* Entree: string id
	* Nécessite: Rien
	* Sortie: rien
	* Entraine: (Suprimme tout les arcs entrants au sommet)
		ou (EXCEPTION EXC_SOMMET_INTROUVABLE)
	* *************************************/

	void GRO_SuprimerToutArcSortantDuSommet(string id);
	/****************************************
	* Nom: GRO_SuprimerToutArcSortantDuSommet
	* ****************************************
	* Entree: string id
	* Nécessite: Rien
	* Sortie: rien
	* Entraine: (Suprimme tout les arcs Sortant Du Sommet)
		ou (EXCEPTION EXC_SOMMET_INTROUVABLE)
	* *************************************/

	void GRO_SuprimerSommet(string id);
	/****************************************
	* Nom: GRO_SuprimerSommet
	* ****************************************
	* Entree: string id
	* Nécessite: Rien
	* Sortie: rien
	* Entraine: (Suprimme le sommet avec tout ses arcs entrants et sortants
		ou (EXCEPTION EXC_SOMMET_INTROUVABLE)
	* *************************************/

	CGraphOrient<Arc, Sommet> GRO_InverserGraph();
	/****************************************
	* Nom: GRO_InverserGraph
	* ****************************************
	* Entree: rien
	* Nécessite: Rien
	* Sortie: CGraphOrient<Arc, Sommet>
	* Entraine: (Cree une nouvelle instence de CgraphOrient
		et inverse le graphe initial dans cette nouvelle instence)
	* *************************************/

	CGraphOrient& operator=(CGraphOrient& Graph);
	/****************************************
	* Nom: operator=
	* ****************************************
	* Entree: CGraphOrient& Graph
	* Nécessite: Rien
	* Sortie: CGraphOrient&
	* Entraine: (Copie l'objet)
	* *************************************/

	void GRO_SuprimerArc(string sommetDebut, string sommetFin);
	/****************************************
	* Nom: GRO_SuprimerArc
	* ****************************************
	* Entree: string sommetdebut, string sommetfin
	* Nécessite: Rien
	* Sortie: rien
	* Entraine: (Suprimme l'arc du sommet de debut au sommet de fin)
		ou (EXCEPTION EXC_ARC_EXISTE_PAS) 
	* *************************************/

	void GRO_ModifierArc(string sommetDebutInitial, string sommetFinInitial, string SommetDebut, string SommetFin);
	/****************************************
	* Nom: GRO_ModifierArc
	* ****************************************
	* Entree: string sommetDebutInitial, string sommetFinInitial, string sommetDebut, string sommetFin
	* Nécessite: Rien
	* Sortie: rien
	* Entraine: (Modifie l'arc du sommet de debut initial au sommet de fin initial en l'arc du sommet de debut au sommet de fin)
		ou (EXCEPTION EXC_SOMMET_DEBUT_FIN) ou (EXCEPTION EXC_ARC_EXISTE_PAS) ou (EXCEPTION EXC_SOMMET_INTROUVABLE)
	* *************************************/

	Arc* GRO_GetInstanceArc(string sommetDebut, string sommetFin);
	/****************************************
	* Nom: GRO_GetInstanceArc
	* ****************************************
	* Entree: string sommetDebut, string sommetFin
	* Nécessite: Rien
	* Sortie: Arc*
	* Entraine: (Recupere l'instance de l'arc voulu)
		ou (EXCEPTION EXC_ARC_EXISTE_PAS)
	* *************************************/
	const list<Arc*>& GRO_GetListeArc() const {
		return lpGRO_listeArc;
	}
	/****************************************
	* Nom: GRO_GetListeArc
	* ****************************************
	* Entree: rien
	* Nécessite: Rien
	* Sortie: list<Arc*>
	* Entraine: (Recupere la liste des arcs)
	* *************************************/

};

#include "../TemplateClasse/CGraphOrient.th"
#include "../InlineFonctions/CGraphOrient.hin"






