/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SYNTAXIC_TAB_H_INCLUDED
# define YY_YY_SYNTAXIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VAR_GLOBAL = 258,              /* VAR_GLOBAL  */
    DECLARATION = 259,             /* DECLARATION  */
    INSTRUCTION = 260,             /* INSTRUCTION  */
    INTEGER = 261,                 /* INTEGER  */
    FLOAT = 262,                   /* FLOAT  */
    CHAR = 263,                    /* CHAR  */
    CONST = 264,                   /* CONST  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    FOR = 267,                     /* FOR  */
    READ = 268,                    /* READ  */
    WRITE = 269,                   /* WRITE  */
    IDENTIFIER = 270,              /* IDENTIFIER  */
    INT_NUMBER_S = 271,            /* INT_NUMBER_S  */
    INT_NUMBER = 272,              /* INT_NUMBER  */
    FLOAT_NUMBER_S = 273,          /* FLOAT_NUMBER_S  */
    FLOAT_NUMBER = 274,            /* FLOAT_NUMBER  */
    CHARACTERE = 275,              /* CHARACTERE  */
    AND = 276,                     /* AND  */
    OR = 277,                      /* OR  */
    NOT = 278,                     /* NOT  */
    EQ = 279,                      /* EQ  */
    NEQ = 280,                     /* NEQ  */
    GEQ = 281,                     /* GEQ  */
    LT = 282,                      /* LT  */
    LEQ = 283,                     /* LEQ  */
    GT = 284,                      /* GT  */
    EQUALS = 285,                  /* EQUALS  */
    PLUS = 286,                    /* PLUS  */
    MINUS = 287,                   /* MINUS  */
    MULTIPLY = 288,                /* MULTIPLY  */
    DIVIDE = 289,                  /* DIVIDE  */
    LBRACE = 290,                  /* LBRACE  */
    RBRACE = 291,                  /* RBRACE  */
    LPAREN = 292,                  /* LPAREN  */
    RPAREN = 293,                  /* RPAREN  */
    LBRACKET = 294,                /* LBRACKET  */
    RBRACKET = 295,                /* RBRACKET  */
    SEMICOLON = 296,               /* SEMICOLON  */
    COMMA = 297,                   /* COMMA  */
    COLON = 298,                   /* COLON  */
    STRING_LITERAL = 299           /* STRING_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "syntaxic.y"

    int entier;
    float real;
    char character;
    char* string;

#line 115 "syntaxic.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTAXIC_TAB_H_INCLUDED  */
