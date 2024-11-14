%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "TableSymbole.h"

    int yylex();
    void yyerror(const char *s);
%}

%union {
    int entier;
    float real;
    char character;
}

%token VAR_GLOBAL DECLARATION INSTRUCTION
%token INTEGER FLOAT CHAR CONST IF ELSE FOR READ WRITE
%token IDENTIFIER INT_NUMBER_S INT_NUMBER FLOAT_NUMBER_S FLOAT_NUMBER CHARACTERE
%token AND OR NOT EQ NEQ GEQ LEQ GT LT
%token EQUALS PLUS MINUS MULTIPLY DIVIDE
%token LBRACE RBRACE LPAREN RPAREN LBRACKET RBRACKET SEMICOLON COMMA COLON
%token STRING_LITERAL

%start program
%type <entier> expression term factor

// Démarrage de la grammaire
program:
    VAR_GLOBAL LBRACE global_var_section RBRACE
    DECLARATION LBRACE declaration_section RBRACE
    INSTRUCTION LBRACE instruction_section RBRACE
;

// Section des variables globales
global_var_section:
    declaration
    | declaration global_var_section
;

// Section des déclarations
declaration_section:
    declaration
    | declaration declaration_section
;

// Section des instructions
instruction_section:
    statement
    | statement instruction_section
;

// Déclaration de variable ou constante
declaration:
    type variable_list SEMICOLON {
        // Pour chaque variable dans la liste, on l'insère dans la table des symboles
        if (positionIDF($2) == -1) {
            insererIDFCONST($2, "IDF", $1, "", 0); // Insertion de l'IDF avec son type
        } else {
            yyerror("Erreur : identificateur déjà déclaré.");
        }
    }
    | CONST type IDENTIFIER EQUALS expression SEMICOLON {
        if (positionIDF($3) == -1) {
            insererIDFCONST($3, "IDF CONSTANT", $2, "", 0); // Insertion de la constante
        } else {
            yyerror("Erreur : constante déjà déclarée.");
        }
    }
    
;

// Liste de variables
variable_list:
    variable
    | variable COMMA variable_list
;

// Variable simple ou tableau
variable:
    IDENTIFIER {
        if (positionIDF($1) == -1) {
            insererIDFCONST($1, "variable", "", "", 0); // Insertion de la variable
        } else {
            yyerror("Erreur : identificateur déjà déclaré.");
        }
    }
    | IDENTIFIER LBRACKET INT_NUMBER RBRACKET {
        if (positionIDF($1) == -1) {
            insererIDFCONST($1, "array", "", "", 0); // Insertion de la variable tableau
        } else {
            yyerror("Erreur : identificateur déjà déclaré.");
        }
    }
;

// Types de données pour les variables
type:
    INTEGER { $$ = "int"; }
    | FLOAT { $$ = "float"; }
    | CHAR { $$ = "char"; }
;

// Instructions
statement:
    assignment
    | condition
    | loop
    | io_statement
;

// Affectation
assignment:
    IDENTIFIER EQUALS expression SEMICOLON {
        if (positionIDF($1) == -1) {
            yyerror("Erreur : variable non déclarée.");
        } else if (!verifcmpType($1, getType($3))) {
            yyerror("Erreur : type incompatible dans l'affectation.");
        }
    }
;

// Conditionnelle IF avec ELSE optionnel
condition:
    IF LPAREN expression RPAREN LBRACE instruction_section RBRACE SEMICOLON
    | IF LPAREN expression RPAREN LBRACE instruction_section RBRACE ELSE LBRACE instruction_section RBRACE SEMICOLON
;

// Boucle FOR
loop:
    FOR LPAREN assignment COLON expression COLON expression RPAREN LBRACE instruction_section RBRACE SEMICOLON
;

// Entrée/Sortie
io_statement:
    READ LPAREN IDENTIFIER RPAREN SEMICOLON {
        if (positionIDF($3) == -1) {
            yyerror("Erreur : variable non déclarée pour lecture.");
        }
    }
    | WRITE LPAREN io_expr_list RPAREN SEMICOLON
;

// Liste d'expressions pour WRITE
io_expr_list:
    io_expr
    | io_expr COMMA io_expr_list
;

// Expressions dans WRITE
io_expr:
    expression
    | string_literal
;

// Expressions arithmétiques
expression:
    term
    | term PLUS expression
    | term MINUS expression
;

// Termes dans une expression
term:
    factor
    | factor MULTIPLY term
    | factor DIVIDE term
;

// Facteurs dans une expression
factor:
    IDENTIFIER {
        if (positionIDF($1) == -1) {
            yyerror("Erreur : variable non déclarée.");
        }
    }
    | INT_NUMBER
    | FLOAT_NUMBER
    | INT_NUMBER_S
    | FLOAT_NUMBER_S
    | LPAREN expression RPAREN
;

// Littéraux de chaîne
string_literal:
    STRING_LITERAL
;

%%

// Fonction principale pour lancer le parseur
int main() {
    initialisation(); // Initialise la table des symboles ou autres
    yyparse();
    printf("\n");
    afficher(0); afficher(1); afficher(2); // Affiche les symboles
    return 0;
}

int yywrap() {
    return 1;
}

// Fonction pour gérer les erreurs de syntaxe
void yyerror(const char *s) {
    fprintf(stderr, "Erreur de syntaxe : %s\n", s);
}
