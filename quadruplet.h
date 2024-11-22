#ifndef QUADRUPLET_H  // Header guard
#define QUADRUPLET_H

// Définition des structures
typedef struct quadruplet {
    char *opt;
    char *opd1;
    char *opd2;
    char *res;
} quad;

typedef struct element_pile {
    char *donnee;
    struct element_pile *prc;
} pile;

// Variables globales
extern char tempp[5];
extern char idfSwitch[15];
extern char defaultTemp[15];
extern char idfQuad[15];

extern quad QuadR[1000];  // tableau pour garder les quadruplets
extern pile *pile1, *pile2, *pile3;
extern int qc;  // variable d'indice dans le tableau QuadR

// Prototypes des fonctions
char* ToSTR(int i);
void createQuad(char* opt, char* opd1, char* opd2, char* res);
void createQuadA(int type, char *cond1, char *cond2, char *res);
void createQuadL(int type, char *cond1, char *cond2, char *res);
void empiler_Str(pile **p, char *donne);
void empiler_Int(pile **p, int donne);
char* first(pile *p);
char* depiler(pile **p);
void displayQuad();

#endif  // QUADRUPLET_H