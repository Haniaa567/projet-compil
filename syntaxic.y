%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include "TableSymbole.h"

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
   char valIdf[20];
   char saveStr[20];
   char saveS[20];
   char mDroit[20];
   char tableau_info[20];

%}

%union {
    int entier;
    float real;
    char character;
    char* string;
}

%token VAR_GLOBAL DECLARATION INSTRUCTION
%token INTEGER FLOAT CHAR CONST IF ELSE FOR READ WRITE
%token <string>IDENTIFIER <string>INT_NUMBER  <string>FLOAT_NUMBER CHARACTERE
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
            strcpy(saveIdf[j].idfTab,"");
        }j=0;    
    }
<<<<<<< HEAD
    | CONST type cst EQUALS term SEMICOLON
 
    
      
=======
    | CONST type cst EQUALS term SEMICOLON        
>>>>>>> dd68af19b742d181ce3a921bac15b40d3beceb3a
;

cst:
    IDENTIFIER{
        strcpy(saveIdf[0].idfTab,$1);
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType($1));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[0].idfTab,nb_ligne);
            strcpy(saveIdf[0].idfTab,"");
    }
;
IDFT:
    IDENTIFIER{
            strcpy(saveIdf[0].idfTab,$1);
            
            //verification de la double declaration et insertion du type
                if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType($1));}
                else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[0].idfTab,nb_ligne);
                strcpy(saveIdf[0].idfTab,"");
        }
;
<<<<<<< HEAD

=======
   
>>>>>>> dd68af19b742d181ce3a921bac15b40d3beceb3a
// Rule for a list of variables separated by commas (converted to right-recursive)
variable_list:
    IDENTIFIER {strcpy(saveIdf[j].idfTab,$1);j++;} 
    | IDENTIFIER LBRACKET INT_NUMBER RBRACKET{strcpy(saveIdf[j].idfTab,$1);j++;
        if (atoi($3) == 0) {
            printf("Erreur semantique : La taille du tableau doit etre strictement positive\n");
        } } 
    | IDENTIFIER COMMA variable_list  {strcpy(saveIdf[j].idfTab,$1);j++;} 
    | IDENTIFIER LBRACKET INT_NUMBER RBRACKET COMMA variable_list  {strcpy(saveIdf[j].idfTab,$1);j++;} 
    | IDENTIFIER LBRACKET LPAREN PLUS INT_NUMBER RPAREN RBRACKET COMMA variable_list  {strcpy(saveIdf[j].idfTab,$1);j++;} 
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


        insererVal(mDroit, saveStr);
    }
    |TAB EQUALS EXPRESSION_CHAINE SEMICOLON
    |MDROIT EQUALS EXPRESSION_CHAR SEMICOLON
    
;
MDROIT: 
    IDENTIFIER {
    // Vérification de la déclaration de la variable avant usage
    if (verifdeclaration($1) == 0) {
        printf("Erreur sémantique : La variable '%s' n'est pas déclarée avant son utilisation.\n", $1);
    } else {
        strcpy(typeG, getType($1));  // Récupérer le type de la variable à gauche
        printf("type: %s", typeG);
        if (comparCode($1) == 0) {
            printf("Erreur sémantique à la ligne %d : affectation d'une constante\n", nb_ligne);
        } else {
            strcpy(mDroit, $1);
        }
    }
    }
    | TAB
; 
TAB:
    IDENTIFIER LBRACKET INT_NUMBER RBRACKET   {if(verifdeclaration($1)==0 )
                    {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",$1,nb_ligne);}
                    else {
                        strcpy(typeG, getType($1));
                            }
        }               
 
    | IDENTIFIER LBRACKET LPAREN PLUS INT_NUMBER RPAREN RBRACKET {
                if(verifdeclaration($1)==0 )
                  {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",$1,nb_ligne);}
                  else {
                     strcpy(typeG, getType($1));
                        }
                  } 

; 
EXPRESSION_CHAR: CHARACTERE {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,$1);}
                           }            
;                
EXPRESSION_CHAINE:
             CHARACTERE {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,$1);}
                           }
             |STRING_LITERAL {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,$1);}
                           }           
                           
    
;                          
// Define conditional statement with optional else block
condition:
    IF LPAREN COND RPAREN LBRACE instruction_section RBRACE SEMICOLON
    | IF LPAREN COND RPAREN LBRACE instruction_section RBRACE ELSE LBRACE instruction_section RBRACE SEMICOLON
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
        }
    }
;    
// Define loop statement
loop:
    FOR LPAREN assignment_int COLON term3 COLON term4 RPAREN LBRACE instruction_section RBRACE SEMICOLON{
        if(strcmp(typeD,"INTEGER")!=0 || strcmp(typeG,"INTEGER")!=0)
        {
            printf("Erreur semantique parametre boucle type incompatible \n");
        }
    }
;

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
    | NOT COND                   
    | comparison_expr AND COND   // Logical AND
    | comparison_expr OR COND    // Logical OR
;

// Define comparison expressions (includes comparison operators)
comparison_expr:
    term2 OP_COMP term1  
    |STRING_LITERAL OP_COMP STRING_LITERAL
    |CHARACTERE OP_COMP CHARACTERE  
    |DROIT OP_COMP term1 {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);}       
    |term2 OP_COMP GAUCHE {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);}
   
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
    GT        // Greater than
    |LT            // Less than
    |GEQ      // Greater than or equal to
    |LEQ        // Less than or equal to
    |EQ  // Equal
    |NEQ       // Not equal
;
// Define term as multiplication/division operations or a factor (converted to right-recursive)
term:
    factor
    | factor PLUS term {$$=$1+$3;}                  // Addition
    | factor MINUS term {$$=$1-$3;}                // substraction
;

// Define factor as multiplication/division or a primary element
factor:
    primary
    | primary MULTIPLY factor {$$=$1*$3;}          // Multiplication, right-recursive
    | primary DIVIDE factor     { if($3==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                $$= $1 / $3;  
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
                             }
    }
    | INT_NUMBER {
        printf("here %s\n",typeG);
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{$$=atof($1);}
                  
    }
    | FLOAT_NUMBER{        printf("here 2 %s\n",typeG);

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   $$=atof($1); }  
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


term1:
    factor1
    | factor1 PLUS term1 {$$=$1+$3;}                  // Addition
    | factor1 MINUS term1 {$$=$1-$3;}                // substraction
;

// Define factor as multiplication/division or a primary element
factor1:
    primary1
    | primary1 MULTIPLY factor1 {$$=$1*$3;}          // Multiplication, right-recursive
    | primary1 DIVIDE factor1     { if($3==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                $$= $1 / $3;  
                                             }
                            }                     // Division, right-recursive
;

// Define primary elements: identifiers, numbers, and parenthesized expressions
primary1:
    IDENTIFIER {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration($1) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", $1);
        }else {strcpy(typeD,getType($1) );
                             if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0) ) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);}
                                strcpy(valIdf,getVal($1));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,$1);}
                                 else
                                  $$=atof(valIdf);
                             }
    }
    | INT_NUMBER {
        printf("here %s\n",typeG);
        strcpy(typeD,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{$$=atof($1);}
                  
    }
    | FLOAT_NUMBER{        printf("here 2 %s\n",typeG);
                    strcpy(typeD,"FLOAT");
                    if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   $$=atof($1); }  
                   }
    |LPAREN PLUS INT_NUMBER RPAREN{
        strcpy(typeD,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{$$=atof($3);}
    }
    |LPAREN MINUS INT_NUMBER RPAREN{
        strcpy(typeD,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",$3);
                strcat(strcpy(saveS,"-"),saveStr);
                $$=atoi(saveS);}
    }
    | LPAREN PLUS FLOAT_NUMBER RPAREN {
        strcpy(typeD,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
        else{$$=atof($3);}
                   }
    | LPAREN MINUS FLOAT_NUMBER RPAREN {
        strcpy(typeD,"FLOAT");
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
                                    strcpy(typeD,getType($1));
                                     if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                }
;
term2:
    factor2
    | factor2 PLUS term2 {$$=$1+$3;}                  // Addition
    | factor2 MINUS term2 {$$=$1-$3;}                // substraction
;

// Define factor as multiplication/division or a primary element
factor2:
    primary2
    | primary2 MULTIPLY factor2 {$$=$1*$3;}          // Multiplication, right-recursive
    | primary2 DIVIDE factor2     { if($3==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                $$= $1 / $3;  
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
    | factor4 PLUS term4 {$$=$1+$3;}                  // Addition
    | factor4 MINUS term4 {$$=$1-$3;}                // substraction
;

// Define factor as multiplication/division or a primary element
factor4:
    primary4
    | primary4 MULTIPLY factor4 {$$=$1*$3;}          // Multiplication, right-recursive
    | primary4 DIVIDE factor4     { if($3==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                $$= $1 / $3;  
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
    | factor3 PLUS term3 {$$=$1+$3;}                  // Addition
    | factor3 MINUS term3 {$$=$1-$3;}                // substraction
;

// Define factor as multiplication/division or a primary element
factor3:
    primary3
    | primary3 MULTIPLY factor3 {$$=$1*$3;}          // Multiplication, right-recursive
    | primary3 DIVIDE factor3     { if($3==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                $$= $1 / $3;  
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
    }
    | INT_NUMBER {
        strcpy(typeG,"INTEGER");
                  
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
    return 0;
}
int yywrap() {
    return 1;
}

// Function to handle errors during parsing

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d, column %d\n", s, nb_ligne, col);

}

