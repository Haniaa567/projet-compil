#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TableSymbole.h"

int col= 1;
int nb_ligne=1;
//Etape1: La définition des structures qu'on vas utlisé 
typedef struct
{
   int state;//pour indiquer si la case est occupée
   char name[20];//nom de l'entité
   char code[20];//type de code associé
   char type[20];//type de l'entité
   char val[40];//Dans le cas ou le type est integer ou float on vas faire une transaction de char vers int attention
 } element;


typedef struct
{ 
   int state; 
   char name[20];
   //char code[20];
   char type[20];
} elt;
//Les tableaux tab, tabs, et tabm stockent respectivement les identifiants/constantes, les séparateurs et les mots-clés.(il a crée trois ts)
element tab[1000];
elt tabs[40],tabm[40];
// Etape2: l'instialisation des trois tableaux utilisés
//inisialistaion si la case est vide on met 0 sinon 1
void initialisation()
{
  int i;
  for (i=0;i<1000;i++)
  tab[i].state=0;
  
  

  for (i=0;i<40;i++)
    {tabs[i].state=0;
    tabm[i].state=0;}

}
//Etape3: inseertion des entités lexicales
void insererIDFCONST(char entite[], char code[],char type[],char val[],int i)
{
       tab[i].state=1;
       strcpy(tab[i].name,entite);
       strcpy(tab[i].code,code);
	   strcpy(tab[i].type,type);
       strcpy(tab[i].val,val);
	  

}

void insererKeywords(char entite[], char code[],char type[],char val[],int i)
{
 
       tabm[i].state=1;
       strcpy(tabm[i].name,entite);
       //strcpy(tabm[i].code,code);
	   strcpy(tabm[i].type,code);
 
 }
void insererseparateur(char entite[], char code[],char type[],char val[],int i)
{
      tabs[i].state=1;
      strcpy(tabs[i].name,entite);
      strcpy(tabs[i].type,code);

}
//etape4:les fonctions de recherche ces fonctions recherchent les entites dans chacune de leur tabs si elle trouve une case vide elle insére sinon elle retoutne une erreur


void rechercherIDFCONST (char entite[], char code[],char type[],char val[])	
{

int j,i;


  //verifier si la case dans la tables des IDF et CONST est libre
        for (i=0;((i<1000)&&(tab[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++); 
        if(tab[i].state==0)
        { 
	        
			insererIDFCONST(entite,code,type,val,i); 
	      
         }
		 
        else if (strcmp(entite,tab[i].name)==0){
          printf("entite (%s) existe deja\n",entite);
		}
		else if (i>=1000)
		{ printf("La table des symboles des idfs est pleine");}
   



}

void rechercherKeywords (char entite[], char code[],char type[],char val[])	
{

int j,i;


 //verifier si la case dans la tables des mots clés est libre si 1 on affiche un message d'erreur si 0  on insére
       
       for (i=0;((i<40)&&(tabm[i].state==1))&&(strcmp(entite,tabm[i].name)!=0);i++); 
        if(tabm[i].state==0){
		insererKeywords(entite,code,type,val,i);}
        else if (strcmp(entite,tabm[i].name)==0){
		printf("entite (%s) existe deja\n",entite);}
		else if (i>=40){
		printf ("La table des mots cles est pleine");}
   
    


  }

void rechercherseparateur (char entite[], char code[],char type[],char val[])	
{

int j,i;

  //verifier si la case dans la tables des séparateurs est libre si 1 on affiche un message d'erreur si 0 on insére
         for (i=0;((i<40)&&(tabs[i].state==1))&&(strcmp(entite,tabs[i].name)!=0);i++); 
        if(i<40)
         insererseparateur(entite,code,type,val,i);
        else
   	       printf("entite (%s) existe deja\n",entite);
      
    


  }



void rechercher(char entite[], char code[], char type[], char val[], int choix) {
    int j, i;
    
    switch(choix) {
        case 0: // rechercherIDFCONST
            /*verifier si la case dans la tables des IDF et CONST est libre*/
            for (i=0;((i<1000)&&(tab[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++); 
            if(tab[i].state==0)
            { 
                insererIDFCONST(entite,code,type,val,i); 
            }
            else if (strcmp(entite,tab[i].name)==0){
                printf("entite (%s) existe deja\n",entite);
            }
            else if (i>=1000)
            { 
                printf("La table des symboles des idfs est pleine");
            }
            break;
            
        case 1: // rechercherKeywords
            /*verifier si la case dans la tables des mots clés est libre si 1 on affiche un message d'erreur si 0  on insére*/
            for (i=0;((i<40)&&(tabm[i].state==1))&&(strcmp(entite,tabm[i].name)!=0);i++); 
            if(tabm[i].state==0){
                insererKeywords(entite,code,type,val,i);
            }
            else if (strcmp(entite,tabm[i].name)==0){
                printf("entite (%s) existe deja\n",entite);
            }
            else if (i>=40){
                printf ("La table des mots cles est pleine");
            }
            break;
            
        case 2: // rechercherseparateur
            //verifier si la case dans la tables des séparateurs est libre si 1 on affiche un message d'erreur si 0 on insére
            for (i=0;((i<40)&&(tabs[i].state==1))&&(strcmp(entite,tabs[i].name)!=0);i++); 
            if(i<40)
                insererseparateur(entite,code,type,val,i);
            else
                printf("entite (%s) existe deja\n",entite);
            break;
            
        default:
            printf("Choix invalide. Utilisez 1 pour IDF/CONST, 2 pour Keywords, ou 3 pour separateur\n");
            break;
    }
}
//Etape 5:l'affichage des tables de symboles


void afficher(int y) {

    int i;
    switch(y){

    case 0:
    printf("/***************Table des symboles IDF*************/\n");
    printf("____________________________________________________________________\n");
    printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite\n");
    printf("____________________________________________________________________\n");
    
    for(i=0;i<50;i++) {	
        if(tab[i].state==1)
        { 
            printf("\t|%10s |%15s | %12s | %12s\n",tab[i].name,tab[i].code,tab[i].type,tab[i].val);    
        }
    }
    break;
    case 1:
    printf("\n/***************Table des symboles mots cles*************/\n");
    printf("____________________________________________________________\n");
    printf("\t| Nom_Entite             |         Type_Entite |\n");
    printf("____________________________________________________________\n");
    
    for(i=0;i<40;i++){
        if(tabm[i].state==1){ 
            printf("\t|%20s  | |%20s | \n",tabm[i].name, tabm[i].type);       
        }
    }
    break;
    case 2:
    printf("\n/***************Table des symboles separateurs*************/\n");

    printf("_____________________________________\n");
    printf("\t| NomEntite |  CodeEntite | \n");
    printf("_____________________________________\n");
    
    for(i=0;i<40;i++){
        if(tabs[i].state==1) { 
            printf("\t|%10s |%12s | \n",tabs[i].name,tabs[i].type);   
        }
    } 
    break;
    }

}

//Etape 6:les fonction qui retourne les postions des éléments dans le tableaux selon leur identifiants
// pour le tab "tab"
int positionIDF(char entite[])
{
    int i=0;
    for(i=0;i<1000;i++)
    {
     if (strcmp(entite,tab[i].name)==0){return i;}
    }
    return(-1);
}

//pour le tab "tabm" peut etre utilisé pour vérfier si cette bibliothéque existe deja ou non ..ect
int positionKeyworld(char entite[])
{
       int i=0;
    for(i=0;i<40;i++)
    {
     if (strcmp(entite,tabm[i].name)==0){return i;}
    }
    return(-1);
}

//pour le tab "tabs"

int positionSeparateur(char entite[])
{
    int i=0;
    for(i=0;i<40;i++)
    {
     if (strcmp(entite,tabs[i].name)==0){return i;}
    }
    return(-1);
} 


// Etape 7: les fonctions de modifications des cases:
void insererType(char type[],char entite[])
{
    int pos;
    pos=positionIDF(entite);
    if(pos != -1){
        strcpy(tab[pos].type,type);
    }
    else{
        printf("l'élément n'existe pas");
    }
}

//cette fonction insere une valeur dans une entité déja déclarer
void insererVal(char entite[],char Val[])
{
    int pos;
    pos=positionIDF(entite);
    if(pos != -1)
    {
      strcpy(tab[pos].val,Val);
    }
    else{
                printf("here\n");

        printf("l'élément n'existe pas");
    }
}

//la fonction qui modifie le code des idfs constants

void insererCode(char entite[])
{
    int pos;
    pos=positionIDF(entite);
    if(pos !=-1)
    {
        strcpy(tab[pos].code,"IDF CONSTANT");
    }
    else{
        printf("l'élément n'existe pas");
    }
}

//Etape 8: les fonctions de verification

//cette fonction vérifie si une valeur est déclarer y'as pas son type
int verifdeclaration(char entite[])
{
    int pos;
    printf("Vérification de la déclaration pour : %s\n", entite);
    pos=positionIDF(entite);
     if( strcmp(tab[pos].type,"")==0){return(0);}//la variable n'est pas déclaré 
     else{return(1);}



}
//la fonction qui verifie si l'idf est une constante

int verifconstante(char entite[])
{
    int position;
	position =positionIDF(entite);
	if (position != -1) 
	{
		if (strcmp(tab[position].code,"IDF CONSTANT")==0){return 1;}
		else {return -1;}
	}

}
// la fonction qui vérfie si une entité a une valeur

int verifvaleurvide(char entite[])
{
    int pos;
    pos=positionIDF(entite);
    if(pos != -1)
    {
        if(strcmp(tab[pos].val,"")==0){return 1;} 
    }
    else{
        return(-1);
    }
}
//cette fonction qui vérifie si deux type sont compatible
int verifcmpType(char entite[],char type[])
{
    int position;
	position =positionIDF(entite);
	if (position != -1) 
	{
		if (strcmp(tab[position].type,type)==0){return 1;}//le type est compatible
		else {return 0;}//le type n'est pas compatible
	}
}
//verifie la double declaration au cas du 2 tableau
int DoubleDecKeyworld(char entite[]){
    int i = 0;
    for (i;i <40; i++){
       if (strcmp(entite,tabm[i].name)==0 && strcmp(tabm[i].type," ")==0){ return -1;}//le mot clé n'est pas declaree
   }
  return 1;//le mot clée est  declaree

}
//verifie la double declaration au cas du 3 tableau
int DoubleDecSEP(char entite[]){
    int i = 0;
    for (i;i <40; i++){
       if (strcmp(entite,tabs[i].name)==0 && strcmp(tabm[i].type," ")==0){ return -1;}//le mot clé n'est pas declaree
   }
  return 1;//le mot clée est  declaree

}
//Etape 9:les fonction get

char* getType(char entite[]){
  int position;
  position = positionIDF(entite);
  if (position!=-1){
    return tab[position].type;
  }
}


char* getVal(char entite[]){
  int position;
  position = positionIDF(entite);
  if (position!=-1){
    return tab[position].val;
  }
}

char* getNom(char entite[]){
  int position;
  position = positionIDF(entite);
  if (position!=-1){
    return tab[position].name;
  }
}

char* getCode(char entite[]){
  int position;
  position = positionIDF(entite);
  if (position!=-1){
    return tab[position].code;
  }
}
//comparer code
int comparCode(char entite[])
	{
	int pos;
	pos=positionIDF(entite);
	if(strcmp(tab[pos].code,"CONSTANT")==0){return 0;} 
	   else {return -1;}

}
/*
int typesCompatibles(char* varName, int exprType) {
    char* varType = getType(varName); // Récupère le type déclaré
    return strcmp(varType, exprType) == 0; // Vérifie la compatibilité
}*/
char* convertToString(int value) {
    static char buffer[20];
    snprintf(buffer, sizeof(buffer), "%d", value); // Convertit en chaîne
    return buffer;
}
//i,serer tab
void insererTableauElement(char entite[], char code[],int index, char val[], char type[]) {
    int i;
    char nomComplet[30];
    
    // Créer un nom pour l'élément de tableau, ex. "tc[5]"
    snprintf(nomComplet, sizeof(nomComplet), "%s[%d]", entite, index);

    // Chercher une position libre dans la table
    for (i = 0; i < 1000 && tab[i].state == 1 && strcmp(nomComplet, tab[i].name) != 0; i++);

    if (i < 1000 && tab[i].state == 0) {
        tab[i].state = 1;
        strcpy(tab[i].name, nomComplet);
        strcpy(tab[i].type, type);
        strcpy(tab[i].val, val);
        strcpy(tab[i].code, code);
        printf("Insertion de l'élément %s avec la valeur %s\n", nomComplet, val);
    } else if (i < 1000 && strcmp(nomComplet, tab[i].name) == 0) {
        printf("L'élément %s existe déjà avec la valeur %s\n", nomComplet, tab[i].val);
    } else {
        printf("La table des symboles est pleine\n");
    }
}
//modifier code
void modifierCode(char code[],char entite[])
{
    int pos;
    pos=positionIDF(entite);
    if(pos !=-1)
    {
        printf("here\n");
        strcpy(tab[pos].code,code);
    }
    else{
        printf("l'élément n'existe pas");
    }
}