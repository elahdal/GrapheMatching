#include "../Header/CArc.h"
#include <string>
using namespace std;


string CArc::ARCGetSommetDebut() { 

    // On renvoie le sommet de début de l'arc
    return sARCSommetDebut; 
}

string CArc::ARCGetSommetFin() { 

    // On renvoie le sommet de fin de l'arc
    return sARCSommetFin; 
}

void CArc::ARCSetSommetDebut(string SommeDeb) { 

    // On assigne le sommet de début de l'arc
    sARCSommetDebut = SommeDeb; 
}
void CArc::ARCSetSommetFin(string SommeFin) { 

    // On assigne le sommet de fin de l'arc
    sARCSommetFin = SommeFin; 
}
