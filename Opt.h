#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TableSymbole.h"
#include "quadruplet.h"
#ifndef OPT_H
#define OPT_H



// Fonction principale d'optimisation
void optimisation();

// Fonction qui optimise la multiplication par 2 (x*2 => x+x)
void checkX2(quad *q);

// Fonction qui optimise les puissances de 2 (x^2 => x*x)
void checkPow(quad *q);

// Fonction qui vérifie l'utilisation des variables
void checkVarUse(element *tab, quad *q);

// Fonction qui vérifie et optimise la propagation des copies
void chekPropCopie(quad *q);

#endif // OPT_H