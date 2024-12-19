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
#define YYLAST   376

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNRULES -- Number of states.  */
#define YYNSTATES  353

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
     269,   273,   275,   279,   281,   284,   286,   287,   291,   295,
     299,   303,   307,   311,   315,   319,   323,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   345,   347,   349,   353,
     357,   359,   363,   367,   369,   371,   373,   378,   383,   388,
     393,   397,   402,   404,   408,   412,   414,   418,   422,   424,
     426,   428,   433,   438,   443,   448,   452,   457,   459,   463,
     467,   469,   473,   477,   479,   481,   483,   488,   493,   498,
     503,   507,   512,   514,   518,   522,   524,   528,   532,   534,
     536,   538,   543,   548,   553,   558,   562,   567,   569,   571,
     573,   577,   581,   583,   587,   591,   593,   595,   597,   602,
     607,   612,   617,   621,   626,   628
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
      -1,    -1,    54,    28,    79,    -1,    55,    28,    79,    -1,
      55,    28,    59,    -1,    54,    28,    59,    -1,    -1,    -1,
      12,    35,    64,    41,    91,    66,    41,    88,    67,    36,
      33,    48,    34,    39,    -1,    13,    35,    15,    36,    39,
      -1,    14,    35,    69,    36,    39,    -1,    70,    -1,    70,
      40,    69,    -1,    15,    -1,    42,    -1,    72,    -1,    72,
      20,    73,    -1,    73,    -1,    73,    19,    74,    -1,    74,
      -1,    21,    74,    -1,    75,    -1,    -1,    85,    27,    82,
      -1,    85,    25,    82,    -1,    85,    22,    82,    -1,    85,
      24,    82,    -1,    85,    26,    82,    -1,    85,    23,    82,
      -1,    42,    78,    42,    -1,    18,    78,    18,    -1,    76,
      78,    82,    -1,    85,    78,    77,    -1,    18,    -1,    42,
      -1,    18,    -1,    42,    -1,    27,    -1,    25,    -1,    24,
      -1,    26,    -1,    22,    -1,    23,    -1,    80,    -1,    79,
      29,    80,    -1,    79,    30,    80,    -1,    81,    -1,    80,
      31,    81,    -1,    80,    32,    81,    -1,    15,    -1,    16,
      -1,    17,    -1,    35,    29,    16,    36,    -1,    35,    30,
      16,    36,    -1,    35,    29,    17,    36,    -1,    35,    30,
      17,    36,    -1,    35,    79,    36,    -1,    15,    37,    16,
      38,    -1,    83,    -1,    82,    29,    83,    -1,    82,    30,
      83,    -1,    84,    -1,    83,    31,    84,    -1,    83,    32,
      84,    -1,    15,    -1,    16,    -1,    17,    -1,    35,    29,
      16,    36,    -1,    35,    30,    16,    36,    -1,    35,    29,
      17,    36,    -1,    35,    30,    17,    36,    -1,    35,    79,
      36,    -1,    15,    37,    16,    38,    -1,    86,    -1,    85,
      29,    86,    -1,    85,    30,    86,    -1,    87,    -1,    86,
      31,    87,    -1,    86,    32,    87,    -1,    15,    -1,    16,
      -1,    17,    -1,    35,    29,    16,    36,    -1,    35,    30,
      16,    36,    -1,    35,    29,    17,    36,    -1,    35,    30,
      17,    36,    -1,    35,    79,    36,    -1,    15,    37,    16,
      38,    -1,    89,    -1,    88,    29,    89,    -1,    88,    30,
      89,    -1,    90,    -1,    89,    31,    90,    -1,    89,    32,
      90,    -1,    15,    -1,    16,    -1,    17,    -1,    35,    29,
      16,    36,    -1,    35,    30,    16,    36,    -1,    35,    29,
      17,    36,    -1,    35,    30,    17,    36,    -1,    35,    79,
      36,    -1,    15,    37,    16,    38,    -1,    42,    -1,    18,
      -1,    92,    -1,    91,    29,    92,    -1,    91,    30,    92,
      -1,    93,    -1,    92,    31,    93,    -1,    92,    32,    93,
      -1,    15,    -1,    16,    -1,    17,    -1,    35,    29,    16,
      36,    -1,    35,    30,    16,    36,    -1,    35,    29,    17,
      36,    -1,    35,    30,    17,    36,    -1,    35,    79,    36,
      -1,    15,    37,    16,    38,    -1,    42,    -1,    18,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,   104,   105,   106,   111,   112,   117,   118,
     123,   124,   129,   140,   161,   174,   175,   184,   200,   201,
     202,   216,   217,   218,   219,   220,   225,   238,   250,   255,
     264,   292,   317,   331,   372,   373,   392,   413,   414,   432,
     456,   474,   480,   485,   491,   499,   504,   511,   512,   525,
     533,   560,   560,   568,   568,   573,   577,   589,   599,   608,
     620,   625,   620,   646,   652,   657,   658,   663,   669,   674,
     678,   690,   694,   706,   710,   720,   726,   727,   739,   750,
     761,   772,   783,   794,   801,   808,   811,   819,   820,   823,
     824,   827,   828,   829,   830,   831,   832,   838,   839,   858,
     879,   880,   898,   922,   939,   948,   958,   968,   981,   990,
    1002,  1003,  1022,  1023,  1042,  1063,  1064,  1082,  1106,  1126,
    1136,  1147,  1157,  1170,  1179,  1191,  1192,  1212,  1213,  1232,
    1253,  1254,  1272,  1296,  1307,  1314,  1319,  1326,  1335,  1341,
    1348,  1349,  1365,  1366,  1385,  1406,  1407,  1425,  1449,  1463,
    1471,  1477,  1485,  1495,  1502,  1510,  1511,  1525,  1528,  1532,
    1533,  1552,  1573,  1574,  1592,  1616,  1629,  1636,  1641,  1648,
    1657,  1663,  1670,  1671,  1684,  1687
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
      59,    61,    60,    63,    62,    62,    64,    64,    64,    64,
      66,    67,    65,    68,    68,    69,    69,    70,    70,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    78,    79,    79,    79,
      80,    80,    80,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    82,    82,    82,    83,    83,    83,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      86,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    89,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    91,    92,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93
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
       0,     0,    14,     5,     5,     1,     3,     1,     1,     1,
       3,     1,     3,     1,     2,     1,     0,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     3,     1,     1,     1,     4,     4,     4,     4,
       3,     4,     1,     3,     3,     1,     3,     3,     1,     1,
       1,     4,     4,     4,     4,     3,     4,     1,     3,     3,
       1,     3,     3,     1,     1,     1,     4,     4,     4,     4,
       3,     4,     1,     3,     3,     1,     3,     3,     1,     1,
       1,     4,     4,     4,     4,     3,     4,     1,     1,     1,
       3,     3,     1,     3,     3,     1,     1,     1,     4,     4,
       4,     4,     3,     4,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,     5,     0,     0,
       0,     6,     0,    15,     0,     0,     7,    14,     0,     0,
       0,    12,     0,     0,    40,    41,    42,     0,     0,    34,
      37,    18,     0,   103,   104,   105,     0,     0,    97,   100,
       0,    16,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    47,    41,     0,
      35,    36,    38,    39,     0,     9,     0,     0,     0,     0,
       0,   110,    98,    99,   101,   102,    48,    19,    43,    45,
      44,    46,     0,     0,   111,   106,   108,   107,   109,     0,
       0,     0,     0,    43,     0,     0,     0,     0,    30,     0,
      10,    21,     0,     0,    22,    25,    23,    24,    20,    76,
       0,     0,     0,     0,     2,    11,     0,     0,   133,   134,
     135,     0,    76,     0,     0,     0,    69,    71,    73,    75,
       0,     0,   127,   130,     0,     0,     0,     0,    67,    68,
       0,    65,    41,     0,     0,    49,    50,    59,    56,    58,
      57,     0,    95,    96,    93,    92,    94,    91,     0,    74,
       0,     0,     0,     0,     0,    76,    76,     0,    95,    96,
      93,    92,    94,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    33,    29,    26,
      28,    27,     0,    84,     0,     0,     0,     0,   140,    83,
      51,    70,    72,   118,   119,   120,     0,    85,   112,   115,
      79,    82,    80,    78,    81,    77,   128,   129,    89,    90,
      86,   131,   132,    59,    56,    58,    57,   165,   166,   167,
     175,     0,   174,    60,   159,   162,    63,    64,    66,     0,
     141,   136,   138,   137,   139,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
     125,   113,   114,   116,   117,     0,     0,     0,     0,     0,
     172,   160,   161,     0,   163,   164,    32,    55,   126,   121,
     123,   122,   124,   173,   168,   170,   169,   171,   148,   149,
     150,   158,     0,   157,    61,   142,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    52,
       0,     0,     0,     0,     0,   155,   143,   144,     0,   146,
     147,     0,   156,   151,   153,   152,   154,     0,     0,     0,
      54,     0,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    50,   109,    11,    18,    14,   110,
     111,   112,   113,    28,    29,    30,   157,   114,   255,   318,
     341,   115,   116,   270,   325,   117,   150,   151,   135,   136,
     137,   138,   139,   140,   230,   168,    44,    38,    39,   217,
     218,   219,   141,   142,   143,   314,   315,   316,   243,   244,
     245
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -129
static const yytype_int16 yypact[] =
{
       7,   -11,    24,   207,  -129,  -129,  -129,  -129,   195,    15,
       1,   207,    22,    35,    39,    58,  -129,  -129,    55,   103,
      15,  -129,    57,   106,    91,    71,  -129,    34,    95,    23,
    -129,  -129,   207,    94,  -129,  -129,    41,    13,    54,  -129,
     118,   121,    80,   123,   128,   127,   127,  -129,   127,   127,
     113,   207,   147,   143,   156,   155,   106,   106,  -129,   106,
     106,   148,    15,   129,   145,   159,   169,  -129,  -129,    44,
      23,    23,  -129,  -129,   187,  -129,   179,   183,   191,   201,
     209,  -129,    54,    54,  -129,  -129,  -129,  -129,   210,  -129,
    -129,  -129,   217,   232,  -129,  -129,  -129,  -129,  -129,   236,
     248,   216,    15,  -129,   246,   255,   266,   267,   268,   269,
     216,  -129,   276,   278,  -129,  -129,  -129,  -129,  -129,   -10,
     292,   293,    -6,   133,  -129,  -129,    -1,    -1,   272,  -129,
    -129,   185,   -10,    65,   185,   274,   291,   294,  -129,  -129,
     185,   153,   138,  -129,   284,   286,   275,   279,  -129,  -129,
     281,   280,   283,    72,   107,  -129,  -129,   285,    38,   287,
      69,   302,  -129,  -129,  -129,  -129,  -129,  -129,   301,  -129,
     219,   223,   158,   288,   289,   -10,   -10,   136,   136,   136,
     136,   136,   136,   136,   139,   139,     5,   139,   139,    -1,
      -1,     3,   290,   295,    -6,  -129,   225,  -129,  -129,  -129,
    -129,  -129,   297,  -129,   296,   300,   303,   304,  -129,  -129,
    -129,   294,  -129,   305,  -129,  -129,    76,   214,   215,  -129,
     214,   214,   214,   214,   214,   214,   138,   138,  -129,  -129,
    -129,  -129,  -129,  -129,   220,  -129,   220,   306,  -129,  -129,
    -129,    97,  -129,   222,   224,  -129,  -129,  -129,  -129,   308,
    -129,  -129,  -129,  -129,  -129,   216,   307,   237,   241,   160,
     136,   136,   136,   136,   309,   243,   245,   168,     3,     3,
     310,     3,     3,   299,   311,   312,   313,   316,   317,   318,
    -129,   215,   215,  -129,  -129,   319,   320,   322,   323,   324,
    -129,   224,   224,    11,  -129,  -129,  -129,   327,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,   325,  -129,
    -129,  -129,   100,  -129,   234,   235,  -129,   298,   326,   330,
     252,   254,   170,    11,    11,   328,    11,    11,  -129,  -129,
     329,   332,   333,   334,   335,  -129,   235,   235,   314,  -129,
    -129,   216,  -129,  -129,  -129,  -129,  -129,   216,   321,   338,
    -129,   336,  -129
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,  -129,   340,   350,   277,  -109,   -20,  -129,   -18,  -129,
    -129,   213,   253,   204,   227,   226,  -124,  -129,  -129,  -129,
    -129,   256,  -129,  -129,  -129,  -129,   172,  -129,  -129,  -129,
     166,  -128,  -129,  -129,  -129,  -101,   -23,   221,   228,    42,
      19,    20,  -129,   101,   104,  -129,   -30,   -31,  -129,    29,
      28
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      37,   125,    31,   159,   169,   128,   129,   130,   131,   148,
       1,   132,    51,    55,    33,    34,    35,   155,   237,   238,
     239,   240,     3,   228,     4,   133,   308,   309,   310,   311,
      13,    51,   134,   173,    36,    15,   149,    17,   241,   177,
     186,   156,    56,    57,    87,   242,   312,   229,   212,    33,
      34,    35,    58,   313,    48,    49,    33,    34,    35,    33,
      34,    35,    22,    42,    43,   233,   235,    56,    57,    36,
      53,    54,    19,    92,    43,    20,    36,   199,    21,    36,
      33,    34,    35,    23,   118,    59,    60,    33,    34,    35,
      32,    33,    34,    35,   170,   171,    63,    64,    56,    57,
      36,   196,    43,   158,   160,   257,   258,    36,   201,    41,
     172,    36,    33,    34,    35,    33,    34,    35,    24,    25,
      26,    33,    34,    35,    45,    46,   265,   266,    40,   320,
     321,    52,    36,    47,    61,    36,    45,    46,    27,    65,
      66,    36,    24,    68,    26,   197,   274,    74,    24,   152,
      26,   213,   214,   215,   128,   129,   130,    56,    57,    77,
      78,    62,    69,    76,    67,    88,   234,   236,   153,   187,
     188,   216,    79,    80,   133,   178,   179,   180,   181,   182,
     183,    89,   184,   185,    56,    57,    86,    56,    57,    56,
      57,    81,    93,   259,   208,    90,   280,    56,    57,    56,
      57,     5,     6,     7,   290,    91,   335,   162,   163,   164,
     165,   166,   167,     5,     6,     7,     8,    94,   267,    95,
     220,   221,   222,   223,   224,   225,   104,    96,   105,   106,
     107,   108,   348,   100,    64,   204,   205,    97,   349,   206,
     207,   249,    64,   260,   261,    98,   262,   263,    99,    56,
      57,   268,   269,   276,   277,   271,   272,   278,   279,   286,
     287,   288,   289,   323,   324,   101,   326,   327,   331,   332,
     333,   334,    70,    71,    72,    73,   102,    82,    83,   281,
     282,   119,   283,   284,   103,   226,   227,    84,    85,   322,
     120,   231,   232,   336,   337,   339,   340,   291,   292,   294,
     295,   121,   122,   124,   126,   123,   127,   108,   147,   161,
     174,   175,   189,   176,   190,   192,   191,   193,   202,   203,
     194,   195,   210,   275,   198,   285,   200,   154,    75,   246,
     209,   328,   251,   144,   247,   250,   252,   296,   317,   253,
     254,   211,   256,   264,   273,   297,   330,   347,    12,   299,
     298,   293,   300,   301,   302,   350,   304,   303,   305,   306,
     307,    16,   319,     0,   338,   329,   248,   342,   343,   344,
     345,   346,   351,   145,     0,   352,   146
};

static const yytype_int16 yycheck[] =
{
      23,   110,    20,   127,   132,    15,    16,    17,    18,    15,
       3,    21,    32,    36,    15,    16,    17,    18,    15,    16,
      17,    18,    33,    18,     0,    35,    15,    16,    17,    18,
      15,    51,    42,   134,    35,    34,    42,    15,    35,   140,
     141,    42,    29,    30,    62,    42,    35,    42,   176,    15,
      16,    17,    39,    42,    31,    32,    15,    16,    17,    15,
      16,    17,     4,    29,    30,   189,   190,    29,    30,    35,
      29,    30,    37,    29,    30,    40,    35,    39,    39,    35,
      15,    16,    17,    28,   102,    31,    32,    15,    16,    17,
      33,    15,    16,    17,    29,    30,    16,    17,    29,    30,
      35,    29,    30,   126,   127,    29,    30,    35,    39,    38,
     133,    35,    15,    16,    17,    15,    16,    17,    15,    16,
      17,    15,    16,    17,    29,    30,    29,    30,    37,    29,
      30,    37,    35,    38,    16,    35,    29,    30,    35,    16,
      17,    35,    15,    16,    17,    38,   255,    34,    15,    16,
      17,    15,    16,    17,    15,    16,    17,    29,    30,    16,
      17,    40,    35,    16,    36,    36,   189,   190,    35,    31,
      32,    35,    16,    17,    35,    22,    23,    24,    25,    26,
      27,    36,    29,    30,    29,    30,    38,    29,    30,    29,
      30,    36,     5,   216,    36,    36,    36,    29,    30,    29,
      30,     6,     7,     8,    36,    36,    36,    22,    23,    24,
      25,    26,    27,     6,     7,     8,     9,    38,   241,    36,
     178,   179,   180,   181,   182,   183,    10,    36,    12,    13,
      14,    15,   341,    16,    17,    16,    17,    36,   347,    16,
      17,    16,    17,    29,    30,    36,    31,    32,    38,    29,
      30,    29,    30,    16,    17,    31,    32,    16,    17,    16,
      17,    16,    17,    29,    30,    33,    31,    32,    16,    17,
      16,    17,    45,    46,    48,    49,    40,    56,    57,   260,
     261,    35,   262,   263,    36,   184,   185,    59,    60,   312,
      35,   187,   188,   323,   324,   326,   327,   268,   269,   271,
     272,    35,    35,    34,    28,    37,    28,    15,    15,    37,
      36,    20,    28,    19,    28,    36,    41,    36,    16,    18,
      40,    38,    33,    16,    39,    16,    39,   123,    51,    39,
      42,    33,    36,   120,    39,    38,    36,    38,    11,    36,
      36,   175,    37,    37,    36,    34,    16,    33,     8,    36,
      38,    41,    36,    36,    36,    34,    36,    38,    36,    36,
      36,    11,    37,    -1,    36,    39,   194,    38,    36,    36,
      36,    36,    34,   120,    -1,    39,   120
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
      76,    85,    86,    87,    54,    55,    64,    15,    15,    42,
      69,    70,    16,    35,    56,    18,    42,    59,    79,    59,
      79,    37,    22,    23,    24,    25,    26,    27,    78,    74,
      29,    30,    79,    78,    36,    20,    19,    78,    22,    23,
      24,    25,    26,    27,    29,    30,    78,    31,    32,    28,
      28,    41,    36,    36,    40,    38,    29,    38,    39,    39,
      39,    39,    16,    18,    16,    17,    16,    17,    36,    42,
      33,    73,    74,    15,    16,    17,    35,    82,    83,    84,
      82,    82,    82,    82,    82,    82,    86,    86,    18,    42,
      77,    87,    87,    59,    79,    59,    79,    15,    16,    17,
      18,    35,    42,    91,    92,    93,    39,    39,    69,    16,
      38,    36,    36,    36,    36,    61,    37,    29,    30,    79,
      29,    30,    31,    32,    37,    29,    30,    79,    29,    30,
      66,    31,    32,    36,    48,    16,    16,    17,    16,    17,
      36,    83,    83,    84,    84,    16,    16,    17,    16,    17,
      36,    92,    92,    41,    93,    93,    38,    34,    38,    36,
      36,    36,    36,    38,    36,    36,    36,    36,    15,    16,
      17,    18,    35,    42,    88,    89,    90,    11,    62,    37,
      29,    30,    79,    29,    30,    67,    31,    32,    33,    39,
      16,    16,    17,    16,    17,    36,    89,    89,    36,    90,
      90,    63,    38,    36,    36,    36,    36,    33,    48,    48,
      34,    34,    39
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
#line 104 "syntaxic.y"
    {strcpy(sauvType,"INTEGER");;}
    break;

  case 4:
#line 105 "syntaxic.y"
    {strcpy(sauvType,"FLOAT");;}
    break;

  case 5:
#line 106 "syntaxic.y"
    {strcpy(sauvType,"CHAR");;}
    break;

  case 12:
#line 129 "syntaxic.y"
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
#line 140 "syntaxic.y"
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
#line 161 "syntaxic.y"
    {
        strcpy(saveIdf[0].idfTab,(yyvsp[(1) - (1)].string));
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType((yyvsp[(1) - (1)].string)));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d colonne %d \n",saveIdf[0].idfTab,nb_ligne,col);
            
            
    ;}
    break;

  case 15:
#line 174 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (1)].string));j++;;}
    break;

  case 16:
#line 175 "syntaxic.y"
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
#line 184 "syntaxic.y"
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
#line 200 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (3)].string));j++;;}
    break;

  case 19:
#line 201 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (6)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;;}
    break;

  case 20:
#line 202 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (9)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;;}
    break;

  case 26:
#line 225 "syntaxic.y"
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
#line 238 "syntaxic.y"
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
#line 250 "syntaxic.y"
    {
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    ;}
    break;

  case 29:
#line 255 "syntaxic.y"
    {
        
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    ;}
    break;

  case 30:
#line 264 "syntaxic.y"
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
#line 292 "syntaxic.y"
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
#line 317 "syntaxic.y"
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
#line 331 "syntaxic.y"
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
#line 373 "syntaxic.y"
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
#line 392 "syntaxic.y"
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
#line 414 "syntaxic.y"
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
#line 432 "syntaxic.y"
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
#line 456 "syntaxic.y"
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
#line 474 "syntaxic.y"
    {
                  (yyval.real)=atof((yyvsp[(1) - (1)].string));
                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                  empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 42:
#line 480 "syntaxic.y"
    {
                   (yyval.real)=atof((yyvsp[(1) - (1)].string)); 
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 43:
#line 485 "syntaxic.y"
    {
        (yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        
    ;}
    break;

  case 44:
#line 491 "syntaxic.y"
    {
                strcpy(saveStr,(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    ;}
    break;

  case 45:
#line 499 "syntaxic.y"
    {(yyval.real)=atof((yyvsp[(3) - (4)].string));
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      
                   ;}
    break;

  case 46:
#line 504 "syntaxic.y"
    {
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    ;}
    break;

  case 47:
#line 511 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 48:
#line 512 "syntaxic.y"
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
#line 525 "syntaxic.y"
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
#line 533 "syntaxic.y"
    {   
                                 printf("Erreur semantique a la ligne %d colonne %d:type incompatible\n",nb_ligne,col);
                                 printf("On ne peut pas affecter STRING a CHAR");
                                 exit(0);
                            
                            ;}
    break;

  case 51:
#line 560 "syntaxic.y"
    {
          createQuad("BZ","",QuadR[qc-1].res,"");
          empiler_Int(&pile1,qc-1);
        ;}
    break;

  case 52:
#line 564 "syntaxic.y"
    {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        ;}
    break;

  case 53:
#line 568 "syntaxic.y"
    {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
        empiler_Int(&pile1,qc);
        createQuad("BR","","","");
        ;}
    break;

  case 56:
#line 577 "syntaxic.y"
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
#line 589 "syntaxic.y"
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
#line 599 "syntaxic.y"
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
#line 608 "syntaxic.y"
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
#line 620 "syntaxic.y"
    {
        valDepile = depiler(&pile3); 
        strcpy(pasfor, valDepile); 
        //$$ = atoi($6); // Capturer le pas
    ;}
    break;

  case 61:
#line 625 "syntaxic.y"
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
#line 634 "syntaxic.y"
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
#line 646 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(3) - (5)].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col,(yyvsp[(3) - (5)].string)); exit(0);
        }
    ;}
    break;

  case 67:
#line 663 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[(1) - (1)].string)); exit(0);
        }
    ;}
    break;

  case 70:
#line 679 "syntaxic.y"
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

  case 72:
#line 695 "syntaxic.y"
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

  case 74:
#line 711 "syntaxic.y"
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

  case 77:
#line 728 "syntaxic.y"
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

  case 78:
#line 739 "syntaxic.y"
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

  case 79:
#line 750 "syntaxic.y"
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

  case 80:
#line 761 "syntaxic.y"
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

  case 81:
#line 772 "syntaxic.y"
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

  case 82:
#line 783 "syntaxic.y"
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

  case 83:
#line 794 "syntaxic.y"
    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(nb_op,(yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string),temp);
        empiler(&pile3,temp);
    ;}
    break;

  case 84:
#line 801 "syntaxic.y"
    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
       createQuadA(nb_op,(yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string),temp);
       empiler(&pile3,temp);
    ;}
    break;

  case 85:
#line 808 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
                          printf("on compare CARACTERE avec CARACTERES"); exit(0);
                         ;}
    break;

  case 86:
#line 811 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
                            printf("on compare CARACTERES avec CARACTEREs"); exit(0);
                            ;}
    break;

  case 91:
#line 827 "syntaxic.y"
    {nb_op=6;;}
    break;

  case 92:
#line 828 "syntaxic.y"
    {nb_op=5;;}
    break;

  case 93:
#line 829 "syntaxic.y"
    {nb_op=3;;}
    break;

  case 94:
#line 830 "syntaxic.y"
    {nb_op=4;;}
    break;

  case 95:
#line 831 "syntaxic.y"
    {nb_op=1;;}
    break;

  case 96:
#line 832 "syntaxic.y"
    {nb_op=2;;}
    break;

  case 98:
#line 839 "syntaxic.y"
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

  case 99:
#line 858 "syntaxic.y"
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

  case 101:
#line 880 "syntaxic.y"
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

  case 102:
#line 898 "syntaxic.y"
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

  case 103:
#line 922 "syntaxic.y"
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

  case 104:
#line 939 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 2\n",nb_ligne,col);
                                        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
                   else{(yyval.real)=atof((yyvsp[(1) - (1)].string));}
                  strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                  empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 105:
#line 948 "syntaxic.y"
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

  case 106:
#line 958 "syntaxic.y"
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

  case 107:
#line 968 "syntaxic.y"
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

  case 108:
#line 981 "syntaxic.y"
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

  case 109:
#line 990 "syntaxic.y"
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

  case 110:
#line 1002 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 111:
#line 1003 "syntaxic.y"
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

  case 113:
#line 1023 "syntaxic.y"
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

  case 114:
#line 1042 "syntaxic.y"
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

  case 116:
#line 1064 "syntaxic.y"
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

  case 117:
#line 1082 "syntaxic.y"
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

  case 118:
#line 1106 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[(1) - (1)].string));
             exit(0);
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 1\n",nb_ligne,col);
                             printf("tentative d'affecter %s a un %s\n",typeD,typeG);
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

  case 119:
#line 1126 "syntaxic.y"
    {
       
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 2\n",nb_ligne,col);
        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
                   else{(yyval.real)=atof((yyvsp[(1) - (1)].string));}
                  strcpy(saveStrq,(yyvsp[(1) - (1)].string));
                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                  empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 120:
#line 1136 "syntaxic.y"
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

  case 121:
#line 1147 "syntaxic.y"
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

  case 122:
#line 1157 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 5\n",nb_ligne,col);
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

  case 123:
#line 1170 "syntaxic.y"
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

  case 124:
#line 1179 "syntaxic.y"
    {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 7\n",nb_ligne,col);
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

  case 125:
#line 1191 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 126:
#line 1192 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique  :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[(1) - (4)].string),nb_ligne,col);
                                          exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[(1) - (4)].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 8\n",nb_ligne,col);
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

  case 128:
#line 1213 "syntaxic.y"
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

  case 129:
#line 1232 "syntaxic.y"
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

  case 131:
#line 1254 "syntaxic.y"
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

  case 132:
#line 1272 "syntaxic.y"
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

  case 133:
#line 1296 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[(1) - (1)].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[(1) - (1)].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    ;}
    break;

  case 134:
#line 1307 "syntaxic.y"
    {
       strcpy(typeD,"INTEGER");
       (yyval.real)=atof((yyvsp[(1) - (1)].string));
       strcpy(buffer1,(yyvsp[(1) - (1)].string));
       empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 135:
#line 1314 "syntaxic.y"
    {strcpy(typeD,"FLOAT");
                   (yyval.real)=atof((yyvsp[(1) - (1)].string));  
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 136:
#line 1319 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
        (yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        
    ;}
    break;

  case 137:
#line 1326 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
                strcpy(saveStr,(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    ;}
    break;

  case 138:
#line 1335 "syntaxic.y"
    {strcpy(typeD,"FLOAT");
                                      (yyval.real)=atof((yyvsp[(3) - (4)].string));;
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      
                   ;}
    break;

  case 139:
#line 1341 "syntaxic.y"
    {strcpy(typeD,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    ;}
    break;

  case 140:
#line 1348 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 141:
#line 1349 "syntaxic.y"
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
                                    empiler(&pile3,buffer1);
                                 }
                ;}
    break;

  case 143:
#line 1366 "syntaxic.y"
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

  case 144:
#line 1385 "syntaxic.y"
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

  case 146:
#line 1407 "syntaxic.y"
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

  case 147:
#line 1425 "syntaxic.y"
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

  case 148:
#line 1449 "syntaxic.y"
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

  case 149:
#line 1463 "syntaxic.y"
    {
        strcpy(brnsup,(yyvsp[(1) - (1)].string));
       strcpy(typeD,"INTEGER");
       (yyval.real)=atof((yyvsp[(1) - (1)].string));
       strcpy(buffer1,(yyvsp[(1) - (1)].string));
       empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 150:
#line 1471 "syntaxic.y"
    {  strcpy(brnsup,(yyvsp[(1) - (1)].string));
        strcpy(typeD,"FLOAT");
                   (yyval.real)=atof((yyvsp[(1) - (1)].string));  
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 151:
#line 1477 "syntaxic.y"
    {
         strcpy(brnsup,(yyvsp[(3) - (4)].string));
        strcpy(typeD,"INTEGER");
        (yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        
    ;}
    break;

  case 152:
#line 1485 "syntaxic.y"
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

  case 153:
#line 1495 "syntaxic.y"
    {strcpy(typeD,"FLOAT");
                                      (yyval.real)=atof((yyvsp[(3) - (4)].string));;
                                       strcpy(brnsup,(yyvsp[(3) - (4)].string));
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      
                   ;}
    break;

  case 154:
#line 1502 "syntaxic.y"
    {strcpy(typeD,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                            strcpy(brnsup,saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    ;}
    break;

  case 155:
#line 1510 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 156:
#line 1511 "syntaxic.y"
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

  case 157:
#line 1525 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre characters\n");exit(0);}
    break;

  case 158:
#line 1528 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre character\n");exit(0);}
    break;

  case 160:
#line 1533 "syntaxic.y"
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

  case 161:
#line 1552 "syntaxic.y"
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

  case 163:
#line 1574 "syntaxic.y"
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

  case 164:
#line 1592 "syntaxic.y"
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

  case 165:
#line 1616 "syntaxic.y"
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

  case 166:
#line 1629 "syntaxic.y"
    {
       strcpy(typeG,"INTEGER");
       (yyval.real)=atof((yyvsp[(1) - (1)].string));
       strcpy(buffer1,(yyvsp[(1) - (1)].string));
       empiler(&pile3,buffer1);
                  
    ;}
    break;

  case 167:
#line 1636 "syntaxic.y"
    {strcpy(typeG,"FLOAT");
                   (yyval.real)=atof((yyvsp[(1) - (1)].string));  
                   strcpy(buffer1,(yyvsp[(1) - (1)].string));
                   empiler(&pile3,buffer1);
                   ;}
    break;

  case 168:
#line 1641 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
        (yyval.real)=atof((yyvsp[(3) - (4)].string));
        strcpy(buffer1,(yyvsp[(3) - (4)].string));
        empiler(&pile3,buffer1);
        
    ;}
    break;

  case 169:
#line 1648 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
                strcpy(saveStr,(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    ;}
    break;

  case 170:
#line 1657 "syntaxic.y"
    {strcpy(typeG,"FLOAT");
                                      (yyval.real)=atof((yyvsp[(3) - (4)].string));;
                                      strcpy(buffer1,(yyvsp[(3) - (4)].string));
                                      empiler(&pile3,buffer1);
                                      
                   ;}
    break;

  case 171:
#line 1663 "syntaxic.y"
    {strcpy(typeG,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    ;}
    break;

  case 172:
#line 1670 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 173:
#line 1671 "syntaxic.y"
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

  case 174:
#line 1684 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre characters\n");exit(0);}
    break;

  case 175:
#line 1687 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre character\n");exit(0);}
    break;


/* Line 1267 of yacc.c.  */
#line 3666 "syntaxic.tab.c"
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


#line 1691 "syntaxic.y"


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


