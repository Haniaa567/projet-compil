%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "TableSymbole.h"
    extern int col=1;
    extern int nb_ligne=1;
    
    extern YYSTYPE yylval;
    
%}

%option yylineno

IDENTIFIER [A-Z][a-zA-Z0-9_]*
INT_NUMBER_S \([-+]?[0-9]+\)
INT_NUMBER [0-9]+
FLOAT_NUMBER_S \([-|+][0-9]+\.[0-9]+\) 
FLOAT_NUMBER [0-9]+\.[0-9]+
CHARACTERE \'[^ \t\n$%&#']\'


%%
VAR_GLOBAL       { rechercher(yytext,"mot cle","","",1); afficher(1); printf("VAR_GLOBAL\n"); col += strlen(yytext); return VAR_GLOBAL; }
DECLARATION      { rechercher(yytext,"mot cle","","",1); printf("DECLARATION\n"); col += strlen(yytext); return DECLARATION; }
INSTRUCTION      { printf("INSTRUCTION\n"); col += strlen(yytext); return INSTRUCTION; }

INTEGER          { rechercher(yytext,"mot cle","","",1); printf("INTEGER\n"); col += strlen(yytext); return INTEGER; }
FLOAT            { rechercher(yytext,"mot cle","","",1); printf("FLOAT\n"); col += strlen(yytext); return FLOAT; }
CHAR             { rechercher(yytext,"mot cle","","",1); printf("CHAR\n"); col += strlen(yytext); return CHAR; }
CONST            { rechercher(yytext,"mot cle","","",1); printf("CONST\n"); col += strlen(yytext); return CONST; }

IF               { rechercher(yytext,"mot cle","","",1); printf("IF\n"); col += strlen(yytext); return IF; }
ELSE             { rechercher(yytext,"mot cle","","",1); printf("ELSE\n"); col += strlen(yytext); return ELSE; }
FOR              { rechercher(yytext,"mot cle","","",1); printf("FOR\n"); col += strlen(yytext); return FOR; }
READ             { rechercher(yytext,"mot cle","","",1); printf("READ\n"); col += strlen(yytext); return READ; }
WRITE            { rechercher(yytext,"mot cle","","",1); printf("WRITE\n"); col += strlen(yytext); return WRITE; }

"&&"             { rechercher(yytext,"sep",0,"",2); printf("AND\n"); col += strlen(yytext); return AND; }
"||"             { rechercher(yytext,"sep",0,"",2); printf("OR\n"); col += strlen(yytext); return OR; }
"!"              { rechercher(yytext,"sep",0,"",2); printf("NOT\n"); col += strlen(yytext); return NOT; }

"=="             { rechercher(yytext,"sep",0,"",2); printf("EQ\n"); col += strlen(yytext); return EQ; }
"!="             { rechercher(yytext,"sep",0,"",2); printf("NEQ\n"); col += strlen(yytext); return NEQ; }
">="             { rechercher(yytext,"sep",0,"",2); printf("GEQ\n"); col += strlen(yytext); return GEQ; }
"<="             { rechercher(yytext,"sep",0,"",2); printf("LEQ\n"); col += strlen(yytext); return LEQ; }
">"              { rechercher(yytext,"sep",0,"",2); printf("GT\n"); col += strlen(yytext); return GT; }
"<"              { rechercher(yytext,"sep",0,"",2); printf("LT\n"); col += strlen(yytext); return LT; }

"="              { rechercher(yytext,"sep",0,"",2); printf("EQUALS\n"); col += strlen(yytext); return EQUALS; }
"+"              { rechercher(yytext,"sep",0,"",2); printf("PLUS\n"); col += strlen(yytext); return PLUS; }
"-"              { rechercher(yytext,"sep",0,"",2); printf("MINUS\n"); col += strlen(yytext); return MINUS; }
"*"              { rechercher(yytext,"sep",0,"",2); printf("MULTIPLY\n"); col += strlen(yytext); return MULTIPLY; }
"/"              { rechercher(yytext,"sep",0,"",2); printf("DIVIDE\n"); col += strlen(yytext); return DIVIDE; }

"{"              { rechercher(yytext,"sep",0,"",2); printf("LBRACE\n"); col += strlen(yytext); return LBRACE; }
"}"              { rechercher(yytext,"sep",0,"",2); printf("RBRACE\n"); col += strlen(yytext); return RBRACE; }
"("              { rechercher(yytext,"sep",0,"",2); printf("LPAREN\n"); col += strlen(yytext); return LPAREN; }
")"              { rechercher(yytext,"sep",0,"",2); printf("RPAREN\n"); col += strlen(yytext); return RPAREN; }
"["              { rechercher(yytext,"sep",0,"",2); printf("LBRACKET\n"); col += strlen(yytext); return LBRACKET; }
"]"              { rechercher(yytext,"sep",0,"",2); printf("RBRACKET\n"); col += strlen(yytext); return RBRACKET; }
";"              { rechercher(yytext,"sep",0,"",2); printf("SEMICOLON\n"); col += strlen(yytext); return SEMICOLON; }
","              { rechercher(yytext,"sep",0,"",2); printf("COMMA\n"); col += strlen(yytext); return COMMA; }
":"              { rechercher(yytext,"sep",0,"",2); printf("COLON\n"); col += strlen(yytext); return COLON; }

{INT_NUMBER_S}   { yylval.entier = atoi(yytext); rechercher(yytext,"CONSTANT","INTEGER",yytext,0); printf("NUMBER_S: %s\n", yytext); col += strlen(yytext); return INT_NUMBER_S; }
{INT_NUMBER}     { yylval.entier = atoi(yytext); rechercher(yytext,"CONSTANT","INTEGER",yytext,0); printf("NUMBER: %s\n", yytext); col += strlen(yytext); return INT_NUMBER; }
{FLOAT_NUMBER_S} { yylval.real = atof(yytext); rechercher(yytext,"CONSTANT","FLOAT",yytext,0); printf("FLOAT_NUMBER_S: %s\n", yytext); col += strlen(yytext); return FLOAT_NUMBER_S; }
{FLOAT_NUMBER}   { yylval.real = atof(yytext); rechercher(yytext,"CONSTANT","FLOAT",yytext,0); printf("FLOAT_NUMBER: %s\n", yytext); col += strlen(yytext); return FLOAT_NUMBER; }
{CHARACTERE}     { yylval.character = yytext[0]; rechercher(yytext,"CONSTANT","CHAR",yytext,0); printf("CHARACTERE: %s\n", yytext); col += strlen(yytext); return CHARACTERE; }
{IDENTIFIER}     { rechercher(yytext,"IDF","","",0); col += strlen(yytext); if (yyleng < 9) { printf("IDENTIFIER: %s\n", yytext); return IDENTIFIER; } else { printf("Erreur Lexicale à la ligne %d à la colonne %d : IDF trop long\n", nb_ligne, col); } }

.                  { printf("Erreur lexicale : %s \nligne %d Colonne %d\n",yytext ,yylineno, col);col= col +strlen(yytext); }

%%



