%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int nb_ligne;
    
%}
IDENTIFIER [A-Z][a-zA-Z0-9_]{0,7}
INT_NUMBER_S \([-+]?[0-9]+\)
INT_NUMBER [0-9]+
FLOAT_NUMBER_S \([-|+][0-9]+\.[0-9]+\) 
FLOAT_NUMBER [0-9]+\.[0-9]+
CHARACTERE \'[^ \t\n$%&#']\'


%%
"VAR_GLOBAL"       { printf("VAR_GLOBAL\n"); }
"DECLARATION"      { printf("DECLARATION\n"); }
"INSTRUCTION"      { printf("INSTRUCTION\n"); }

"INTEGER"          { printf("INTEGER\n"); }
"FLOAT"            { printf("FLOAT\n"); }
"CHAR"             { printf("CHAR\n"); }
"CONST"            { printf("CONST\n"); }

"IF"               { printf("IF\n"); }
"ELSE"             { printf("ELSE\n"); }
"FOR"              { printf("FOR\n"); }
"READ"             { printf("READ\n"); }
"WRITE"            { printf("WRITE\n"); }

"&&"               { printf("AND\n"); }
"||"               { printf("OR\n"); }
"!"                { printf("NOT\n"); }

"=="               { printf("EQ\n"); }
"!="               { printf("NEQ\n"); }
">="               { printf("GEQ\n"); }
"<="               { printf("LEQ\n"); }
">"                { printf("GT\n"); }
"<"                { printf("LT\n"); }

"%%"[^\n]*         { /* Ignorer les commentaires */ }

[ \t]+             { /* Ignorer les espaces */ }

\n                 { nb_ligne++; }

"="                { printf("EQUALS\n"); }
"+"                { printf("PLUS\n"); }
"-"                { printf("MINUS\n"); }
"*"                { printf("MULTIPLY\n"); }
"/"                { printf("DIVIDE\n"); }

"{"                { printf("LBRACE\n"); }
"}"                { printf("RBRACE\n"); }
"("                { printf("LPAREN\n"); }
")"                { printf("RPAREN\n"); }
"["                { printf("LBRACKET\n"); }
"]"                { printf("RBRACKET\n"); }
";"                { printf("SEMICOLON\n"); }
","                { printf("COMMA\n"); }
":"                { printf("COLON\n"); }

{INT_NUMBER_S}    {  printf("NUMBER_S: %s\n", yytext); }    /* Entier signé entre parenthèses */
{INT_NUMBER}             { printf("NUMBER: %s\n", yytext); }      /* Entier non signé */

{FLOAT_NUMBER_S} { printf("FLOAT_NUMBER_S: %s\n", yytext); } /* Réel signé entre parenthèses */
{FLOAT_NUMBER}     {  printf("FLOAT_NUMBER: %s\n", yytext); } /* Réel non signé */
{CHARACTERE}        {  printf("CHARACTERE: %s\n", yytext); } 
{IDENTIFIER} {  printf("IDENTIFIER: %s\n", yytext); }

.                  { printf("Caractère inattendu: %s\n", yytext); }

%%

int main() {
    yyin = fopen("programme.txt", "r");
    if (yyin == NULL) {
        printf("ERROR\n");
        return 1;
    } else {
        yylex();
    }
    return 0;
}
