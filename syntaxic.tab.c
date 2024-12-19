/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     INT_NUMBER = 271,
     FLOAT_NUMBER = 272,
     CHARACTERE = 273,
     AND = 274,
     OR = 275,
     NOT = 276,
     EQ = 277,
     NEQ = 278,
     GEQ = 279,
     LT = 280,
     LEQ = 281,
     GT = 282,
     EQUALS = 283,
     PLUS = 284,
     MINUS = 285,
     MULTIPLY = 286,
     DIVIDE = 287,
     LBRACE = 288,
     RBRACE = 289,
     LPAREN = 290,
     RPAREN = 291,
     LBRACKET = 292,
     RBRACKET = 293,
     SEMICOLON = 294,
     COMMA = 295,
     COLON = 296,
     STRING_LITERAL = 297
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
#define INT_NUMBER 271
#define FLOAT_NUMBER 272
#define CHARACTERE 273
#define AND 274
#define OR 275
#define NOT 276
#define EQ 277
#define NEQ 278
#define GEQ 279
#define LT 280
#define LEQ 281
#define GT 282
#define EQUALS 283
#define PLUS 284
#define MINUS 285
#define MULTIPLY 286
#define DIVIDE 287
#define LBRACE 288
#define RBRACE 289
#define LPAREN 290
#define RPAREN 291
#define LBRACKET 292
#define RBRACKET 293
#define SEMICOLON 294
#define COMMA 295
#define COLON 296
#define STRING_LITERAL 297




/* Copy the first part of user declarations.  */
#line 1 "syntaxic.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include "TableSymbole.h"
    #include "quadruplet.h"

    // Déclaration de la fonction `yylex` pour que le compilateur la reconnaisse.
    int yylex();

    // Déclaration de la fonction `yyerror` pour la gestion des erreurs de syntaxe.
    void yyerror(const char *s);
    char sauvType[20];
    int j=0;
    typedef struct
   {  
      char idfTab[9];
      
   } elt_idf;
   elt_idf saveIdf[20];
    char typeG[20];
   char typeD[20];
   char typeOG[20];
   char typeOD[20];
   char nomG[20];
   char nomD[20];
   char valIdf[20];
   char saveStr[20];
   char saveStrq[20];
   char saveS[20];
   char mDroit[20];
   char buffer1[20], buffer2[20], tmp[20];
   char *temp,*tt,*temp1,*temp2;
   int cpttemp=1;
   int nb_op;
   char *tempasg;
   char brnsup[20];
   char pasfor[20];
   char cptfor[20];
   char valcond1[20];
   char valcond2[20];
   int nbop=0;
   int existop=0;
   float valind;
   int firstAND=0;
   char *valDepile;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 50 "syntaxic.y"
{
    int entier;
    float real;
    char character;
    char* string;
}
/* Line 193 of yacc.c.  */
#line 236 "syntaxic.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 249 "syntaxic.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   374

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNRULES -- Number of states.  */
#define YYNSTATES  345

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    16,    18,    20,    22,    24,    27,    29,
      32,    34,    37,    41,    48,    50,    52,    57,    62,    66,
      73,    83,    85,    87,    89,    91,    93,    98,   103,   108,
     113,   115,   120,   128,   133,   135,   139,   143,   145,   149,
     153,   155,   157,   159,   164,   169,   174,   179,   183,   188,
     190,   192,   193,   204,   205,   211,   212,   216,   217,   218,
     233,   239,   245,   247,   251,   253,   255,   257,   261,   263,
     267,   269,   272,   274,   275,   279,   283,   287,   291,   295,
     299,   303,   307,   311,   315,   317,   319,   321,   323,   325,
     327,   329,   331,   333,   335,   337,   341,   345,   347,   351,
     355,   357,   359,   361,   366,   371,   376,   381,   385,   390,
     392,   396,   400,   402,   406,   410,   412,   414,   416,   421,
     426,   431,   436,   440,   445,   447,   451,   455,   457,   461,
     465,   467,   469,   471,   476,   481,   486,   491,   495,   500,
     502,   506,   510,   512,   516,   520,   522,   524,   526,   531,
     536,   541,   546,   550,   555,   557,   561,   565,   567,   571,
     575,   577,   579,   581,   586,   591,   596,   601,   605
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,     3,    33,    46,    34,     4,    33,    47,
      34,     5,    33,    48,    34,    -1,     6,    -1,     7,    -1,
       8,    -1,    49,    -1,    49,    46,    -1,    49,    -1,    49,
      47,    -1,    52,    -1,    52,    48,    -1,    45,    51,    39,
      -1,     9,    45,    50,    28,    79,    39,    -1,    15,    -1,
      15,    -1,    15,    37,    16,    38,    -1,    15,    37,    56,
      38,    -1,    15,    40,    51,    -1,    15,    37,    16,    38,
      40,    51,    -1,    15,    37,    35,    29,    16,    36,    38,
      40,    51,    -1,    53,    -1,    60,    -1,    65,    -1,    68,
      -1,    64,    -1,    54,    28,    79,    39,    -1,    55,    28,
      79,    39,    -1,    55,    28,    59,    39,    -1,    54,    28,
      59,    39,    -1,    15,    -1,    15,    37,    16,    38,    -1,
      15,    37,    35,    29,    16,    36,    38,    -1,    15,    37,
      56,    38,    -1,    57,    -1,    56,    29,    57,    -1,    56,
      30,    57,    -1,    58,    -1,    57,    31,    58,    -1,    57,
      32,    58,    -1,    15,    -1,    16,    -1,    17,    -1,    35,
      29,    16,    36,    -1,    35,    30,    16,    36,    -1,    35,
      29,    17,    36,    -1,    35,    30,    17,    36,    -1,    35,
      79,    36,    -1,    15,    37,    16,    38,    -1,    18,    -1,
      42,    -1,    -1,    10,    35,    71,    36,    33,    61,    48,
      34,    62,    39,    -1,    -1,    11,    33,    63,    48,    34,
      -1,    -1,    54,    28,    79,    -1,    -1,    -1,    12,    35,
      64,    41,    91,    66,    41,    88,    67,    36,    33,    48,
      34,    39,    -1,    13,    35,    15,    36,    39,    -1,    14,
      35,    69,    36,    39,    -1,    70,    -1,    70,    40,    69,
      -1,    15,    -1,    42,    -1,    72,    -1,    72,    20,    73,
      -1,    73,    -1,    73,    19,    74,    -1,    74,    -1,    21,
      74,    -1,    75,    -1,    -1,    85,    27,    82,    -1,    85,
      25,    82,    -1,    85,    22,    82,    -1,    85,    24,    82,
      -1,    85,    26,    82,    -1,    85,    23,    82,    -1,    42,
      78,    42,    -1,    18,    78,    18,    -1,    76,    78,    82,
      -1,    85,    78,    77,    -1,    18,    -1,    42,    -1,    18,
      -1,    42,    -1,    27,    -1,    25,    -1,    24,    -1,    26,
      -1,    22,    -1,    23,    -1,    80,    -1,    79,    29,    80,
      -1,    79,    30,    80,    -1,    81,    -1,    80,    31,    81,
      -1,    80,    32,    81,    -1,    15,    -1,    16,    -1,    17,
      -1,    35,    29,    16,    36,    -1,    35,    30,    16,    36,
      -1,    35,    29,    17,    36,    -1,    35,    30,    17,    36,
      -1,    35,    79,    36,    -1,    15,    37,    16,    38,    -1,
      83,    -1,    82,    29,    83,    -1,    82,    30,    83,    -1,
      84,    -1,    83,    31,    84,    -1,    83,    32,    84,    -1,
      15,    -1,    16,    -1,    17,    -1,    35,    29,    16,    36,
      -1,    35,    30,    16,    36,    -1,    35,    29,    17,    36,
      -1,    35,    30,    17,    36,    -1,    35,    79,    36,    -1,
      15,    37,    16,    38,    -1,    86,    -1,    85,    29,    86,
      -1,    85,    30,    86,    -1,    87,    -1,    86,    31,    87,
      -1,    86,    32,    87,    -1,    15,    -1,    16,    -1,    17,
      -1,    35,    29,    16,    36,    -1,    35,    30,    16,    36,
      -1,    35,    29,    17,    36,    -1,    35,    30,    17,    36,
      -1,    35,    79,    36,    -1,    15,    37,    16,    38,    -1,
      89,    -1,    88,    29,    89,    -1,    88,    30,    89,    -1,
      90,    -1,    89,    31,    90,    -1,    89,    32,    90,    -1,
      15,    -1,    16,    -1,    17,    -1,    35,    29,    16,    36,
      -1,    35,    30,    16,    36,    -1,    35,    29,    17,    36,
      -1,    35,    30,    17,    36,    -1,    35,    79,    36,    -1,
      15,    37,    16,    38,    -1,    92,    -1,    91,    29,    92,
      -1,    91,    30,    92,    -1,    93,    -1,    92,    31,    93,
      -1,    92,    32,    93,    -1,    15,    -1,    16,    -1,    17,
      -1,    35,    29,    16,    36,    -1,    35,    30,    16,    36,
      -1,    35,    29,    17,    36,    -1,    35,    30,    17,    36,
      -1,    35,    79,    36,    -1,    15,    37,    16,    38,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    99,    99,   106,   107,   108,   113,   114,   119,   120,
     125,   126,   131,   142,   163,   176,   177,   186,   202,   203,
     204,   218,   219,   220,   221,   222,   227,   240,   252,   257,
     266,   294,   319,   333,   374,   375,   394,   415,   416,   434,
     458,   476,   482,   487,   493,   501,   506,   513,   514,   527,
     535,   562,   562,   570,   570,   575,   579,   594,   599,   594,
     620,   626,   631,   632,   637,   643,   648,   652,   664,   668,
     680,   684,   694,   700,   701,   713,   724,   735,   746,   757,
     768,   775,   782,   785,   793,   794,   797,   798,   801,   802,
     803,   804,   805,   806,   812,   813,   832,   853,   854,   872,
     896,   913,   922,   932,   942,   955,   964,   976,   977,   996,
     997,  1016,  1037,  1038,  1056,  1080,  1100,  1110,  1121,  1131,
    1144,  1153,  1165,  1166,  1186,  1187,  1206,  1227,  1228,  1246,
    1270,  1281,  1288,  1293,  1300,  1309,  1315,  1322,  1323,  1339,
    1340,  1359,  1380,  1381,  1399,  1423,  1435,  1443,  1449,  1457,
    1467,  1474,  1482,  1483,  1499,  1500,  1519,  1540,  1541,  1559,
    1583,  1595,  1602,  1607,  1614,  1623,  1629,  1636,  1637
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR_GLOBAL", "DECLARATION",
  "INSTRUCTION", "INTEGER", "FLOAT", "CHAR", "CONST", "IF", "ELSE", "FOR",
  "READ", "WRITE", "IDENTIFIER", "INT_NUMBER", "FLOAT_NUMBER",
  "CHARACTERE", "AND", "OR", "NOT", "EQ", "NEQ", "GEQ", "LT", "LEQ", "GT",
  "EQUALS", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "LBRACE", "RBRACE",
  "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "SEMICOLON", "COMMA",
  "COLON", "STRING_LITERAL", "$accept", "program", "type",
  "global_var_section", "declaration_section", "instruction_section",
  "declaration", "cst", "variable_list", "statement", "assignment",
  "MDROIT", "TAB", "termtab", "factortab", "primarytab", "EXPRESSION_CHAR",
  "condition", "@1", "elsebloc", "@2", "assignment_int", "loop", "@3",
  "@4", "io_statement", "io_expr_list", "io_expr", "COND", "OR_EXPR",
  "AND_EXPR", "NOT_EXPR", "comparison_expr", "DROIT", "GAUCHE", "OP_COMP",
  "term", "factor", "primary", "term1", "factor1", "primary1", "term2",
  "factor2", "primary2", "term4", "factor4", "primary4", "term3",
  "factor3", "primary3", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    47,    47,
      48,    48,    49,    49,    50,    51,    51,    51,    51,    51,
      51,    52,    52,    52,    52,    52,    53,    53,    53,    53,
      54,    55,    55,    55,    56,    56,    56,    57,    57,    57,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    61,    60,    63,    62,    62,    64,    66,    67,    65,
      68,    68,    69,    69,    70,    70,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    77,    77,    78,    78,
      78,    78,    78,    78,    79,    79,    79,    80,    80,    80,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      82,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    86,    86,    86,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    88,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    91,    91,    92,    92,    92,
      93,    93,    93,    93,    93,    93,    93,    93,    93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    12,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     3,     6,     1,     1,     4,     4,     3,     6,
       9,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       1,     4,     7,     4,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       1,     0,    10,     0,     5,     0,     3,     0,     0,    14,
       5,     5,     1,     3,     1,     1,     1,     3,     1,     3,
       1,     2,     1,     0,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       3,     3,     1,     3,     3,     1,     1,     1,     4,     4,
       4,     4,     3,     4,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       3,     3,     1,     3,     3,     1,     1,     1,     4,     4,
       4,     4,     3,     4,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,     5,     0,     0,
       0,     6,     0,    15,     0,     0,     7,    14,     0,     0,
       0,    12,     0,     0,    40,    41,    42,     0,     0,    34,
      37,    18,     0,   100,   101,   102,     0,     0,    94,    97,
       0,    16,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    47,    41,     0,
      35,    36,    38,    39,     0,     9,     0,     0,     0,     0,
       0,   107,    95,    96,    98,    99,    48,    19,    43,    45,
      44,    46,     0,     0,   108,   103,   105,   104,   106,     0,
       0,     0,     0,    43,     0,     0,     0,     0,    30,     0,
      10,    21,     0,     0,    22,    25,    23,    24,    20,    73,
       0,     0,     0,     0,     2,    11,     0,     0,   130,   131,
     132,     0,    73,     0,     0,     0,    66,    68,    70,    72,
       0,     0,   124,   127,    30,     0,     0,     0,    64,    65,
       0,    62,    41,     0,     0,    49,    50,     0,    56,     0,
       0,     0,    92,    93,    90,    89,    91,    88,     0,    71,
       0,     0,     0,     0,     0,    73,    73,     0,    92,    93,
      90,    89,    91,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    33,    29,    26,    28,
      27,     0,    81,     0,     0,     0,     0,   137,    80,    51,
      67,    69,   115,   116,   117,     0,    82,   109,   112,    76,
      79,    77,    75,    78,    74,   125,   126,    86,    87,    83,
     128,   129,    56,   160,   161,   162,     0,    57,   154,   157,
      60,    61,    63,     0,   138,   133,   135,   134,   136,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,     0,
       0,     0,     0,     0,   122,   110,   111,   113,   114,     0,
       0,     0,     0,     0,   167,   155,   156,     0,   158,   159,
      32,    55,   123,   118,   120,   119,   121,   168,   163,   165,
     164,   166,   145,   146,   147,     0,    58,   139,   142,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    52,     0,     0,     0,     0,     0,   152,   140,   141,
       0,   143,   144,     0,   153,   148,   150,   149,   151,     0,
       0,     0,    54,     0,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    50,   109,    11,    18,    14,   110,
     111,   112,   113,    28,    29,    30,   157,   114,   249,   310,
     333,   115,   116,   264,   317,   117,   150,   151,   135,   136,
     137,   138,   139,   140,   229,   168,    44,    38,    39,   216,
     217,   218,   141,   142,   143,   306,   307,   308,   237,   238,
     239
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -130
static const yytype_int16 yypact[] =
{
       8,    16,    32,   179,  -130,  -130,  -130,  -130,   208,    40,
      41,   179,    56,   -17,    39,    79,  -130,  -130,   115,    53,
      40,  -130,    65,    74,    71,    95,  -130,    10,   108,   -10,
    -130,  -130,   179,   114,  -130,  -130,    13,    72,    26,  -130,
     131,   125,    64,    97,   132,    80,    80,  -130,    80,    80,
     133,   179,   153,   201,   203,   134,    74,    74,  -130,    74,
      74,   139,    40,   143,   145,   155,   163,  -130,  -130,    21,
     -10,   -10,  -130,  -130,   184,  -130,   169,   176,   187,   193,
     204,  -130,    26,    26,  -130,  -130,  -130,  -130,   199,  -130,
    -130,  -130,   205,   224,  -130,  -130,  -130,  -130,  -130,   228,
     242,   196,    40,  -130,   238,   256,   257,   260,   259,   247,
     196,  -130,   269,   270,  -130,  -130,  -130,  -130,  -130,   -11,
     284,   285,    -7,   101,  -130,  -130,    -1,    -1,   264,  -130,
    -130,   171,   -11,    37,   171,   266,   283,   286,  -130,  -130,
     171,   130,   194,  -130,  -130,   276,   265,   271,  -130,  -130,
     272,   273,   274,    44,   120,  -130,  -130,   275,   102,   277,
     105,   293,  -130,  -130,  -130,  -130,  -130,  -130,   292,  -130,
     211,   215,   142,   278,   282,   -11,   -11,   104,   104,   104,
     104,   104,   104,   104,   107,   107,    -9,   107,   107,    74,
     110,   279,   280,    -7,  -130,   217,  -130,  -130,  -130,  -130,
    -130,   287,  -130,   281,   288,   290,   291,  -130,  -130,  -130,
     286,  -130,   294,  -130,  -130,    47,   206,   207,  -130,   206,
     206,   206,   206,   206,   206,   194,   194,  -130,  -130,  -130,
    -130,  -130,   212,   295,  -130,  -130,    70,   214,   216,  -130,
    -130,  -130,  -130,   297,  -130,  -130,  -130,  -130,  -130,   196,
     305,   229,   233,   144,   104,   104,   104,   104,   306,   235,
     237,   146,   110,   110,   289,   110,   110,   296,   301,   298,
     302,   303,   304,   307,  -130,   207,   207,  -130,  -130,   299,
     308,   309,   310,   311,  -130,   216,   216,   113,  -130,  -130,
    -130,   300,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,   312,  -130,  -130,    77,   226,   227,  -130,   315,
     313,   325,   244,   246,   154,   113,   113,   314,   113,   113,
    -130,  -130,   316,   317,   319,   320,   321,  -130,   227,   227,
     318,  -130,  -130,   196,  -130,  -130,  -130,  -130,  -130,   196,
     324,   326,  -130,   322,  -130
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,   334,   348,   323,  -109,    14,  -130,   -18,  -130,
    -130,   209,  -130,   200,   219,   218,   236,  -130,  -130,  -130,
    -130,   245,  -130,  -130,  -130,  -130,   135,  -130,  -130,  -130,
     189,  -129,  -130,  -130,  -130,  -122,   -23,   213,   220,    22,
      17,    18,  -130,    92,    96,  -130,   -30,   -31,  -130,    27,
      28
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      37,   125,    31,   169,   128,   129,   130,   131,   148,   227,
     132,     1,   173,    55,    33,    34,    35,   155,   177,   186,
      19,    48,    49,    20,   133,    33,    34,    35,    33,    34,
      35,   134,     4,   228,    36,   149,    33,    34,    35,    42,
      43,   156,    53,    54,    87,    36,    51,   211,    36,     3,
      92,    43,    33,    34,    35,    13,    36,    59,    60,    33,
      34,    35,    33,    34,    35,    51,   170,   171,    24,    25,
      26,    17,    36,   195,    43,    15,   251,   252,    21,    36,
      63,    64,    36,    22,   118,    33,    34,    35,    27,    33,
      34,    35,    33,    34,    35,    24,    68,    26,    32,   259,
     260,    56,    57,   158,   160,    36,   312,   313,    40,    36,
     172,    58,    36,    65,    66,    69,    24,   152,    26,   212,
     213,   214,   128,   129,   130,   233,   234,   235,   302,   303,
     304,    56,    57,    41,    56,    57,   153,    45,    46,   215,
     268,   198,   133,    23,   200,   236,    47,    61,   305,    45,
      46,    52,   178,   179,   180,   181,   182,   183,   196,   184,
     185,    56,    57,    56,    57,    62,   232,    74,    67,    76,
      81,    56,    57,    56,    57,    56,    57,    86,   207,    88,
     274,    89,   284,    56,    57,     5,     6,     7,     8,    93,
     327,    90,   253,   162,   163,   164,   165,   166,   167,    91,
     219,   220,   221,   222,   223,   224,   104,    94,   105,   106,
     107,   108,    95,   261,     5,     6,     7,    77,    78,    79,
      80,   100,    64,    96,   340,   187,   188,   203,   204,    97,
     341,   205,   206,   243,    64,   254,   255,    99,   256,   257,
      98,    56,    57,   262,   263,   270,   271,   265,   266,   272,
     273,   280,   281,   282,   283,   315,   316,   101,   318,   319,
     323,   324,   325,   326,    70,    71,    72,    73,   102,    82,
      83,   275,   276,   119,   277,   278,   225,   226,   103,    84,
      85,   124,   314,   230,   231,   328,   329,   331,   332,   285,
     286,   120,   121,   288,   289,   122,   123,   126,   127,   144,
     147,   161,   174,   175,   189,   176,   190,   191,   192,   201,
     202,   309,   194,   193,   197,   209,   199,   245,   240,   241,
     208,   269,   279,   154,   246,   244,   247,   248,   242,   145,
     287,   250,   258,   267,   290,   291,   292,   297,   293,   294,
     295,   322,    12,   296,   298,   299,   300,   301,   320,   311,
     330,   339,   321,   335,   334,   336,   337,   338,   342,    16,
     343,   344,     0,   159,   210,   146,     0,     0,     0,     0,
       0,     0,     0,     0,    75
};

static const yytype_int16 yycheck[] =
{
      23,   110,    20,   132,    15,    16,    17,    18,    15,    18,
      21,     3,   134,    36,    15,    16,    17,    18,   140,   141,
      37,    31,    32,    40,    35,    15,    16,    17,    15,    16,
      17,    42,     0,    42,    35,    42,    15,    16,    17,    29,
      30,    42,    29,    30,    62,    35,    32,   176,    35,    33,
      29,    30,    15,    16,    17,    15,    35,    31,    32,    15,
      16,    17,    15,    16,    17,    51,    29,    30,    15,    16,
      17,    15,    35,    29,    30,    34,    29,    30,    39,    35,
      16,    17,    35,     4,   102,    15,    16,    17,    35,    15,
      16,    17,    15,    16,    17,    15,    16,    17,    33,    29,
      30,    29,    30,   126,   127,    35,    29,    30,    37,    35,
     133,    39,    35,    16,    17,    35,    15,    16,    17,    15,
      16,    17,    15,    16,    17,    15,    16,    17,    15,    16,
      17,    29,    30,    38,    29,    30,    35,    29,    30,    35,
     249,    39,    35,    28,    39,    35,    38,    16,    35,    29,
      30,    37,    22,    23,    24,    25,    26,    27,    38,    29,
      30,    29,    30,    29,    30,    40,   189,    34,    36,    16,
      36,    29,    30,    29,    30,    29,    30,    38,    36,    36,
      36,    36,    36,    29,    30,     6,     7,     8,     9,     5,
      36,    36,   215,    22,    23,    24,    25,    26,    27,    36,
     178,   179,   180,   181,   182,   183,    10,    38,    12,    13,
      14,    15,    36,   236,     6,     7,     8,    16,    17,    16,
      17,    16,    17,    36,   333,    31,    32,    16,    17,    36,
     339,    16,    17,    16,    17,    29,    30,    38,    31,    32,
      36,    29,    30,    29,    30,    16,    17,    31,    32,    16,
      17,    16,    17,    16,    17,    29,    30,    33,    31,    32,
      16,    17,    16,    17,    45,    46,    48,    49,    40,    56,
      57,   254,   255,    35,   256,   257,   184,   185,    36,    59,
      60,    34,   305,   187,   188,   315,   316,   318,   319,   262,
     263,    35,    35,   265,   266,    35,    37,    28,    28,    15,
      15,    37,    36,    20,    28,    19,    41,    36,    36,    16,
      18,    11,    38,    40,    39,    33,    39,    36,    39,    39,
      42,    16,    16,   123,    36,    38,    36,    36,   193,   120,
      41,    37,    37,    36,    38,    34,    38,    38,    36,    36,
      36,    16,     8,    36,    36,    36,    36,    36,    33,    37,
      36,    33,    39,    36,    38,    36,    36,    36,    34,    11,
      34,    39,    -1,   127,   175,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    44,    33,     0,     6,     7,     8,     9,    45,
      46,    49,    45,    15,    51,    34,    46,    15,    50,    37,
      40,    39,     4,    28,    15,    16,    17,    35,    56,    57,
      58,    51,    33,    15,    16,    17,    35,    79,    80,    81,
      37,    38,    29,    30,    79,    29,    30,    38,    31,    32,
      47,    49,    37,    29,    30,    79,    29,    30,    39,    31,
      32,    16,    40,    16,    17,    16,    17,    36,    16,    35,
      57,    57,    58,    58,    34,    47,    16,    16,    17,    16,
      17,    36,    80,    80,    81,    81,    38,    51,    36,    36,
      36,    36,    29,     5,    38,    36,    36,    36,    36,    38,
      16,    33,    40,    36,    10,    12,    13,    14,    15,    48,
      52,    53,    54,    55,    60,    64,    65,    68,    51,    35,
      35,    35,    35,    37,    34,    48,    28,    28,    15,    16,
      17,    18,    21,    35,    42,    71,    72,    73,    74,    75,
      76,    85,    86,    87,    15,    54,    64,    15,    15,    42,
      69,    70,    16,    35,    56,    18,    42,    59,    79,    59,
      79,    37,    22,    23,    24,    25,    26,    27,    78,    74,
      29,    30,    79,    78,    36,    20,    19,    78,    22,    23,
      24,    25,    26,    27,    29,    30,    78,    31,    32,    28,
      41,    36,    36,    40,    38,    29,    38,    39,    39,    39,
      39,    16,    18,    16,    17,    16,    17,    36,    42,    33,
      73,    74,    15,    16,    17,    35,    82,    83,    84,    82,
      82,    82,    82,    82,    82,    86,    86,    18,    42,    77,
      87,    87,    79,    15,    16,    17,    35,    91,    92,    93,
      39,    39,    69,    16,    38,    36,    36,    36,    36,    61,
      37,    29,    30,    79,    29,    30,    31,    32,    37,    29,
      30,    79,    29,    30,    66,    31,    32,    36,    48,    16,
      16,    17,    16,    17,    36,    83,    83,    84,    84,    16,
      16,    17,    16,    17,    36,    92,    92,    41,    93,    93,
      38,    34,    38,    36,    36,    36,    36,    38,    36,    36,
      36,    36,    15,    16,    17,    35,    88,    89,    90,    11,
      62,    37,    29,    30,    79,    29,    30,    67,    31,    32,
      33,    39,    16,    16,    17,    16,    17,    36,    89,    89,
      36,    90,    90,    63,    38,    36,    36,    36,    36,    33,
      48,    48,    34,    34,    39
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 106 "syntaxic.y"
    {strcpy(sauvType,"INTEGER");;}
    break;

  case 4:
#line 107 "syntaxic.y"
    {strcpy(sauvType,"FLOAT");;}
    break;

  case 5:
#line 108 "syntaxic.y"
    {strcpy(sauvType,"CHAR");;}
    break;

  case 12:
#line 131 "syntaxic.y"
    {
        //verification de la double declaration et insertion du type
        for(j=0;strcmp(saveIdf[j].idfTab,"")!=0;j++){
            if(verifdeclaration(saveIdf[j].idfTab)==0) insererType(sauvType,saveIdf[j].idfTab);
            else {printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[j].idfTab,nb_ligne);
                exit(0);}
            //createQuad("DECL", sauvType, "", saveIdf[j].idfTab);
            strcpy(saveIdf[j].idfTab,"");
        }  
        j=0;  
    ;}
    break;

  case 13:
#line 142 "syntaxic.y"
    {
    // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ((yyvsp[(5) - (6)].real) - floor((yyvsp[(5) - (6)].real)) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
             exit(0);
        }
         
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[(5) - (6)].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f", (yyvsp[(5) - (6)].real));  // Convertir en flottant
        }
        // Ajout du quadruplet pour la déclaration d'une constante
        //createQuad("CONST", sauvType, saveStr, saveIdf[0].idfTab);
        insererVal(saveIdf[0].idfTab,saveStr);
        strcpy(saveIdf[0].idfTab,"");
    ;}
    break;

  case 14:
#line 163 "syntaxic.y"
    {
        strcpy(saveIdf[0].idfTab,(yyvsp[(1) - (1)].string));
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType((yyvsp[(1) - (1)].string)));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[0].idfTab,nb_ligne);
            
            
    ;}
    break;

  case 15:
#line 176 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (1)].string));j++;;}
    break;

  case 16:
#line 177 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (4)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;
        if (atoi((yyvsp[(3) - (4)].string)) == 0) {
            printf("Erreur semantique : La taille du tableau doit etre strictement positive\n");
             exit(0);
        } 
        sprintf(buffer1, "%d", atoi((yyvsp[(3) - (4)].string))-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[(1) - (4)].string),"","");
        ;}
    break;

  case 17:
#line 186 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (4)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;

        sprintf(buffer1, "T%d", cpttemp-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[(1) - (4)].string),"","");
         if (fmod(valind, 1.0) != 0.0) {
            printf("Erreur semantique : La taille du tableau doit etre un entier (pas un nombre réel)\n");
             exit(0);
        }
        
        // Vérifier que le nombre est un entier positif
        if ((yyvsp[(3) - (4)].real) < 1) {
            printf("Erreur semantique : La taille du tableau doit etre un entier strictement positif\n");
             exit(0);
        }
        ;}
    break;

  case 18:
#line 202 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (3)].string));j++;;}
    break;

  case 19:
#line 203 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (6)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;;}
    break;

  case 20:
#line 204 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (9)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;;}
    break;

  case 26:
#line 227 "syntaxic.y"
    {
  
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[(3) - (4)].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f",(yyvsp[(3) - (4)].real));  // Convertir en flottant
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    ;}
    break;

  case 27:
#line 240 "syntaxic.y"
    {
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[(3) - (4)].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f",(yyvsp[(3) - (4)].real));  // Convertir en flottant
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    ;}
    break;

  case 28:
#line 252 "syntaxic.y"
    {
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    ;}
    break;

  case 29:
#line 257 "syntaxic.y"
    {
        
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    ;}
    break;

  case 30:
#line 266 "syntaxic.y"
    {
    // Vérification de la déclaration de la variable avant usage
    if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
        printf("Erreur sémantique : La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
         exit(0);
    } else if(strcmp(getCode((yyvsp[(1) - (1)].string)),"IDF TAB")==0){
        printf("Erreur sémantique : La variable '%s' est un tableau.\n", (yyvsp[(1) - (1)].string));
         exit(0);
        strcpy(typeG, getType((yyvsp[(1) - (1)].string)));  // Récupérer le type de la variable à gauche
        if (comparCode((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique à la ligne %d : affectation d'une constante\n", nb_ligne);
        } else {
            strcpy(mDroit, (yyvsp[(1) - (1)].string));
        }
        
    }
    else{
        strcpy(typeG, getType((yyvsp[(1) - (1)].string)));  // Récupérer le type de la variable à gauche
        if (comparCode((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique à la ligne %d : affectation d'une constante\n", nb_ligne);
             exit(0);
        } else {
            strcpy(mDroit, (yyvsp[(1) - (1)].string));
        }
    }
    ;}
    break;

  case 31:
#line 294 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                    {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",(yyvsp[(1) - (4)].string),nb_ligne); exit(0);}
                    else if(strcmp(getCode((yyvsp[(1) - (4)].string)),"IDF")==0){
                        printf("Erreur sémantique : La variable '%s' est n'est pas un tableau.\n", (yyvsp[(1) - (4)].string));
                         exit(0);
                        strcpy(typeG, getType((yyvsp[(1) - (4)].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[(1) - (4)].string)));

                    } 
                      
                        strcpy(mDroit,(yyvsp[(1) - (4)].string));
                        temp=newtemp();
                        strcpy(temp,(yyvsp[(1) - (4)].string));
                        strcpy(tmp,(yyvsp[(1) - (4)].string));
                        strcat(tmp,"[");
                        sprintf(buffer2,"%d",atoi((yyvsp[(3) - (4)].string)));
                        strcat(tmp,buffer2);
                        strcat(tmp,"]");
                    
                       
                    ;}
    break;

  case 32:
#line 319 "syntaxic.y"
    {
                if(verifdeclaration((yyvsp[(1) - (7)].string))==0 )
                  {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",(yyvsp[(1) - (7)].string),nb_ligne);
                   exit(0);}
                  else if(strcmp(getCode((yyvsp[(1) - (7)].string)),"IDF")==0){
                        printf("Erreur sémantique : La variable '%s' est n'est pas un tableau.\n", (yyvsp[(1) - (7)].string));
                         exit(0);
                        strcpy(typeG, getType((yyvsp[(1) - (7)].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[(1) - (7)].string)));

                    }  
    ;}
    break;

  case 33:
#line 333 "syntaxic.y"
    {printf("la valeur de l'indice est %f \n",(yyvsp[(3) - (4)].real));
                    if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                    {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",(yyvsp[(1) - (4)].string),nb_ligne);
                     exit(0);}
                    else if(strcmp(getCode((yyvsp[(1) - (4)].string)),"IDF")==0){
                        printf("Erreur semantique : La variable '%s' est n'est pasm un tableau.\n", (yyvsp[(1) - (4)].string));
                         exit(0);
                        strcpy(typeG, getType((yyvsp[(1) - (4)].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[(1) - (4)].string)));

                    }  
                    // Vérifier si le nombre a une partie fractionnelle
                    if (fmod(valind, 1.0) != 0.0) {
                        printf("Erreur semantique : L'indice du tableau doit etre un entier (pas un nombre reel)\n");
                         exit(0);
                    }
                    
                    // Vérifier que le nombre est un entier positif
                    if ((yyvsp[(3) - (4)].real) < 0) {
                        printf("Erreur semantique : L'indice du tableau doit être un entier positif\n");
                         exit(0);
                    }
                    
        
                        strcpy(mDroit,(yyvsp[(1) - (4)].string));
                        temp=newtemp();
                        strcpy(temp,(yyvsp[(1) - (4)].string));
                        strcpy(tmp,(yyvsp[(1) - (4)].string));
                        strcat(tmp,"[");
                        temp1=newtemp();
                        sprintf(buffer2,"T%d",cpttemp-1);
                        strcat(tmp,buffer2);
                        strcat(tmp,"]");
                       
                    ;}
    break;

  case 35:
#line 375 "syntaxic.y"
    {
        float t=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        valind=t;
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("+", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    ;}
    break;

  case 36:
#line 394 "syntaxic.y"
    {
        float t=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        valind=t;
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        empiler(&pile3,temp);
        cpttemp++;
    ;}
    break;

  case 38:
#line 416 "syntaxic.y"
    { 
        float t=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        valind=t;
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("*", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    ;}
    break;

  case 39:
#line 434 "syntaxic.y"
    { 
        if((yyvsp[(3) - (3)].real)==0) {printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne); exit(0);}
        else{   
        float t=(yyvsp[(1) - (3)].real)/(yyvsp[(3) - (3)].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
        valind=t;
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("/", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
;}
    break;

  case 40:
#line 458 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                         printf("tentative d'affecter %s a un %s\n",typeD,typeG); exit(0);
                                                        }
                                strcpy(valIdf,getVal((yyvsp[(1) - (1)].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,(yyvsp[(1) - (1)].string)); exit(0);}
                                 else
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 41:
#line 476 "syntaxic.y"
    {
                  (yyval.real)=atof((yyvsp[(1) - (1)].string));
                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                  empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 42:
#line 482 "syntaxic.y"
    {
                   (yyval.real)=atof((yyvsp[(1) - (1)].string)); 
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 43:
#line 487 "syntaxic.y"
    {
        (yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        
    ;}
    break;

  case 44:
#line 493 "syntaxic.y"
    {
                strcpy(saveStr,(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    ;}
    break;

  case 45:
#line 501 "syntaxic.y"
    {(yyval.real)=atof((yyvsp[(3) - (4)].string));
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      
                   ;}
    break;

  case 46:
#line 506 "syntaxic.y"
    {
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    ;}
    break;

  case 47:
#line 513 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 48:
#line 514 "syntaxic.y"
    {
                                     strcpy(tmp,(yyvsp[(1) - (4)].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer1,"%d",atoi((yyvsp[(3) - (4)].string)));
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(saveStrq,tmp);
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 
                ;}
    break;

  case 49:
#line 527 "syntaxic.y"
    {if(strcmp(typeG,"CHAR")!=0)   
                                {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);
                                 printf("tentative d'affecter CHAR a un %s\n",typeG); exit(0);
                                }
                            else {insererVal(mDroit,(yyvsp[(1) - (1)].string));}
                            strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                            sprintf(saveStr, "%s",(yyvsp[(1) - (1)].string)); 
                           ;}
    break;

  case 50:
#line 535 "syntaxic.y"
    {   
                                 printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);
                                 printf("On ne peut pas affecter STRING a CHAR");
                                 exit(0);
                            
                            ;}
    break;

  case 51:
#line 562 "syntaxic.y"
    {
          createQuad("BZ","",QuadR[qc-1].res,"");
          empiler_Int(&pile1,qc-1);
        ;}
    break;

  case 52:
#line 566 "syntaxic.y"
    {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        ;}
    break;

  case 53:
#line 570 "syntaxic.y"
    {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
        empiler_Int(&pile1,qc);
        createQuad("BR","","","");
        ;}
    break;

  case 56:
#line 579 "syntaxic.y"
    {
        
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }else{
            //sprintf(saveStr, "%d", (int)$3); 
            createQuad("=", saveStrq, "",mDroit);
        
        }
    ;}
    break;

  case 57:
#line 594 "syntaxic.y"
    {
        valDepile = depiler(&pile3); 
        strcpy(pasfor, valDepile); 
        //$$ = atoi($6); // Capturer le pas
    ;}
    break;

  case 58:
#line 599 "syntaxic.y"
    {
        //char *cond_var = atoi($7); // Capturer la condition d'arrêt
        valDepile = depiler(&pile3); 
        strcpy(brnsup, valDepile); 
        empiler_Int(&pile1, qc);
        empiler_Int(&pile2, qc);
        createQuad("BG", "", mDroit, brnsup); 
        strcpy(cptfor,mDroit);
    ;}
    break;

  case 59:
#line 608 "syntaxic.y"
    {
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);    
        cpttemp++;    
        createQuad("+", cptfor, pasfor, temp); 
        createQuad("=", temp, "", cptfor); 
        createQuad("BR", ToSTR(atoi(depiler(&pile1))), "", "");
        QuadR[atoi(depiler(&pile2))].opd1=ToSTR(qc);
    ;}
    break;

  case 60:
#line 620 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(3) - (5)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(3) - (5)].string)); exit(0);
        }
    ;}
    break;

  case 64:
#line 637 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string)); exit(0);
        }
    ;}
    break;

  case 67:
#line 653 "syntaxic.y"
    {
        temp = newtemp();
        sprintf(temp, "T%d", cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(valcond2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(valcond1, valDepile);
        createQuadL(2, valcond1, valcond2, temp);
        empiler(&pile3,temp);
        cpttemp++;
    ;}
    break;

  case 69:
#line 669 "syntaxic.y"
    {
        temp = newtemp();
        sprintf(temp, "T%d", cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(valcond2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(valcond1, valDepile);
        createQuadL(3, valcond1, valcond2, temp);
        empiler(&pile3,temp);
        cpttemp++;
    ;}
    break;

  case 71:
#line 685 "syntaxic.y"
    {
        temp = newtemp();
        sprintf(temp, "T%d", cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(valcond1, valDepile); 
        createQuadL(1, valcond1, "", temp);
        empiler(&pile3,temp);
        cpttemp++;
    ;}
    break;

  case 74:
#line 702 "syntaxic.y"
    {
         char* temp=newtemp();
         sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(6,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    ;}
    break;

  case 75:
#line 713 "syntaxic.y"
    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(5,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    ;}
    break;

  case 76:
#line 724 "syntaxic.y"
    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(1,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    ;}
    break;

  case 77:
#line 735 "syntaxic.y"
    {
       char* temp=newtemp();
       sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(3,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    ;}
    break;

  case 78:
#line 746 "syntaxic.y"
    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(4,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    ;}
    break;

  case 79:
#line 757 "syntaxic.y"
    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(2,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    ;}
    break;

  case 80:
#line 768 "syntaxic.y"
    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(nb_op,(yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string),temp);
        empiler(&pile3,temp);
    ;}
    break;

  case 81:
#line 775 "syntaxic.y"
    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
       createQuadA(nb_op,(yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string),temp);
       empiler(&pile3,temp);
    ;}
    break;

  case 82:
#line 782 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);
                          printf("on compare CARACTERE avec CARACTERES"); exit(0);
                         ;}
    break;

  case 83:
#line 785 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);
                            printf("on compare CARACTERES avec CARACTEREs"); exit(0);
                            ;}
    break;

  case 88:
#line 801 "syntaxic.y"
    {nb_op=6;;}
    break;

  case 89:
#line 802 "syntaxic.y"
    {nb_op=5;;}
    break;

  case 90:
#line 803 "syntaxic.y"
    {nb_op=3;;}
    break;

  case 91:
#line 804 "syntaxic.y"
    {nb_op=4;;}
    break;

  case 92:
#line 805 "syntaxic.y"
    {nb_op=1;;}
    break;

  case 93:
#line 806 "syntaxic.y"
    {nb_op=2;;}
    break;

  case 95:
#line 813 "syntaxic.y"
    {
        float t=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("+", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    ;}
    break;

  case 96:
#line 832 "syntaxic.y"
    {
        float t=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        empiler(&pile3,temp);
        cpttemp++;
    ;}
    break;

  case 98:
#line 854 "syntaxic.y"
    { 
        float t=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);

        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("*", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    ;}
    break;

  case 99:
#line 872 "syntaxic.y"
    { 
        if((yyvsp[(3) - (3)].real)==0) {printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne); exit(0);}
        else{   
        float t=(yyvsp[(1) - (3)].real)/(yyvsp[(3) - (3)].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("/", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
;}
    break;

  case 100:
#line 896 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                            printf("tentative d'affecter %s a un %s\n",typeD,typeG); exit(0);}
                                strcpy(valIdf,getVal((yyvsp[(1) - (1)].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,(yyvsp[(1) - (1)].string)); exit(0);}
                                 else
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 101:
#line 913 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);
                                        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
                   else{(yyval.real)=atof((yyvsp[(1) - (1)].string));}
                  strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                  empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 102:
#line 922 "syntaxic.y"
    {
                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);
                   printf("tentative d'affecter FLOAT a un %s\n",typeG); exit(0);}
                   else{
                   (yyval.real)=atof((yyvsp[(1) - (1)].string)); }  
                   strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 103:
#line 932 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);
        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
        else{(yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(saveStrq,(yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        }
    ;}
    break;

  case 104:
#line 942 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);
            printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
                else{
                strcpy(saveStr,(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(saveStrq, saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            }
    ;}
    break;

  case 105:
#line 955 "syntaxic.y"
    {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);
                                    printf("tentative d'affecter FLOAT a un %s\n",typeG); exit(0);}
                                      else{(yyval.real)=atof((yyvsp[(3) - (4)].string));
                                      strcpy(saveStrq,(yyvsp[(3) - (4)].string));
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      }
                   ;}
    break;

  case 106:
#line 964 "syntaxic.y"
    {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);
                                      printf("tentative d'affecter FlOAT a un %s\n",typeG); exit(0);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(saveStrq, saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       }
    ;}
    break;

  case 107:
#line 976 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 108:
#line 977 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne); exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[(1) - (4)].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);
                                                                printf("tentative d'affecter %s a un %s\n",typeD,typeG); exit(0);}
                                     strcpy(tmp,(yyvsp[(1) - (4)].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer1,"%d",atoi((yyvsp[(3) - (4)].string)));
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(saveStrq,tmp);
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                ;}
    break;

  case 110:
#line 997 "syntaxic.y"
    {
        float t=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("+", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    ;}
    break;

  case 111:
#line 1016 "syntaxic.y"
    {
        float t=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        empiler(&pile3,temp);
        cpttemp++;
    ;}
    break;

  case 113:
#line 1038 "syntaxic.y"
    { 
        float t=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);

        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("*", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    ;}
    break;

  case 114:
#line 1056 "syntaxic.y"
    { 
        if((yyvsp[(3) - (3)].real)==0) {printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne); exit(0);}
        else{   
        float t=(yyvsp[(1) - (3)].real)/(yyvsp[(3) - (3)].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("/", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
;}
    break;

  case 115:
#line 1080 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
             exit(0);
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                             printf("tentative d'affecter %s a un %s\n",typeD,typeG);
                              exit(0);
                             }
                                strcpy(valIdf,getVal((yyvsp[(1) - (1)].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,(yyvsp[(1) - (1)].string)); exit(0);}
                                 else
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 116:
#line 1100 "syntaxic.y"
    {
        printf("here %s\n",typeG);
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);
        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
                   else{(yyval.real)=atof((yyvsp[(1) - (1)].string));}
                  strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                  empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 117:
#line 1110 "syntaxic.y"
    {        printf("here 2 %s\n",typeG);

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);
                   printf("tentative d'affecter FLOAT a un %s\n",typeG); exit(0);}
                   else{
                   (yyval.real)=atof((yyvsp[(1) - (1)].string)); }  
                   strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 118:
#line 1121 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);
        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
        else{(yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(saveStrq,(yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        }
    ;}
    break;

  case 119:
#line 1131 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);
            printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
                else{
                strcpy(saveStr,(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(saveStrq, saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            }
    ;}
    break;

  case 120:
#line 1144 "syntaxic.y"
    {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);
                                    printf("tentative d'affecter FLOAT a un %s\n",typeG); exit(0);}
                                      else{(yyval.real)=atof((yyvsp[(3) - (4)].string));
                                      strcpy(saveStrq,(yyvsp[(3) - (4)].string));
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      }
                   ;}
    break;

  case 121:
#line 1153 "syntaxic.y"
    {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);
                                      printf("tentative d'affecter FLOAT a un %s\n",typeG); exit(0);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(saveStrq, saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       }
    ;}
    break;

  case 122:
#line 1165 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 123:
#line 1166 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne);
                                          exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[(1) - (4)].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);
                                     printf("tentative d'affecter %s a un %s\n",typeD,typeG); exit(0);}
                                     strcpy(tmp,(yyvsp[(1) - (4)].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer1,"%d",atoi((yyvsp[(3) - (4)].string)));
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(saveStrq,tmp);
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                ;}
    break;

  case 125:
#line 1187 "syntaxic.y"
    {
        float t=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("+", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    ;}
    break;

  case 126:
#line 1206 "syntaxic.y"
    {
        float t=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        empiler(&pile3,temp);
        cpttemp++;
    ;}
    break;

  case 128:
#line 1228 "syntaxic.y"
    { 
        float t=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);

        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("*", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    ;}
    break;

  case 129:
#line 1246 "syntaxic.y"
    { 
        if((yyvsp[(3) - (3)].real)==0){ printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne); exit(0);}
        else{   
        float t=(yyvsp[(1) - (3)].real)/(yyvsp[(3) - (3)].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("/", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
;}
    break;

  case 130:
#line 1270 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 131:
#line 1281 "syntaxic.y"
    {
       strcpy(typeD,"INTEGER");
       (yyval.real)=atof((yyvsp[(1) - (1)].string));
       strcpy(buffer1,(yyvsp[(1) - (1)].string));
       empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 132:
#line 1288 "syntaxic.y"
    {strcpy(typeD,"FLOAT");
                   (yyval.real)=atof((yyvsp[(1) - (1)].string));  
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 133:
#line 1293 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
        (yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        
    ;}
    break;

  case 134:
#line 1300 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
                strcpy(saveStr,(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    ;}
    break;

  case 135:
#line 1309 "syntaxic.y"
    {strcpy(typeD,"FLOAT");
                                      (yyval.real)=atof((yyvsp[(3) - (4)].string));;
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      
                   ;}
    break;

  case 136:
#line 1315 "syntaxic.y"
    {strcpy(typeD,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    ;}
    break;

  case 137:
#line 1322 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 138:
#line 1323 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne); exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[(1) - (4)].string)));
                                     strcpy(tmp,(yyvsp[(1) - (4)].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer1,"%d",atoi((yyvsp[(3) - (4)].string)));
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                ;}
    break;

  case 140:
#line 1340 "syntaxic.y"
    {
        float t=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("+", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    ;}
    break;

  case 141:
#line 1359 "syntaxic.y"
    {
        float t=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        empiler(&pile3,temp);
        cpttemp++;
    ;}
    break;

  case 143:
#line 1381 "syntaxic.y"
    { 
        float t=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);

        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("*", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    ;}
    break;

  case 144:
#line 1399 "syntaxic.y"
    { 
        if((yyvsp[(3) - (3)].real)==0) {printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne); exit(0);}
        else{   
        float t=(yyvsp[(1) - (3)].real)/(yyvsp[(3) - (3)].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("/", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
;}
    break;

  case 145:
#line 1423 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));
                                  strcpy(brnsup,(yyvsp[(1) - (1)].string));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 146:
#line 1435 "syntaxic.y"
    {
        strcpy(brnsup,(yyvsp[(1) - (1)].string));
       strcpy(typeD,"INTEGER");
       (yyval.real)=atof((yyvsp[(1) - (1)].string));
       strcpy(buffer1,(yyvsp[(1) - (1)].string));
       empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 147:
#line 1443 "syntaxic.y"
    {  strcpy(brnsup,(yyvsp[(1) - (1)].string));
        strcpy(typeD,"FLOAT");
                   (yyval.real)=atof((yyvsp[(1) - (1)].string));  
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 148:
#line 1449 "syntaxic.y"
    {
         strcpy(brnsup,(yyvsp[(3) - (4)].string));
        strcpy(typeD,"INTEGER");
        (yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        
    ;}
    break;

  case 149:
#line 1457 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
                strcpy(saveStr,(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                 strcpy(brnsup,saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    ;}
    break;

  case 150:
#line 1467 "syntaxic.y"
    {strcpy(typeD,"FLOAT");
                                      (yyval.real)=atof((yyvsp[(3) - (4)].string));;
                                       strcpy(brnsup,(yyvsp[(3) - (4)].string));
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      
                   ;}
    break;

  case 151:
#line 1474 "syntaxic.y"
    {strcpy(typeD,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                            strcpy(brnsup,saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    ;}
    break;

  case 152:
#line 1482 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 153:
#line 1483 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne); exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[(1) - (4)].string)));
                                     strcpy(tmp,(yyvsp[(1) - (4)].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer1,"%d",atoi((yyvsp[(3) - (4)].string)));
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(buffer1,tmp);
                                     strcpy(brnsup,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                ;}
    break;

  case 155:
#line 1500 "syntaxic.y"
    {
        float t=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("+", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    ;}
    break;

  case 156:
#line 1519 "syntaxic.y"
    {
        float t=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        empiler(&pile3,temp);
        cpttemp++;
    ;}
    break;

  case 158:
#line 1541 "syntaxic.y"
    { 
        float t=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);

        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("*", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    ;}
    break;

  case 159:
#line 1559 "syntaxic.y"
    { 
        if((yyvsp[(3) - (3)].real)==0) {printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne); exit(0);}
        else{   
        float t=(yyvsp[(1) - (3)].real)/(yyvsp[(3) - (3)].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuad("/", buffer1, buffer2, temp);
        empiler(&pile3,temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
;}
    break;

  case 160:
#line 1583 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
             exit(0);
        }else {strcpy(typeG,getType((yyvsp[(1) - (1)].string)));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 161:
#line 1595 "syntaxic.y"
    {
       strcpy(typeG,"INTEGER");
       (yyval.real)=atof((yyvsp[(1) - (1)].string));
       strcpy(buffer1,(yyvsp[(1) - (1)].string));
       empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 162:
#line 1602 "syntaxic.y"
    {strcpy(typeG,"FLOAT");
                   (yyval.real)=atof((yyvsp[(1) - (1)].string));  
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 163:
#line 1607 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
        (yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        
    ;}
    break;

  case 164:
#line 1614 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
                strcpy(saveStr,(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    ;}
    break;

  case 165:
#line 1623 "syntaxic.y"
    {strcpy(typeG,"FLOAT");
                                      (yyval.real)=atof((yyvsp[(3) - (4)].string));;
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      
                   ;}
    break;

  case 166:
#line 1629 "syntaxic.y"
    {strcpy(typeG,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    ;}
    break;

  case 167:
#line 1636 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 168:
#line 1637 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne); exit(0);}
                                else {
                                    strcpy(typeG,getType((yyvsp[(1) - (4)].string)));
                                     strcpy(tmp,(yyvsp[(1) - (4)].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer1,"%d",atoi((yyvsp[(3) - (4)].string)));
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3592 "syntaxic.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1652 "syntaxic.y"


// Main function to start the parser
int main() {
    initialisation();
    
    yyparse(); 
    printf("\n");
    afficher(0);afficher(1);afficher(2);
    displayQuad();
    return 0;
}
int yywrap() {
    return 1;
}

// Function to handle errors during parsing

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d, column %d\n", s, nb_ligne, col);

}


