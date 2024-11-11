%{
    // Import necessary libraries for I/O and symbol table management
    #include <stdio.h>
    #include <stdlib.h>
    


    // Declare external functions for lexical analysis and parsing
    extern int yylex();
    extern int yyparse();

    // Define a function to handle errors encountered during parsing
    void yyerror(const char *s);

    // Variables to track line and column numbers
    int nb_ligne = 1;
    int col = 1;
%}

// Define the types for YYSTYPE (union members) to hold values for different tokens
%union {
    int entier;
    float real;
    char character;
}

// Declare tokens (these correspond to keywords and operators from the Flex file)
%token VAR_GLOBAL DECLARATION INSTRUCTION
%token INTEGER FLOAT CHAR CONST IF ELSE FOR READ WRITE
%token IDENTIFIER INT_NUMBER_S INT_NUMBER FLOAT_NUMBER_S FLOAT_NUMBER CHARACTERE
%token AND OR NOT EQ NEQ GEQ LEQ GT LT
%token EQUALS PLUS MINUS MULTIPLY DIVIDE
%token LBRACE RBRACE LPAREN RPAREN LBRACKET RBRACKET SEMICOLON COMMA COLON

// Specify types of non-terminal symbols used in rules (to support typed tokens in actions)
%type <entier> expression term factor
%type <entier> declaration assignment condition loop io_statement
%type <entier> variable_list

%%

// Define the starting rule for the program structure
program:
    // Structure includes three main sections: global variables, declarations, and instructions
    VAR_GLOBAL LBRACE global_var_section RBRACE
    DECLARATION LBRACE declaration_section RBRACE
    INSTRUCTION LBRACE instruction_section RBRACE
;

// Section for global variables (multiple declarations can be listed here)
global_var_section:
    /* Allow repeating declarations in the global section */
    | global_var_section declaration
;

// Section for declarations (handles variable, array, and constant declarations)
declaration_section:
    /* Declarations are defined and can repeat */
    | declaration_section declaration
;

// Section for instructions (statements like assignments, conditionals, loops)
instruction_section:
    /* List of instructions that make up the program */
    | instruction_section statement
;

// Rule for different types of declarations
declaration:
    // Single or multiple variable declarations with a type
    type variable_list SEMICOLON { printf("Variable declaration\n"); }
    // Constant declaration with a fixed value
    | CONST type IDENTIFIER EQUALS expression SEMICOLON { printf("Constant declaration: %s\n", $3); }
;

// Rule for a list of variables separated by commas
variable_list:
    IDENTIFIER                          // Single identifier
    | variable_list COMMA IDENTIFIER    // Multiple identifiers separated by commas
;

// Define valid types for variables (int, float, char)
type:
    INTEGER
    | FLOAT
    | CHAR
;

// Define possible statements in the instruction section
statement:
    assignment          // Assignment statement
    | condition         // Conditional statement (if-else)
    | loop              // Loop statement (for loop)
    | io_statement      // Input/output statement (read/write)
;

// Define assignment statement (assigning an expression to an identifier)
assignment:
    IDENTIFIER EQUALS expression SEMICOLON { printf("Assignment to %s\n", $1); }
;

// Define conditional statement with optional else block
condition:
    IF LPAREN expression RPAREN LBRACE instruction_section RBRACE SEMICOLON
    | IF LPAREN expression RPAREN LBRACE instruction_section RBRACE ELSE LBRACE instruction_section RBRACE SEMICOLON
;

// Define loop statement with initialization, step, and end conditions
loop:
    FOR LPAREN assignment COLON expression COLON expression RPAREN LBRACE instruction_section RBRACE SEMICOLON
;

// Define input/output statements (read and write)
io_statement:
    READ LPAREN IDENTIFIER RPAREN SEMICOLON            // Read statement for a variable
    | WRITE LPAREN string_literal RPAREN SEMICOLON      // Write statement with a string literal
;

// Define expressions (arithmetic operations)
expression:
    expression PLUS term      // Addition
    | expression MINUS term   // Subtraction
    | term                    // Single term (used for recursion)
;

// Define term as multiplication/division operations or a factor
term:
    term MULTIPLY factor      // Multiplication
    | term DIVIDE factor      // Division
    | factor                  // Single factor (used for recursion)
;

// Define factor, which is a single variable, constant, or parenthesized expression
factor:
    IDENTIFIER                // Variable
    | INT_NUMBER              // Integer constant
    | FLOAT_NUMBER            // Float constant
    | LPAREN expression RPAREN // Parenthesized expression
;

// Define string literals (placeholders for handling text in WRITE statements)
string_literal:
    /* Handle string literals for WRITE statements */
;

%%

// Main function to start the parser
int main() {
    yyparse(); // Start parsing process
    return 0;  // Return 0 on successful parsing
}

// Function to handle errors during parsing
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d, column %d\n", s, nb_ligne, col);
}
