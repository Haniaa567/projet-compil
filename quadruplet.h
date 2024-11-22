#ifndef QUADRUPLET_H
#define QUADRUPLET_H

// Structure pour les quadruplets
typedef struct {
    char* opt;
    char* opd1;
    char* opd2;
    char* res;
} quad;

// Structure pour la pile
typedef struct pile {
    char* donnee;
    struct pile* prc;
} pile;

// Variables externes
extern quad QuadR[1000];
extern int qc;
extern pile *pile1, *pile2, *pile3;
extern char tempp[5];
extern char idfSwitch[15];
extern char defaultTemp[15];
extern char idfQuad[15];

// Déclarations des fonctions
void createQuad(char *opt, char *opd1, char *opd2, char *res);
char* ToSTR(int i);
void createQuadA(int type, char *cond1, char *cond2, char *res);
void createQuadL(int type, char *cond1, char *cond2, char *res);
void empiler_Str(pile **p, char *donne);
void empiler_Int(pile **p, int donne);
char* first(pile *p);
char* depiler(pile **p);
void displayQuad();
char* newtemp();

#endif