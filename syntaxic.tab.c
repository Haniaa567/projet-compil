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
   char valIdf[20];
   char saveStr[20];
   char saveS[20];
   char mDroit[20];
   char buffer1[20], buffer2[20], temp[20];
   int cptTemp=1;
   int cptEndCheck=0;



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
#line 33 "syntaxic.y"
{
    int entier;
    float real;
    char character;
    char* string;
}
/* Line 193 of yacc.c.  */
#line 219 "syntaxic.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 232 "syntaxic.tab.c"

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
#define YYLAST   338

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNRULES -- Number of states.  */
#define YYNSTATES  314

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
      78,    80,    82,    84,    86,    88,    93,    98,   103,   108,
     110,   115,   123,   125,   127,   129,   130,   140,   141,   142,
     157,   161,   162,   163,   178,   184,   190,   192,   196,   198,
     200,   202,   205,   209,   213,   214,   218,   222,   226,   230,
     234,   238,   242,   246,   250,   254,   256,   258,   260,   262,
     264,   266,   268,   270,   272,   274,   276,   280,   284,   286,
     290,   294,   296,   298,   300,   305,   310,   315,   320,   324,
     329,   331,   335,   339,   341,   345,   349,   351,   353,   355,
     360,   365,   370,   375,   379,   384,   386,   390,   394,   396,
     400,   404,   406,   408,   410,   415,   420,   425,   430,   434,
     439,   441,   445,   449,   451,   455,   459,   461,   463,   465,
     470,   475,   480,   485,   489,   494,   496,   500,   504,   506,
     510,   514,   516,   518,   520,   525,   530,   535,   540,   544,
     549
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,     3,    33,    46,    34,     4,    33,    47,
      34,     5,    33,    48,    34,    -1,     6,    -1,     7,    -1,
       8,    -1,    49,    -1,    49,    46,    -1,    49,    -1,    49,
      47,    -1,    52,    -1,    52,    48,    -1,    45,    51,    39,
      -1,     9,    45,    50,    28,    74,    39,    -1,    15,    -1,
      15,    -1,    15,    37,    16,    38,    -1,    15,    40,    51,
      -1,    15,    37,    16,    38,    40,    51,    -1,    15,    37,
      35,    29,    16,    36,    38,    40,    51,    -1,    53,    -1,
      58,    -1,    63,    -1,    66,    -1,    62,    -1,    54,    28,
      74,    39,    -1,    55,    28,    74,    39,    -1,    55,    28,
      57,    39,    -1,    54,    28,    56,    39,    -1,    15,    -1,
      15,    37,    16,    38,    -1,    15,    37,    35,    29,    16,
      36,    38,    -1,    18,    -1,    18,    -1,    42,    -1,    -1,
      10,    35,    69,    36,    33,    59,    48,    34,    39,    -1,
      -1,    -1,    10,    35,    69,    36,    33,    60,    48,    34,
      11,    61,    33,    48,    34,    39,    -1,    54,    28,    74,
      -1,    -1,    -1,    12,    35,    62,    64,    41,    86,    65,
      41,    83,    36,    33,    48,    34,    39,    -1,    13,    35,
      15,    36,    39,    -1,    14,    35,    67,    36,    39,    -1,
      68,    -1,    68,    40,    67,    -1,    15,    -1,    89,    -1,
      70,    -1,    21,    69,    -1,    70,    19,    69,    -1,    70,
      20,    69,    -1,    -1,    80,    27,    77,    -1,    80,    25,
      77,    -1,    80,    22,    77,    -1,    80,    24,    77,    -1,
      80,    26,    77,    -1,    80,    23,    77,    -1,    42,    73,
      42,    -1,    18,    73,    18,    -1,    71,    73,    77,    -1,
      80,    73,    72,    -1,    18,    -1,    42,    -1,    18,    -1,
      42,    -1,    27,    -1,    25,    -1,    24,    -1,    26,    -1,
      22,    -1,    23,    -1,    75,    -1,    75,    29,    74,    -1,
      75,    30,    74,    -1,    76,    -1,    76,    31,    75,    -1,
      76,    32,    75,    -1,    15,    -1,    16,    -1,    17,    -1,
      35,    29,    16,    36,    -1,    35,    30,    16,    36,    -1,
      35,    29,    17,    36,    -1,    35,    30,    17,    36,    -1,
      35,    74,    36,    -1,    15,    37,    16,    38,    -1,    78,
      -1,    78,    29,    77,    -1,    78,    30,    77,    -1,    79,
      -1,    79,    31,    78,    -1,    79,    32,    78,    -1,    15,
      -1,    16,    -1,    17,    -1,    35,    29,    16,    36,    -1,
      35,    30,    16,    36,    -1,    35,    29,    17,    36,    -1,
      35,    30,    17,    36,    -1,    35,    77,    36,    -1,    15,
      37,    16,    38,    -1,    81,    -1,    81,    29,    80,    -1,
      81,    30,    80,    -1,    82,    -1,    82,    31,    81,    -1,
      82,    32,    81,    -1,    15,    -1,    16,    -1,    17,    -1,
      35,    29,    16,    36,    -1,    35,    30,    16,    36,    -1,
      35,    29,    17,    36,    -1,    35,    30,    17,    36,    -1,
      35,    80,    36,    -1,    15,    37,    16,    38,    -1,    84,
      -1,    84,    29,    83,    -1,    84,    30,    83,    -1,    85,
      -1,    85,    31,    84,    -1,    85,    32,    84,    -1,    15,
      -1,    16,    -1,    17,    -1,    35,    29,    16,    36,    -1,
      35,    30,    16,    36,    -1,    35,    29,    17,    36,    -1,
      35,    30,    17,    36,    -1,    35,    83,    36,    -1,    15,
      37,    16,    38,    -1,    87,    -1,    87,    29,    86,    -1,
      87,    30,    86,    -1,    88,    -1,    88,    31,    87,    -1,
      88,    32,    87,    -1,    15,    -1,    16,    -1,    17,    -1,
      35,    29,    16,    36,    -1,    35,    30,    16,    36,    -1,
      35,    29,    17,    36,    -1,    35,    30,    17,    36,    -1,
      35,    86,    36,    -1,    15,    37,    16,    38,    -1,    42,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    79,    79,    86,    87,    88,    93,    94,    99,   100,
     105,   106,   111,   121,   141,   154,   155,   163,   164,   165,
     178,   179,   180,   181,   182,   187,   203,   219,   220,   224,
     254,   274,   288,   294,   298,   307,   307,   314,   318,   314,
     328,   342,   345,   342,   367,   373,   378,   379,   384,   390,
     395,   396,   401,   406,   414,   415,   420,   427,   434,   441,
     448,   455,   459,   463,   464,   468,   469,   472,   473,   476,
     477,   478,   479,   480,   481,   485,   486,   496,   510,   511,
     520,   535,   547,   553,   560,   565,   572,   576,   584,   585,
     595,   596,   597,   602,   603,   604,   613,   626,   633,   641,
     647,   655,   661,   670,   671,   680,   681,   682,   687,   688,
     689,   698,   705,   710,   714,   717,   720,   723,   726,   727,
     737,   738,   739,   744,   745,   746,   755,   761,   765,   768,
     771,   774,   777,   780,   781,   790,   791,   792,   797,   798,
     799,   808,   814,   818,   821,   824,   827,   830,   833,   834,
     844
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
  "@1", "@2", "@3", "assignment_int", "loop", "@4", "@5", "io_statement",
  "io_expr_list", "io_expr", "COND", "comparison_expr", "DROIT", "GAUCHE",
  "OP_COMP", "term", "factor", "primary", "term1", "factor1", "primary1",
  "term2", "factor2", "primary2", "term4", "factor4", "primary4", "term3",
  "factor3", "primary3", "string_literal", 0
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
      52,    52,    52,    52,    52,    53,    53,    53,    53,    54,
      55,    55,    56,    57,    57,    59,    58,    60,    61,    58,
      62,    64,    65,    63,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    71,    71,    72,    72,    73,
      73,    73,    73,    73,    73,    74,    74,    74,    75,    75,
      75,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    77,    77,    78,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    80,    81,    81,
      81,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    84,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    86,    87,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    12,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     3,     6,     1,     1,     4,     3,     6,     9,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     1,
       4,     7,     1,     1,     1,     0,     9,     0,     0,    14,
       3,     0,     0,    14,     5,     5,     1,     3,     1,     1,
       1,     2,     3,     3,     0,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     1,     1,     1,     4,     4,     4,     4,     3,     4,
       1,     3,     3,     1,     3,     3,     1,     1,     1,     4,
       4,     4,     4,     3,     4,     1,     3,     3,     1,     3,
       3,     1,     1,     1,     4,     4,     4,     4,     3,     4,
       1,     3,     3,     1,     3,     3,     1,     1,     1,     4,
       4,     4,     4,     3,     4,     1,     3,     3,     1,     3,
       3,     1,     1,     1,     4,     4,     4,     4,     3,     4,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,     5,     0,     0,
       0,     6,     0,    15,     0,     0,     7,    14,     0,     0,
       0,    12,     0,     0,     0,     0,    17,     0,    81,    82,
      83,     0,     0,    75,    78,    16,     0,     0,     8,     0,
       0,     0,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,    88,    76,    77,
      79,    80,    18,     0,     0,    89,    84,    86,    85,    87,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    10,
      20,     0,     0,    21,    24,    22,    23,    19,    54,     0,
       0,     0,     0,     2,    11,     0,     0,   111,   112,   113,
       0,    54,     0,     0,     0,    50,     0,     0,   105,   108,
      29,     0,    41,     0,    48,   150,     0,    46,    49,     0,
       0,    32,     0,    40,    33,    34,     0,     0,     0,    73,
      74,    71,    70,    72,    69,     0,    51,     0,     0,     0,
       0,     0,    54,    54,     0,    73,    74,    71,    70,    72,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,    28,    25,    27,    26,     0,    62,     0,
       0,     0,     0,   118,    61,    35,    52,    53,    96,    97,
      98,     0,    63,    90,    93,    57,    60,    58,    56,    59,
      55,    67,    68,    64,   106,   107,   109,   110,    40,     0,
      44,    45,    47,     0,   119,   114,   116,   115,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
     142,   143,     0,    42,   135,   138,     0,     0,     0,     0,
       0,     0,     0,     0,   103,    91,    92,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,   104,    99,   101,   100,   102,     0,     0,     0,     0,
       0,   148,     0,   136,   137,   139,   140,    36,    38,   149,
     144,   146,   145,   147,   126,   127,   128,     0,     0,   120,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,     0,   121,
     122,   124,   125,     0,   134,   129,   131,   130,   132,     0,
       0,     0,    39,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    37,    78,    11,    18,    14,    79,
      80,    81,    82,   122,   126,    83,   209,   210,   281,    84,
      85,   157,   243,    86,   116,   117,   104,   105,   106,   193,
     135,    32,    33,    34,   182,   183,   184,   107,   108,   109,
     278,   279,   280,   223,   224,   225,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -230
static const yytype_int16 yypact[] =
{
      50,   -20,    57,   154,  -230,  -230,  -230,  -230,    35,    66,
     121,   154,    79,    51,    62,   102,  -230,  -230,   140,     0,
      66,  -230,   151,    92,   139,   174,  -230,   154,   167,  -230,
    -230,    39,   168,    34,    72,   165,   190,   176,   154,   192,
      94,   108,   173,  -230,    92,    92,    92,    92,    66,   177,
     206,  -230,   178,   179,   181,   182,   184,  -230,  -230,  -230,
    -230,  -230,  -230,   183,   189,  -230,  -230,  -230,  -230,  -230,
     185,   144,    66,   188,   191,   193,   194,   187,   180,   144,
    -230,   199,   202,  -230,  -230,  -230,  -230,  -230,     2,   216,
     217,    -3,     5,  -230,  -230,    14,    10,   196,  -230,  -230,
     120,     2,    60,   120,   198,   109,   120,   126,   104,   105,
    -230,   207,  -230,   200,  -230,  -230,   201,   203,  -230,   204,
     209,  -230,   205,   208,  -230,  -230,   210,   211,   223,  -230,
    -230,  -230,  -230,  -230,  -230,   222,  -230,   123,   148,   212,
     213,   218,     2,     2,    97,    97,    97,    97,    97,    97,
      97,    -8,   100,   100,   100,   100,    92,   215,   214,   219,
      -3,  -230,   225,  -230,  -230,  -230,  -230,   221,  -230,   224,
     226,   227,   228,  -230,  -230,  -230,  -230,  -230,   220,  -230,
    -230,    63,  -230,   137,   138,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,   103,
    -230,  -230,  -230,   229,  -230,  -230,  -230,  -230,  -230,   144,
     144,   230,   155,   157,   231,    97,    97,    97,    97,   232,
    -230,  -230,    67,  -230,   146,   147,   233,   234,   236,   235,
     238,   239,   240,   241,  -230,  -230,  -230,  -230,  -230,   245,
     164,   166,   242,   243,   103,   103,   103,   103,  -230,   244,
     255,  -230,  -230,  -230,  -230,  -230,   247,   246,   250,   251,
     252,  -230,   106,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,   253,  -230,  -230,    70,   256,   156,
     158,   248,   263,   171,   175,   257,   258,   106,   106,   106,
     106,   144,   259,   260,   262,   264,   265,  -230,   144,  -230,
    -230,  -230,  -230,   261,  -230,  -230,  -230,  -230,  -230,   268,
     266,   267,  -230,  -230
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,   237,   269,   270,   -79,    -5,  -230,   -12,  -230,
    -230,   163,  -230,  -230,  -230,  -230,  -230,  -230,  -230,   249,
    -230,  -230,  -230,  -230,   112,  -230,   -92,  -230,  -230,  -230,
     -36,   -30,   149,  -230,  -143,   -24,  -230,   -91,    43,  -230,
    -229,   -90,  -230,  -198,   -45,  -230,  -230
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      94,    42,   185,   186,   187,   188,   189,   190,    26,   136,
     191,   139,   114,     3,    58,    59,    24,    97,    98,    99,
     100,   119,    38,   101,   242,    28,    29,    30,   124,    28,
      29,    30,   121,    38,   192,    25,    62,   102,   214,   115,
     120,     5,     6,     7,   103,    31,   263,   264,   285,    31,
     176,   177,   125,     1,    28,    29,    30,     4,   299,   300,
      87,   194,   195,    44,    45,   123,   127,   140,    40,    41,
     144,   151,   235,   236,    31,    97,    98,    99,   178,   179,
     180,    13,   219,   220,   221,   274,   275,   276,    19,   137,
     138,    20,   212,   213,    17,   102,   240,   241,   181,   283,
     284,    21,   222,    46,    47,   277,    22,    28,    29,    30,
      53,    54,   178,   179,   180,    97,    98,    99,   219,   220,
     221,   274,   275,   276,    55,    56,   198,    31,   142,   143,
     227,   228,   181,   152,   153,   102,   154,   155,   222,   169,
     170,   277,   129,   130,   131,   132,   133,   134,   145,   146,
     147,   148,   149,   150,    73,    15,    74,    75,    76,    77,
       5,     6,     7,     8,   171,   172,   215,   216,    23,   217,
     218,   230,   231,   232,   233,   244,   245,    35,   246,   247,
     257,   258,   259,   260,    27,   287,   288,   293,   294,   289,
     290,   295,   296,   237,   238,    60,    61,   196,   197,   301,
     302,   265,   266,    36,    39,    48,    49,    43,    52,    57,
      50,    64,   303,    63,    93,    66,    65,    67,    68,   309,
      69,    70,    71,    88,    92,    72,    89,    95,    90,    91,
      96,   110,   113,   128,   141,   156,   158,   159,   162,   167,
     168,   203,   161,   160,   163,    12,   229,   164,   173,   165,
     166,   175,   111,   200,     0,   174,   199,   211,   201,   204,
     205,   256,   206,   207,   208,   226,   268,   234,   249,   239,
     250,   248,   202,   251,   252,   253,   254,   255,   261,   292,
      16,   291,   270,   267,   262,   269,   271,   272,   273,     0,
     282,   298,   286,   297,     0,   310,   305,   304,   306,     0,
     307,   308,   311,     0,     0,   312,   313,     0,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112
};

static const yytype_int16 yycheck[] =
{
      79,    31,   145,   146,   147,   148,   149,   150,    20,   101,
      18,   102,    15,    33,    44,    45,    16,    15,    16,    17,
      18,    16,    27,    21,   222,    15,    16,    17,    18,    15,
      16,    17,    18,    38,    42,    35,    48,    35,   181,    42,
      35,     6,     7,     8,    42,    35,   244,   245,   277,    35,
     142,   143,    42,     3,    15,    16,    17,     0,   287,   288,
      72,   152,   153,    29,    30,    95,    96,   103,    29,    30,
     106,   107,   215,   216,    35,    15,    16,    17,    15,    16,
      17,    15,    15,    16,    17,    15,    16,    17,    37,    29,
      30,    40,    29,    30,    15,    35,    29,    30,    35,    29,
      30,    39,    35,    31,    32,    35,     4,    15,    16,    17,
      16,    17,    15,    16,    17,    15,    16,    17,    15,    16,
      17,    15,    16,    17,    16,    17,   156,    35,    19,    20,
     209,   210,    35,    29,    30,    35,    31,    32,    35,    16,
      17,    35,    22,    23,    24,    25,    26,    27,    22,    23,
      24,    25,    26,    27,    10,    34,    12,    13,    14,    15,
       6,     7,     8,     9,    16,    17,    29,    30,    28,    31,
      32,    16,    17,    16,    17,    29,    30,    38,    31,    32,
      16,    17,    16,    17,    33,    29,    30,    16,    17,    31,
      32,    16,    17,   217,   218,    46,    47,   154,   155,   289,
     290,   246,   247,    29,    37,    40,    16,    39,    16,    36,
      34,     5,   291,    36,    34,    36,    38,    36,    36,   298,
      36,    38,    33,    35,    37,    40,    35,    28,    35,    35,
      28,    15,    15,    37,    36,    28,    36,    36,    29,    16,
      18,    16,    38,    40,    39,     8,    16,    39,    36,    39,
      39,    33,    89,    39,    -1,    42,    41,    37,    39,    38,
      36,    16,    36,    36,    36,    36,    11,    36,    34,    37,
      34,    38,   160,    38,    36,    36,    36,    36,    36,    16,
      11,    33,    36,    39,    41,    38,    36,    36,    36,    -1,
      37,    33,    36,    36,    -1,    34,    36,    38,    36,    -1,
      36,    36,    34,    -1,    -1,    39,    39,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    44,    33,     0,     6,     7,     8,     9,    45,
      46,    49,    45,    15,    51,    34,    46,    15,    50,    37,
      40,    39,     4,    28,    16,    35,    51,    33,    15,    16,
      17,    35,    74,    75,    76,    38,    29,    47,    49,    37,
      29,    30,    74,    39,    29,    30,    31,    32,    40,    16,
      34,    47,    16,    16,    17,    16,    17,    36,    74,    74,
      75,    75,    51,    36,     5,    38,    36,    36,    36,    36,
      38,    33,    40,    10,    12,    13,    14,    15,    48,    52,
      53,    54,    55,    58,    62,    63,    66,    51,    35,    35,
      35,    35,    37,    34,    48,    28,    28,    15,    16,    17,
      18,    21,    35,    42,    69,    70,    71,    80,    81,    82,
      15,    54,    62,    15,    15,    42,    67,    68,    89,    16,
      35,    18,    56,    74,    18,    42,    57,    74,    37,    22,
      23,    24,    25,    26,    27,    73,    69,    29,    30,    80,
      73,    36,    19,    20,    73,    22,    23,    24,    25,    26,
      27,    73,    29,    30,    31,    32,    28,    64,    36,    36,
      40,    38,    29,    39,    39,    39,    39,    16,    18,    16,
      17,    16,    17,    36,    42,    33,    69,    69,    15,    16,
      17,    35,    77,    78,    79,    77,    77,    77,    77,    77,
      77,    18,    42,    72,    80,    80,    81,    81,    74,    41,
      39,    39,    67,    16,    38,    36,    36,    36,    36,    59,
      60,    37,    29,    30,    77,    29,    30,    31,    32,    15,
      16,    17,    35,    86,    87,    88,    36,    48,    48,    16,
      16,    17,    16,    17,    36,    77,    77,    78,    78,    37,
      29,    30,    86,    65,    29,    30,    31,    32,    38,    34,
      34,    38,    36,    36,    36,    36,    16,    16,    17,    16,
      17,    36,    41,    86,    86,    87,    87,    39,    11,    38,
      36,    36,    36,    36,    15,    16,    17,    35,    83,    84,
      85,    61,    37,    29,    30,    83,    36,    29,    30,    31,
      32,    33,    16,    16,    17,    16,    17,    36,    33,    83,
      83,    84,    84,    48,    38,    36,    36,    36,    36,    48,
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
#line 86 "syntaxic.y"
    {strcpy(sauvType,"INTEGER");;}
    break;

  case 4:
#line 87 "syntaxic.y"
    {strcpy(sauvType,"FLOAT");;}
    break;

  case 5:
#line 88 "syntaxic.y"
    {strcpy(sauvType,"CHAR");;}
    break;

  case 12:
#line 111 "syntaxic.y"
    {
        //verification de la double declaration et insertion du type
        for(j=0;strcmp(saveIdf[j].idfTab,"")!=0;j++){
            if(verifdeclaration(saveIdf[j].idfTab)==0) insererType(sauvType,saveIdf[j].idfTab);
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[j].idfTab,nb_ligne);
            //createQuad("DECL", sauvType, "", saveIdf[j].idfTab);
            strcpy(saveIdf[j].idfTab,"");
        }  
        j=0;  
    ;}
    break;

  case 13:
#line 121 "syntaxic.y"
    {
    // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ((yyvsp[(5) - (6)].real) - floor((yyvsp[(5) - (6)].real)) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
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
#line 141 "syntaxic.y"
    {
        strcpy(saveIdf[0].idfTab,(yyvsp[(1) - (1)].string));
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType((yyvsp[(1) - (1)].string)));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[0].idfTab,nb_ligne);
            
            
    ;}
    break;

  case 15:
#line 154 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (1)].string));j++;;}
    break;

  case 16:
#line 155 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (4)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;
        if (atoi((yyvsp[(3) - (4)].string)) == 0) {
            printf("Erreur semantique : La taille du tableau doit etre strictement positive\n");
        } 
        sprintf(buffer1, "%d", atoi((yyvsp[(3) - (4)].string))-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[(1) - (4)].string),"","");
        ;}
    break;

  case 17:
#line 163 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (3)].string));j++;;}
    break;

  case 18:
#line 164 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (6)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;;}
    break;

  case 19:
#line 165 "syntaxic.y"
    {strcpy(saveIdf[j].idfTab,(yyvsp[(1) - (9)].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;;}
    break;

  case 25:
#line 187 "syntaxic.y"
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
        // Génération du quadruplet d'affectation
        createQuad("=", saveStr, "",mDroit);

        insererVal(temp, saveStr);
    ;}
    break;

  case 26:
#line 203 "syntaxic.y"
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
        // Génération du quadruplet d'affectation
        createQuad("=", saveStr, "",mDroit);

        insererVal(temp, saveStr);
    ;}
    break;

  case 29:
#line 224 "syntaxic.y"
    {
    // Vérification de la déclaration de la variable avant usage
    if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
        printf("Erreur sémantique : La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
    } else if(strcmp(getCode((yyvsp[(1) - (1)].string)),"IDF TAB")==0){
        printf("Erreur sémantique : La variable '%s' est un tableau.\n", (yyvsp[(1) - (1)].string));

        strcpy(typeG, getType((yyvsp[(1) - (1)].string)));  // Récupérer le type de la variable à gauche
        printf("type: %s", typeG);
        if (comparCode((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique à la ligne %d : affectation d'une constante\n", nb_ligne);
        } else {
            strcpy(mDroit, (yyvsp[(1) - (1)].string));
            strcpy(temp, (yyvsp[(1) - (1)].string));
        }
        
    }
    else{
        strcpy(typeG, getType((yyvsp[(1) - (1)].string)));  // Récupérer le type de la variable à gauche
        printf("type: %s", typeG);
        if (comparCode((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique à la ligne %d : affectation d'une constante\n", nb_ligne);
        } else {
            strcpy(mDroit, (yyvsp[(1) - (1)].string));
            strcpy(temp, (yyvsp[(1) - (1)].string));
        }
    }
    ;}
    break;

  case 30:
#line 254 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                    {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",(yyvsp[(1) - (4)].string),nb_ligne);}
                    else if(strcmp(getCode((yyvsp[(1) - (4)].string)),"IDF")==0){
                        printf("Erreur sémantique : La variable '%s' est n'est pasm un tableau.\n", (yyvsp[(1) - (4)].string));
                        strcpy(typeG, getType((yyvsp[(1) - (4)].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[(1) - (4)].string)));

                    }  
                        strcpy(temp,(yyvsp[(1) - (4)].string));
                        strcpy(mDroit,(yyvsp[(1) - (4)].string));
                        //strcat(mDroit,"[");
                        //sprintf(buffer2,"%d",atoi($3));
                        //strcat(mDroit,buffer2);
                        //strcat(mDroit,"]");
                        //printf("mDroit= %s",mDroit);
                    ;}
    break;

  case 31:
#line 274 "syntaxic.y"
    {
                if(verifdeclaration((yyvsp[(1) - (7)].string))==0 )
                  {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",(yyvsp[(1) - (7)].string),nb_ligne);}
                  else if(strcmp(getCode((yyvsp[(1) - (7)].string)),"IDF")==0){
                        printf("Erreur sémantique : La variable '%s' est n'est pas un tableau.\n", (yyvsp[(1) - (7)].string));
                        strcpy(typeG, getType((yyvsp[(1) - (7)].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[(1) - (7)].string)));

                    }  
    ;}
    break;

  case 32:
#line 288 "syntaxic.y"
    {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[(1) - (1)].string));}
                           ;}
    break;

  case 33:
#line 294 "syntaxic.y"
    {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[(1) - (1)].string));}
                           ;}
    break;

  case 34:
#line 298 "syntaxic.y"
    {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[(1) - (1)].string));}
                           ;}
    break;

  case 35:
#line 307 "syntaxic.y"
    {
          empiler_Int(&pile1,qc);
          createQuad("BZ","",QuadR[qc-1].res,"");
        ;}
    break;

  case 36:
#line 311 "syntaxic.y"
    {
          QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        ;}
    break;

  case 37:
#line 314 "syntaxic.y"
    {
          empiler_Int(&pile1,qc);
          createQuad("BZ","",QuadR[qc-1].res,"");
        ;}
    break;

  case 38:
#line 318 "syntaxic.y"
    {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
        empiler_Int(&pile1,qc);
        createQuad("BR","","","");
        ;}
    break;

  case 39:
#line 323 "syntaxic.y"
    {
          QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        ;}
    break;

  case 40:
#line 328 "syntaxic.y"
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

  case 41:
#line 342 "syntaxic.y"
    {
        // Sauvegarde du début de la boucle
       // empiler_Int(&pile, qc);
    ;}
    break;

  case 42:
#line 345 "syntaxic.y"
    {
        // Génération du quadruplet de test
        char* temp = newtemp();
       // empiler_Int(&pile_for, qc);
        createQuad("BZ", temp, "", "");
    ;}
    break;

  case 43:
#line 350 "syntaxic.y"
    {
        if(strcmp(typeD,"INTEGER")!=0 || strcmp(typeG,"INTEGER")!=0)
        {
            printf("Erreur semantique parametre boucle type incompatible \n");
        }
        // Génération du saut de retour
       // int debut = atoi(depiler(&pile_for));
       // createQuad("BR", ToSTR(debut), "", "");
        
        // Mise à jour du quadruplet de test
        //int sauv = atoi(depiler(&pile_for));
        //sprintf(QuadR[sauv].opd1, "%d", qc);
    ;}
    break;

  case 44:
#line 367 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(3) - (5)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(3) - (5)].string));
        }
    ;}
    break;

  case 48:
#line 384 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
        }
    ;}
    break;

  case 51:
#line 396 "syntaxic.y"
    {
        char* temp = newtemp();
        createQuadL(1, (yyvsp[(2) - (2)].string), "", temp);
        (yyval.string) = temp;    
    ;}
    break;

  case 52:
#line 401 "syntaxic.y"
    {
        char* temp = newtemp();
        createQuadL(3, (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string), temp);
        (yyval.string) = temp;
    ;}
    break;

  case 53:
#line 406 "syntaxic.y"
    {
        char* temp = newtemp();
        createQuadL(2, (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string), temp);
        (yyval.string) = temp;
    ;}
    break;

  case 55:
#line 416 "syntaxic.y"
    {
         char* temp=newtemp();
        createQuadA(6,buffer1,buffer2,temp);
    ;}
    break;

  case 56:
#line 420 "syntaxic.y"
    {
        sprintf((yyval.string),"T%d",cptTemp);
        sprintf(buffer1, "%f", (yyvsp[(1) - (3)].real));
        sprintf(buffer2, "%f", (yyvsp[(3) - (3)].real));
        createQuadA(5,buffer1,buffer2,(yyval.string));
        cptTemp++;
    ;}
    break;

  case 57:
#line 427 "syntaxic.y"
    {
        sprintf((yyval.string),"T%d",cptTemp);
        sprintf(buffer1, "%f", (yyvsp[(1) - (3)].real));
        sprintf(buffer2, "%f", (yyvsp[(3) - (3)].real));
        createQuadA(1,buffer1,buffer2,(yyval.string));
        cptTemp++;
    ;}
    break;

  case 58:
#line 434 "syntaxic.y"
    {
       sprintf((yyval.string),"T%d",cptTemp);
        sprintf(buffer1, "%f", (yyvsp[(1) - (3)].real));
        sprintf(buffer2, "%f", (yyvsp[(3) - (3)].real));
        createQuadA(3,buffer1,buffer2,(yyval.string));
        cptTemp++;
    ;}
    break;

  case 59:
#line 441 "syntaxic.y"
    {
        sprintf((yyval.string),"T%d",cptTemp);
        sprintf(buffer1, "%f", (yyvsp[(1) - (3)].real));
        sprintf(buffer2, "%f", (yyvsp[(3) - (3)].real));
        createQuadA(4,buffer1,buffer2,(yyval.string));
        cptTemp++;
    ;}
    break;

  case 60:
#line 448 "syntaxic.y"
    {
        sprintf((yyval.string),"T%d",cptTemp);
        sprintf(buffer1, "%f", (yyvsp[(1) - (3)].real));
        sprintf(buffer2, "%f", (yyvsp[(3) - (3)].real));
        createQuadA(2,buffer1,buffer2,(yyval.string));
        cptTemp++;
    ;}
    break;

  case 61:
#line 455 "syntaxic.y"
    { (yyval.string) = newtemp(); 
    sprintf(buffer1, "%f", (yyvsp[(1) - (3)].string));
    sprintf(buffer2, "%f", (yyvsp[(3) - (3)].string));
    createQuad((yyvsp[(2) - (3)].string),buffer1, buffer2, (yyval.string)); ;}
    break;

  case 62:
#line 459 "syntaxic.y"
    { (yyval.string) = newtemp(); 
    sprintf(buffer1, "%f", (yyvsp[(1) - (3)].string));
    sprintf(buffer2, "%f", (yyvsp[(3) - (3)].string));
    createQuad((yyvsp[(2) - (3)].string),buffer1, buffer2, (yyval.string));  ;}
    break;

  case 63:
#line 463 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);;}
    break;

  case 64:
#line 464 "syntaxic.y"
    {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);;}
    break;

  case 76:
#line 486 "syntaxic.y"
    {
        sprintf(buffer1, "%f", (yyvsp[(1) - (3)].real));
        sprintf(buffer2, "%f", (yyvsp[(3) - (3)].real));
        char* temp = newtemp();  // Génère un identifiant temporaire
        float t=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);
        sprintf(temp,"%f",t);
        createQuad("+", buffer1, buffer2, temp);
        (yyval.real)=atof(temp);
        
    ;}
    break;

  case 77:
#line 496 "syntaxic.y"
    {
        sprintf(buffer1, "%f", (yyvsp[(1) - (3)].real));
        sprintf(buffer2, "%f", (yyvsp[(3) - (3)].real));
        char* temp = newtemp();  // Génère un identifiant temporaire
        float t=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);
        sprintf(temp,"%f",t);
        createQuad("-", buffer1, buffer2, temp);
        (yyval.real)=atof(temp);
     
    ;}
    break;

  case 79:
#line 511 "syntaxic.y"
    {
        sprintf(buffer1, "%f", (yyvsp[(1) - (3)].real));
        sprintf(buffer2, "%f", (yyvsp[(3) - (3)].real));
        char* temp = newtemp();  // Génère un identifiant temporaire
        float t=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);
        sprintf(temp,"%f",t);
        createQuad("*", buffer1, buffer2, temp);
        (yyval.real)=atof(temp);
    ;}
    break;

  case 80:
#line 520 "syntaxic.y"
    { if((yyvsp[(3) - (3)].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                               sprintf(buffer1, "%f", (yyvsp[(1) - (3)].real));
                                                sprintf(buffer2, "%f", (yyvsp[(3) - (3)].real));
                                                char* temp = newtemp();  // Génère un identifiant temporaire
                                                float t=(yyvsp[(1) - (3)].real)/(yyvsp[(3) - (3)].real);
                                                sprintf(temp,"%f",t);
                                                createQuad("/", buffer1, buffer2, temp);
                                                (yyval.real)=atof(temp);
                                             }
                            ;}
    break;

  case 81:
#line 535 "syntaxic.y"
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

  case 82:
#line 547 "syntaxic.y"
    {
        printf("here %s\n",typeG);
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[(1) - (1)].string));}
                  
    ;}
    break;

  case 83:
#line 553 "syntaxic.y"
    {        printf("here 2 %s\n",typeG);

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[(1) - (1)].string)); }  
                   ;}
    break;

  case 84:
#line 560 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[(3) - (4)].string));}
    ;}
    break;

  case 85:
#line 565 "syntaxic.y"
    {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);}
    ;}
    break;

  case 86:
#line 572 "syntaxic.y"
    {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
                                      else{(yyval.real)=atof((yyvsp[(3) - (4)].string));}
                   ;}
    break;

  case 87:
#line 576 "syntaxic.y"
    {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                       }
    ;}
    break;

  case 88:
#line 584 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 89:
#line 585 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne);}
                                else {
                                    strcpy(typeD,getType((yyvsp[(1) - (4)].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                ;}
    break;

  case 91:
#line 596 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);;}
    break;

  case 92:
#line 597 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);;}
    break;

  case 94:
#line 603 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);;}
    break;

  case 95:
#line 604 "syntaxic.y"
    { if((yyvsp[(3) - (3)].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real);  
                                             }
                            ;}
    break;

  case 96:
#line 613 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
        }else {strcpy(typeG,getType((yyvsp[(1) - (1)].string)) );
                             if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0) ) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);}
                                strcpy(valIdf,getVal((yyvsp[(1) - (1)].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,(yyvsp[(1) - (1)].string));}
                                 else
                                  (yyval.real)=atof(valIdf);
                             }
        sprintf(buffer2, "%s", (yyvsp[(1) - (1)].string));
    ;}
    break;

  case 97:
#line 626 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[(1) - (1)].string));}
        sprintf(buffer2, "%d",atoi((yyvsp[(1) - (1)].string)));
                  
    ;}
    break;

  case 98:
#line 633 "syntaxic.y"
    {        printf("here 2 %s\n",typeG);
                    strcpy(typeG,"FLOAT");
                    if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[(1) - (1)].string)); } 
                   sprintf(buffer2, "%f", (yyvsp[(1) - (1)].string)); 
                   ;}
    break;

  case 99:
#line 641 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[(3) - (4)].string));}
    ;}
    break;

  case 100:
#line 647 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",(yyvsp[(3) - (4)].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);}
    ;}
    break;

  case 101:
#line 655 "syntaxic.y"
    {
        strcpy(typeG,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[(3) - (4)].string));}
                   ;}
    break;

  case 102:
#line 661 "syntaxic.y"
    {
        strcpy(typeG,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[(3) - (4)].string));
                                           (yyval.real)=atof(saveS);
                                       }
    ;}
    break;

  case 103:
#line 670 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 104:
#line 671 "syntaxic.y"
    {if(verifdeclaration((yyvsp[(1) - (4)].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne);}
                                else {
                                    strcpy(typeG,getType((yyvsp[(1) - (4)].string)));
                                     if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                ;}
    break;

  case 106:
#line 681 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);;}
    break;

  case 107:
#line 682 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);;}
    break;

  case 109:
#line 688 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);;}
    break;

  case 110:
#line 689 "syntaxic.y"
    { if((yyvsp[(3) - (3)].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real);  
                                             }
                            ;}
    break;

  case 111:
#line 698 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));}
        sprintf(buffer1, "%s", (yyvsp[(1) - (1)].string));
    ;}
    break;

  case 112:
#line 705 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
        sprintf(buffer1, "%d", atoi((yyvsp[(1) - (1)].string)));
                  
    ;}
    break;

  case 113:
#line 710 "syntaxic.y"
    {
        strcpy(typeD,"FLOAT");
        sprintf(buffer1, "%f", (yyvsp[(1) - (1)].string));
    ;}
    break;

  case 114:
#line 714 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
    ;}
    break;

  case 115:
#line 717 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
    ;}
    break;

  case 116:
#line 720 "syntaxic.y"
    {
        strcmp(typeD,"FLOAT");
                   ;}
    break;

  case 117:
#line 723 "syntaxic.y"
    {
        strcpy(typeD,"FLOAT");
    ;}
    break;

  case 118:
#line 726 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 119:
#line 727 "syntaxic.y"
    {
        if(verifdeclaration((yyvsp[(1) - (4)].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne);}
        else {
                strcpy(typeG,getType((yyvsp[(1) - (4)].string)));
                }
    ;}
    break;

  case 121:
#line 738 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);;}
    break;

  case 122:
#line 739 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);;}
    break;

  case 124:
#line 745 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);;}
    break;

  case 125:
#line 746 "syntaxic.y"
    { if((yyvsp[(3) - (3)].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real);  
                                             }
                            ;}
    break;

  case 126:
#line 755 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
        }else {strcpy(typeD,getType((yyvsp[(1) - (1)].string)));}
    ;}
    break;

  case 127:
#line 761 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
                  
    ;}
    break;

  case 128:
#line 765 "syntaxic.y"
    {
        strcpy(typeD,"FLOAT");
    ;}
    break;

  case 129:
#line 768 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
    ;}
    break;

  case 130:
#line 771 "syntaxic.y"
    {
        strcpy(typeD,"INTEGER");
    ;}
    break;

  case 131:
#line 774 "syntaxic.y"
    {
        strcmp(typeD,"FLOAT");
                   ;}
    break;

  case 132:
#line 777 "syntaxic.y"
    {
        strcpy(typeD,"FLOAT");
    ;}
    break;

  case 133:
#line 780 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 134:
#line 781 "syntaxic.y"
    {
        if(verifdeclaration((yyvsp[(1) - (4)].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne);}
        else {
                strcpy(typeD,getType((yyvsp[(1) - (4)].string)));
                }
    ;}
    break;

  case 136:
#line 791 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)+(yyvsp[(3) - (3)].real);;}
    break;

  case 137:
#line 792 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)-(yyvsp[(3) - (3)].real);;}
    break;

  case 139:
#line 798 "syntaxic.y"
    {(yyval.real)=(yyvsp[(1) - (3)].real)*(yyvsp[(3) - (3)].real);;}
    break;

  case 140:
#line 799 "syntaxic.y"
    { if((yyvsp[(3) - (3)].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real);  
                                             }
                            ;}
    break;

  case 141:
#line 808 "syntaxic.y"
    {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[(1) - (1)].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[(1) - (1)].string));
        }else {strcpy(typeG,getType((yyvsp[(1) - (1)].string)));}
    ;}
    break;

  case 142:
#line 814 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
                  
    ;}
    break;

  case 143:
#line 818 "syntaxic.y"
    {
        strcpy(typeG,"FLOAT");
    ;}
    break;

  case 144:
#line 821 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
    ;}
    break;

  case 145:
#line 824 "syntaxic.y"
    {
        strcpy(typeG,"INTEGER");
    ;}
    break;

  case 146:
#line 827 "syntaxic.y"
    {
        strcmp(typeG,"FLOAT");
                   ;}
    break;

  case 147:
#line 830 "syntaxic.y"
    {
        strcpy(typeG,"FLOAT");
    ;}
    break;

  case 148:
#line 833 "syntaxic.y"
    {(yyval.real)=(yyvsp[(2) - (3)].real);;}
    break;

  case 149:
#line 834 "syntaxic.y"
    {
        if(verifdeclaration((yyvsp[(1) - (4)].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[(1) - (4)].string),nb_ligne);}
        else {
                strcpy(typeG,getType((yyvsp[(1) - (4)].string)));
                }
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2724 "syntaxic.tab.c"
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


#line 847 "syntaxic.y"


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


