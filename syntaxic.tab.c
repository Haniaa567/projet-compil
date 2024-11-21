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
   char valIdf[20];
   char saveStr[20];
   char saveS[20];
   char mDroit[20];
   char tableau_info[20];



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
#line 30 "syntaxic.y"
{
    int entier;
    float real;
    char character;
    char* string;
}
/* Line 193 of yacc.c.  */
#line 216 "syntaxic.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 229 "syntaxic.tab.c"

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
#define YYLAST   298

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNRULES -- Number of states.  */
#define YYNSTATES  294

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
      32,    34,    37,    41,    48,    50,    52,    57,    61,    68,
      78,    80,    82,    84,    86,    88,    93,    98,   103,   105,
     107,   112,   120,   122,   124,   126,   135,   148,   152,   165,
     171,   177,   179,   183,   185,   187,   189,   192,   196,   200,
     204,   208,   212,   216,   220,   222,   224,   226,   228,   230,
     232,   234,   236,   238,   240,   242,   246,   250,   252,   256,
     260,   262,   264,   266,   271,   276,   281,   286,   290,   295,
     297,   301,   305,   307,   311,   315,   317,   319,   321,   326,
     331,   336,   341,   345,   350,   352,   356,   360,   362,   366,
     370,   372,   374,   376,   381,   386,   391,   396,   400,   405,
     407,   411,   415,   417,   421,   425,   427,   429,   431,   436,
     441,   446,   451,   455,   460,   462,   466,   470,   472,   476,
     480,   482,   484,   486,   491,   496,   501,   506,   510,   515
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,     3,    33,    46,    34,     4,    33,    47,
      34,     5,    33,    48,    34,    -1,     6,    -1,     7,    -1,
       8,    -1,    49,    -1,    49,    46,    -1,    49,    -1,    49,
      47,    -1,    52,    -1,    52,    48,    -1,    45,    51,    39,
      -1,     9,    45,    50,    28,    69,    39,    -1,    15,    -1,
      15,    -1,    15,    37,    16,    38,    -1,    15,    40,    51,
      -1,    15,    37,    16,    38,    40,    51,    -1,    15,    37,
      35,    29,    16,    36,    38,    40,    51,    -1,    53,    -1,
      58,    -1,    60,    -1,    61,    -1,    59,    -1,    54,    28,
      69,    39,    -1,    55,    28,    57,    39,    -1,    54,    28,
      56,    39,    -1,    15,    -1,    55,    -1,    15,    37,    16,
      38,    -1,    15,    37,    35,    29,    16,    36,    38,    -1,
      18,    -1,    18,    -1,    42,    -1,    10,    35,    64,    36,
      33,    48,    34,    39,    -1,    10,    35,    64,    36,    33,
      48,    34,    11,    33,    48,    34,    39,    -1,    54,    28,
      69,    -1,    12,    35,    59,    41,    81,    41,    78,    36,
      33,    48,    34,    39,    -1,    13,    35,    15,    36,    39,
      -1,    14,    35,    62,    36,    39,    -1,    63,    -1,    63,
      40,    62,    -1,    15,    -1,    84,    -1,    65,    -1,    21,
      64,    -1,    65,    19,    64,    -1,    65,    20,    64,    -1,
      75,    68,    72,    -1,    42,    68,    42,    -1,    18,    68,
      18,    -1,    66,    68,    72,    -1,    75,    68,    67,    -1,
      18,    -1,    42,    -1,    18,    -1,    42,    -1,    27,    -1,
      25,    -1,    24,    -1,    26,    -1,    22,    -1,    23,    -1,
      70,    -1,    70,    29,    69,    -1,    70,    30,    69,    -1,
      71,    -1,    71,    31,    70,    -1,    71,    32,    70,    -1,
      15,    -1,    16,    -1,    17,    -1,    35,    29,    16,    36,
      -1,    35,    30,    16,    36,    -1,    35,    29,    17,    36,
      -1,    35,    30,    17,    36,    -1,    35,    69,    36,    -1,
      15,    37,    16,    38,    -1,    73,    -1,    73,    29,    72,
      -1,    73,    30,    72,    -1,    74,    -1,    74,    31,    73,
      -1,    74,    32,    73,    -1,    15,    -1,    16,    -1,    17,
      -1,    35,    29,    16,    36,    -1,    35,    30,    16,    36,
      -1,    35,    29,    17,    36,    -1,    35,    30,    17,    36,
      -1,    35,    72,    36,    -1,    15,    37,    16,    38,    -1,
      76,    -1,    76,    29,    75,    -1,    76,    30,    75,    -1,
      77,    -1,    77,    31,    76,    -1,    77,    32,    76,    -1,
      15,    -1,    16,    -1,    17,    -1,    35,    29,    16,    36,
      -1,    35,    30,    16,    36,    -1,    35,    29,    17,    36,
      -1,    35,    30,    17,    36,    -1,    35,    75,    36,    -1,
      15,    37,    16,    38,    -1,    79,    -1,    79,    29,    78,
      -1,    79,    30,    78,    -1,    80,    -1,    80,    31,    79,
      -1,    80,    32,    79,    -1,    15,    -1,    16,    -1,    17,
      -1,    35,    29,    16,    36,    -1,    35,    30,    16,    36,
      -1,    35,    29,    17,    36,    -1,    35,    30,    17,    36,
      -1,    35,    78,    36,    -1,    15,    37,    16,    38,    -1,
      82,    -1,    82,    29,    81,    -1,    82,    30,    81,    -1,
      83,    -1,    83,    31,    82,    -1,    83,    32,    82,    -1,
      15,    -1,    16,    -1,    17,    -1,    35,    29,    16,    36,
      -1,    35,    30,    16,    36,    -1,    35,    29,    17,    36,
      -1,    35,    30,    17,    36,    -1,    35,    81,    36,    -1,
      15,    37,    16,    38,    -1,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    80,    81,    82,    87,    88,    93,    94,
      99,   100,   105,   113,   120,   142,   143,   144,   145,   146,
     159,   160,   161,   162,   163,   168,   183,   184,   188,   202,
     205,   212,   221,   227,   231,   240,   241,   244,   258,   268,
     274,   279,   280,   285,   291,   296,   297,   298,   299,   304,
     305,   306,   307,   308,   312,   313,   316,   317,   320,   321,
     322,   323,   324,   325,   329,   330,   331,   336,   337,   338,
     347,   359,   365,   372,   377,   384,   388,   396,   397,   407,
     408,   409,   414,   415,   416,   425,   437,   444,   451,   457,
     465,   471,   480,   481,   490,   491,   492,   497,   498,   499,
     508,   514,   518,   521,   524,   527,   530,   533,   534,   544,
     545,   546,   551,   552,   553,   562,   568,   572,   575,   578,
     581,   584,   587,   588,   597,   598,   599,   604,   605,   606,
     615,   621,   625,   628,   631,   634,   637,   640,   641,   651
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
  "MDROIT", "TAB", "EXPRESSION_CHAR", "EXPRESSION_CHAINE", "condition",
  "assignment_int", "loop", "io_statement", "io_expr_list", "io_expr",
  "COND", "comparison_expr", "DROIT", "GAUCHE", "OP_COMP", "term",
  "factor", "primary", "term1", "factor1", "primary1", "term2", "factor2",
  "primary2", "term4", "factor4", "primary4", "term3", "factor3",
  "primary3", "string_literal", 0
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
      52,    52,    52,    52,    52,    53,    53,    53,    54,    54,
      55,    55,    56,    57,    57,    58,    58,    59,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    65,
      65,    65,    65,    65,    66,    66,    67,    67,    68,    68,
      68,    68,    68,    68,    69,    69,    69,    70,    70,    70,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    72,
      72,    72,    73,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    75,    75,    75,    76,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    78,
      78,    78,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    81,    81,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    12,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     3,     6,     1,     1,     4,     3,     6,     9,
       1,     1,     1,     1,     1,     4,     4,     4,     1,     1,
       4,     7,     1,     1,     1,     8,    12,     3,    12,     5,
       5,     1,     3,     1,     1,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       3,     3,     1,     3,     3,     1,     1,     1,     4,     4,
       4,     4,     3,     4,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       3,     3,     1,     3,     3,     1,     1,     1,     4,     4,
       4,     4,     3,     4,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,     5,     0,     0,
       0,     6,     0,    15,     0,     0,     7,    14,     0,     0,
       0,    12,     0,     0,     0,     0,    17,     0,    70,    71,
      72,     0,     0,    64,    67,    16,     0,     0,     8,     0,
       0,     0,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,    77,    65,    66,
      68,    69,    18,     0,     0,    78,    73,    75,    74,    76,
       0,     0,     0,     0,     0,     0,     0,    28,     0,    10,
      20,     0,     0,    21,    24,    22,    23,    19,     0,     0,
       0,     0,     0,     2,    11,     0,     0,   100,   101,   102,
       0,     0,     0,     0,     0,    45,     0,     0,    94,    97,
       0,    29,     0,     0,    43,   139,     0,    41,    44,     0,
       0,    32,     0,    37,    33,    34,     0,     0,    62,    63,
      60,    59,    61,    58,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    27,    25,    26,     0,
      51,     0,     0,     0,     0,   107,    50,     0,    47,    48,
      85,    86,    87,     0,    52,    79,    82,    56,    57,    53,
      49,    95,    96,    98,    99,    37,   130,   131,   132,     0,
       0,   124,   127,    39,    40,    42,     0,   108,   103,   105,
     104,   106,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    80,    81,
      83,    84,     0,     0,     0,     0,     0,   137,   115,   116,
     117,     0,     0,   109,   112,   125,   126,   128,   129,    31,
       0,    35,    93,    88,    90,    89,    91,   138,   133,   135,
     134,   136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,   110,
     111,   113,   114,     0,   123,   118,   120,   119,   121,     0,
       0,     0,    36,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    37,    78,    11,    18,    14,    79,
      80,    81,    82,   122,   126,    83,    84,    85,    86,   116,
     117,   104,   105,   106,   179,   134,    32,    33,    34,   174,
     175,   176,   107,   108,   109,   242,   243,   244,   190,   191,
     192,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -231
static const yytype_int16 yypact[] =
{
      20,   -20,    49,   137,  -231,  -231,  -231,  -231,   141,    46,
      34,   137,    56,    13,    35,   125,  -231,  -231,   104,    -6,
      46,  -231,   130,    85,   120,   147,  -231,   137,   158,  -231,
    -231,    40,   148,   -21,    55,   157,   180,   164,   137,   184,
      25,    79,   166,  -231,    85,    85,    85,    85,    46,   167,
     196,  -231,   168,   169,   171,   172,   173,  -231,  -231,  -231,
    -231,  -231,  -231,   174,   177,  -231,  -231,  -231,  -231,  -231,
     175,   113,    46,   176,   178,   179,   181,   182,   170,   113,
    -231,   189,   190,  -231,  -231,  -231,  -231,  -231,     1,   205,
     206,    -3,     5,  -231,  -231,    74,    10,   185,  -231,  -231,
     115,     1,    43,   115,   187,    88,   115,   115,    92,   119,
     197,  -231,   183,   191,  -231,  -231,   192,   186,  -231,   193,
     200,  -231,   194,   195,  -231,  -231,   198,   214,  -231,  -231,
    -231,  -231,  -231,  -231,   217,  -231,   136,   138,   202,   199,
     203,     1,     1,    89,     9,    95,    95,    95,    95,    85,
      98,   201,   204,    -3,  -231,   216,  -231,  -231,  -231,   207,
    -231,   208,   210,   211,   212,  -231,  -231,   113,  -231,  -231,
     213,  -231,  -231,    47,  -231,   127,   128,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,   215,  -231,  -231,    64,
     218,   132,   133,  -231,  -231,  -231,   219,  -231,  -231,  -231,
    -231,  -231,   220,   223,   150,   152,   221,    89,    89,    89,
      89,   226,   154,   156,   222,   101,    98,    98,    98,    98,
     224,    -4,   225,   228,   229,   230,   231,  -231,  -231,  -231,
    -231,  -231,   232,   233,   235,   236,   237,  -231,   238,  -231,
    -231,    68,   240,   145,   146,  -231,  -231,  -231,  -231,  -231,
     227,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,
    -231,  -231,   245,   163,   165,   241,   246,   101,   101,   101,
     101,   113,   242,   247,   248,   249,   250,  -231,   113,  -231,
    -231,  -231,  -231,   234,  -231,  -231,  -231,  -231,  -231,   244,
     243,   251,  -231,  -231
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -231,  -231,   266,   270,   253,   -79,    -7,  -231,   -18,  -231,
    -231,   160,   162,  -231,  -231,  -231,   209,  -231,  -231,   100,
    -231,   -96,  -231,  -231,  -231,    28,   -30,   139,  -231,  -141,
     -26,  -231,   -98,    41,  -231,  -230,   -76,  -231,  -183,   -28,
    -231,  -231
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      94,    42,    26,   180,   138,   135,   214,   250,    44,    45,
      24,   265,   114,     3,    58,    59,    97,    98,    99,   100,
      38,   119,   101,     1,   170,   171,   172,   177,   124,    25,
      62,    38,   206,   245,   246,   251,   102,   279,   280,   115,
     120,    53,    54,   103,   173,   168,   169,   181,   182,     4,
      19,   178,   125,    20,    87,    28,    29,    30,    97,    98,
      99,    13,   170,   171,   172,   123,   228,   229,    15,    40,
      41,    17,   136,   137,    21,    31,   204,   205,   102,   186,
     187,   188,   173,   238,   239,   240,    46,    47,   202,    28,
      29,    30,   121,   212,   213,    55,    56,   263,   264,   189,
      28,    29,    30,   241,   170,   171,   172,   141,   142,    31,
      97,    98,    99,   186,   187,   188,   238,   239,   240,   185,
      31,   145,   146,    73,   173,    74,    75,    76,    77,    22,
     102,   139,    23,   189,   143,   144,   241,   128,   129,   130,
     131,   132,   133,     5,     6,     7,     8,     5,     6,     7,
     147,   148,   161,   162,   163,   164,   207,   208,    35,   209,
     210,   216,   217,    27,   218,   219,   223,   224,   225,   226,
     233,   234,   235,   236,   267,   268,    36,   269,   270,   273,
     274,   275,   276,   230,   231,    60,    61,    43,   183,   184,
     247,   248,   283,   281,   282,    39,    49,    48,    50,   289,
      52,    64,    57,    63,    93,    66,    65,    67,    68,    69,
      71,    88,    70,    89,    90,    72,    91,    95,    96,    92,
      77,   113,   127,   140,   150,   149,   153,   151,   152,   155,
     159,   154,   196,   156,   157,   160,   167,   158,   165,   222,
     193,   166,   232,   194,   198,   197,   199,   200,   201,   110,
     203,   111,   211,   195,   221,   220,     0,   227,   237,   215,
     271,   272,   249,   252,   253,   254,   255,   256,   290,   258,
     257,   259,   260,   261,    12,   262,   266,   277,   291,   278,
     284,    16,   292,   285,   286,   287,   288,     0,     0,     0,
     293,    51,     0,     0,     0,     0,     0,     0,   112
};

static const yytype_int16 yycheck[] =
{
      79,    31,    20,   144,   102,   101,   189,    11,    29,    30,
      16,   241,    15,    33,    44,    45,    15,    16,    17,    18,
      27,    16,    21,     3,    15,    16,    17,    18,    18,    35,
      48,    38,   173,   216,   217,    39,    35,   267,   268,    42,
      35,    16,    17,    42,    35,   141,   142,   145,   146,     0,
      37,    42,    42,    40,    72,    15,    16,    17,    15,    16,
      17,    15,    15,    16,    17,    95,   207,   208,    34,    29,
      30,    15,    29,    30,    39,    35,    29,    30,    35,    15,
      16,    17,    35,    15,    16,    17,    31,    32,   167,    15,
      16,    17,    18,    29,    30,    16,    17,    29,    30,    35,
      15,    16,    17,    35,    15,    16,    17,    19,    20,    35,
      15,    16,    17,    15,    16,    17,    15,    16,    17,   149,
      35,    29,    30,    10,    35,    12,    13,    14,    15,     4,
      35,   103,    28,    35,   106,   107,    35,    22,    23,    24,
      25,    26,    27,     6,     7,     8,     9,     6,     7,     8,
      31,    32,    16,    17,    16,    17,    29,    30,    38,    31,
      32,    29,    30,    33,    31,    32,    16,    17,    16,    17,
      16,    17,    16,    17,    29,    30,    29,    31,    32,    16,
      17,    16,    17,   209,   210,    46,    47,    39,   147,   148,
     218,   219,   271,   269,   270,    37,    16,    40,    34,   278,
      16,     5,    36,    36,    34,    36,    38,    36,    36,    36,
      33,    35,    38,    35,    35,    40,    35,    28,    28,    37,
      15,    15,    37,    36,    41,    28,    40,    36,    36,    29,
      16,    38,    16,    39,    39,    18,    33,    39,    36,    16,
      39,    42,    16,    39,    36,    38,    36,    36,    36,    89,
      37,    89,    37,   153,    34,    36,    -1,    36,    36,    41,
      33,    16,    38,    38,    36,    36,    36,    36,    34,    36,
      38,    36,    36,    36,     8,    37,    36,    36,    34,    33,
      38,    11,    39,    36,    36,    36,    36,    -1,    -1,    -1,
      39,    38,    -1,    -1,    -1,    -1,    -1,    -1,    89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    44,    33,     0,     6,     7,     8,     9,    45,
      46,    49,    45,    15,    51,    34,    46,    15,    50,    37,
      40,    39,     4,    28,    16,    35,    51,    33,    15,    16,
      17,    35,    69,    70,    71,    38,    29,    47,    49,    37,
      29,    30,    69,    39,    29,    30,    31,    32,    40,    16,
      34,    47,    16,    16,    17,    16,    17,    36,    69,    69,
      70,    70,    51,    36,     5,    38,    36,    36,    36,    36,
      38,    33,    40,    10,    12,    13,    14,    15,    48,    52,
      53,    54,    55,    58,    59,    60,    61,    51,    35,    35,
      35,    35,    37,    34,    48,    28,    28,    15,    16,    17,
      18,    21,    35,    42,    64,    65,    66,    75,    76,    77,
      54,    55,    59,    15,    15,    42,    62,    63,    84,    16,
      35,    18,    56,    69,    18,    42,    57,    37,    22,    23,
      24,    25,    26,    27,    68,    64,    29,    30,    75,    68,
      36,    19,    20,    68,    68,    29,    30,    31,    32,    28,
      41,    36,    36,    40,    38,    29,    39,    39,    39,    16,
      18,    16,    17,    16,    17,    36,    42,    33,    64,    64,
      15,    16,    17,    35,    72,    73,    74,    18,    42,    67,
      72,    75,    75,    76,    76,    69,    15,    16,    17,    35,
      81,    82,    83,    39,    39,    62,    16,    38,    36,    36,
      36,    36,    48,    37,    29,    30,    72,    29,    30,    31,
      32,    37,    29,    30,    81,    41,    29,    30,    31,    32,
      36,    34,    16,    16,    17,    16,    17,    36,    72,    72,
      73,    73,    16,    16,    17,    16,    17,    36,    15,    16,
      17,    35,    78,    79,    80,    81,    81,    82,    82,    38,
      11,    39,    38,    36,    36,    36,    36,    38,    36,    36,
      36,    36,    37,    29,    30,    78,    36,    29,    30,    31,
      32,    33,    16,    16,    17,    16,    17,    36,    33,    78,
      78,    79,    79,    48,    38,    36,    36,    36,    36,    48,
      34,    34,    39,    39
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
#line 80 "syntaxic.y"
    {strcpy(sauvType,"INTEGER");;}
    break;

  case 4:
#line 81 "syntaxic.y"
    {strcpy(sauvType,"FLOAT");;}
    break;

  case 5:
#line 82 "syntaxic.y"
    {strcpy(sauvType,"CHAR");;}
    break;

  case 12:
#line 105 "syntaxic.y"
    {
        //verification de la double declaration et insertion du type
        for(j=0;strcmp(saveIdf[j].idfTab,"")!=0;j++){
            if(verifdeclaration(saveIdf[j].idfTab)==0) insererType(sauvType,saveIdf[j].idfTab);
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[j].idfTab,nb_ligne);
            strcpy(saveIdf[j].idfTab,"");
        }j=0;    
    ;}
    break;

  case 14:
#line 120 "syntaxic.y"
    {
        strcpy(saveIdf[0].idfTab,(yyvsp[(1) - (1)].string));
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType((yyvsp[(1) - (1)].string)));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[0].idfTab,nb_ligne);
            strcpy(saveIdf[0].idfTab,"");
    ;}
    break;

  case 15:
#line 142 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (1)].string));j++;;}
    break;

  case 16:
#line 143 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (4)].string));j++;;}
    break;

  case 17:
#line 144 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (3)].string));j++;;}
    break;

  case 18:
#line 145 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (6)].string));j++;;}
    break;

  case 19:
#line 146 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (9)].string));j++;;}
    break;

  case 25:
#line 168 "syntaxic.y"
    {
        // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ((yyvsp[(3) - (4)].real) - floor((yyvsp[(3) - (4)].real)) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
        }
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[(3) - (4)].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f",(yyvsp[(3) - (4)].real));  // Convertir en flottant
        }


        insererVal(mDroit, saveStr);
    ;}
    break;

  case 28:
#line 188 "syntaxic.y"
    {
    // Vérification de la déclaration de la variable avant usage
    if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
        printf("Erreur sémantique : La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
    } else {
        strcpy(typeG, getType((yyvsp[(1) - (1)].string)));  // Récupérer le type de la variable à gauche
        printf("type: %s", typeG);
        if (comparCode((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique à la ligne %d : affectation d'une constante\n", nb_ligne);
        } else {
            strcpy(mDroit, (yyvsp[(1) - (1)].string));
        }
    }
    ;}
    break;

  case 30:
#line 205 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                    {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",(yyvsp[(1) - (4)].string),nb_ligne);}
                    else {
                        strcpy(typeG, getType((yyvsp[(1) - (4)].string)));
                            }
        ;}
    break;

  case 31:
#line 212 "syntaxic.y"
    {
                if(verifdeclaration((yyvsp[(1) - (7)].string))==0 )
                  {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",(yyvsp[(1) - (7)].string),nb_ligne);}
                  else {
                     strcpy(typeG, getType((yyvsp[(1) - (7)].string)));
                        }
                  ;}
    break;

  case 32:
#line 221 "syntaxic.y"
    {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[(1) - (1)].string));}
                           ;}
    break;

  case 33:
#line 227 "syntaxic.y"
    {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[(1) - (1)].string));}
                           ;}
    break;

  case 34:
#line 231 "syntaxic.y"
    {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[(1) - (1)].string));}
                           ;}
    break;

  case 37:
#line 244 "syntaxic.y"
    {
        // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ((yyvsp[(3) - (3)].real) - floor((yyvsp[(3) - (3)].real)) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
        }
        
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);
        }
    ;}
    break;

  case 38:
#line 258 "syntaxic.y"
    {
        if(strcmp(typeD,"INTEGER")!=0 || strcmp(typeG,"INTEGER")!=0)
        {
            printf("Erreur semantique parametre boucle type incompatible \n");
        }
    ;}
    break;

  case 39:
#line 268 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(3) - (5)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(3) - (5)].string));
        }
    ;}
    break;

  case 43:
#line 285 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
        }
    ;}
    break;

  case 52:
#line 307 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);;}
    break;

  case 53:
#line 308 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);;}
    break;

  case 65:
#line 330 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);;}
    break;

  case 66:
#line 331 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);;}
    break;

  case 68:
#line 337 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);;}
    break;

  case 69:
#line 338 "syntaxic.y"
    { if((yyvsp[(3) - (3)].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real);  
                                             }
                            ;}
    break;

  case 70:
#line 347 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);}
                                strcpy(valIdf,getVal((yyvsp[(1) - (1)].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,(yyvsp[(1) - (1)].string));}
                                 else
                                  (yyval.real)=atof(valIdf);
                             }
    ;}
    break;

  case 71:
#line 359 "syntaxic.y"
    {
        printf("here %s\n",typeG);
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[(1) - (1)].string));}
                  
    ;}
    break;

  case 72:
#line 365 "syntaxic.y"
    {        printf("here 2 %s\n",typeG);

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[(1) - (1)].string)); }  
                   ;}
    break;

  case 73:
#line 372 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[(3) - (4)].string));}
    ;}
    break;

  case 74:
#line 377 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);}
    ;}
    break;

  case 75:
#line 384 "syntaxic.y"
    {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
                                      else{(yyval.real)=atof((yyvsp[(3) - (4)].string));}
                   ;}
    break;

  case 76:
#line 388 "syntaxic.y"
    {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                       }
    ;}
    break;

  case 77:
#line 396 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 78:
#line 397 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne);}
                                else {
                                    strcpy(typeD,getType((yyvsp[(1) - (4)].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                ;}
    break;

  case 80:
#line 408 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);;}
    break;

  case 81:
#line 409 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);;}
    break;

  case 83:
#line 415 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);;}
    break;

  case 84:
#line 416 "syntaxic.y"
    { if((yyvsp[(3) - (3)].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real);  
                                             }
                            ;}
    break;

  case 85:
#line 425 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)) );
                             if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0) ) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);}
                                strcpy(valIdf,getVal((yyvsp[(1) - (1)].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,(yyvsp[(1) - (1)].string));}
                                 else
                                  (yyval.real)=atof(valIdf);
                             }
    ;}
    break;

  case 86:
#line 437 "syntaxic.y"
    {
        printf("here %s\n",typeG);
        strcpy(typeD,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[(1) - (1)].string));}
                  
    ;}
    break;

  case 87:
#line 444 "syntaxic.y"
    {        printf("here 2 %s\n",typeG);
                    strcpy(typeD,"FLOAT");
                    if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[(1) - (1)].string)); }  
                   ;}
    break;

  case 88:
#line 451 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[(3) - (4)].string));}
    ;}
    break;

  case 89:
#line 457 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);}
    ;}
    break;

  case 90:
#line 465 "syntaxic.y"
    {
        strcpy(typeD,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[(3) - (4)].string));}
                   ;}
    break;

  case 91:
#line 471 "syntaxic.y"
    {
        strcpy(typeD,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                       }
    ;}
    break;

  case 92:
#line 480 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 93:
#line 481 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne);}
                                else {
                                    strcpy(typeD,getType((yyvsp[(1) - (4)].string)));
                                     if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                ;}
    break;

  case 95:
#line 491 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);;}
    break;

  case 96:
#line 492 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);;}
    break;

  case 98:
#line 498 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);;}
    break;

  case 99:
#line 499 "syntaxic.y"
    { if((yyvsp[(3) - (3)].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real);  
                                             }
                            ;}
    break;

  case 100:
#line 508 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));}
    ;}
    break;

  case 101:
#line 514 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
                  
    ;}
    break;

  case 102:
#line 518 "syntaxic.y"
    {
        strcpy(typeD,"FLOAT");
    ;}
    break;

  case 103:
#line 521 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
    ;}
    break;

  case 104:
#line 524 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
    ;}
    break;

  case 105:
#line 527 "syntaxic.y"
    {
        strcmp(typeD,"FLOAT");
                   ;}
    break;

  case 106:
#line 530 "syntaxic.y"
    {
        strcpy(typeD,"FLOAT");
    ;}
    break;

  case 107:
#line 533 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 108:
#line 534 "syntaxic.y"
    {
        if(verifdeclaration((yyvsp[(1) - (4)].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne);}
        else {
                strcpy(typeG,getType((yyvsp[(1) - (4)].string)));
                }
    ;}
    break;

  case 110:
#line 545 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);;}
    break;

  case 111:
#line 546 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);;}
    break;

  case 113:
#line 552 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);;}
    break;

  case 114:
#line 553 "syntaxic.y"
    { if((yyvsp[(3) - (3)].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real);  
                                             }
                            ;}
    break;

  case 115:
#line 562 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));}
    ;}
    break;

  case 116:
#line 568 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
                  
    ;}
    break;

  case 117:
#line 572 "syntaxic.y"
    {
        strcpy(typeD,"FLOAT");
    ;}
    break;

  case 118:
#line 575 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
    ;}
    break;

  case 119:
#line 578 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
    ;}
    break;

  case 120:
#line 581 "syntaxic.y"
    {
        strcmp(typeD,"FLOAT");
                   ;}
    break;

  case 121:
#line 584 "syntaxic.y"
    {
        strcpy(typeD,"FLOAT");
    ;}
    break;

  case 122:
#line 587 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 123:
#line 588 "syntaxic.y"
    {
        if(verifdeclaration((yyvsp[(1) - (4)].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne);}
        else {
                strcpy(typeD,getType((yyvsp[(1) - (4)].string)));
                }
    ;}
    break;

  case 125:
#line 598 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);;}
    break;

  case 126:
#line 599 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);;}
    break;

  case 128:
#line 605 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);;}
    break;

  case 129:
#line 606 "syntaxic.y"
    { if((yyvsp[(3) - (3)].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real);  
                                             }
                            ;}
    break;

  case 130:
#line 615 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
        }else {strcpy(typeG,getType((yyvsp[(1) - (1)].string)));}
    ;}
    break;

  case 131:
#line 621 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
                  
    ;}
    break;

  case 132:
#line 625 "syntaxic.y"
    {
        strcpy(typeG,"FLOAT");
    ;}
    break;

  case 133:
#line 628 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
    ;}
    break;

  case 134:
#line 631 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
    ;}
    break;

  case 135:
#line 634 "syntaxic.y"
    {
        strcmp(typeG,"FLOAT");
                   ;}
    break;

  case 136:
#line 637 "syntaxic.y"
    {
        strcpy(typeG,"FLOAT");
    ;}
    break;

  case 137:
#line 640 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 138:
#line 641 "syntaxic.y"
    {
        if(verifdeclaration((yyvsp[(1) - (4)].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne);}
        else {
                strcpy(typeG,getType((yyvsp[(1) - (4)].string)));
                }
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2405 "syntaxic.tab.c"
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


#line 654 "syntaxic.y"


// Main function to start the parser
int main() {
    initialisation();
    
    yyparse(); 
    printf("\n");
    afficher(0);afficher(1);afficher(2);
    return 0;
}
int yywrap() {
    return 1;
}

// Function to handle errors during parsing

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d, column %d\n", s, nb_ligne, col);

}


