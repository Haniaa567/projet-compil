#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef TEST
#define TEST
extern int col;
extern int  nb_ligne;

//inisialistaion si la case est vide on met 0 sinon 1
void initialisation();
void insererKeywords(char entite[], char code[],char type[],char val[],int i);
void insererseparateur(char entite[], char code[],char type[],char val[],int i);

void rechercherIDFCONST (char entite[], char code[],char type[],char val[])	;
void rechercherKeywords (char entite[], char code[],char type[],char val[])	;
void rechercherseparateur (char entite[], char code[],char type[],char val[]);	


void rechercher(char entite[], char code[], char type[], char val[], int choix);

void afficher(int y);

//Etape 6:les fonction qui retourne les postions des éléments dans le tableaux selon leur identifiants
// pour le tab "tab"
int positionIDF(char entite[]);
//pour le tab "tabm" peut etre utilisé pour vérfier si cette bibliothéque existe deja ou non ..ect
int positionKeyworld(char entite[]);

//pour le tab "tabs"

int positionSeparateur(char entite[]);

// Etape 7: les fonctions de modifications des cases:
void insererType(char type[],char entite[]);
//cette fonction insere une valeur dans une entité déja déclarer
void insererVal(char entite[],char Val[]);

//la fonction qui modifie le code des idfs constants

void insererCode(char entite[]);

//Etape 8: les fonctions de verification

//cette fonction vérifie si une valeur est déclarer y'as pas son type
int verifdeclaration(char entite[]);
//la fonction qui verifie si l'idf est une constante

int verifconstante(char entite[]);
// la fonction qui vérfie si une entité a une valeur

int verifvaleurvide(char entite[]);
//cette fonction qui vérifie si deux type sont compatible
int verifcmpType(char entite[],char type[]);
//verifie la double declaration au cas du 2 tableau
int DoubleDecKeyworld(char entite[]);
//verifie la double declaration au cas du 3 tableau
int DoubleDecSEP(char entite[]);
//Etape 9:les fonction get

char* getType(char entite[]);



char* getVal(char entite[]);

char* getCode(char entite[]);

int typesCompatibles(char entite1[],char entite2[]);

void insererTableauElement(char entite[],char code[], int index, char val[],char type[]);


#endif