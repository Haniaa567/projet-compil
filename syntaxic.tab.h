/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VAR_GLOBAL = 258,
     DECLARATION = 259,
     INSTRUCTION = 260,
     INTEGER = 261,
     FLOAT = 262,
     CHAR = 263,
     CONST = 264,
     IF = 265,
     ELSE = 266,
     FOR = 267,
     READ = 268,
     WRITE = 269,
     IDENTIFIER = 270,
     INT_NUMBER_S = 271,
     INT_NUMBER = 272,
     FLOAT_NUMBER_S = 273,
     FLOAT_NUMBER = 274,
     CHARACTERE = 275,
     AND = 276,
     OR = 277,
     NOT = 278,
     EQ = 279,
     NEQ = 280,
     GEQ = 281,
     LT = 282,
     LEQ = 283,
     GT = 284,
     EQUALS = 285,
     PLUS = 286,
     MINUS = 287,
     MULTIPLY = 288,
     DIVIDE = 289,
     LBRACE = 290,
     RBRACE = 291,
     LPAREN = 292,
     RPAREN = 293,
     LBRACKET = 294,
     RBRACKET = 295,
     SEMICOLON = 296,
     COMMA = 297,
     COLON = 298,
     STRING_LITERAL = 299
   };
#endif
/* Tokens.  */
#define VAR_GLOBAL 258
#define DECLARATION 259
#define INSTRUCTION 260
#define INTEGER 261
#define FLOAT 262
#define CHAR 263
#define CONST 264
#define IF 265
#define ELSE 266
#define FOR 267
#define READ 268
#define WRITE 269
#define IDENTIFIER 270
#define INT_NUMBER_S 271
#define INT_NUMBER 272
#define FLOAT_NUMBER_S 273
#define FLOAT_NUMBER 274
#define CHARACTERE 275
#define AND 276
#define OR 277
#define NOT 278
#define EQ 279
#define NEQ 280
#define GEQ 281
#define LT 282
#define LEQ 283
#define GT 284
#define EQUALS 285
#define PLUS 286
#define MINUS 287
#define MULTIPLY 288
#define DIVIDE 289
#define LBRACE 290
#define RBRACE 291
#define LPAREN 292
#define RPAREN 293
#define LBRACKET 294
#define RBRACKET 295
#define SEMICOLON 296
#define COMMA 297
#define COLON 298
#define STRING_LITERAL 299




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 22 "syntaxic.y"
{
    int entier;
    float real;
    char character;
    char* string;
}
/* Line 1529 of yacc.c.  */
#line 144 "syntaxic.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

