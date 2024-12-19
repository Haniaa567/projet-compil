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
   float valind;
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
#line 48 "syntaxic.y"
{
    int entier;
    float real;
    char character;
    char* string;
}
/* Line 193 of yacc.c.  */
#line 234 "syntaxic.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 247 "syntaxic.tab.c"

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
#define YYLAST   386

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNRULES -- Number of states.  */
#define YYNSTATES  349

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
     190,   192,   193,   204,   205,   211,   212,   216,   220,   224,
     228,   229,   230,   245,   251,   257,   259,   263,   265,   267,
     271,   273,   277,   279,   282,   284,   285,   289,   293,   297,
     301,   305,   309,   313,   317,   321,   323,   325,   327,   329,
     331,   333,   335,   337,   339,   341,   343,   347,   351,   353,
     357,   361,   363,   365,   367,   372,   377,   382,   387,   391,
     396,   398,   402,   406,   408,   412,   416,   418,   420,   422,
     427,   432,   437,   442,   446,   451,   453,   457,   461,   463,
     467,   471,   473,   475,   477,   482,   487,   492,   497,   501,
     506,   508,   512,   516,   518,   522,   526,   528,   530,   532,
     537,   542,   547,   552,   556,   561,   563,   565,   567,   571,
     575,   577,   581,   585,   587,   589,   591,   596,   601,   606,
     611,   615,   620,   622
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,     3,    33,    46,    34,     4,    33,    47,
      34,     5,    33,    48,    34,    -1,     6,    -1,     7,    -1,
       8,    -1,    49,    -1,    49,    46,    -1,    49,    -1,    49,
      47,    -1,    52,    -1,    52,    48,    -1,    45,    51,    39,
      -1,     9,    45,    50,    28,    78,    39,    -1,    15,    -1,
      15,    -1,    15,    37,    16,    38,    -1,    15,    37,    56,
      38,    -1,    15,    40,    51,    -1,    15,    37,    16,    38,
      40,    51,    -1,    15,    37,    35,    29,    16,    36,    38,
      40,    51,    -1,    53,    -1,    60,    -1,    65,    -1,    68,
      -1,    64,    -1,    54,    28,    78,    39,    -1,    55,    28,
      78,    39,    -1,    55,    28,    59,    39,    -1,    54,    28,
      59,    39,    -1,    15,    -1,    15,    37,    16,    38,    -1,
      15,    37,    35,    29,    16,    36,    38,    -1,    15,    37,
      56,    38,    -1,    57,    -1,    56,    29,    57,    -1,    56,
      30,    57,    -1,    58,    -1,    57,    31,    58,    -1,    57,
      32,    58,    -1,    15,    -1,    16,    -1,    17,    -1,    35,
      29,    16,    36,    -1,    35,    30,    16,    36,    -1,    35,
      29,    17,    36,    -1,    35,    30,    17,    36,    -1,    35,
      78,    36,    -1,    15,    37,    16,    38,    -1,    18,    -1,
      42,    -1,    -1,    10,    35,    71,    36,    33,    61,    48,
      34,    62,    39,    -1,    -1,    11,    33,    63,    48,    34,
      -1,    -1,    54,    28,    78,    -1,    55,    28,    78,    -1,
      55,    28,    59,    -1,    54,    28,    59,    -1,    -1,    -1,
      12,    35,    64,    41,    90,    66,    41,    87,    67,    36,
      33,    48,    34,    39,    -1,    13,    35,    15,    36,    39,
      -1,    14,    35,    69,    36,    39,    -1,    70,    -1,    70,
      40,    69,    -1,    15,    -1,    42,    -1,    71,    20,    72,
      -1,    72,    -1,    72,    19,    73,    -1,    73,    -1,    21,
      73,    -1,    74,    -1,    -1,    84,    27,    81,    -1,    84,
      25,    81,    -1,    84,    22,    81,    -1,    84,    24,    81,
      -1,    84,    26,    81,    -1,    84,    23,    81,    -1,    75,
      77,    81,    -1,    84,    77,    76,    -1,    75,    77,    76,
      -1,    18,    -1,    42,    -1,    18,    -1,    42,    -1,    27,
      -1,    25,    -1,    24,    -1,    26,    -1,    22,    -1,    23,
      -1,    79,    -1,    78,    29,    79,    -1,    78,    30,    79,
      -1,    80,    -1,    79,    31,    80,    -1,    79,    32,    80,
      -1,    15,    -1,    16,    -1,    17,    -1,    35,    29,    16,
      36,    -1,    35,    30,    16,    36,    -1,    35,    29,    17,
      36,    -1,    35,    30,    17,    36,    -1,    35,    78,    36,
      -1,    15,    37,    16,    38,    -1,    82,    -1,    81,    29,
      82,    -1,    81,    30,    82,    -1,    83,    -1,    82,    31,
      83,    -1,    82,    32,    83,    -1,    15,    -1,    16,    -1,
      17,    -1,    35,    29,    16,    36,    -1,    35,    30,    16,
      36,    -1,    35,    29,    17,    36,    -1,    35,    30,    17,
      36,    -1,    35,    81,    36,    -1,    15,    37,    16,    38,
      -1,    85,    -1,    84,    29,    85,    -1,    84,    30,    85,
      -1,    86,    -1,    85,    31,    86,    -1,    85,    32,    86,
      -1,    15,    -1,    16,    -1,    17,    -1,    35,    29,    16,
      36,    -1,    35,    30,    16,    36,    -1,    35,    29,    17,
      36,    -1,    35,    30,    17,    36,    -1,    35,    84,    36,
      -1,    15,    37,    16,    38,    -1,    88,    -1,    87,    29,
      88,    -1,    87,    30,    88,    -1,    89,    -1,    88,    31,
      89,    -1,    88,    32,    89,    -1,    15,    -1,    16,    -1,
      17,    -1,    35,    29,    16,    36,    -1,    35,    30,    16,
      36,    -1,    35,    29,    17,    36,    -1,    35,    30,    17,
      36,    -1,    35,    87,    36,    -1,    15,    37,    16,    38,
      -1,    42,    -1,    18,    -1,    91,    -1,    90,    29,    91,
      -1,    90,    30,    91,    -1,    92,    -1,    91,    31,    92,
      -1,    91,    32,    92,    -1,    15,    -1,    16,    -1,    17,
      -1,    35,    29,    16,    36,    -1,    35,    30,    16,    36,
      -1,    35,    29,    17,    36,    -1,    35,    30,    17,    36,
      -1,    35,    90,    36,    -1,    15,    37,    16,    38,    -1,
      42,    -1,    18,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,   105,   106,   107,   112,   113,   118,   119,
     124,   125,   130,   141,   162,   175,   176,   185,   201,   202,
     203,   217,   218,   219,   220,   221,   226,   239,   251,   256,
     265,   293,   318,   332,   373,   374,   393,   414,   415,   433,
     457,   475,   481,   486,   492,   500,   505,   512,   513,   526,
     534,   562,   562,   570,   570,   575,   579,   591,   601,   610,
     622,   627,   622,   648,   654,   659,   660,   665,   671,   677,
     689,   693,   705,   709,   719,   725,   726,   738,   749,   760,
     771,   782,   808,   812,   815,   833,   834,   837,   838,   841,
     842,   843,   844,   845,   846,   852,   853,   872,   893,   894,
     912,   936,   953,   962,   972,   982,   995,  1004,  1016,  1017,
    1036,  1037,  1056,  1077,  1078,  1096,  1120,  1140,  1150,  1161,
    1171,  1184,  1193,  1205,  1206,  1226,  1227,  1246,  1267,  1268,
    1286,  1310,  1321,  1328,  1333,  1340,  1349,  1355,  1362,  1363,
    1379,  1380,  1399,  1420,  1421,  1439,  1463,  1477,  1485,  1491,
    1499,  1509,  1516,  1524,  1525,  1539,  1542,  1546,  1547,  1566,
    1587,  1588,  1606,  1630,  1643,  1650,  1655,  1662,  1671,  1677,
    1684,  1685,  1698,  1701
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
  "@4", "io_statement", "io_expr_list", "io_expr", "COND", "AND_EXPR",
  "NOT_EXPR", "comparison_expr", "DROIT", "GAUCHE", "OP_COMP", "term",
  "factor", "primary", "term1", "factor1", "primary1", "term2", "factor2",
  "primary2", "term4", "factor4", "primary4", "term3", "factor3",
  "primary3", 0
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
      59,    61,    60,    63,    62,    62,    64,    64,    64,    64,
      66,    67,    65,    68,    68,    69,    69,    70,    70,    71,
      71,    72,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    76,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    79,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      81,    81,    81,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    84,    84,    84,    85,    85,
      85,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    87,    88,    88,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    90,    90,    90,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    12,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     3,     6,     1,     1,     4,     4,     3,     6,
       9,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       1,     4,     7,     4,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       1,     0,    10,     0,     5,     0,     3,     3,     3,     3,
       0,     0,    14,     5,     5,     1,     3,     1,     1,     3,
       1,     3,     1,     2,     1,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     1,     1,     1,     4,     4,     4,     4,     3,     4,
       1,     3,     3,     1,     3,     3,     1,     1,     1,     4,
       4,     4,     4,     3,     4,     1,     3,     3,     1,     3,
       3,     1,     1,     1,     4,     4,     4,     4,     3,     4,
       1,     3,     3,     1,     3,     3,     1,     1,     1,     4,
       4,     4,     4,     3,     4,     1,     1,     1,     3,     3,
       1,     3,     3,     1,     1,     1,     4,     4,     4,     4,
       3,     4,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,     5,     0,     0,
       0,     6,     0,    15,     0,     0,     7,    14,     0,     0,
       0,    12,     0,     0,    40,    41,    42,     0,     0,    34,
      37,    18,     0,   101,   102,   103,     0,     0,    95,    98,
       0,    16,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    47,    41,     0,
      35,    36,    38,    39,     0,     9,     0,     0,     0,     0,
       0,   108,    96,    97,    99,   100,    48,    19,    43,    45,
      44,    46,     0,     0,   109,   104,   106,   105,   107,     0,
       0,     0,     0,    43,     0,     0,     0,     0,    30,     0,
      10,    21,     0,     0,    22,    25,    23,    24,    20,    75,
       0,     0,     0,     0,     2,    11,     0,     0,   131,   132,
     133,    85,    75,     0,    86,     0,    70,    72,    74,     0,
       0,   125,   128,     0,     0,     0,     0,    67,    68,     0,
      65,    41,     0,     0,    49,    50,    59,    56,    58,    57,
       0,    73,     0,     0,     0,    75,     0,    75,    93,    94,
      91,    90,    92,    89,     0,    93,    94,    91,    90,    92,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    33,    29,    26,    28,    27,     0,
       0,     0,     0,     0,   138,    69,    51,    71,   116,   117,
     118,    87,     0,    88,    84,    82,   110,   113,    78,    81,
      79,    77,    80,    76,   126,   127,    83,   129,   130,    59,
      56,    58,    57,   163,   164,   165,   173,     0,   172,    60,
     157,   160,    63,    64,    66,     0,   139,   134,   136,   135,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,     0,     0,     0,     0,     0,   123,   111,   112,   114,
     115,     0,     0,     0,     0,     0,   170,   158,   159,     0,
     161,   162,    32,    55,   124,   119,   121,   120,   122,   171,
     166,   168,   167,   169,   146,   147,   148,   156,     0,   155,
      61,   140,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,    52,     0,     0,     0,     0,
       0,   153,   141,   142,     0,   144,   145,     0,   154,   149,
     151,   150,   152,     0,     0,     0,    54,     0,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    50,   109,    11,    18,    14,   110,
     111,   112,   113,    28,    29,    30,   156,   114,   251,   314,
     337,   115,   116,   266,   321,   117,   149,   150,   135,   136,
     137,   138,   139,   214,   174,    44,    38,    39,   215,   216,
     217,   140,   141,   142,   310,   311,   312,   239,   240,   241
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -172
static const yytype_int16 yypact[] =
{
      23,     7,    31,   198,  -172,  -172,  -172,  -172,   216,    39,
      49,   198,    50,    98,    48,   104,  -172,  -172,    65,     8,
      39,  -172,    88,   138,    73,   134,  -172,    82,    43,   119,
    -172,  -172,   198,   111,  -172,  -172,    85,    -2,   131,  -172,
     180,   160,   209,   212,    30,   141,   141,  -172,   141,   141,
     164,   198,   192,   214,   218,    77,   138,   138,  -172,   138,
     138,   179,    39,   196,   233,   259,   260,  -172,  -172,   107,
     119,   119,  -172,  -172,   257,  -172,   236,   261,   262,   263,
     264,  -172,   131,   131,  -172,  -172,  -172,  -172,   265,  -172,
    -172,  -172,   220,   268,  -172,  -172,  -172,  -172,  -172,   266,
     269,   206,    39,  -172,   267,   272,   273,   274,   275,   270,
     206,  -172,   282,   283,  -172,  -172,  -172,  -172,  -172,    32,
     298,   299,    -4,   144,  -172,  -172,    40,    40,   278,  -172,
    -172,  -172,    32,   110,  -172,    44,   297,  -172,  -172,   188,
     158,   143,  -172,   289,   290,   279,   285,  -172,  -172,   286,
     284,   281,   114,    56,  -172,  -172,   287,    22,   288,    89,
     307,  -172,   222,   224,   161,    32,   292,    32,  -172,  -172,
    -172,  -172,  -172,  -172,    53,   151,   151,   151,   151,   151,
     151,   154,   154,    -6,   154,   154,    40,    40,    61,   291,
     293,    -4,  -172,   226,  -172,  -172,  -172,  -172,  -172,   295,
     300,   301,   302,   303,  -172,   297,  -172,  -172,   294,  -172,
    -172,  -172,   117,  -172,  -172,   148,   213,  -172,   148,   148,
     148,   148,   148,   148,   143,   143,  -172,  -172,  -172,  -172,
     217,  -172,   217,   304,  -172,  -172,  -172,     0,  -172,   219,
     221,  -172,  -172,  -172,  -172,   306,  -172,  -172,  -172,  -172,
    -172,   206,   312,   234,   238,   163,   151,   151,   151,   151,
     313,   240,   242,   165,    61,    61,   305,    61,    61,   296,
     309,   310,   308,   311,   314,   315,  -172,   213,   213,  -172,
    -172,   316,   317,   319,   320,   321,  -172,   221,   221,    74,
    -172,  -172,  -172,   324,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,   322,  -172,  -172,  -172,     4,  -172,
     231,   232,  -172,   325,   323,   329,   249,   251,   173,    74,
      74,   327,    74,    74,  -172,  -172,   326,   330,   331,   332,
     333,  -172,   232,   232,   328,  -172,  -172,   206,  -172,  -172,
    -172,  -172,  -172,   206,   318,   336,  -172,   334,  -172
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,   341,   349,   335,  -110,   -19,  -172,   -18,  -172,
    -172,   245,   252,   248,   225,   227,  -124,  -172,  -172,  -172,
    -172,   254,  -172,  -172,  -172,  -172,   149,  -172,  -172,   210,
    -122,  -172,  -172,   193,   237,   -22,   223,   228,  -171,    16,
      19,   246,   100,    99,    70,   -34,   -33,   145,    27,    26
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     125,    37,    31,   158,   218,   219,   220,   221,   222,   223,
     161,   147,   211,    51,    55,   233,   234,   235,   236,   304,
     305,   306,   307,    24,    25,    26,     1,    56,    57,   261,
     262,     4,    51,   316,   317,   237,   213,    58,   148,   308,
       3,   255,   238,    27,    87,   207,   309,   128,   129,   130,
     131,    56,    57,   132,    13,    33,    34,    35,   154,    56,
      57,   196,   229,   231,   165,    17,    67,   133,   208,   209,
     210,   211,    45,    46,   134,    36,   233,   234,   235,   236,
     166,    47,   155,    15,   118,    45,    46,    21,   212,   304,
     305,   306,   307,    23,   194,   213,   237,    33,    34,    35,
      33,    34,    35,   238,   157,   159,    56,    57,    22,   308,
      40,    42,    43,    81,    53,    54,   309,    36,    56,    57,
      36,    32,    33,    34,    35,   128,   129,   130,   198,    33,
      34,    35,   208,   209,   210,    19,    92,    43,    20,   162,
     163,   270,    36,   193,    43,   133,   253,   254,    52,    36,
      48,    49,   212,    33,    34,    35,    24,    68,    26,    24,
     151,    26,    59,    60,   230,   232,   208,   209,   210,   128,
     129,   130,    41,    36,   184,   185,    69,   256,   257,   152,
     175,   176,   177,   178,   179,   180,   212,   181,   182,   133,
     181,   182,   256,   257,   264,   265,    61,   204,    74,   276,
      62,   286,   319,   320,     5,     6,     7,     8,    76,   331,
     168,   169,   170,   171,   172,   173,   104,    86,   105,   106,
     107,   108,     5,     6,     7,    63,    64,   344,    65,    66,
      77,    78,    88,   345,    79,    80,   100,    64,   200,   201,
     202,   203,   245,    64,   258,   259,    56,    57,   264,   265,
     272,   273,   267,   268,   274,   275,   282,   283,   284,   285,
     319,   320,    93,   322,   323,   327,   328,   329,   330,    89,
      70,    71,   277,   278,    94,    72,    73,   279,   280,    82,
      83,   224,   225,   227,   228,   332,   333,    84,    85,   335,
     336,   287,   288,   290,   291,    90,    91,    95,    96,    97,
      98,   101,   119,    99,   124,   103,   102,   120,   121,   122,
     126,   127,   123,   108,   146,   160,   167,   186,   187,   192,
     188,   189,   190,   199,   191,   206,   195,   197,   271,   281,
     242,   252,   243,   246,   292,   313,   247,   248,   249,   250,
     244,   260,   269,   293,   295,   326,   289,   296,   294,    12,
     297,   298,   346,   300,   299,   301,   302,   303,   324,   315,
      16,   343,   325,   334,   338,   143,   339,   340,   341,   342,
     347,   153,   144,   348,   145,   205,   226,   183,   318,   164,
       0,     0,   263,     0,     0,     0,    75
};

static const yytype_int16 yycheck[] =
{
     110,    23,    20,   127,   175,   176,   177,   178,   179,   180,
     132,    15,    18,    32,    36,    15,    16,    17,    18,    15,
      16,    17,    18,    15,    16,    17,     3,    29,    30,    29,
      30,     0,    51,    29,    30,    35,    42,    39,    42,    35,
      33,   212,    42,    35,    62,   167,    42,    15,    16,    17,
      18,    29,    30,    21,    15,    15,    16,    17,    18,    29,
      30,    39,   186,   187,    20,    15,    36,    35,    15,    16,
      17,    18,    29,    30,    42,    35,    15,    16,    17,    18,
      36,    38,    42,    34,   102,    29,    30,    39,    35,    15,
      16,    17,    18,    28,    38,    42,    35,    15,    16,    17,
      15,    16,    17,    42,   126,   127,    29,    30,     4,    35,
      37,    29,    30,    36,    29,    30,    42,    35,    29,    30,
      35,    33,    15,    16,    17,    15,    16,    17,    39,    15,
      16,    17,    15,    16,    17,    37,    29,    30,    40,    29,
      30,   251,    35,    29,    30,    35,    29,    30,    37,    35,
      31,    32,    35,    15,    16,    17,    15,    16,    17,    15,
      16,    17,    31,    32,   186,   187,    15,    16,    17,    15,
      16,    17,    38,    35,    31,    32,    35,    29,    30,    35,
      22,    23,    24,    25,    26,    27,    35,    29,    30,    35,
      29,    30,    29,    30,    29,    30,    16,    36,    34,    36,
      40,    36,    29,    30,     6,     7,     8,     9,    16,    36,
      22,    23,    24,    25,    26,    27,    10,    38,    12,    13,
      14,    15,     6,     7,     8,    16,    17,   337,    16,    17,
      16,    17,    36,   343,    16,    17,    16,    17,    16,    17,
      16,    17,    16,    17,    31,    32,    29,    30,    29,    30,
      16,    17,    31,    32,    16,    17,    16,    17,    16,    17,
      29,    30,     5,    31,    32,    16,    17,    16,    17,    36,
      45,    46,   256,   257,    38,    48,    49,   258,   259,    56,
      57,   181,   182,   184,   185,   319,   320,    59,    60,   322,
     323,   264,   265,   267,   268,    36,    36,    36,    36,    36,
      36,    33,    35,    38,    34,    36,    40,    35,    35,    35,
      28,    28,    37,    15,    15,    37,    19,    28,    28,    38,
      41,    36,    36,    16,    40,    33,    39,    39,    16,    16,
      39,    37,    39,    38,    38,    11,    36,    36,    36,    36,
     191,    37,    36,    34,    36,    16,    41,    36,    38,     8,
      36,    36,    34,    36,    38,    36,    36,    36,    33,    37,
      11,    33,    39,    36,    38,   120,    36,    36,    36,    36,
      34,   123,   120,    39,   120,   165,   183,   140,   308,   133,
      -1,    -1,   237,    -1,    -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    44,    33,     0,     6,     7,     8,     9,    45,
      46,    49,    45,    15,    51,    34,    46,    15,    50,    37,
      40,    39,     4,    28,    15,    16,    17,    35,    56,    57,
      58,    51,    33,    15,    16,    17,    35,    78,    79,    80,
      37,    38,    29,    30,    78,    29,    30,    38,    31,    32,
      47,    49,    37,    29,    30,    78,    29,    30,    39,    31,
      32,    16,    40,    16,    17,    16,    17,    36,    16,    35,
      57,    57,    58,    58,    34,    47,    16,    16,    17,    16,
      17,    36,    79,    79,    80,    80,    38,    51,    36,    36,
      36,    36,    29,     5,    38,    36,    36,    36,    36,    38,
      16,    33,    40,    36,    10,    12,    13,    14,    15,    48,
      52,    53,    54,    55,    60,    64,    65,    68,    51,    35,
      35,    35,    35,    37,    34,    48,    28,    28,    15,    16,
      17,    18,    21,    35,    42,    71,    72,    73,    74,    75,
      84,    85,    86,    54,    55,    64,    15,    15,    42,    69,
      70,    16,    35,    56,    18,    42,    59,    78,    59,    78,
      37,    73,    29,    30,    84,    20,    36,    19,    22,    23,
      24,    25,    26,    27,    77,    22,    23,    24,    25,    26,
      27,    29,    30,    77,    31,    32,    28,    28,    41,    36,
      36,    40,    38,    29,    38,    39,    39,    39,    39,    16,
      16,    17,    16,    17,    36,    72,    33,    73,    15,    16,
      17,    18,    35,    42,    76,    81,    82,    83,    81,    81,
      81,    81,    81,    81,    85,    85,    76,    86,    86,    59,
      78,    59,    78,    15,    16,    17,    18,    35,    42,    90,
      91,    92,    39,    39,    69,    16,    38,    36,    36,    36,
      36,    61,    37,    29,    30,    81,    29,    30,    31,    32,
      37,    29,    30,    90,    29,    30,    66,    31,    32,    36,
      48,    16,    16,    17,    16,    17,    36,    82,    82,    83,
      83,    16,    16,    17,    16,    17,    36,    91,    91,    41,
      92,    92,    38,    34,    38,    36,    36,    36,    36,    38,
      36,    36,    36,    36,    15,    16,    17,    18,    35,    42,
      87,    88,    89,    11,    62,    37,    29,    30,    87,    29,
      30,    67,    31,    32,    33,    39,    16,    16,    17,    16,
      17,    36,    88,    88,    36,    89,    89,    63,    38,    36,
      36,    36,    36,    33,    48,    48,    34,    34,    39
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
#line 105 "syntaxic.y"
    {strcpy(sauvType,"INTEGER");;}
    break;

  case 4:
#line 106 "syntaxic.y"
    {strcpy(sauvType,"FLOAT");;}
    break;

  case 5:
#line 107 "syntaxic.y"
    {strcpy(sauvType,"CHAR");;}
    break;

  case 12:
#line 130 "syntaxic.y"
    {
        //verification de la double declaration et insertion du type
        for(j=0;strcmp(saveIdf[j].idfTab,"")!=0;j++){
            if(verifdeclaration(saveIdf[j].idfTab)==0) insererType(sauvType,saveIdf[j].idfTab);
            else {printf("Erreur semantique :double declaration de %s a la ligne %d colonne %d \n",saveIdf[j].idfTab,nb_ligne,col);
                exit(0);}
            //createQuad("DECL", sauvType, "", saveIdf[j].idfTab);
            strcpy(saveIdf[j].idfTab,"");
        }  
        j=0;  
    ;}
    break;

  case 13:
#line 141 "syntaxic.y"
    {
    // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ((yyvsp[(5) - (6)].real) - floor((yyvsp[(5) - (6)].real)) != 0)) {
            printf("Erreur sémantique à la ligne %d colonne %d  : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne,col);
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
#line 162 "syntaxic.y"
    {
        strcpy(saveIdf[0].idfTab,(yyvsp[(1) - (1)].string));
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType((yyvsp[(1) - (1)].string)));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d colonne %d \n",saveIdf[0].idfTab,nb_ligne,col);
            
            
    ;}
    break;

  case 15:
#line 175 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (1)].string));j++;;}
    break;

  case 16:
#line 176 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (4)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;
        if (atoi((yyvsp[(3) - (4)].string)) == 0) {
            printf("Erreur semantique la ligne %d colonne %d : La taille du tableau doit etre strictement positive\n",nb_ligne,col);
             exit(0);
        } 
        sprintf(buffer1, "%d", atoi((yyvsp[(3) - (4)].string))-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[(1) - (4)].string),"","");
        ;}
    break;

  case 17:
#line 185 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (4)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;

        sprintf(buffer1, "T%d", cpttemp-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[(1) - (4)].string),"","");
         if (fmod(valind, 1.0) != 0.0) {
            printf("Erreur semantique la ligne %d colonne %d : La taille du tableau doit etre un entier (pas un nombre réel)\n",nb_ligne,col);
             exit(0);
        }
        
        // Vérifier que le nombre est un entier positif
        if ((yyvsp[(3) - (4)].real) < 1) {
            printf("Erreur semantique la ligne %d colonne %d : La taille du tableau doit etre un entier strictement positif\n",nb_ligne,col);
             exit(0);
        }
        ;}
    break;

  case 18:
#line 201 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (3)].string));j++;;}
    break;

  case 19:
#line 202 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (6)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;;}
    break;

  case 20:
#line 203 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (9)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;;}
    break;

  case 26:
#line 226 "syntaxic.y"
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
#line 239 "syntaxic.y"
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
#line 251 "syntaxic.y"
    {
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    ;}
    break;

  case 29:
#line 256 "syntaxic.y"
    {
        
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    ;}
    break;

  case 30:
#line 265 "syntaxic.y"
    {
    // Vérification de la déclaration de la variable avant usage
    if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
        printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[(1) - (1)].string));
         exit(0);
    } else if(strcmp(getCode((yyvsp[(1) - (1)].string)),"IDF TAB")==0){
        printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' est un tableau.\n",nb_ligne,col, (yyvsp[(1) - (1)].string));
         exit(0);
        strcpy(typeG, getType((yyvsp[(1) - (1)].string)));  // Récupérer le type de la variable à gauche
        if (comparCode((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique à la ligne %d colonne %d : affectation d'une constante\n", nb_ligne,col);
        } else {
            strcpy(mDroit, (yyvsp[(1) - (1)].string));
        }
        
    }
    else{
        strcpy(typeG, getType((yyvsp[(1) - (1)].string)));  // Récupérer le type de la variable à gauche
        if (comparCode((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique à la ligne %d colonne %d : affectation d'une constante\n", nb_ligne,col);
             exit(0);
        } else {
            strcpy(mDroit, (yyvsp[(1) - (1)].string));
        }
    }
    ;}
    break;

  case 31:
#line 293 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                    {printf("Erreur semantique a la ligne %d colonne %d :Tableau %s non declare\n",nb_ligne,col,(yyvsp[(1) - (4)].string)); exit(0);}
                    else if(strcmp(getCode((yyvsp[(1) - (4)].string)),"IDF")==0){
                        printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' est n'est pas un tableau.\n",nb_ligne,col, (yyvsp[(1) - (4)].string));
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
#line 318 "syntaxic.y"
    {
                if(verifdeclaration((yyvsp[(1) - (7)].string))==0 )
                  {printf("Erreur semantique a la ligne %d colonne %d :Tableau %s non declare\n",nb_ligne,col,(yyvsp[(1) - (7)].string));
                   exit(0);}
                  else if(strcmp(getCode((yyvsp[(1) - (7)].string)),"IDF")==0){
                        printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' est n'est pas un tableau.\n",nb_ligne,col, (yyvsp[(1) - (7)].string));
                         exit(0);
                        strcpy(typeG, getType((yyvsp[(1) - (7)].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[(1) - (7)].string)));

                    }  
    ;}
    break;

  case 33:
#line 332 "syntaxic.y"
    {
                    if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                    {printf("Erreur semantique a la ligne %d colonne %d :Tableau %s non declare\n",nb_ligne,col,(yyvsp[(1) - (4)].string));
                     exit(0);}
                    else if(strcmp(getCode((yyvsp[(1) - (4)].string)),"IDF")==0){
                        printf("Erreur semantique la ligne %d colonne %d: La variable '%s' est n'est pasm un tableau.\n",nb_ligne,col, (yyvsp[(1) - (4)].string));
                         exit(0);
                        strcpy(typeG, getType((yyvsp[(1) - (4)].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[(1) - (4)].string)));

                    }  
                    // Vérifier si le nombre a une partie fractionnelle
                    if (fmod(valind, 1.0) != 0.0) {
                        printf("Erreur semantique la ligne %d colonne %d: L'indice du tableau doit etre un entier (pas un nombre reel)\n",nb_ligne,col);
                         exit(0);
                    }
                    
                    // Vérifier que le nombre est un entier positif
                    if ((yyvsp[(3) - (4)].real) < 0) {
                        printf("Erreur semantique la ligne %d colonne %d : L'indice du tableau doit être un entier positif\n",nb_ligne,col);
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
#line 374 "syntaxic.y"
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
#line 393 "syntaxic.y"
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
#line 415 "syntaxic.y"
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
#line 433 "syntaxic.y"
    { 
        if((yyvsp[(3) - (3)].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
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
#line 457 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[(1) - (1)].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                         printf("tentative d'affecter %s a un %s\n",typeD,typeG); exit(0);
                                                        }
                                strcpy(valIdf,getVal((yyvsp[(1) - (1)].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d colonne %d : variable %s non initialisee\n",nb_ligne,col,(yyvsp[(1) - (1)].string)); exit(0);}
                                 else
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 41:
#line 475 "syntaxic.y"
    {
                  (yyval.real)=atof((yyvsp[(1) - (1)].string));
                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                  empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 42:
#line 481 "syntaxic.y"
    {
                   (yyval.real)=atof((yyvsp[(1) - (1)].string)); 
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 43:
#line 486 "syntaxic.y"
    {
        (yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        
    ;}
    break;

  case 44:
#line 492 "syntaxic.y"
    {
                strcpy(saveStr,(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    ;}
    break;

  case 45:
#line 500 "syntaxic.y"
    {(yyval.real)=atof((yyvsp[(3) - (4)].string));
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      
                   ;}
    break;

  case 46:
#line 505 "syntaxic.y"
    {
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    ;}
    break;

  case 47:
#line 512 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 48:
#line 513 "syntaxic.y"
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
#line 526 "syntaxic.y"
    {if(strcmp(typeG,"CHAR")!=0)   
                                {printf("Erreur semantique a la ligne %d colonne %d :type incompatible\n",nb_ligne,col);
                                 printf("tentative d'affecter CHAR a un %s\n",typeG); exit(0);
                                }
                            else {insererVal(mDroit,(yyvsp[(1) - (1)].string));}
                            strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                            sprintf(saveStr, "%s",(yyvsp[(1) - (1)].string)); 
                           ;}
    break;

  case 50:
#line 534 "syntaxic.y"
    {   
                                 printf("Erreur semantique a la ligne %d colonne %d:type incompatible\n",nb_ligne,col);
                                 if(strcmp(typeG,"CHAR")==0) {printf("On ne peut pas affecter STRING a CHAR(on doit le faire caractere par caratere dans un tableaux)\n");exit(0);}
                                 else{printf("tentative d'affecter STRING a un %s\n",typeG); exit(0);}
                                 
                            
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
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }else{
            //sprintf(saveStr, "%d", (int)$3); 
            createQuad("=", saveStrq, "",mDroit);
        
        }
    ;}
    break;

  case 57:
#line 591 "syntaxic.y"
    {
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d colonne %d:type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    ;}
    break;

  case 58:
#line 601 "syntaxic.y"
    {
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    ;}
    break;

  case 59:
#line 610 "syntaxic.y"
    {
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    ;}
    break;

  case 60:
#line 622 "syntaxic.y"
    {
        valDepile = depiler(&pile3); 
        strcpy(pasfor, valDepile); 
        //$$ = atoi($6); // Capturer le pas
    ;}
    break;

  case 61:
#line 627 "syntaxic.y"
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

  case 62:
#line 636 "syntaxic.y"
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

  case 63:
#line 648 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(3) - (5)].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col,(yyvsp[(3) - (5)].string)); exit(0);
        }
    ;}
    break;

  case 67:
#line 665 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[(1) - (1)].string)); exit(0);
        }
    ;}
    break;

  case 69:
#line 678 "syntaxic.y"
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

  case 71:
#line 694 "syntaxic.y"
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

  case 73:
#line 710 "syntaxic.y"
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

  case 76:
#line 727 "syntaxic.y"
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

  case 77:
#line 738 "syntaxic.y"
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

  case 78:
#line 749 "syntaxic.y"
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

  case 79:
#line 760 "syntaxic.y"
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

  case 80:
#line 771 "syntaxic.y"
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

  case 81:
#line 782 "syntaxic.y"
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

  case 82:
#line 808 "syntaxic.y"
    {
                            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
                          printf("on ne peut pas comparer CARACTERE avec avec %s\n",typeD); exit(0);
                         ;}
    break;

  case 83:
#line 812 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
                            printf("on ne peut pas comparer %s avec avec %s\n",typeG,typeD); exit(0);
                            ;}
    break;

  case 84:
#line 815 "syntaxic.y"
    {
        if(strcmp(typeD,typeG)!=0){
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("on ne peut pas comparer %s avec avec %s\n",typeG,typeD); exit(0);
        }
        else{
            char* temp=newtemp();
            sprintf(temp,"T%d",cpttemp);
            cpttemp++;
            createQuadA(nb_op,(yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string),temp);
            empiler(&pile3,temp);
        }
    ;}
    break;

  case 85:
#line 833 "syntaxic.y"
    {strcpy(typeG,"CHAR");;}
    break;

  case 86:
#line 834 "syntaxic.y"
    {strcpy(typeG,"STRING");;}
    break;

  case 87:
#line 837 "syntaxic.y"
    {strcpy(typeD,"CHAR");;}
    break;

  case 88:
#line 838 "syntaxic.y"
    {strcpy(typeD,"STRING");;}
    break;

  case 89:
#line 841 "syntaxic.y"
    {nb_op=6;;}
    break;

  case 90:
#line 842 "syntaxic.y"
    {nb_op=5;;}
    break;

  case 91:
#line 843 "syntaxic.y"
    {nb_op=3;;}
    break;

  case 92:
#line 844 "syntaxic.y"
    {nb_op=4;;}
    break;

  case 93:
#line 845 "syntaxic.y"
    {nb_op=1;;}
    break;

  case 94:
#line 846 "syntaxic.y"
    {nb_op=2;;}
    break;

  case 96:
#line 853 "syntaxic.y"
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

  case 97:
#line 872 "syntaxic.y"
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

  case 99:
#line 894 "syntaxic.y"
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

  case 100:
#line 912 "syntaxic.y"
    { 
        if((yyvsp[(3) - (3)].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
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

  case 101:
#line 936 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[(1) - (1)].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 1\n",nb_ligne,col);
                                                            printf("tentative d'affecter %s a un %s\n",typeD,typeG); exit(0);}
                                strcpy(valIdf,getVal((yyvsp[(1) - (1)].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d colonne %d : variable %s non initialisee\n",nb_ligne,col,(yyvsp[(1) - (1)].string)); exit(0);}
                                 else
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 102:
#line 953 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 2\n",nb_ligne,col);
                                        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
                   else{(yyval.real)=atof((yyvsp[(1) - (1)].string));}
                  strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                  empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 103:
#line 962 "syntaxic.y"
    {
                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 3\n",nb_ligne,col);
                   printf("tentative d'affecter FLOAT a un %s\n",typeG); exit(0);}
                   else{
                   (yyval.real)=atof((yyvsp[(1) - (1)].string)); }  
                   strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 104:
#line 972 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 4\n",nb_ligne,col);
        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
        else{(yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(saveStrq,(yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        }
    ;}
    break;

  case 105:
#line 982 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 5\n",nb_ligne,col);
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

  case 106:
#line 995 "syntaxic.y"
    {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 6\n",nb_ligne,col);
                                    printf("tentative d'affecter FLOAT a un %s\n",typeG); exit(0);}
                                      else{(yyval.real)=atof((yyvsp[(3) - (4)].string));
                                      strcpy(saveStrq,(yyvsp[(3) - (4)].string));
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      }
                   ;}
    break;

  case 107:
#line 1004 "syntaxic.y"
    {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 7\n",nb_ligne,col);
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

  case 108:
#line 1016 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 109:
#line 1017 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d \n",(yyvsp[(1) - (4)].string),nb_ligne,col); exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[(1) - (4)].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 8\n",nb_ligne,col);
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

  case 111:
#line 1037 "syntaxic.y"
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

  case 112:
#line 1056 "syntaxic.y"
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

  case 114:
#line 1078 "syntaxic.y"
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

  case 115:
#line 1096 "syntaxic.y"
    { 
        if((yyvsp[(3) - (3)].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
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

  case 116:
#line 1120 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[(1) - (1)].string));
             exit(0);
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 1\n",nb_ligne,col);
                             printf("on ne peut pas comparer %s avec %s\n",typeD,typeG);
                              exit(0);
                             }
                                strcpy(valIdf,getVal((yyvsp[(1) - (1)].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d colonne %d : variable %s non initialisee\n",nb_ligne,col,(yyvsp[(1) - (1)].string)); exit(0);}
                                 else
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 117:
#line 1140 "syntaxic.y"
    {
       
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 2\n",nb_ligne,col);
        printf("on ne peut pas comparer INTEGER avec %s\n",typeG); exit(0);}
                   else{(yyval.real)=atof((yyvsp[(1) - (1)].string));}
                  strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                  empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 118:
#line 1150 "syntaxic.y"
    {       

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 3\n",nb_ligne,col);
                   printf("on ne peut pas comparer FLOAT avec %s\n",typeG); exit(0);}
                   else{
                   (yyval.real)=atof((yyvsp[(1) - (1)].string)); }  
                   strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 119:
#line 1161 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 4\n",nb_ligne,col);
        printf("on ne peut pas comparer INTEGER avec %s\n",typeG); exit(0);}
        else{(yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(saveStrq,(yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        }
    ;}
    break;

  case 120:
#line 1171 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 5\n",nb_ligne,col);
            printf("on ne peut pas comparer INTEGER avec %s\n",typeG); exit(0);}
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

  case 121:
#line 1184 "syntaxic.y"
    {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 6\n",nb_ligne,col);
                                    printf("on ne peut pas comparer FLOAT avec %s\n",typeG); exit(0);}
                                      else{(yyval.real)=atof((yyvsp[(3) - (4)].string));
                                      strcpy(saveStrq,(yyvsp[(3) - (4)].string));
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      }
                   ;}
    break;

  case 122:
#line 1193 "syntaxic.y"
    {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 7\n",nb_ligne,col);
                                      printf("on ne peut pas comparer FLOAT avec %s\n",typeG); exit(0);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(saveStrq, saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       }
    ;}
    break;

  case 123:
#line 1205 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 124:
#line 1206 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique  :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[(1) - (4)].string),nb_ligne,col);
                                          exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[(1) - (4)].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 8\n",nb_ligne,col);
                                     printf("on ne peut pas comparer %s avec %s\n",typeD,typeG); exit(0);}
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

  case 126:
#line 1227 "syntaxic.y"
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

  case 127:
#line 1246 "syntaxic.y"
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

  case 129:
#line 1268 "syntaxic.y"
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

  case 130:
#line 1286 "syntaxic.y"
    { 
        if((yyvsp[(3) - (3)].real)==0){ printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
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

  case 131:
#line 1310 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[(1) - (1)].string)); exit(0);
        }else {strcpy(typeG,getType((yyvsp[(1) - (1)].string)));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 132:
#line 1321 "syntaxic.y"
    {
       strcpy(typeG,"INTEGER");
       (yyval.real)=atof((yyvsp[(1) - (1)].string));
       strcpy(buffer1,(yyvsp[(1) - (1)].string));
       empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 133:
#line 1328 "syntaxic.y"
    {strcpy(typeG,"FLOAT");
                   (yyval.real)=atof((yyvsp[(1) - (1)].string));  
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 134:
#line 1333 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
        (yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        
    ;}
    break;

  case 135:
#line 1340 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
                strcpy(saveStr,(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    ;}
    break;

  case 136:
#line 1349 "syntaxic.y"
    {strcpy(typeG,"FLOAT");
                                      (yyval.real)=atof((yyvsp[(3) - (4)].string));;
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      
                   ;}
    break;

  case 137:
#line 1355 "syntaxic.y"
    {strcpy(typeG,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    ;}
    break;

  case 138:
#line 1362 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 139:
#line 1363 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[(1) - (4)].string),nb_ligne,col); exit(0);}
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

  case 141:
#line 1380 "syntaxic.y"
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

  case 142:
#line 1399 "syntaxic.y"
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

  case 144:
#line 1421 "syntaxic.y"
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

  case 145:
#line 1439 "syntaxic.y"
    { 
        if((yyvsp[(3) - (3)].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
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

  case 146:
#line 1463 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[(1) - (1)].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));
                if(strcmp(typeD,"CHAR")==0){printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle ne doit pas etre CHAR\n",nb_ligne,col);exit(0);}

                                  strcpy(brnsup,(yyvsp[(1) - (1)].string));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 147:
#line 1477 "syntaxic.y"
    {
        strcpy(brnsup,(yyvsp[(1) - (1)].string));
       strcpy(typeD,"INTEGER");
       (yyval.real)=atof((yyvsp[(1) - (1)].string));
       strcpy(buffer1,(yyvsp[(1) - (1)].string));
       empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 148:
#line 1485 "syntaxic.y"
    {  strcpy(brnsup,(yyvsp[(1) - (1)].string));
        strcpy(typeD,"FLOAT");
                   (yyval.real)=atof((yyvsp[(1) - (1)].string));  
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 149:
#line 1491 "syntaxic.y"
    {
         strcpy(brnsup,(yyvsp[(3) - (4)].string));
        strcpy(typeD,"INTEGER");
        (yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        
    ;}
    break;

  case 150:
#line 1499 "syntaxic.y"
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

  case 151:
#line 1509 "syntaxic.y"
    {strcpy(typeD,"FLOAT");
                                      (yyval.real)=atof((yyvsp[(3) - (4)].string));;
                                       strcpy(brnsup,(yyvsp[(3) - (4)].string));
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      
                   ;}
    break;

  case 152:
#line 1516 "syntaxic.y"
    {strcpy(typeD,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                            strcpy(brnsup,saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    ;}
    break;

  case 153:
#line 1524 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 154:
#line 1525 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[(1) - (4)].string),nb_ligne,col); exit(0);}
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
#line 1539 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre characters\n");exit(0);;}
    break;

  case 156:
#line 1542 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre character\n");exit(0);;}
    break;

  case 158:
#line 1547 "syntaxic.y"
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

  case 159:
#line 1566 "syntaxic.y"
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

  case 161:
#line 1588 "syntaxic.y"
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

  case 162:
#line 1606 "syntaxic.y"
    { 
        if((yyvsp[(3) - (3)].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
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

  case 163:
#line 1630 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n", nb_ligne,col,(yyvsp[(1) - (1)].string));
             exit(0);
        }else {strcpy(typeG,getType((yyvsp[(1) - (1)].string)));
                if(strcmp(typeG,"CHAR")==0){printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle ne doit pas etre CHAR\n",nb_ligne,col);exit(0);}
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 164:
#line 1643 "syntaxic.y"
    {
       strcpy(typeG,"INTEGER");
       (yyval.real)=atof((yyvsp[(1) - (1)].string));
       strcpy(buffer1,(yyvsp[(1) - (1)].string));
       empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 165:
#line 1650 "syntaxic.y"
    {strcpy(typeG,"FLOAT");
                   (yyval.real)=atof((yyvsp[(1) - (1)].string));  
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 166:
#line 1655 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
        (yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        
    ;}
    break;

  case 167:
#line 1662 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
                strcpy(saveStr,(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    ;}
    break;

  case 168:
#line 1671 "syntaxic.y"
    {strcpy(typeG,"FLOAT");
                                      (yyval.real)=atof((yyvsp[(3) - (4)].string));;
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      
                   ;}
    break;

  case 169:
#line 1677 "syntaxic.y"
    {strcpy(typeG,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    ;}
    break;

  case 170:
#line 1684 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 171:
#line 1685 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d \n",(yyvsp[(1) - (4)].string),nb_ligne,col); exit(0);}
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

  case 172:
#line 1698 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre characters\n");exit(0);;}
    break;

  case 173:
#line 1701 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre character\n");exit(0);;}
    break;


/* Line 1267 of yacc.c.  */
#line 3680 "syntaxic.tab.c"
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


#line 1705 "syntaxic.y"


// Main function to start the parser
int main() {
    initialisation();
    
    yyparse(); 
    printf("\n");
    printf("\n::::::::::::::::::::COMPILATION TERMINER AVEC SUCCÈS::::::::::::::::::::::::::\n");
	printf("________________________________________________________________________________\n");
    printf("\n");
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
    exit(0);
}


