%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "TableSymbole.h"
    int col;
    int nb_ligne;
    
%}
IDENTIFIER [A-Z][a-zA-Z0-9_]{0,7}
INT_NUMBER_S \([-+]?[0-9]+\)
INT_NUMBER [0-9]+
FLOAT_NUMBER_S \([-|+][0-9]+\.[0-9]+\) 
FLOAT_NUMBER [0-9]+\.[0-9]+
CHARACTERE \'[^ \t\n$%&#']\'


%%
VAR_GLOBAL       { rechercher(yytext,"mot cle","","",1);afficher(1); printf("VAR_GLOBAL\n");col += strlen(yytext); }
DECLARATION      { rechercher(yytext,"mot cle","","",1);printf("DECLARATION\n");col += strlen(yytext); }
INSTRUCTION      { printf("INSTRUCTION\n");col += strlen(yytext); }

INTEGER          { rechercher(yytext,"mot cle","","",1);printf("INTEGER\n");col += strlen(yytext); }
FLOAT            { rechercher(yytext,"mot cle","","",1);printf("FLOAT\n");col += strlen(yytext); }
CHAR             { rechercher(yytext,"mot cle","","",1);printf("CHAR\n");col += strlen(yytext); }
CONST            { rechercher(yytext,"mot cle","","",1);printf("CONST\n");col += strlen(yytext); }

IF               { rechercher(yytext,"mot cle","","",1);printf("IF\n"); col += strlen(yytext);}
ELSE             { rechercher(yytext,"mot cle","","",1);printf("ELSE\n");col += strlen(yytext); }
FOR              { rechercher(yytext,"mot cle","","",1);printf("FOR\n"); col += strlen(yytext);}
READ             { rechercher(yytext,"mot cle","","",1);printf("READ\n"); col += strlen(yytext);}
WRITE            { rechercher(yytext,"mot cle","","",1);printf("WRITE\n");col += strlen(yytext); }

"&&"               { rechercher(yytext,"sep",0,"",2);printf("AND\n"); col += strlen(yytext);}
"||"               { rechercher(yytext,"sep",0,"",2);printf("OR\n"); col += strlen(yytext);}
"!"                { rechercher(yytext,"sep",0,"",2);printf("NOT\n"); col += strlen(yytext);}

"=="               { rechercher(yytext,"sep",0,"",2);printf("EQ\n"); col += strlen(yytext);}
"!="               { rechercher(yytext,"sep",0,"",2);printf("NEQ\n"); col += strlen(yytext);}
">="               { rechercher(yytext,"sep",0,"",2);printf("GEQ\n"); col += strlen(yytext);}
"<="               { rechercher(yytext,"sep",0,"",2);printf("LEQ\n"); col += strlen(yytext);}
">"                { rechercher(yytext,"sep",0,"",2);printf("GT\n"); col += strlen(yytext); }
"<"                { rechercher(yytext,"sep",0,"",2);printf("LT\n"); col += strlen(yytext);}

"%%"[^\n]*         { /* Ignorer les commentaires */ col += strlen(yytext); }

[ \t]+             { /* Ignorer les espaces */col += strlen(yytext); }

\n                 { nb_ligne++; col += strlen(yytext);}

"="                { rechercher(yytext,"sep",0,"",2);printf("EQUALS\n");col += strlen(yytext); }
"+"                { rechercher(yytext,"sep",0,"",2);printf("PLUS\n");col += strlen(yytext); }
"-"                { rechercher(yytext,"sep",0,"",2);printf("MINUS\n");col += strlen(yytext); }
"*"                { rechercher(yytext,"sep",0,"",2);printf("MULTIPLY\n");col += strlen(yytext); }
"/"                { rechercher(yytext,"sep",0,"",2);printf("DIVIDE\n"); col += strlen(yytext);}

"{"                { rechercher(yytext,"sep",0,"",2);printf("LBRACE\n");col += strlen(yytext); }
"}"                { rechercher(yytext,"sep",0,"",2);printf("RBRACE\n"); col += strlen(yytext);}
"("                { rechercher(yytext,"sep",0,"",2);printf("LPAREN\n"); col += strlen(yytext);}
")"                { rechercher(yytext,"sep",0,"",2);printf("RPAREN\n");col += strlen(yytext); }
"["                { rechercher(yytext,"sep",0,"",2);printf("LBRACKET\n"); col += strlen(yytext);}
"]"                { rechercher(yytext,"sep",0,"",2);printf("RBRACKET\n");col += strlen(yytext); }
";"                { rechercher(yytext,"sep",0,"",2);printf("SEMICOLON\n"); col += strlen(yytext);}
","                { rechercher(yytext,"sep",0,"",2);printf("COMMA\n"); col += strlen(yytext);}
":"                { rechercher(yytext,"sep",0,"",2);printf("COLON\n");col += strlen(yytext); }

{INT_NUMBER_S}    {  printf("NUMBER_S: %s\n", yytext); col += strlen(yytext);}    /* Entier signé entre parenthèses */
{INT_NUMBER}             { printf("NUMBER: %s\n", yytext);col += strlen(yytext); }      /* Entier non signé */

{FLOAT_NUMBER_S} { printf("FLOAT_NUMBER_S: %s\n", yytext); col += strlen(yytext);} /* Réel signé entre parenthèses */
{FLOAT_NUMBER}     {  printf("FLOAT_NUMBER: %s\n", yytext);col += strlen(yytext); } /* Réel non signé */
{CHARACTERE}        {  printf("CHARACTERE: %s\n", yytext);col += strlen(yytext); } 
{IDENTIFIER} {  printf("IDENTIFIER: %s\n", yytext); col += strlen(yytext);}

.                  { printf("Erreur lexicale : %s \nligne %d Colonne %d\n",yytext ,yylineno, col);col= col +strlen(yytext); }

%%

int main() {
    initialisation();
    yyin = fopen("programme.txt", "r");
    if (yyin == NULL) {
        printf("ERROR\n");
        return 1;
    } else {
        yylex();
    }
    return 0;
}
