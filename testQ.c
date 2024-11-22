#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Déclaration de la structure ENTITE pour éviter les erreurs
typedef struct ENTITE {
    char name[50];        // Nom de l'entité (variable ou constante)
    char TypeE[10];       // Type de l'entité (par ex., "Integer", "Float")
    char State[10];       // État (par ex., "VAR" pour une variable ou "CONST" pour une constante)
    int TailleE;          // Taille de l'entité (utile pour les tableaux ou structures)
    struct ENTITE* next;   // Pointeur vers l'entité suivante dans la liste
} ENTITE;


typedef struct QUAD {
    char OPR1[40];
    char OPR2[40];
    char OPR3[40];
    char RESULT[40];
    int QN;
    struct QUAD* SVT;
} QUAD;

// Fonction pour insérer un QUAD dans la liste
/*
void InsertQ(QUAD** Tete, char OPR1[40], char OPR2[40], char OPR3[40], char RESULT[40], int QN) {
    QUAD* Parcourir = *Tete;
    QUAD* NewQ = NULL;

    if (Parcourir != NULL) {
        while (Parcourir->SVT != NULL) {
            Parcourir = Parcourir->SVT;
        }
        NewQ = (QUAD*)malloc(sizeof(QUAD));
        if (!NewQ) {
            perror("Erreur d'allocation mémoire");
            exit(EXIT_FAILURE);
        }
        strncpy(NewQ->OPR1, OPR1,39);
        NewQ->OPR1[39] = '\0'; 
        strncpy(NewQ->OPR2, OPR2,39);
        NewQ->OPR2[39] = '\0';
        strncpy(NewQ->OPR3, OPR3,39);
        NewQ->OPR3[39] = '\0';
        strncpy(NewQ->RESULT, RESULT,39);
        NewQ->RESULT[39] = '\0';

        NewQ->QN = QN;
        NewQ->SVT = NULL;
        Parcourir->SVT = NewQ;
    } else {
        *Tete = (QUAD*)malloc(sizeof(QUAD));
        if (!*Tete) {
            perror("Erreur d'allocation mémoire");
            exit(EXIT_FAILURE);
        }
        strcpy((*Tete)->OPR1, OPR1);
        strcpy((*Tete)->OPR2, OPR2);
        strcpy((*Tete)->OPR3, OPR3);
        strcpy((*Tete)->RESULT, RESULT);
        (*Tete)->QN = QN;
        (*Tete)->SVT = NULL;
    }
}
*/
void InsertQ(QUAD** Tete, const char* OPR1, const char* OPR2, const char* OPR3, const char* RESULT, int QN) {
    QUAD* Parcourir = *Tete;
    QUAD* NewQ = NULL;

    if (Parcourir != NULL) {
        while (Parcourir->SVT != NULL) {
            Parcourir = Parcourir->SVT;
        }
        NewQ = (QUAD*)malloc(sizeof(QUAD));
        if (!NewQ) {
            perror("Erreur d'allocation mémoire");
            exit(EXIT_FAILURE);
        }
        strncpy(NewQ->OPR1, OPR1, sizeof(NewQ->OPR1) - 1);
        strncpy(NewQ->OPR2, OPR2, sizeof(NewQ->OPR2) - 1);
        strncpy(NewQ->OPR3, OPR3, sizeof(NewQ->OPR3) - 1);
        strncpy(NewQ->RESULT, RESULT, sizeof(NewQ->RESULT) - 1);
        
        // Assurer que les chaînes sont terminées par '\0'
        NewQ->OPR1[sizeof(NewQ->OPR1) - 1] = '\0';
        NewQ->OPR2[sizeof(NewQ->OPR2) - 1] = '\0';
        NewQ->OPR3[sizeof(NewQ->OPR3) - 1] = '\0';
        NewQ->RESULT[sizeof(NewQ->RESULT) - 1] = '\0';
        
        NewQ->QN = QN;
        NewQ->SVT = NULL;
        Parcourir->SVT = NewQ;
    } else {
        *Tete = (QUAD*)malloc(sizeof(QUAD));
        if (!*Tete) {
            perror("Erreur d'allocation mémoire");
            exit(EXIT_FAILURE);
        }
        strncpy((*Tete)->OPR1, OPR1, sizeof((*Tete)->OPR1) - 1);
        strncpy((*Tete)->OPR2, OPR2, sizeof((*Tete)->OPR2) - 1);
        strncpy((*Tete)->OPR3, OPR3, sizeof((*Tete)->OPR3) - 1);
        strncpy((*Tete)->RESULT, RESULT, sizeof((*Tete)->RESULT) - 1);
        
        // Assurer que les chaînes sont terminées par '\0'
        (*Tete)->OPR1[sizeof((*Tete)->OPR1) - 1] = '\0';
        (*Tete)->OPR2[sizeof((*Tete)->OPR2) - 1] = '\0';
        (*Tete)->OPR3[sizeof((*Tete)->OPR3) - 1] = '\0';
        (*Tete)->RESULT[sizeof((*Tete)->RESULT) - 1] = '\0';
        
        (*Tete)->QN = QN;
        (*Tete)->SVT = NULL;
    }
}
// Fonction pour afficher les QUADs
void ShowQ(QUAD** Tete) {
    QUAD* Parcourir = *Tete;
    FILE* File = fopen("QUAD.txt", "w+");
    if (!File) {
        perror("Erreur d'ouverture de fichier");
        return;
    }
    while (Parcourir != NULL) {
        fprintf(File, " %d-(%s,%s,%s,%s)\n", Parcourir->QN, Parcourir->OPR1, Parcourir->OPR2, Parcourir->OPR3, Parcourir->RESULT);
        printf("%d-(%s,%s,%s,%s)\n", Parcourir->QN, Parcourir->OPR1, Parcourir->OPR2, Parcourir->OPR3, Parcourir->RESULT);
        Parcourir = Parcourir->SVT;
    }
    fclose(File);
}

// Fonction pour mettre à jour un QUAD
void MAJQ(QUAD** Tete, int QN, int QFin) {
    QUAD* Parcourir = *Tete;
    char Chaine[10]; // Taille adaptée
    while (Parcourir != NULL && Parcourir->QN != QN) {
        Parcourir = Parcourir->SVT;
    }
    if (Parcourir) {
        sprintf(Chaine, "%d", QFin);
        strcpy(Parcourir->OPR2, Chaine);
    }
}

// Exemple de fonction Search pour ENTITE
int Search(ENTITE** TeteTS, char* name) {
    ENTITE* Parcourir = *TeteTS;
    while (Parcourir != NULL) {
        if (strcmp(Parcourir->name, name) == 0) {
            return 1;
        }
        Parcourir = Parcourir->next;
    }
    return 0;
}

void  Opt1(QUAD** TeteQ, ENTITE** TeteTS){
  struct QUAD *Parcourir = *TeteQ;
  while (Parcourir != NULL){ 
    if (strcmp((*Parcourir).OPR1, "=") == 0 && strcmp((*Parcourir).OPR3, "") == 0 && Search(TeteTS, (*Parcourir).RESULT)){
      struct QUAD *Continue = (*Parcourir).SVT;
      while (Continue != NULL && strcmp((*Continue).RESULT, (*Parcourir).OPR2) != 0 && strcmp((*Continue).RESULT, (*Parcourir).RESULT) != 0){
        if (strcmp((*Continue).OPR1, "BGE") != 0 && strcmp((*Continue).OPR1, "BLE") != 0 && strcmp((*Continue).OPR1, "BNE") != 0 && strcmp((*Continue).OPR1, "BG") != 0 && strcmp((*Continue).OPR1, "BE") != 0 && strcmp((*Continue).OPR1, "BL") != 0 && strcmp((*Continue).OPR1, "BR") != 0){
          if (strcmp((*Continue).OPR2, (*Parcourir).RESULT) == 0){
            strcpy((*Continue).OPR2, (*Parcourir).OPR2);
          }else{
            if (strcmp((*Continue).OPR3, (*Parcourir).RESULT) == 0){
              strcpy((*Continue).OPR3, (*Parcourir).OPR2);
            }
          }
        }
        Continue = (*Continue).SVT;
      }
    }
    Parcourir = (*Parcourir).SVT;
  }
}
void  Useless(QUAD** TeteQ, ENTITE** TeteTS){
  struct QUAD* Parcourir =*TeteQ;
  struct QUAD* Pere = NULL;
  while(Parcourir != NULL){
    if(strcmp((*Parcourir).OPR1,"=")==0 && Search(TeteTS,(*Parcourir).RESULT)){
      struct QUAD* Continue =(*Parcourir).SVT;
      while(Continue != NULL && strcmp((*Parcourir).RESULT,(*Continue).OPR2)!=0 && strcmp((*Parcourir).RESULT,(*Continue).OPR3)!=0 && strcmp((*Continue).OPR1, "BGE") != 0 && strcmp((*Continue).OPR1, "BLE") != 0 && strcmp((*Continue).OPR1, "BNE") != 0 && strcmp((*Continue).OPR1, "BG") != 0 && strcmp((*Continue).OPR1, "BE") != 0 && strcmp((*Continue).OPR1, "BL") != 0 || (Continue != NULL && !(strcmp((*Continue).OPR1, "BGE") != 0 && strcmp((*Continue).OPR1, "BLE") != 0 && strcmp((*Continue).OPR1, "BNE") != 0 && strcmp((*Continue).OPR1, "BG") != 0 && strcmp((*Continue).OPR1, "BE") != 0 && strcmp((*Continue).OPR1, "BL") != 0))){
        Continue=(*Continue).SVT;
      }
      if(Continue==NULL){
        if(Pere==NULL){
          *TeteQ=(**TeteQ).SVT;
          struct  QUAD* Change = (*Parcourir).SVT;
          while(Change!= NULL){
            if(strcmp((*Change).OPR1, "BGE") != 0 && strcmp((*Change).OPR1, "BLE") != 0 && strcmp((*Change).OPR1, "BNE") != 0 && strcmp((*Change).OPR1, "BG") != 0 && strcmp((*Change).OPR1, "BE") != 0 && strcmp((*Change).OPR1, "BL") != 0  && strcmp((*Change).OPR1, "BR") != 0){
              (*Change).QN--;
            }else{
              (*Change).QN--;
              if(atoi((*Change).OPR2)>(*Parcourir).QN){
              int n=atoi((*Change).OPR2)-1;
              sprintf((*Change).OPR2,"%d",n);
              }
            }
            Change=(*Change).SVT;
          }
        }else{
          (*Pere).SVT=(*Parcourir).SVT;
          Parcourir=Pere;
          struct  QUAD* Change = (*Parcourir).SVT;
          while(Change!= NULL){
            if(strcmp((*Change).OPR1, "BGE") != 0 && strcmp((*Change).OPR1, "BLE") != 0 && strcmp((*Change).OPR1, "BNE") != 0 && strcmp((*Change).OPR1, "BG") != 0 && strcmp((*Change).OPR1, "BE") != 0 && strcmp((*Change).OPR1, "BL") != 0  && strcmp((*Change).OPR1, "BR") != 0){
              (*Change).QN--;
            }else{
              (*Change).QN--;
              if(atoi((*Change).OPR2)>(*Parcourir).QN){
              int n=atoi((*Change).OPR2)-1;
              sprintf((*Change).OPR2,"%d",n);
              }
            }
            Change=(*Change).SVT;
          }
        }
      }
    }
    Pere = Parcourir;
    Parcourir=(*Parcourir).SVT;
  }
}
void Machine(QUAD** TeteQ,ENTITE** TeteTS){
 // FILE* File=NULL;
    FILE* File = fopen("CODEMACHINE.txt", "w+");
    if (File == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        return;
    }

    // Ajout de vérifications pour les pointeurs
    if (!TeteQ || !TeteTS || !*TeteQ || !*TeteTS) {
        printf("Erreur: Pointeurs NULL passés à la fonction Machine\n");
        fclose(File);
        return;
    }

    struct ENTITE* ParcourirTS = *TeteTS;
    struct QUAD* ParcourirQ = *TeteQ;

    printf("Début de la génération du code machine...\n");
    printf("Table des symboles :\n");
    while(ParcourirTS != NULL) {
        printf("Variable: %s, Type: %s, Taille: %d\n", 
            ParcourirTS->name, ParcourirTS->TypeE, ParcourirTS->TailleE);
        ParcourirTS = ParcourirTS->next;
    }
  
  fprintf(File, "     DATA SEGMENT \n");
  while(ParcourirTS != NULL){
    if((*ParcourirTS).TailleE >1){
      fprintf(File, "       %s   DW   %s   DUP ( ? ) \n", (*ParcourirTS).name, (*ParcourirTS).TailleE);
    }else{
      if(strcmp((*ParcourirTS).State,"VAR")==0) {
        if(strcmp((*ParcourirTS).TypeE,"Integer")){
          fprintf(File, "      %s   DW   ?\n", (*ParcourirTS).name);
        }else{
          fprintf(File, "      %s   DD   ?\n", (*ParcourirTS).name);
        }
      }else{
          fprintf(File, "      %s   EQU (Valeur de la constante non recupéré) \n", (*ParcourirTS).name);
      }
    }
    ParcourirTS = (*ParcourirTS).next;
  }
  fprintf(File, "     DATA ENDS\n");
  fprintf(File,"\n\n");
  fprintf(File, "     PILE SEGMENT STACK\n");
  fprintf(File, "       DW 1000 DUP(?)\n");
  fprintf(File, "       TOS LABEL WORD\n");
  fprintf(File, "     PILE ENDS\n");
  fprintf(File,"\n\n");
  fprintf(File, "     CODE SEGEMENT\n");
  fprintf(File, "        ASSUME CS:CODE, DS:DATA SS:PILE\n");
  fprintf(File, "        PROG_PRINCIPAL :\n");
  fprintf(File, "        MOV AX , DATA\n");
  fprintf(File, "        MOV DS , AX\n");
  fprintf(File, "        MOV AX , PILE\n");
  fprintf(File, "        MOV SS , AX\n");
  fprintf(File, "        MOV SP , OFFSET TOS\n");
  fprintf(File, "        MOV BP , OFFSET TOS\n\n\n\n");
  int Change;
  int num=0;
  while(ParcourirQ != NULL){ 
    fprintf(File,"\n     LABEL %d :\n\n",(*ParcourirQ).QN);
    if(strcmp((*ParcourirQ).OPR1, "BGE") != 0 && strcmp((*ParcourirQ).OPR1, "BLE") != 0 && strcmp((*ParcourirQ).OPR1, "BNE") != 0 && strcmp((*ParcourirQ).OPR1, "BG") != 0 && strcmp((*ParcourirQ).OPR1, "BE") != 0 && strcmp((*ParcourirQ).OPR1, "BL") != 0  && strcmp((*ParcourirQ).OPR1, "BR") != 0){ 
      if(strcmp((*ParcourirQ).OPR1, "+") == 0){
        if((*ParcourirQ).OPR2[0] != 'T' && ((*ParcourirQ).OPR3[0] != 'T')){
            fprintf(File, "        MOV AX , %s\n", (*ParcourirQ).OPR2);
            fprintf(File, "        ADD AX , %s\n", (*ParcourirQ).OPR3);
            fprintf(File, "        PUSH AX \n");
        }else{
          if((*ParcourirQ).OPR2[0] == 'T' && ((*ParcourirQ).OPR3[0] == 'T')){
            fprintf(File, "        MOV BX , SP\n");
            Change = (*ParcourirQ).OPR2[1]-'0'; 
            Change *= 2;
            fprintf(File, "        MOV SP , BP - %d\n", Change);
            fprintf(File, "        POP AX \n");
            Change = (*ParcourirQ).OPR3[1]-'0';
            Change *= 2;
            fprintf(File, "        MOV SP , BP - %d\n", Change);
            fprintf(File, "        POP DX \n");
            fprintf(File, "        ADD AX , DX \n");
            fprintf(File, "        MOV SP , BX\n");
            fprintf(File, "        PUSH AX \n");
          }else{
            if((*ParcourirQ).OPR2[0] == 'T'){
              fprintf(File, "        MOV BX , SP\n");
              Change = (*ParcourirQ).OPR2[1]-'0';
              Change *= 2;
              fprintf(File, "        MOV SP , BP - %d \n", Change);
              fprintf(File, "        POP AX \n");
              fprintf(File, "        MOV SP , BX\n");
              fprintf(File, "        ADD AX , %s \n",(*ParcourirQ).OPR3);          
              if((strcmp((*ParcourirQ).OPR2,(*ParcourirQ).RESULT)!=0)) {   
                fprintf(File, "        PUSH AX \n");
              }else{
                fprintf(File, "        MOV [ BP - %d ] , AX \n",Change);
              } 
            }else{
              fprintf(File, "        MOV AX , %s \n",(*ParcourirQ).OPR2);
              fprintf(File, "        MOV BX , SP\n");
              Change = (*ParcourirQ).OPR3[1]-'0';
              Change *= 2;
              fprintf(File, "        MOV SP , BP - %d \n", Change);
              fprintf(File, "        POP DX \n");
              fprintf(File, "        MOV SP , BX\n");
              fprintf(File, "        ADD AX , DX \n");
              fprintf(File, "        PUSH AX \n");
            }
          }
        }
      }  
      if(strcmp((*ParcourirQ).OPR1, "-") == 0){
        if((*ParcourirQ).OPR2[0] != 'T' && (*ParcourirQ).OPR3[0] != 'T'){
          fprintf(File, "        MOV AX , %s\n", (*ParcourirQ).OPR2);
          fprintf(File, "        SUB AX , %s\n", (*ParcourirQ).OPR3);
          fprintf(File, "        PUSH AX \n");
        }else{
          if((*ParcourirQ).OPR2[0] == 'T' && ((*ParcourirQ).OPR3[0] == 'T')){
            fprintf(File, "        MOV BX , SP\n");
            Change =(*ParcourirQ).OPR2[1]-'0';
            Change *= 2;
            fprintf(File, "        MOV SP , BP - %d\n", Change);
            fprintf(File, "        POP AX \n");
            Change =(*ParcourirQ).OPR3[1]-'0';
            Change *= 2;
            fprintf(File, "        MOV SP , BP - %d\n", Change);
            fprintf(File, "        POP DX \n");
            fprintf(File, "        SUB AX , DX \n");
            fprintf(File, "        MOV SP , BX\n");
            fprintf(File, "        PUSH AX \n");
          }else{
            if((*ParcourirQ).OPR2[0] == 'T'){
              fprintf(File, "        MOV BX , SP\n");
              Change =(*ParcourirQ).OPR2[1]-'0';
              Change *= 2;
              fprintf(File, "        MOV SP , BP - %d \n", Change);
              fprintf(File, "        POP AX \n");
              fprintf(File, "        MOV SP , BX\n");
              fprintf(File, "        SUB AX , %s \n",(*ParcourirQ).OPR3);
              fprintf(File, "        PUSH AX \n");
            }else{
              fprintf(File, "        MOV AX , %s \n",(*ParcourirQ).OPR2);
              fprintf(File, "        MOV BX , SP\n");
              Change = (*ParcourirQ).OPR3[1]-'0';
              Change *= 2;
              fprintf(File, "        MOV SP , BP - %d \n", Change);
              fprintf(File, "        POP DX \n");
              fprintf(File, "        MOV SP , BX\n");
              fprintf(File, "        SUB AX , DX \n");
              fprintf(File, "        PUSH AX \n"); 
            }
          }
        }
      } 
      if(strcmp((*ParcourirQ).OPR1, "*") == 0){
        if((*ParcourirQ).OPR2[0] != 'T' && (*ParcourirQ).OPR3[0] != 'T'){
          fprintf(File, "        MOV  AX , %s\n", (*ParcourirQ).OPR2);
          fprintf(File, "        MULT AX , %s\n", (*ParcourirQ).OPR3);
          fprintf(File, "        PUSH AX \n");
        }else{
          if((*ParcourirQ).OPR2[0] == 'T' && ((*ParcourirQ).OPR3[0] == 'T')){
            fprintf(File, "        MOV BX , SP\n");
            Change = (*ParcourirQ).OPR2[1]-'0';
            Change *= 2;
            fprintf(File, "        MOV SP , BP - %d\n", Change);
            fprintf(File, "        POP AX \n");
            Change =(*ParcourirQ).OPR3[1]-'0';
            Change *= 2;
            fprintf(File, "        MOV SP , BP - %d\n", Change);
            fprintf(File, "        POP DX \n");
            fprintf(File, "        MULT AX , DX \n");
            fprintf(File, "        MOV SP , BX\n");
            fprintf(File, "        PUSH AX \n");
          }else{
            if((*ParcourirQ).OPR2[0] == 'T'){
              fprintf(File, "        MOV BX , SP\n");
              Change =(*ParcourirQ).OPR2[1]-'0';
              Change *= 2;
              fprintf(File, "        MOV SP , BP - %d \n", Change);
              fprintf(File, "        POP AX \n");
              fprintf(File, "        MOV SP , BX\n");
              fprintf(File, "        MULT AX , %s \n",(*ParcourirQ).OPR3);
              fprintf(File, "        PUSH AX \n");
            }else{
              fprintf(File, "        MOV AX , %s \n",(*ParcourirQ).OPR2);
              fprintf(File, "        MOV BX , SP\n");
              Change =(*ParcourirQ).OPR3[1]-'0';
              Change *= 2;
              fprintf(File, "        MOV SP , BP - %d \n", Change);
              fprintf(File, "        POP DX \n");
              fprintf(File, "        MOV SP , BX\n");
              fprintf(File, "        MULT AX , DX \n");
              fprintf(File, "        PUSH AX \n");
            }
          }
        }
      }  
      if(strcmp((*ParcourirQ).OPR1, "/") == 0){
        if((*ParcourirQ).OPR2[0] != 'T' && (*ParcourirQ).OPR3[0] != 'T'){
          fprintf(File, "        MOV AX , %s\n", (*ParcourirQ).OPR2);
          fprintf(File, "        DIV AX , %s\n", (*ParcourirQ).OPR3);
          fprintf(File, "        PUSH AX \n");
        }else{
          if((*ParcourirQ).OPR2[0] == 'T' && ((*ParcourirQ).OPR3[0] == 'T')){
            fprintf(File, "        MOV BX , SP\n");
            Change = (*ParcourirQ).OPR2[1]-'0';
            Change *= 2;
            fprintf(File, "        MOV SP , BP - %d\n", Change);
            fprintf(File, "        POP AX \n");
            Change = (*ParcourirQ).OPR3[1]-'0';
            Change *= 2;
            fprintf(File, "        MOV SP , BP - %d\n", Change);
            fprintf(File, "        POP DX \n");
            fprintf(File, "        DIV AX , DX \n");
            fprintf(File, "        MOV SP , BX\n");
            fprintf(File, "        PUSH AX \n");
          }else{
            if((*ParcourirQ).OPR2[0] == 'T'){
              fprintf(File, "        MOV BX , SP\n");
              Change = (*ParcourirQ).OPR2[1]-'0';
              Change *= 2;
              fprintf(File, "        MOV SP , BP - %d \n", Change);
              fprintf(File, "        POP AX \n");
              fprintf(File, "        MOV SP , BX\n");
              fprintf(File, "        DIV AX , %s \n",(*ParcourirQ).OPR3);
              fprintf(File, "        PUSH AX \n");
            }else{
              fprintf(File, "        MOV AX , %s \n",(*ParcourirQ).OPR2);
              fprintf(File, "        MOV BX , SP\n");
              Change = (*ParcourirQ).OPR3[1]-'0';
              Change *= 2;
              fprintf(File, "        MOV SP , BP - %d \n", Change);
              fprintf(File, "        POP DX \n");
              fprintf(File, "        MOV SP , BX\n");
              fprintf(File, "        DIV AX , DX \n");
              fprintf(File, "        PUSH AX \n");
            }
          }
        } 
      } 
    }else{
      if(strcmp((*ParcourirQ).OPR1,"BR")==0){
        fprintf(File,"       JMP LABEL %s \n",(*ParcourirQ).OPR2); 
      }else{
        if(strcmp((*ParcourirQ).OPR1,"BNE")==0){
          if((*ParcourirQ).RESULT[0] != 'T' && (*ParcourirQ).OPR3[0] != 'T'){
            fprintf(File,"       CMP %s , %s \n",(*ParcourirQ).OPR3,(*ParcourirQ).RESULT);
            fprintf(File,"       JNE LABEL %s \n",(*ParcourirQ).OPR2);
          }else{
            if ((*ParcourirQ).RESULT[0] == 'T' && ((*ParcourirQ).OPR3[0] == 'T')){
              fprintf(File, "        MOV BX , SP\n");
              Change = (*ParcourirQ).OPR3[1]-'0';
              Change *= 2;
              fprintf(File, "       MOV SP , BP - %d\n", Change);
              fprintf(File, "       POP AX \n");
              Change = (*ParcourirQ).RESULT[1]-'0';
              Change *= 2;
              fprintf(File, "       MOV SP , BP - %d\n", Change);
              fprintf(File, "       POP DX \n");
              fprintf(File, "       MOV SP , BX\n");
              fprintf(File, "       CMP AX , DX \n");
              fprintf(File,"       JNE LABEL %s \n",(*ParcourirQ).OPR2);
            }else{
              if((*ParcourirQ).OPR3[0] == 'T'){
                fprintf(File, "       MOV BX , SP\n");
                Change = (*ParcourirQ).OPR3[1]-'0';
                Change *= 2;
                fprintf(File, "       MOV SP , BP - %d \n", Change);
                fprintf(File, "       POP AX \n");
                fprintf(File, "       MOV SP , BX\n");
                fprintf(File, "       CMP AX , %s \n",(*ParcourirQ).RESULT);
                fprintf(File,"       JNE LABEL %s \n",(*ParcourirQ).OPR2);
              }else{
                fprintf(File, "       MOV BX , SP\n");
                Change = (*ParcourirQ).RESULT[1]-'0';
                Change *= 2;
                fprintf(File, "       MOV SP , BP - %d \n", Change);
                fprintf(File, "       POP DX \n");
                fprintf(File, "       MOV SP , BX\n");
                fprintf(File, "       MOV AX , %s \n",(*ParcourirQ).OPR3);
                fprintf(File, "       CMP AX , DX \n");
                fprintf(File,"       JNE LABEL %s \n",(*ParcourirQ).OPR2);
              }
            }
          } 
        }
        if(strcmp((*ParcourirQ).OPR1,"BE")==0){
          if((*ParcourirQ).RESULT[0] != 'T' && (*ParcourirQ).OPR3[0] != 'T')       {
            fprintf(File,"       CMP %s , %s \n",(*ParcourirQ).OPR3,(*ParcourirQ).RESULT);
            fprintf(File,"       JE LABEL %s \n",(*ParcourirQ).OPR2);
          }else{
            if((*ParcourirQ).RESULT[0] == 'T' && ((*ParcourirQ).OPR3[0] == 'T')){
              fprintf(File, "       MOV BX , SP\n");
              Change = (*ParcourirQ).OPR3[1]-'0';
              Change *= 2;
              fprintf(File, "       MOV SP , BP - %d\n", Change);
              fprintf(File, "       POP AX \n");
              Change = (*ParcourirQ).RESULT[1]-'0';
              Change *= 2;
              fprintf(File, "       MOV SP , BP - %d\n", Change);
              fprintf(File, "       POP DX \n");
              fprintf(File, "       MOV SP , BX\n");
              fprintf(File, "       CMP AX , DX \n");
              fprintf(File,"       JE LABEL %s \n",(*ParcourirQ).OPR2);
            }else{
              if((*ParcourirQ).OPR3[0] == 'T'){
                fprintf(File, "       MOV BX , SP\n");
                Change = (*ParcourirQ).OPR3[1]-'0';
                Change *= 2;
                fprintf(File, "       MOV SP , BP - %d \n", Change);
                fprintf(File, "       POP AX \n");
                fprintf(File, "       MOV SP , BX\n");
                fprintf(File, "       CMP AX , %s \n",(*ParcourirQ).RESULT);
                fprintf(File,"       JE LABEL %s \n",(*ParcourirQ).OPR2);
              }else{
                fprintf(File, "       MOV BX , SP\n");
                Change = (*ParcourirQ).RESULT[1]-'0';
                Change *= 2;
                fprintf(File, "       MOV SP , BP - %d \n", Change);
                fprintf(File, "       POP DX \n");
                fprintf(File, "       MOV SP , BX\n");
                fprintf(File, "       MOV AX , %s \n",(*ParcourirQ).OPR3);
                fprintf(File, "       CMP AX , DX \n");
                fprintf(File,"       JE LABEL %s \n",(*ParcourirQ).OPR2);
              }
            }  
          } 
        }
        if(strcmp((*ParcourirQ).OPR1,"BGE")==0){
          if((*ParcourirQ).RESULT[0] != 'T' && (*ParcourirQ).OPR3[0] != 'T'){
            fprintf(File,"       CMP %s , %s \n",(*ParcourirQ).OPR3,(*ParcourirQ).RESULT);
            fprintf(File,"       JGE LABEL %s \n",(*ParcourirQ).OPR2);
          }else{
            if((*ParcourirQ).RESULT[0] == 'T' && ((*ParcourirQ).OPR3[0] == 'T')){
              fprintf(File, "       MOV BX , SP\n");
              Change = (*ParcourirQ).OPR3[1]-'0';
              Change *= 2;
              fprintf(File, "       MOV SP , BP - %d\n", Change);
              fprintf(File, "       POP AX \n");
              Change = (*ParcourirQ).RESULT[1]-'0';
              Change *= 2;
              fprintf(File, "       MOV SP , BP - %d\n", Change);
              fprintf(File, "       POP DX \n");
              fprintf(File, "       MOV SP , BX\n");
              fprintf(File, "       CMP AX , DX \n");
              fprintf(File,"       JGE LABEL %s \n",(*ParcourirQ).OPR2);
            }else{
              if((*ParcourirQ).OPR3[0] == 'T'){
                fprintf(File, "       MOV BX , SP\n");
                Change = (*ParcourirQ).OPR3[1]-'0';
                Change *= 2;
                fprintf(File, "       MOV SP , BP - %d \n", Change);
                fprintf(File, "       POP AX \n");
                fprintf(File, "       MOV SP , BX\n");
                fprintf(File, "       CMP AX , %s \n",(*ParcourirQ).RESULT);
                fprintf(File,"       JGE LABEL %s \n",(*ParcourirQ).OPR2);
              }else{
                fprintf(File, "       MOV BX , SP\n");
                Change = (*ParcourirQ).RESULT[1]-'0';
                Change *= 2;
                fprintf(File, "       MOV SP , BP - %d \n", Change);
                fprintf(File, "       POP DX \n");
                fprintf(File, "       MOV SP , BX\n");
                fprintf(File, "       MOV AX , %s \n",(*ParcourirQ).OPR3);
                fprintf(File, "       CMP AX , DX \n");
                fprintf(File,"       JGE LABEL %s \n",(*ParcourirQ).OPR2);
              }
            }
          }  
        }
        if(strcmp((*ParcourirQ).OPR1,"BG")==0){
          if((*ParcourirQ).RESULT[0] != 'T' && (*ParcourirQ).OPR3[0] != 'T'){
            fprintf(File,"       CMP %s , %s \n",(*ParcourirQ).OPR3,(*ParcourirQ).RESULT);
            fprintf(File,"       JG LABEL %s \n",(*ParcourirQ).OPR2);
          }else{
            if((*ParcourirQ).RESULT[0] == 'T' && ((*ParcourirQ).OPR3[0] == 'T')){
              fprintf(File, "       MOV BX , SP\n");
              Change = (*ParcourirQ).OPR3[1]-'0';
              Change *= 2;
              fprintf(File, "       MOV SP , BP - %d\n", Change);
              fprintf(File, "       POP AX \n");
              Change = (*ParcourirQ).RESULT[1]-'0';
              Change *= 2;
              fprintf(File, "       MOV SP , BP - %d\n", Change);
              fprintf(File, "       POP DX \n");
              fprintf(File, "       MOV SP , BX\n");
              fprintf(File, "       CMP AX , DX \n");
              fprintf(File,"       JG LABEL %s \n",(*ParcourirQ).OPR2);
            }else{
              if((*ParcourirQ).OPR3[0] == 'T'){
                fprintf(File, "       MOV BX , SP\n");
                Change = (*ParcourirQ).OPR3[1]-'0';
                Change *= 2;
                fprintf(File, "       MOV SP , BP - %d \n", Change);
                fprintf(File, "       POP AX \n");
                fprintf(File, "       MOV SP , BX\n");
                fprintf(File, "       CMP AX , %s \n",(*ParcourirQ).RESULT);
                fprintf(File,"       JG LABEL %s \n",(*ParcourirQ).OPR2);
              }else{
                fprintf(File, "       MOV BX , SP\n");
                Change = (*ParcourirQ).RESULT[1]-'0';
                Change *= 2;
                fprintf(File, "       MOV SP , BP - %d \n", Change);
                fprintf(File, "       POP DX \n");
                fprintf(File, "       MOV SP , BX\n");
                fprintf(File, "       MOV AX , %s \n",(*ParcourirQ).OPR3);
                fprintf(File, "       CMP AX , DX \n");
                fprintf(File,"       JG LABEL %s \n",(*ParcourirQ).OPR2);
              }
            }
          } 
        }
        if(strcmp((*ParcourirQ).OPR1,"BLE")==0){
          if((*ParcourirQ).RESULT[0] != 'T' && (*ParcourirQ).OPR3[0] != 'T'){
            fprintf(File,"       CMP %s , %s \n",(*ParcourirQ).OPR3,(*ParcourirQ).RESULT);
            fprintf(File,"       JLE LABEL %s \n",(*ParcourirQ).OPR2);
          }else{
            if((*ParcourirQ).RESULT[0] == 'T' && ((*ParcourirQ).OPR3[0] == 'T')){
              fprintf(File, "       MOV BX , SP\n");
              Change = (*ParcourirQ).OPR3[1]-'0';
              Change *= 2;
              fprintf(File, "       MOV SP , BP - %d\n", Change);
              fprintf(File, "       POP AX \n");
              Change = (*ParcourirQ).RESULT[1]-'0';
              Change *= 2;
              fprintf(File, "       MOV SP , BP - %d\n", Change);
              fprintf(File, "       POP DX \n");
              fprintf(File, "       MOV SP , BX\n");
              fprintf(File, "       CMP AX , DX \n");
              fprintf(File,"       JLE LABEL %s \n",(*ParcourirQ).OPR2);
            }else{
              if((*ParcourirQ).OPR3[0] == 'T'){
                fprintf(File, "       MOV BX , SP\n");
                Change = (*ParcourirQ).OPR3[1]-'0';
                Change *= 2;
                fprintf(File, "       MOV SP , BP - %d \n", Change);
                fprintf(File, "       POP AX \n");
                fprintf(File, "       MOV SP , BX\n");
                fprintf(File, "       CMP AX , %s \n",(*ParcourirQ).RESULT);
                fprintf(File,"       JLE LABEL %s \n",(*ParcourirQ).OPR2);
              }else{
                fprintf(File, "       MOV BX , SP\n");
                Change = (*ParcourirQ).RESULT[1]-'0';
                Change *= 2;
                fprintf(File, "       MOV SP , BP - %d \n", Change);
                fprintf(File, "       POP DX \n");
                fprintf(File, "       MOV SP , BX\n");
                fprintf(File, "       MOV AX , %s \n",(*ParcourirQ).OPR3);
                fprintf(File, "       CMP AX , DX \n");
                fprintf(File,"       JLE LABEL %s \n",(*ParcourirQ).OPR2);
              }
            }
          } 
        }
        if(strcmp((*ParcourirQ).OPR1,"BL")==0){
          if((*ParcourirQ).RESULT[0] != 'T' && (*ParcourirQ).OPR3[0] != 'T')       {
            fprintf(File,"       CMP %s , %s \n",(*ParcourirQ).OPR3,(*ParcourirQ).RESULT);
            fprintf(File,"       JL LABEL %s \n",(*ParcourirQ).OPR2);
          }else{
            if((*ParcourirQ).RESULT[0] == 'T' && ((*ParcourirQ).OPR3[0] == 'T')){
              fprintf(File, "       MOV BX , SP\n");
              Change = (*ParcourirQ).OPR3[1]-'0';
              Change *= 2;
              fprintf(File, "       MOV SP , BP - %d\n", Change);
              fprintf(File, "       POP AX \n");
              Change = (*ParcourirQ).RESULT[1]-'0';
              Change *= 2;
              fprintf(File, "       MOV SP , BP - %d\n", Change);
              fprintf(File, "       POP DX \n");
              fprintf(File, "       MOV SP , BX\n");
              fprintf(File, "       CMP AX , DX \n");
              fprintf(File,"       JL LABEL %s \n",(*ParcourirQ).OPR2);
            }else{
              if((*ParcourirQ).OPR3[0] == 'T'){
                fprintf(File, "       MOV BX , SP\n");
                Change = (*ParcourirQ).OPR3[1]-'0';
                Change *= 2;
                fprintf(File, "       MOV SP , BP - %d \n", Change);
                fprintf(File, "       POP AX \n");
                fprintf(File, "       MOV SP , BX\n");
                fprintf(File, "       CMP AX , %s \n",(*ParcourirQ).RESULT);
                fprintf(File,"       JL LABEL %s \n",(*ParcourirQ).OPR2);
              }else{
                fprintf(File, "       MOV BX , SP\n");
                Change = (*ParcourirQ).RESULT[1]-'0';
                Change *= 2;
                fprintf(File, "       MOV SP , BP - %d \n", Change);
                fprintf(File, "       POP DX \n");
                fprintf(File, "       MOV SP , BX\n");
                fprintf(File, "       MOV AX , %s \n",(*ParcourirQ).OPR3);
                fprintf(File, "       CMP AX , DX \n");
                fprintf(File,"       JL LABEL %s \n",(*ParcourirQ).OPR2);
              }
            }
          } 
        }
      }    
    } 
    num=(*ParcourirQ).QN;
    ParcourirQ = (*ParcourirQ).SVT;
  } 
  fprintf(File, "\n     LABEL %d:\n\n",num+1);
  fprintf(File, "       MOV AH,4CH\n");
  fprintf(File, "       INT 21h\n");
  fprintf(File, "       CODE ENDS\n");
  fprintf(File, "       END PROG_PRINCIPAL\n");
  fclose(File);
  printf("Génération terminée.\n");
}



int main() {
    QUAD* TeteQ = NULL;
    ENTITE* TeteTS = NULL;
    
    printf("Création des entités...\n");
    
    // Création des entités (table des symboles)
    ENTITE* var1 = (ENTITE*)malloc(sizeof(ENTITE));
    if (!var1) {
        perror("Erreur allocation var1");
        return 1;
    }
    strcpy(var1->name, "x");
    strcpy(var1->TypeE, "Integer");
    strcpy(var1->State, "VAR");
    var1->TailleE = 1;
    var1->next = NULL;
    TeteTS = var1;

    ENTITE* var2 = (ENTITE*)malloc(sizeof(ENTITE));
    if (!var2) {
        perror("Erreur allocation var2");
        free(var1);
        return 1;
    }
    strcpy(var2->name, "y");
    strcpy(var2->TypeE, "Integer");
    strcpy(var2->State, "VAR");
    var2->TailleE = 1;
    var2->next = NULL;
    var1->next = var2;

    printf("Création des quadruplets...\n");
    
    // Création des quadruplets
    InsertQ(&TeteQ, "=", "5", "", "x", 1);
    InsertQ(&TeteQ, "=", "10", "", "y", 2);
    InsertQ(&TeteQ, "+", "x", "y", "T1", 3);

    // Vérification des structures avant génération
    printf("\nVérification de la table des symboles :\n");
    ENTITE* tempE = TeteTS;
    while(tempE != NULL) {
        printf("Variable: %s\n", tempE->name);
        tempE = tempE->next;
    }

    printf("\nVérification des quadruplets :\n");
    QUAD* tempQ = TeteQ;
    while(tempQ != NULL) {
        printf("Quad %d: (%s,%s,%s,%s)\n", 
            tempQ->QN, tempQ->OPR1, tempQ->OPR2, tempQ->OPR3, tempQ->RESULT);
        tempQ = tempQ->SVT;
    }

    printf("\nAppel de la fonction Machine...\n");
    Machine(&TeteQ, &TeteTS);

    // Lecture et affichage du fichier généré
    FILE* check = fopen("CODEMACHINE.txt", "r");
    if (check) {
        printf("\nContenu du fichier CODEMACHINE.txt :\n");
        char buffer[256];
        while (fgets(buffer, sizeof(buffer), check)) {
            printf("%s", buffer);
        }
        fclose(check);
    } else {
        printf("Impossible d'ouvrir le fichier pour vérification\n");
    }

    // Libération de la mémoire
    while(TeteQ != NULL) {
        QUAD* temp = TeteQ;
        TeteQ = temp->SVT;
        free(temp);
    }

    while(TeteTS != NULL) {
        ENTITE* temp = TeteTS;
        TeteTS = temp->next;
        free(temp);
    }

    return 0;
}
