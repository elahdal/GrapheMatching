using namespace std;
#include <string>
#include <iostream>
#include <list>
#include "../Header/CSommet.h"



void CSommet::SOM_SuprimerArcSortant(CArc* SOMParam) {
	lpSOM_ArcSortant.remove(SOMParam);
}

void CSommet::SOM_SuprimerArcEntrant(CArc* SOMParam) {
	lpSOM_ArcEntrant.remove(SOMParam);
}

void CSommet::SOM_AjouterArcEntrant(CArc* SOMParam) {
	lpSOM_ArcEntrant.push_back(SOMParam);
}

void CSommet::SOM_AjouterArcSortant(CArc* SOMParam) {
	lpSOM_ArcSortant.push_back(SOMParam);
}


string CSommet::SOM_GetIdSommet() {
	return sSOM_IdSommet;
}


void CSommet::SOM_SetIdSommet(string SOMParam) {
	sSOM_IdSommet = SOMParam;
}






