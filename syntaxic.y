%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include "TableSymbole.h"
    #include "quadruplet.h"

    // Déclaration de la fonction `yylex` pour que le compilateur la reconnaisse.
    int yylex();

    // Déclaration de la fonction `yyerror` pour la gestion des erreurs de syntaxe.
    void yyerror(const char *s);
    char sauvType[20];
    int j=0;
    typedef struct
   {  
      char idfTab[9];
      
   } elt_idf;
   elt_idf saveIdf[20];
    char typeG[20];
   char typeD[20];
   char typeOG[20];
   char typeOD[20];
   char nomG[20];
   char nomD[20];
   char valIdf[20];
   char saveStr[20];
   char saveStrq[20];
   char saveS[20];
   char mDroit[20];
   char buffer1[20], buffer2[20], tmp[20];
   char *temp,*tt;
   int cpttemp=1;
   int nb_op;
   char *tempasg;
   char brnsup[20];
   char pasfor[20];
   char cptfor[20];
   char valcond1[20];
   char valcond2[20];

%}

%union {
    int entier;
    float real;
    char character;
    char* string;
}

%token VAR_GLOBAL DECLARATION INSTRUCTION
%token INTEGER FLOAT CHAR CONST IF ELSE FOR READ WRITE
%token <string>IDENTIFIER <string>INT_NUMBER  <string>FLOAT_NUMBER <string>CHARACTERE
%token AND OR NOT EQ NEQ GEQ LT LEQ GT
%token EQUALS PLUS MINUS MULTIPLY DIVIDE
%token LBRACE RBRACE LPAREN RPAREN LBRACKET RBRACKET SEMICOLON COMMA COLON
%token <string>STRING_LITERAL

%left PLUS MINUS       
%left MULTIPLY DIVIDE   
%left AND OR            
%left GT LT GEQ LEQ EQ NEQ  


%type <string> assignment
%type <real> term
%type <real> factor
%type <real> primary
%type <real> term1
%type <real> factor1
%type <real> primary1
%type <real> term2
%type <real> factor2
%type <real> primary2
%type <real> term3
%type <real> factor3
%type <real> primary3
%type <real> term4
%type <real> factor4
%type <real> primary4
%type <string> COND
%type <string>  comparison_expr
%type <string>  OP_COMP

//%start program
%%

// Starting rule for the program structure
program:
    VAR_GLOBAL LBRACE global_var_section RBRACE
    DECLARATION LBRACE declaration_section RBRACE
    INSTRUCTION LBRACE instruction_section RBRACE
;

// Define valid types for variables
type:
    INTEGER {strcpy(sauvType,"INTEGER");}
    | FLOAT {strcpy(sauvType,"FLOAT");}
    | CHAR  {strcpy(sauvType,"CHAR");}
;

// Section for global variables (converted to right-recursive)
global_var_section:
    declaration
    | declaration global_var_section
;

// Section for declarations (converted to right-recursive)
declaration_section:
    declaration
    | declaration declaration_section
;

// Section for instructions (converted to right-recursive)
instruction_section:
    statement
    | statement instruction_section
;

// Rule for different types of declarations
declaration:
    type variable_list SEMICOLON {
        //verification de la double declaration et insertion du type
        for(j=0;strcmp(saveIdf[j].idfTab,"")!=0;j++){
            if(verifdeclaration(saveIdf[j].idfTab)==0) insererType(sauvType,saveIdf[j].idfTab);
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[j].idfTab,nb_ligne);
            //createQuad("DECL", sauvType, "", saveIdf[j].idfTab);
            strcpy(saveIdf[j].idfTab,"");
        }  
        j=0;  
    }
    | CONST type cst EQUALS term SEMICOLON{
    // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ($5 - floor($5) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
        }
         
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)$5);  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f", $5);  // Convertir en flottant
        }
        // Ajout du quadruplet pour la déclaration d'une constante
        //createQuad("CONST", sauvType, saveStr, saveIdf[0].idfTab);
        insererVal(saveIdf[0].idfTab,saveStr);
        strcpy(saveIdf[0].idfTab,"");
    } 
;

cst:
    IDENTIFIER{
        strcpy(saveIdf[0].idfTab,$1);
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType($1));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[0].idfTab,nb_ligne);
            
            
    }
;

// Rule for a list of variables separated by commas (converted to right-recursive)
variable_list:
    IDENTIFIER {strcpy(saveIdf[j].idfTab,$1);j++;} 
    | IDENTIFIER LBRACKET INT_NUMBER RBRACKET{strcpy(saveIdf[j].idfTab,$1);modifierCode("IDF TAB",saveIdf[j].idfTab);j++;
        if (atoi($3) == 0) {
            printf("Erreur semantique : La taille du tableau doit etre strictement positive\n");
        } 
        sprintf(buffer1, "%d", atoi($3)-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",$1,"","");
        } 
    | IDENTIFIER COMMA variable_list  {strcpy(saveIdf[j].idfTab,$1);j++;} 
    | IDENTIFIER LBRACKET INT_NUMBER RBRACKET COMMA variable_list  {strcpy(saveIdf[j].idfTab,$1);modifierCode("IDF TAB",saveIdf[j].idfTab);j++;} 
    | IDENTIFIER LBRACKET LPAREN PLUS INT_NUMBER RPAREN RBRACKET COMMA variable_list  {strcpy(saveIdf[j].idfTab,$1);modifierCode("IDF TAB",saveIdf[j].idfTab);j++;} 
;

// Rule for a variable, which can be either simple or an array
variable:
    IDENTIFIER {strcpy(saveIdf.idfTab,$1);} 
    | IDENTIFIER LBRACKET INT_NUMBER RBRACKET  {strcpy(saveIdf[j].idfTab,$1);j++;} 
;



// Define possible statements in the instruction section
statement:
    assignment
    | condition
    | loop
    | io_statement
    |assignment_int
;

// Define assignment statement
assignment:
    MDROIT EQUALS term SEMICOLON {
        // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ($3 - floor($3) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
        }   
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)$3);  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f",$3);  // Convertir en flottant
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    }
    |TAB EQUALS term SEMICOLON {
        // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ($3 - floor($3) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
        }   
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)$3);  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f",$3);  // Convertir en flottant
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    }
    |TAB EQUALS EXPRESSION_CHAINE SEMICOLON{
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    }
    |MDROIT EQUALS EXPRESSION_CHAR SEMICOLON{
        
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    }
    
;
MDROIT: 
    IDENTIFIER {
    // Vérification de la déclaration de la variable avant usage
    if (verifdeclaration($1) == 0) {
        printf("Erreur sémantique : La variable '%s' n'est pas déclarée avant son utilisation.\n", $1);
    } else if(strcmp(getCode($1),"IDF TAB")==0){
        printf("Erreur sémantique : La variable '%s' est un tableau.\n", $1);

        strcpy(typeG, getType($1));  // Récupérer le type de la variable à gauche
        printf("type: %s", typeG);
        if (comparCode($1) == 0) {
            printf("Erreur sémantique à la ligne %d : affectation d'une constante\n", nb_ligne);
        } else {
            strcpy(mDroit, $1);
        }
        
    }
    else{
        strcpy(typeG, getType($1));  // Récupérer le type de la variable à gauche
        printf("type: %s", typeG);
        if (comparCode($1) == 0) {
            printf("Erreur sémantique à la ligne %d : affectation d'une constante\n", nb_ligne);
        } else {
            strcpy(mDroit, $1);
        }
    }
    }
; 
TAB:
    IDENTIFIER LBRACKET INT_NUMBER RBRACKET   {if(verifdeclaration($1)==0 )
                    {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",$1,nb_ligne);}
                    else if(strcmp(getCode($1),"IDF")==0){
                        printf("Erreur sémantique : La variable '%s' est n'est pasm un tableau.\n", $1);
                        strcpy(typeG, getType($1));
                            }
                            else{
                        strcpy(typeG, getType($1));

                    }   
                        strcpy(mDroit,$1);
                        temp=newtemp();
                        strcpy(temp,$1);
                        strcpy(tmp,$1);
                        strcat(tmp,"[");
                        sprintf(buffer2,"%d",atoi($3));
                        strcat(tmp,buffer2);
                        strcat(tmp,"]");
                       
                    }      
                           
 
    | IDENTIFIER LBRACKET LPAREN PLUS INT_NUMBER RPAREN RBRACKET {
                if(verifdeclaration($1)==0 )
                  {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",$1,nb_ligne);}
                  else if(strcmp(getCode($1),"IDF")==0){
                        printf("Erreur sémantique : La variable '%s' est n'est pas un tableau.\n", $1);
                        strcpy(typeG, getType($1));
                            }
                            else{
                        strcpy(typeG, getType($1));

                    }  
    }

; 
EXPRESSION_CHAR: CHARACTERE {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,$1);}
                            strcpy(saveStrq,$1);
                            sprintf(saveStr, "%s",$1); 
                           }            
;                
EXPRESSION_CHAINE:
             CHARACTERE {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,$1);}
                            strcpy(saveStrq,$1);
                            sprintf(saveStr, "%s",$1); 
                           }
                           
             |STRING_LITERAL {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,$1);}
                            strcpy(saveStrq,$1);
                            sprintf(saveStr, "%s",$1); 
                           }           
                           
    
;                          
// Define conditional statement with optional else block
condition:
/*
    IF LPAREN COND RPAREN LBRACE {
    empiler_Int(&pile1, qc);
    //createQuad("BZ", "", $3, "");  // Branchement direct sans variables intermédiaires
    printf("je suis dans le iffff \n");
    }
    instruction_section RBRACE SEMICOLON {
        QuadR[atoi(depiler(&pile1))].opd1 = ToSTR(qc);
    }
    | IF LPAREN COND RPAREN LBRACE {
          empiler_Int(&pile1,qc);
          createQuad("BZ","",QuadR[qc-1].res,"");
          printf("je suis dans le if elseee");
        }
        instruction_section RBRACE ELSE LBRACE{
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
        empiler_Int(&pile1,qc);
        createQuad("BR","","","");
        }
         instruction_section RBRACE SEMICOLON{
          QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        }
 */   
      IF LPAREN COND RPAREN LBRACE {
          createQuad("BZ","",QuadR[qc-1].res,"");
          empiler_Int(&pile1,qc-1);
        }
        instruction_section RBRACE elsebloc SEMICOLON{
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        }
;
elsebloc: ELSE LBRACE {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
        empiler_Int(&pile1,qc);
        createQuad("BR","","","");
        } instruction_section RBRACE 
        |
;

assignment_int:
    MDROIT EQUALS term {
        // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ($3 - floor($3) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
        }
        
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);
        }else{
            //sprintf(saveStr, "%d", (int)$3); 
            createQuad("=", saveStrq, "",mDroit);
        
        }
    }
;    
// Define loop statement
loop:
    FOR LPAREN assignment_int {
        // Initialisation
       // $$ = atoi($3); // Capturer la variable assignée
        empiler_Int(&pile1, qc);
        empiler_Int(&pile2, qc);
    }
    COLON term3 {
        //$$ = atoi($6); // Capturer le pas
    }
    COLON term4 {
        //char *cond_var = atoi($7); // Capturer la condition d'arrêt
        createQuad("BG", "", mDroit, brnsup); 
        strcpy(cptfor,mDroit);
    }
    RPAREN LBRACE instruction_section RBRACE SEMICOLON {
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);    
        cpttemp++;    
        createQuad("+", cptfor, pasfor, temp); 
        createQuad("=", temp, "", cptfor); 
        createQuad("BR", ToSTR(atoi(depiler(&pile1))), "", "");
        QuadR[atoi(depiler(&pile2))].opd1=ToSTR(qc);
        //createQuad("END", "", "", "");
    };
    /*  0-(=,0,,ABC)
        1-(BG,6,ABC,TEST)
        2-(=,1.2,,NUM2)
        3-(+,ABC,2,T)
        4-(=,T,,ABC)
        5-(BR,1,,) */
/*
        
    FOR LPAREN assignment_int{
           empiler_Int(&pile1,qc);
        } COLON term3 {
           empiler_Int(&pile2,qc);
           createQuad("BZ","",QuadR[qc-1].res,"");
           empiler_Int(&pile2,qc);
          createQuad("BR","","","");
           empiler_Int(&pile2,qc);
        }COLON term4 RPAREN LBRACE {
             createQuad("BR",first(pile1),"","");
               strcpy(tempp,depiler(&pile2));
               QuadR[atoi(depiler(&pile2))].opd1=ToSTR(qc);
              empiler_Str(&pile2,tempp);
          }instruction_section{
               createQuad("BR",depiler(&pile2),"","");
               QuadR[atoi(depiler(&pile2))].opd1=ToSTR(qc);
           } RBRACE SEMICOLON{
        if(strcmp(typeD,"INTEGER")!=0 || strcmp(typeG,"INTEGER")!=0)
        {
            printf("Erreur semantique parametre boucle type incompatible \n");
        }
        {
               depiler(&pile1);
           };
        // Génération du saut de retour
       // int debut = atoi(depiler(&pile_for));
       // createQuad("BR", ToSTR(debut), "", "");
        
        // Mise à jour du quadruplet de test
        //int sauv = atoi(depiler(&pile_for));
        //sprintf(QuadR[sauv].opd1, "%d", qc);
    }
;*/

// Define input/output statements
io_statement:
    READ LPAREN IDENTIFIER RPAREN SEMICOLON{
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration($3) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", $3);
        }
    }
    | WRITE LPAREN io_expr_list RPAREN SEMICOLON
;

// Define a list of expressions for the WRITE statement (converted to right-recursive)
io_expr_list:
    io_expr
    | io_expr COMMA io_expr_list
;

// Define expressions in WRITE (prioritizes expression interpretation)
io_expr:
    IDENTIFIER {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration($1) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", $1);
        }
    }        // Handles identifiers and arithmetic expressions
    | string_literal   // Handles direct string output
;

// Define expressions de condition (arithmetic operations, converted to right-recursive)
COND:
    comparison_expr   // Start with comparison expressions
    | NOT COND //la syntaxe de not n'est pas au point ! ABC == 0 erreur
    {
        printf("je suis dans le NOT");
        temp = newtemp();
        sprintf(temp,"T%d",cpttemp);
        sprintf(valcond1,"T%d",cpttemp-1);
        createQuadL(1, valcond1, "", temp);
        cpttemp++;
    }             
    | comparison_expr AND COND{
         temp = newtemp();
        sprintf(temp,"T%d",cpttemp);
        sprintf(valcond1,"T%d",cpttemp-2);
        sprintf(valcond2,"T%d",cpttemp-1);
        createQuadL(3, valcond1, valcond2, temp);
        cpttemp++;
    }   
    | comparison_expr OR COND {
        temp = newtemp();
        sprintf(temp,"T%d",cpttemp);
        sprintf(valcond1,"T%d",cpttemp-2);
        sprintf(valcond2,"T%d",cpttemp-1);
        createQuadL(2, valcond1, valcond2, temp);
        cpttemp++;
    }
; 
/*
     avant comparison_expr apres
     ;
avant: NOT COND{
        temp = newtemp();
        sprintf(temp,"T%d",cpttemp);
        createQuadL(1, $2, "", temp);
        cpttemp++;
    } 
    | ;
apres:AND COND{
         temp = newtemp();
        sprintf(temp,"T%d",cpttemp);
        createQuadL(3, $1, $3, temp);
        cpttemp++;
    }   
    | OR COND {
        temp = newtemp();
        sprintf(temp,"T%d",cpttemp);
        createQuadL(2, $1, $3, temp);
        cpttemp++;
    }
    |;*/

// Define comparison expressions (includes comparison operators)
comparison_expr:
    ||term2 GT term1
    {
         char* temp=newtemp();
         sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(6,buffer1,buffer2,temp);
    }
    | term2 LT term1{
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(5,buffer1,buffer2,temp);
    }
    |term2 EQ term1{
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(1,buffer1,buffer2,temp);
    }
    |term2 GEQ term1{
       char* temp=newtemp();
       sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(3,buffer1,buffer2,temp);
    }
    |term2 LEQ term1{
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(4,buffer1,buffer2,temp);
    }
    |term2 NEQ term1{
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(2,buffer1,buffer2,temp);
    }
    |STRING_LITERAL OP_COMP STRING_LITERAL{
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(nb_op,$1,$3,temp);
    }
    |CHARACTERE OP_COMP CHARACTERE {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
       createQuadA(nb_op,$1,$3,temp);
    }
    |DROIT OP_COMP term1 {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);}       
    |term2 OP_COMP GAUCHE {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);}

    /*| NOT comparison_expr //la syntaxe de not n'est pas au point ! ABC == 0 erreur
    {
        temp = newtemp();
        sprintf(temp,"T%d",cpttemp);
        createQuadL(1, $2, "", temp);
        cpttemp++;
    }             
    | comparison_expr AND comparison_expr{
         temp = newtemp();
        sprintf(temp,"T%d",cpttemp);
        createQuadL(3, $1, $3, temp);
        cpttemp++;
    }   
    | comparison_expr OR comparison_expr{
        temp = newtemp();
        sprintf(temp,"T%d",cpttemp);
        createQuadL(2, $1, $3, temp);
        cpttemp++;
    }*/
; 
   

DROIT:
    CHARACTERE
    |STRING_LITERAL
;    
GAUCHE:
    CHARACTERE
    |STRING_LITERAL
;   
OP_COMP:
    GT  {nb_op=6;}      // Greater than
    |LT {nb_op=5;}            // Less than
    |GEQ  {nb_op=3;}     // Greater than or equal to
    |LEQ  {nb_op=4;}       // Less than or equal to
    |EQ {nb_op=1;}  // Equal
    |NEQ {nb_op=2;}       // Not equal
;
// Define term as multiplication/division operations or a factor (converted to right-recursive)
term:
    factor
    | factor PLUS term {
        float t=$1+$3;

       // strcpy(typeOG,getTypeF($1));
        //strcpy(typeOD,getTypeF($3));
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        /*if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        //strcpy(buffer1,getNom(buffer1));
        //printf("le nom de la var aver getnom est : %s",getNom(buffer1));
        } else  sprintf(buffer1, "%f", $1); */
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);
        i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  {sprintf(buffer2, "%f", $3); 
        sprintf(buffer1, "%f", $1);}
        //nomG,getNom(buffer1);
        //nomD=getNom(buffer2);
        
        //strcpy(buffer2,getNom(buffer2));
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        createQuad("+", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    }                 // Addition
    | factor MINUS term {
        float t=$1-$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;
     
    }                // substraction
;

// Define factor as multiplication/division or a primary element
factor:
    primary
    | primary MULTIPLY factor { 
        float t=$1*$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    }          // Multiplication, right-recursive
    | primary DIVIDE factor     { 
        if($3==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=$1/$3;        
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
        
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
}                     // Division, right-recursive
;

// Define primary elements: identifiers, numbers, and parenthesized expressions
primary:
    IDENTIFIER {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration($1) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", $1);
        }else {strcpy(typeD,getType($1));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);}
                                strcpy(valIdf,getVal($1));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,$1);}
                                 else
                                  $$=atof(valIdf);
                                  strcpy(saveStrq,$1);
                                  
                             }
                             //strcpy(nom,getNom($1));
                             //sprintf(saveStrq,"%s",nom);
                             //sprintf(buffer1,"%s",nom);
                            // sprintf(buffer2,"%s",nom);

    }
    | INT_NUMBER {
        printf("here %s\n",typeG);
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{$$=atof($1);}
                  strcpy(saveStrq,$1);
                  
    }
    | FLOAT_NUMBER{        printf("here 2 %s\n",typeG);

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   $$=atof($1); }  
                   strcpy(saveStrq,$1);
                   }
    |LPAREN PLUS INT_NUMBER RPAREN{
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{$$=atof($3);}
    }
    |LPAREN MINUS INT_NUMBER RPAREN{
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",$3);
                strcat(strcpy(saveS,"-"),saveStr);
                $$=atoi(saveS);}
    }
    | LPAREN PLUS FLOAT_NUMBER RPAREN {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
                                      else{$$=atof($3);}
                   }
    | LPAREN MINUS FLOAT_NUMBER RPAREN {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),$3);
                                           $$=atof(saveS);
                                       }
    }
    | LPAREN term RPAREN {$$=$2;}
    |IDENTIFIER LBRACKET INT_NUMBER RBRACKET {if(verifdeclaration($1)==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",$1,nb_ligne);}
                                else {
                                    strcpy(typeD,getType($1));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                }
;

term1:
    factor1
    | factor1 PLUS term1 {
        float t=$1+$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3);  
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        createQuad("+", buffer1, buffer2, temp);
        cpttemp++;
        
    }         // Addition
    | factor1 MINUS term1 {
        float t=$1-$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("-", buffer1, buffer2, temp);
        cpttemp++;
    }                // substraction
;

// Define factor as multiplication/division or a primary element
factor1:
    primary1
    | primary1 MULTIPLY factor1 {
        float t=$1*$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
       
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        cpttemp++;
    }          // Multiplication, right-recursive
    | primary1 DIVIDE factor1     { 
        if($3==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=$1/$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
        
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        cpttemp++;  
        }
    }                     // Division, right-recursive
;

// Define primary elements: identifiers, numbers, and parenthesized expressions
primary1:
    IDENTIFIER {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration($1) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", $1);
        }else {strcpy(typeG,getType($1) );
                             if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0) ) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);}
                                strcpy(valIdf,getVal($1));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,$1);}
                                 else
                                  $$=atof(valIdf);
                             }
        sprintf(buffer2, "%s", $1);
    }
    | INT_NUMBER {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{$$=atof($1);}
        sprintf(buffer2, "%d",atoi($1));
                  
    }
    | FLOAT_NUMBER{        printf("here 2 %s\n",typeG);
                    strcpy(typeG,"FLOAT");
                    if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   $$=atof($1); } 
                   sprintf(buffer2, "%f", $1); 
                   }
    |LPAREN PLUS INT_NUMBER RPAREN{
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{$$=atof($3);}
    }
    |LPAREN MINUS INT_NUMBER RPAREN{
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",$3);
                strcat(strcpy(saveS,"-"),saveStr);
                $$=atoi(saveS);}
    }
    | LPAREN PLUS FLOAT_NUMBER RPAREN {
        strcpy(typeG,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
        else{$$=atof($3);}
                   }
    | LPAREN MINUS FLOAT_NUMBER RPAREN {
        strcpy(typeG,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),$3);
                                           $$=atof(saveS);
                                       }
    }
    | LPAREN term1 RPAREN {$$=$2;}
    |IDENTIFIER LBRACKET INT_NUMBER RBRACKET {if(verifdeclaration($1)==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",$1,nb_ligne);}
                                else {
                                    strcpy(typeG,getType($1));
                                     if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                }
;
term2:
    factor2
    | factor2 PLUS term2 {
        float t=$1+$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3);  
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        createQuad("+", buffer1, buffer2, temp);
        cpttemp++;
        
    }                // Addition
    | factor2 MINUS term2 {
        float t=$1-$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("-", buffer1, buffer2, temp);
        cpttemp++;
    }                // substraction
;

// Define factor as multiplication/division or a primary element
factor2:
    primary2
    | primary2 MULTIPLY factor2 {
        float t=$1*$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
       
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        cpttemp++;
    }          // Multiplication, right-recursive
    | primary2 DIVIDE factor2     { 
        if($3==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=$1/$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        cpttemp++; 
        }
}                     // Division, right-recursive
;

// Define primary elements: identifiers, numbers, and parenthesized expressions
primary2:
    IDENTIFIER {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration($1) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", $1);
        }else {strcpy(typeD,getType($1));}
        sprintf(buffer1, "%s", $1);
    }
    | INT_NUMBER {
        strcpy(typeD,"INTEGER");
        sprintf(buffer1, "%d", atoi($1));
                  
    }
    | FLOAT_NUMBER{
        strcpy(typeD,"FLOAT");
        sprintf(buffer1, "%f", $1);
    }
    |LPAREN PLUS INT_NUMBER RPAREN{
        strcpy(typeD,"INTEGER");
    }
    |LPAREN MINUS INT_NUMBER RPAREN{
        strcpy(typeD,"INTEGER");
    }
    | LPAREN PLUS FLOAT_NUMBER RPAREN {
        strcmp(typeD,"FLOAT");
                   }
    | LPAREN MINUS FLOAT_NUMBER RPAREN {
        strcpy(typeD,"FLOAT");
    }
    | LPAREN term2 RPAREN {$$=$2;}
    |IDENTIFIER LBRACKET INT_NUMBER RBRACKET {
        if(verifdeclaration($1)==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",$1,nb_ligne);}
        else {
                strcpy(typeG,getType($1));
                }
    }
;

term4:
    factor4
    | factor4 PLUS term4 {
        float t=$1+$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3);  
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        createQuad("+", buffer1, buffer2, temp);
        cpttemp++;
    }                  // Addition
    | factor4 MINUS term4 {
        float t=$1-$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("-", buffer1, buffer2, temp);
        cpttemp++;
    }                // substraction
;

// Define factor as multiplication/division or a primary element
factor4:
    primary4
    | primary4 MULTIPLY factor4 {
        float t=$1*$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
       
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        cpttemp++;
    }          // Multiplication, right-recursive
    | primary4 DIVIDE factor4     { 
        if($3==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=$1/$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        cpttemp++;  
        }
    }                     // Division, right-recursive
;

// Define primary elements: identifiers, numbers, and parenthesized expressions
primary4:
    IDENTIFIER {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration($1) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", $1);
        }else {strcpy(typeD,getType($1));}
        strcpy(brnsup,$1);
    }
    | INT_NUMBER {
        strcpy(typeD,"INTEGER");
                  
    }
    | FLOAT_NUMBER{
        strcpy(typeD,"FLOAT");
    }
    |LPAREN PLUS INT_NUMBER RPAREN{
        strcpy(typeD,"INTEGER");
    }
    |LPAREN MINUS INT_NUMBER RPAREN{
        strcpy(typeD,"INTEGER");
    }
    | LPAREN PLUS FLOAT_NUMBER RPAREN {
        strcmp(typeD,"FLOAT");
                   }
    | LPAREN MINUS FLOAT_NUMBER RPAREN {
        strcpy(typeD,"FLOAT");
    }
    | LPAREN term4 RPAREN {$$=$2;}
    |IDENTIFIER LBRACKET INT_NUMBER RBRACKET {
        if(verifdeclaration($1)==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",$1,nb_ligne);}
        else {
                strcpy(typeD,getType($1));
                }
    }
;
term3:
    factor3
    | factor3 PLUS term3 {
        float t=$1+$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3);  
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        createQuad("+", buffer1, buffer2, temp);
        cpttemp++;
    }                  // Addition
    | factor3 MINUS term3 {
        float t=$1-$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("-", buffer1, buffer2, temp);
        cpttemp++;
    }                // substraction
;

// Define factor as multiplication/division or a primary element
factor3:
    primary3
    | primary3 MULTIPLY factor3 {
        float t=$1*$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
       
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        cpttemp++;
    }          // Multiplication, right-recursive
    | primary3 DIVIDE factor3 {
        if($3==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=$1/$3;
        tt=newtemp();
        sprintf(tt,"%f",t);
        $$=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor($1);
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", $1); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor($3);
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", $3); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        cpttemp++;  
        }
    }                     // Division, right-recursive
;

// Define primary elements: identifiers, numbers, and parenthesized expressions
primary3:
    IDENTIFIER {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration($1) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", $1);
        }else {strcpy(typeG,getType($1));}
        strcpy(pasfor,$1);
    }
    | INT_NUMBER {
        strcpy(typeG,"INTEGER");
        sprintf(pasfor,"%d",atoi($1));
                  
    }
    | FLOAT_NUMBER{
        strcpy(typeG,"FLOAT");
    }
    |LPAREN PLUS INT_NUMBER RPAREN{
        strcpy(typeG,"INTEGER");
    }
    |LPAREN MINUS INT_NUMBER RPAREN{
        strcpy(typeG,"INTEGER");
    }
    | LPAREN PLUS FLOAT_NUMBER RPAREN {
        strcmp(typeG,"FLOAT");
                   }
    | LPAREN MINUS FLOAT_NUMBER RPAREN {
        strcpy(typeG,"FLOAT");
    }
    | LPAREN term3 RPAREN {$$=$2;}
    |IDENTIFIER LBRACKET INT_NUMBER RBRACKET {
        if(verifdeclaration($1)==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",$1,nb_ligne);}
        else {
                strcpy(typeG,getType($1));
                }
    }
;
// Define string literals for WRITE statements
string_literal:
    STRING_LITERAL
;

%%

// Main function to start the parser
int main() {
    initialisation();
    
    yyparse(); 
    printf("\n");
    afficher(0);afficher(1);afficher(2);
    displayQuad();
    return 0;
}
int yywrap() {
    return 1;
}

// Function to handle errors during parsing

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d, column %d\n", s, nb_ligne, col);

}

