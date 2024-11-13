%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "TableSymbole.h"

    // Déclaration de la fonction `yylex` pour que le compilateur la reconnaisse.
    int yylex();

    // Déclaration de la fonction `yyerror` pour la gestion des erreurs de syntaxe.
    void yyerror(const char *s);

    int nb_ligne = 1;
    int col = 1;
%}

%union {
    int entier;
    float real;
    char character;
}

%token VAR_GLOBAL DECLARATION INSTRUCTION
%token INTEGER FLOAT CHAR CONST IF ELSE FOR READ WRITE
%token IDENTIFIER INT_NUMBER_S INT_NUMBER FLOAT_NUMBER_S FLOAT_NUMBER CHARACTERE
%token AND OR NOT EQ NEQ GEQ LT LEQ GT
%token EQUALS PLUS MINUS MULTIPLY DIVIDE
%token LBRACE RBRACE LPAREN RPAREN LBRACKET RBRACKET SEMICOLON COMMA COLON
%token STRING_LITERAL

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
    | CONST type IDENTIFIER EQUALS expression SEMICOLON
;

// Rule for a list of variables separated by commas (converted to right-recursive)
variable_list:
    variable
    | variable COMMA variable_list
;

// Rule for a variable, which can be either simple or an array
variable:
    IDENTIFIER
    | IDENTIFIER LBRACKET INT_NUMBER RBRACKET
;

// Define valid types for variables
type:
    INTEGER
    | FLOAT
    | CHAR
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
    IDENTIFIER EQUALS expression SEMICOLON
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
    READ LPAREN IDENTIFIER RPAREN SEMICOLON
    | WRITE LPAREN io_expr_list RPAREN SEMICOLON
;

// Define a list of expressions for the WRITE statement (converted to right-recursive)
io_expr_list:
    io_expr
    | io_expr COMMA io_expr_list
;

// Define expressions in WRITE (prioritizes expression interpretation)
io_expr:
    expression         // Handles identifiers and arithmetic expressions
    | string_literal   // Handles direct string output
;

// Define expressions (arithmetic operations, converted to right-recursive)
expression:
    term
    | term PLUS expression
    | term MINUS expression
;

// Define term as multiplication/division operations or a factor (converted to right-recursive)
term:
    factor
    | factor MULTIPLY term
    | factor DIVIDE term
;

// Define factor, which is a single variable, constant, or parenthesized expression
factor:
    IDENTIFIER
    | INT_NUMBER
    | FLOAT_NUMBER
    | INT_NUMBER_S
    | FLOAT_NUMBER_S
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
    afficher(0);afficher(1);afficher(2);
    return 0;
}
int yywrap() {
    return 1;
}

// Function to handle errors during parsing

void yyerror(const char *s) {
    fprintf(stderr, "Erreur de syntaxe : %s\n", s);
}

