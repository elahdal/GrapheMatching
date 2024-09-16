#pragma once

#include "CGraphOrient.h"
#include "CGraph.h"

#include <string>
#include <iostream>

template <typename Arc, typename Sommet>
class AGraph {
private:
    CGraphOrient<Arc, Sommet>* graph;

public:
    AGraph();
    /******************************************
    * Constructeur de la classe AGraph
    * @nom : AGraph
    * @param Graphe : un graphe orient�
    * @return void
    *****************************************/
    AGraph(CGraphOrient<Arc, Sommet>& Graphe);
    /******************************************
    * Nom : AGraph
    * Description : Constructeur de copie de la classe AGraph
    * Parametre d'entree : un graphe
    * Parametre de sortie : void
    * Pr�-condition : le graphe doit �tre initialis�
    * Post-condition : le graphe est copi�
    *****************************************/
    ~AGraph();
    /******************************************
    * Nom : ~AGraph
    * Description : Destructeur de la classe AGraph
    * Parametre d'entree : void
    * Parametre de sortie : void
    * Pr�-condition : le graphe doit �tre initialis�
    * Post-condition : le graphe est d�truit
    *****************************************/
    void A_AffichierGraphe();
    /******************************************
    * Nom : A_AffichierGraphe
    * Description : Affiche le graphe
    * Parametre d'entree : void
    * Parametre de sortie : void
    * Pr�-condition : le graphe doit �tre initialis�
    * Post-condition : le graphe est affich�
    *****************************************/

};


#include "../TemplateClasse/AfficherGraphe.th"
#include "../InlineFonctions/AfficheGraphe.hin"


