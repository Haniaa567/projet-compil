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
    char *string;  // Pour les chaînes de caractères
}

%token <entier> VAR_GLOBAL DECLARATION INSTRUCTION
%token <entier> INTEGER FLOAT CHAR CONST IF ELSE FOR READ WRITE
%token <entier> IDENTIFIER INT_NUMBER_S INT_NUMBER FLOAT_NUMBER_S FLOAT_NUMBER CHARACTERE
%token <entier> AND OR NOT EQ NEQ GEQ LT LEQ GT
%token <entier> EQUALS PLUS MINUS MULTIPLY DIVIDE
%token <string> STRING_LITERAL  // Utilisation de char* pour STRING_LITERAL

%type <entier> program global_var_section declaration_section instruction_section declaration
%type <entier> variable_list variable type statement assignment condition loop io_statement io_expr_list io_expr
%type <entier> expression comparison_expr term factor primary
%type <string> string_literal  // STRING_LITERAL est une chaîne de caractères

%%

// Starting rule for the program structure
program:
    VAR_GLOBAL LBRACE global_var_section RBRACE
    DECLARATION LBRACE declaration_section RBRACE
    INSTRUCTION LBRACE instruction_section RBRACE
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
    type variable_list SEMICOLON
    | CONST type IDENTIFIER EQUALS expression SEMICOLON {
        if (positionIDF($3) == -1) {
            insererIDFCONST($3, "IDF CONSTANT", $2, "", 0); // Insère la constante
        } else {
            yyerror("Erreur : constante déjà déclarée.");
        }
    }
;

// Rule for a list of variables separated by commas (converted to right-recursive)
variable_list:
    variable
    | variable COMMA variable_list
;

// Rule for a variable, which can be either simple or an array
variable:
    IDENTIFIER {
        if (positionIDF($1) == -1) {
            insererIDFCONST($1, "variable", "", "", 0); // Insertion de la variable
        } else {
            yyerror("Erreur : identificateur déjà déclaré.");
        }
    }
    | IDENTIFIER LBRACKET INT_NUMBER RBRACKET {
        if ($3 <= 0) {
            yyerror("Erreur : l'indice de tableau doit être strictement positif.");
        } else {
            if (positionIDF($1) == -1) {
                insererIDFCONST($1, "array", "", "", $3);
            } else {
                yyerror("Erreur : identificateur déjà déclaré.");
            }
        }
    }
;

// Define valid types for variables
type:
    INTEGER { $$ = "int"; }
    | FLOAT { $$ = "float"; }
    | CHAR { $$ = "char"; }
;

// Define possible statements in the instruction section
statement:
    assignment
    | condition
    | loop
    | io_statement
;

// Define assignment statement
assignment:
    IDENTIFIER EQUALS expression SEMICOLON {
        if (positionIDF($1) == -1) {
            yyerror("Erreur : variable non déclarée.");
        } else if (verifconstante($1)) {
            yyerror("Erreur : modification d'une constante.");
        } else if (!verifcmpType($1, getType($3))) {
            yyerror("Erreur : type incompatible dans l'affectation.");
        }
    }
;

// Define conditional statement with optional else block
condition:
    IF LPAREN expression RPAREN LBRACE instruction_section RBRACE SEMICOLON
    | IF LPAREN expression RPAREN LBRACE instruction_section RBRACE ELSE LBRACE instruction_section RBRACE SEMICOLON
;

// Define loop statement
loop:
    FOR LPAREN assignment COLON expression COLON expression RPAREN LBRACE instruction_section RBRACE SEMICOLON
;

// Define input/output statements
io_statement:
    READ LPAREN IDENTIFIER RPAREN SEMICOLON {
        if (positionIDF($3) == -1) {
            yyerror("Erreur : variable non déclarée pour lecture.");
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
    expression
    | string_literal
;

// Define expressions (arithmetic operations, converted to right-recursive)
expression:
    comparison_expr                    // Start with comparison expressions
    | comparison_expr AND expression   // Logical AND
    | comparison_expr OR expression    // Logical OR
;

// Define comparison expressions (includes comparison operators)
comparison_expr:
    term
    | term GT comparison_expr           // Greater than
    | term LT comparison_expr           // Less than
    | term GEQ comparison_expr          // Greater than or equal to
    | term LEQ comparison_expr          // Less than or equal to
    | term EQ comparison_expr           // Equal
    | term NEQ comparison_expr          // Not equal
;

// Define term as multiplication/division operations or a factor (converted to right-recursive)
term:
    factor
    | factor PLUS term                  // Addition
    | factor MINUS term                 // Subtraction
;

// Define factor as multiplication/division or a primary element
factor:
    primary
    | primary MULTIPLY factor           // Multiplication, right-recursive
    | primary DIVIDE factor             // Division, right-recursive
;

// Define primary elements: identifiers, numbers, and parenthesized expressions
primary:
    IDENTIFIER {
        if (positionIDF($1) == -1) {
            yyerror("Erreur : variable non déclarée.");
        }
    }
    | INT_NUMBER {
        if ($1 < -32768 || $1 > 32767) {
            yyerror("Erreur : entier hors des limites autorisées (-32768 à 32767).");
        }
    }
    | FLOAT_NUMBER {
        // Ajouter des vérifications de plage pour les flottants si nécessaire
    }
    | INT_NUMBER_S {
        if ($1 < -32768 || $1 > 32767) {
            yyerror("Erreur : entier signé hors des limites autorisées (-32768 à 32767).");
        }
    }
    | FLOAT_NUMBER_S {
        // Ajouter des vérifications de plage pour les flottants si nécessaire
    }
    | LPAREN expression RPAREN
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
    afficher(0); afficher(1); afficher(2);
    return 0;
}

int yywrap() {
    return 1;
}

// Function to handle errors during parsing
void yyerror(const char *s) {
    fprintf(stderr, "Erreur : %s à la ligne %d, colonne %d\n", s, nb_ligne, col);
}
