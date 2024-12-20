%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "TableSymbole.h"
    #include "syntaxic.tab.h"
    
    
    extern YYSTYPE yylval;
    
%}

%option yylineno

IDENTIFIER [A-Z][a-zA-Z0-9_]*
INT_NUMBER [0-9]+
FLOAT_NUMBER [0-9]+\.[0-9]+
CHARACTERE \'[^ \t\n$%&#']\'
STRING_LITERAL  \"[^"]+\"

%%
VAR_GLOBAL       { rechercher(yytext,"mot cle","","",1);  colPrd=col;col += strlen(yytext); return VAR_GLOBAL; }
DECLARATION      { rechercher(yytext,"mot cle","","",1);colPrd=col;col += strlen(yytext); return DECLARATION; }
INSTRUCTION      {  rechercher(yytext,"mot cle","","",1);colPrd=col;col += strlen(yytext); return INSTRUCTION; }

INTEGER          { rechercher(yytext,"mot cle","","",1); colPrd=col;col += strlen(yytext); return INTEGER; }
FLOAT            { rechercher(yytext,"mot cle","","",1);colPrd=col;col += strlen(yytext); return FLOAT; }
CHAR             { rechercher(yytext,"mot cle","","",1); colPrd=col;col += strlen(yytext); return CHAR; }
CONST            { rechercher(yytext,"mot cle","","",1);  colPrd=col;col += strlen(yytext); return CONST; }

IF               { rechercher(yytext,"mot cle","","",1); colPrd=col;col += strlen(yytext); return IF; }
ELSE             { rechercher(yytext,"mot cle","","",1);  colPrd=col;col += strlen(yytext); return ELSE; }
FOR              { rechercher(yytext,"mot cle","","",1);  colPrd=col;col += strlen(yytext); return FOR; }
READ             { rechercher(yytext,"mot cle","","",1); colPrd=col;col += strlen(yytext); return READ; }
WRITE            { rechercher(yytext,"mot cle","","",1); colPrd=col;col += strlen(yytext); return WRITE; }

"&&"             { rechercher(yytext,"sep",0,"",2); colPrd=col;col += strlen(yytext); return AND; }
"||"             { rechercher(yytext,"sep",0,"",2); colPrd=col;col += strlen(yytext); return OR; }
"!"              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return NOT; }

"=="             { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return EQ; }
"!="             { rechercher(yytext,"sep",0,"",2); colPrd=col;col += strlen(yytext); return NEQ; }
">="             { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return GEQ; }
"<="             { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return LEQ; }
">"              { rechercher(yytext,"sep",0,"",2); colPrd=col;col += strlen(yytext); return GT; }
"<"              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return LT; }

"="              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return EQUALS; }
"+"              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return PLUS; }
"-"              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return MINUS; }
"*"              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return MULTIPLY; }
"/"              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return DIVIDE; }

"{"              { rechercher(yytext,"sep",0,"",2); colPrd=col;col += strlen(yytext); return LBRACE; }
"}"              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return RBRACE; }
"("              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return LPAREN; }
")"              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return RPAREN; }
"["              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return LBRACKET; }
"]"              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return RBRACKET; }
";"              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return SEMICOLON; }
","              { rechercher(yytext,"sep",0,"",2); colPrd=col;col += strlen(yytext); return COMMA; }
":"              { rechercher(yytext,"sep",0,"",2);  colPrd=col;col += strlen(yytext); return COLON; }

{INT_NUMBER}     { yylval.string = strdup(yytext);
                   rechercher(yytext, "CONSTANT", "INTEGER", yytext, 0);
                   if (atoi(yytext) > -32768 && atoi(yytext) < 32767) {
                    colPrd=col;col += strlen(yytext);
                   } else {
                       printf("Erreur Lexicale à la ligne %d à la colonne %d : l'entier n'est pas supporté\n", nb_ligne, col);exit(0);
                   }
                   
                   return INT_NUMBER; }

{FLOAT_NUMBER}   { yylval.string = strdup(yytext); 
                   rechercher(yytext,"CONSTANT","FLOAT",yytext,0); 
                   colPrd=col;col += strlen(yytext); 
                   return FLOAT_NUMBER; }
{CHARACTERE}     { yylval.string = strdup(yytext); rechercher(yytext,"CONSTANT","CHAR",yytext,0); colPrd=col;col += strlen(yytext); return CHARACTERE; }
{IDENTIFIER}     { yylval.string = strdup(yytext); rechercher(yytext,"IDF","","",0); colPrd=col;col += strlen(yytext); if (yyleng < 9) {  return IDENTIFIER; } else { printf("Erreur Lexicale à la ligne %d à la colonne %d : IDF trop long\n", nb_ligne, col);exit(0); } }
{STRING_LITERAL} {yylval.string = strdup(yytext); rechercher(yytext,"CONSTANT","STRING",yytext,0);  colPrd=col;col += strlen(yytext); return STRING_LITERAL; }
"%%"[^\n]*         { /* Ignorer les commentaires */ colPrd=col;col += strlen(yytext); }


[ \t]+             { /* Ignorer les espaces */colPrd=col;col += strlen(yytext); }

\n                 { nb_ligne++; col =1;}
.                  { printf("Erreur lexicale : %s \nligne %d Colonne %d\n",yytext ,yylineno, col);col= col +strlen(yytext);exit(0); }

%%



