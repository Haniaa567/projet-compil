#ifndef HEADER_H
#define HEADER_H

// Inclure les bibliothèques nécessaires
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct QUAD {
    char OPR1[40];
    char OPR2[40];
    char OPR3[40];
    char RESULT[40];
    int QN;
    struct QUAD* SVT;
} QUAD;


typedef struct ENTITE {
    char name[50];        // Nom de l'entité (variable ou constante)
    char TypeE[10];       // Type de l'entité (par ex., "Integer", "Float")
    char State[10];       // État (par ex., "VAR" pour une variable ou "CONST" pour une constante)
    int TailleE;          // Taille de l'entité (utile pour les tableaux ou structures)
    struct ENTITE* next;   // Pointeur vers l'entité suivante dans la liste
} ENTITE;

// Déclaration des fonctions
void InsertQ(QUAD** Tete, const char* OPR1, const char* OPR2, const char* OPR3, const char* RESULT, int QN);
void ShowQ(QUAD** Tete);
void MAJQ(QUAD** Tete, int QN, int QFin);
int Search(ENTITE** TeteTS, char* name);
void Opt1(QUAD** TeteQ, ENTITE** TeteTS);
void Useless(QUAD** TeteQ, ENTITE** TeteTS);
void Machine(QUAD** TeteQ, ENTITE** TeteTS);

#endif // HEADER_H



