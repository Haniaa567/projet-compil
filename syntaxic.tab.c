/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
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
   float operande;

#line 119 "syntaxic.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntaxic.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VAR_GLOBAL = 3,                 /* VAR_GLOBAL  */
  YYSYMBOL_DECLARATION = 4,                /* DECLARATION  */
  YYSYMBOL_INSTRUCTION = 5,                /* INSTRUCTION  */
  YYSYMBOL_INTEGER = 6,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 7,                      /* FLOAT  */
  YYSYMBOL_CHAR = 8,                       /* CHAR  */
  YYSYMBOL_CONST = 9,                      /* CONST  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_READ = 13,                      /* READ  */
  YYSYMBOL_WRITE = 14,                     /* WRITE  */
  YYSYMBOL_IDENTIFIER = 15,                /* IDENTIFIER  */
  YYSYMBOL_INT_NUMBER = 16,                /* INT_NUMBER  */
  YYSYMBOL_FLOAT_NUMBER = 17,              /* FLOAT_NUMBER  */
  YYSYMBOL_CHARACTERE = 18,                /* CHARACTERE  */
  YYSYMBOL_AND = 19,                       /* AND  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_NOT = 21,                       /* NOT  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NEQ = 23,                       /* NEQ  */
  YYSYMBOL_GEQ = 24,                       /* GEQ  */
  YYSYMBOL_LT = 25,                        /* LT  */
  YYSYMBOL_LEQ = 26,                       /* LEQ  */
  YYSYMBOL_GT = 27,                        /* GT  */
  YYSYMBOL_EQUALS = 28,                    /* EQUALS  */
  YYSYMBOL_PLUS = 29,                      /* PLUS  */
  YYSYMBOL_MINUS = 30,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 31,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 32,                    /* DIVIDE  */
  YYSYMBOL_LBRACE = 33,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 34,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 35,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 36,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 37,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 38,                  /* RBRACKET  */
  YYSYMBOL_SEMICOLON = 39,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_COLON = 41,                     /* COLON  */
  YYSYMBOL_STRING_LITERAL = 42,            /* STRING_LITERAL  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_type = 45,                      /* type  */
  YYSYMBOL_global_var_section = 46,        /* global_var_section  */
  YYSYMBOL_declaration_section = 47,       /* declaration_section  */
  YYSYMBOL_instruction_section = 48,       /* instruction_section  */
  YYSYMBOL_declaration = 49,               /* declaration  */
  YYSYMBOL_cst = 50,                       /* cst  */
  YYSYMBOL_variable_list = 51,             /* variable_list  */
  YYSYMBOL_statement = 52,                 /* statement  */
  YYSYMBOL_assignment = 53,                /* assignment  */
  YYSYMBOL_MDROIT = 54,                    /* MDROIT  */
  YYSYMBOL_TAB = 55,                       /* TAB  */
  YYSYMBOL_termtab = 56,                   /* termtab  */
  YYSYMBOL_factortab = 57,                 /* factortab  */
  YYSYMBOL_primarytab = 58,                /* primarytab  */
  YYSYMBOL_factorDtab = 59,                /* factorDtab  */
  YYSYMBOL_primaryDtab = 60,               /* primaryDtab  */
  YYSYMBOL_EXPRESSION_CHAR = 61,           /* EXPRESSION_CHAR  */
  YYSYMBOL_condition = 62,                 /* condition  */
  YYSYMBOL_63_1 = 63,                      /* $@1  */
  YYSYMBOL_elsebloc = 64,                  /* elsebloc  */
  YYSYMBOL_65_2 = 65,                      /* $@2  */
  YYSYMBOL_assignment_int = 66,            /* assignment_int  */
  YYSYMBOL_loop = 67,                      /* loop  */
  YYSYMBOL_68_3 = 68,                      /* $@3  */
  YYSYMBOL_69_4 = 69,                      /* $@4  */
  YYSYMBOL_70_5 = 70,                      /* $@5  */
  YYSYMBOL_io_statement = 71,              /* io_statement  */
  YYSYMBOL_io_expr_list = 72,              /* io_expr_list  */
  YYSYMBOL_io_expr = 73,                   /* io_expr  */
  YYSYMBOL_COND = 74,                      /* COND  */
  YYSYMBOL_OR_EXPR = 75,                   /* OR_EXPR  */
  YYSYMBOL_AND_EXPR = 76,                  /* AND_EXPR  */
  YYSYMBOL_NOT_EXPR = 77,                  /* NOT_EXPR  */
  YYSYMBOL_comparison_expr = 78,           /* comparison_expr  */
  YYSYMBOL_DROIT = 79,                     /* DROIT  */
  YYSYMBOL_GAUCHE = 80,                    /* GAUCHE  */
  YYSYMBOL_OP_COMP = 81,                   /* OP_COMP  */
  YYSYMBOL_term = 82,                      /* term  */
  YYSYMBOL_factor = 83,                    /* factor  */
  YYSYMBOL_primary = 84,                   /* primary  */
  YYSYMBOL_factorD = 85,                   /* factorD  */
  YYSYMBOL_primaryD = 86,                  /* primaryD  */
  YYSYMBOL_term1 = 87,                     /* term1  */
  YYSYMBOL_factor1 = 88,                   /* factor1  */
  YYSYMBOL_primary1 = 89,                  /* primary1  */
  YYSYMBOL_term2 = 90,                     /* term2  */
  YYSYMBOL_factor2 = 91,                   /* factor2  */
  YYSYMBOL_primary2 = 92,                  /* primary2  */
  YYSYMBOL_term4 = 93,                     /* term4  */
  YYSYMBOL_factor4 = 94,                   /* factor4  */
  YYSYMBOL_primary4 = 95,                  /* primary4  */
  YYSYMBOL_term3 = 96,                     /* term3  */
  YYSYMBOL_factor3 = 97,                   /* factor3  */
  YYSYMBOL_primary3 = 98,                  /* primary3  */
  YYSYMBOL_string_literal = 99             /* string_literal  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   467

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  414

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   102,   102,   109,   110,   111,   116,   117,   122,   123,
     128,   129,   134,   144,   164,   177,   178,   186,   200,   201,
     202,   216,   217,   218,   219,   220,   225,   241,   257,   262,
     271,   299,   323,   335,   371,   372,   387,   404,   405,   419,
     438,   454,   460,   465,   471,   479,   484,   491,   492,   498,
     499,   512,   531,   551,   561,   570,   583,   597,   609,   620,
     621,   640,   689,   689,   697,   697,   702,   706,   724,   730,
     733,   724,   757,   763,   768,   769,   774,   780,   814,   818,
     833,   837,   847,   851,   859,   865,   866,   873,   879,   885,
     891,   897,   903,   909,   915,   916,   922,   923,   926,   927,
     930,   931,   932,   933,   934,   935,  1146,  1147,  1171,  1188,
    1189,  1203,  1222,  1237,  1245,  1254,  1262,  1273,  1280,  1290,
    1291,  1300,  1301,  1314,  1333,  1353,  1365,  1379,  1394,  1411,
    1425,  1439,  1440,  1460,  1461,  1480,  1501,  1502,  1520,  1546,
    1559,  1566,  1574,  1580,  1588,  1594,  1603,  1604,  1613,  1614,
    1633,  1655,  1656,  1675,  1700,  1707,  1712,  1716,  1719,  1722,
    1725,  1728,  1729,  1739,  1740,  1758,  1780,  1781,  1800,  1825,
    1832,  1836,  1839,  1842,  1845,  1848,  1851,  1852,  1861,  1862,
    1880,  1902,  1903,  1922,  1947,  1954,  1959,  1962,  1965,  1968,
    1971,  1974,  1975,  1985
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "VAR_GLOBAL",
  "DECLARATION", "INSTRUCTION", "INTEGER", "FLOAT", "CHAR", "CONST", "IF",
  "ELSE", "FOR", "READ", "WRITE", "IDENTIFIER", "INT_NUMBER",
  "FLOAT_NUMBER", "CHARACTERE", "AND", "OR", "NOT", "EQ", "NEQ", "GEQ",
  "LT", "LEQ", "GT", "EQUALS", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "LBRACE", "RBRACE", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET",
  "SEMICOLON", "COMMA", "COLON", "STRING_LITERAL", "$accept", "program",
  "type", "global_var_section", "declaration_section",
  "instruction_section", "declaration", "cst", "variable_list",
  "statement", "assignment", "MDROIT", "TAB", "termtab", "factortab",
  "primarytab", "factorDtab", "primaryDtab", "EXPRESSION_CHAR",
  "condition", "$@1", "elsebloc", "$@2", "assignment_int", "loop", "$@3",
  "$@4", "$@5", "io_statement", "io_expr_list", "io_expr", "COND",
  "OR_EXPR", "AND_EXPR", "NOT_EXPR", "comparison_expr", "DROIT", "GAUCHE",
  "OP_COMP", "term", "factor", "primary", "factorD", "primaryD", "term1",
  "factor1", "primary1", "term2", "factor2", "primary2", "term4",
  "factor4", "primary4", "term3", "factor3", "primary3", "string_literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-360)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-121)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,    -6,    41,   250,  -360,  -360,  -360,  -360,   254,    65,
      64,   250,   107,   -14,   100,   140,  -360,  -360,   114,   117,
      65,  -360,   127,   138,   129,   149,  -360,    35,    91,     5,
    -360,  -360,   250,   176,  -360,  -360,    52,     1,    26,  -360,
     202,   192,    67,   158,    75,   141,   141,  -360,   141,   141,
     200,   250,   226,   179,   182,   178,   148,   148,  -360,   153,
     153,   213,    65,   245,   265,   276,   315,  -360,   249,  -360,
    -360,    56,  -360,   184,  -360,  -360,  -360,   316,  -360,   318,
     319,   322,   323,   324,  -360,   196,   232,   234,    73,   236,
    -360,  -360,  -360,   287,  -360,  -360,    77,  -360,  -360,  -360,
    -360,   325,  -360,  -360,  -360,   338,   189,   253,   181,   162,
     162,   328,  -360,  -360,  -360,  -360,  -360,   341,   255,   257,
     190,   153,   153,   346,   259,   261,   193,   326,   327,   331,
     332,   333,   334,  -360,  -360,    80,     5,     5,   240,   335,
     336,   339,   340,   342,   248,   251,   256,   343,   344,   347,
     348,   349,  -360,    65,  -360,  -360,  -360,  -360,  -360,   268,
     329,   351,   352,   353,   337,   345,   240,  -360,   354,   361,
    -360,  -360,  -360,  -360,   258,   260,   262,   264,   266,  -360,
    -360,  -360,  -360,  -360,  -360,   355,     3,   356,   362,    -3,
     165,  -360,  -360,    44,    44,  -360,   357,  -360,  -360,   214,
       3,    84,   214,   359,   370,   373,  -360,  -360,   214,   222,
     270,   271,  -360,   365,  -360,   360,  -360,  -360,   363,   358,
    -360,   364,   101,   121,  -360,   366,     4,   367,    24,   381,
    -360,  -360,  -360,  -360,  -360,  -360,   382,  -360,   288,   290,
     368,   369,   374,     3,     3,   169,   169,   169,   169,   169,
     169,   169,    -7,   174,   174,   174,   174,   138,   371,   375,
     376,    -3,  -360,   292,  -360,  -360,  -360,  -360,  -360,   372,
    -360,   377,   380,   383,   384,  -360,  -360,  -360,   373,  -360,
     385,  -360,  -360,   108,  -360,   281,   282,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
     286,   177,  -360,  -360,  -360,   387,  -360,  -360,  -360,  -360,
    -360,   240,   392,   301,   303,   388,   169,   169,   169,   169,
     389,  -360,  -360,   111,  -360,   293,   294,   379,   391,   390,
     393,   394,   395,   396,  -360,  -360,  -360,  -360,  -360,   402,
     311,   313,   397,   386,   177,   177,   177,   177,  -360,   398,
    -360,  -360,  -360,  -360,  -360,   399,   400,   403,   404,   405,
    -360,   186,  -360,  -360,  -360,  -360,   401,   406,  -360,  -360,
    -360,  -360,  -360,   407,  -360,  -360,   132,  -360,   302,   304,
    -360,  -360,   419,   317,   321,   410,   411,   186,   186,   186,
     186,   240,   412,   413,   415,   416,   417,  -360,   409,  -360,
    -360,  -360,  -360,   414,  -360,  -360,  -360,  -360,  -360,   240,
    -360,   420,   418,  -360
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,     5,     0,     0,
       0,     6,     0,    15,     0,     0,     7,    14,     0,     0,
       0,    12,     0,     0,    40,    41,    42,     0,     0,    34,
      37,    18,     0,   112,   113,   114,     0,     0,   106,   109,
       0,    16,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    47,    52,    53,
      54,     0,    35,    49,    36,    38,    39,     0,     9,     0,
       0,     0,     0,     0,   119,   124,   125,   126,     0,     0,
     107,   121,   108,   124,   125,   126,     0,   110,   111,    48,
      19,    43,    45,    44,    46,     0,     0,     0,     0,     0,
       0,     0,   120,   115,   117,   116,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    41,     0,    50,    51,     0,     0,
       0,     0,     0,     0,   131,   122,   123,     0,     0,     0,
       0,     0,   131,     0,    60,    55,    57,    56,    58,     0,
       0,     0,     0,     0,    30,     0,    10,    21,     0,     0,
      22,    25,    23,    24,   132,   127,   129,   128,   130,   132,
     127,   129,   128,   130,    20,     0,    85,     0,     0,     0,
       0,     2,    11,     0,     0,    43,   154,   155,   156,     0,
      85,     0,     0,     0,    78,    80,    82,    84,     0,     0,
     148,   151,    30,     0,    68,     0,    76,   193,     0,    74,
      77,    41,     0,     0,    61,     0,    67,     0,     0,     0,
     104,   105,   102,   101,   103,   100,     0,    83,     0,     0,
       0,     0,     0,    85,    85,     0,   104,   105,   102,   101,
     103,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    33,    29,    26,    28,    27,     0,
      93,     0,     0,     0,     0,   161,    92,    62,    79,    81,
     139,   140,   141,     0,    94,   133,   136,    88,    91,    89,
      87,    90,    86,    98,    99,    95,   149,   150,   152,   153,
      67,     0,    72,    73,    75,     0,   162,   157,   159,   158,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     184,   185,   186,     0,    69,   178,   181,    43,     0,     0,
       0,     0,     0,     0,   146,   134,   135,   137,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    66,
     147,   142,   144,   143,   145,     0,     0,     0,     0,     0,
     191,     0,   179,   180,   182,   183,     0,     0,   192,   187,
     189,   188,   190,   169,   170,   171,     0,    70,   163,   166,
      64,    63,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   176,     0,   164,
     165,   167,   168,     0,   177,   172,   174,   173,   175,     0,
      65,     0,     0,    71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -360,  -360,   430,   432,   350,  -166,   -19,  -360,   -18,  -360,
    -360,   216,  -360,   231,   230,  -360,   421,   295,   267,  -360,
    -360,  -360,  -360,   269,  -360,  -360,  -360,  -360,  -360,   194,
    -360,  -360,  -360,   215,  -196,  -360,  -360,  -360,    22,   -22,
     285,  -360,   408,   -44,  -241,    27,  -360,  -198,    92,  -360,
    -359,   -40,  -360,  -298,     6,  -360,  -360
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    50,   165,    11,    18,    14,   166,
     167,   168,   169,    28,    29,    30,    72,    73,   225,   170,
     311,   367,   391,   171,   172,   258,   343,   386,   173,   218,
     219,   203,   204,   205,   206,   207,   208,   295,   236,    44,
      38,    39,    90,    91,   284,   285,   286,   209,   210,   211,
     377,   378,   379,   324,   325,   326,   220
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     192,    37,    31,   240,   237,   287,   288,   289,   290,   291,
     292,   293,   216,    51,    55,    97,    98,   385,   196,   197,
     198,   199,     1,    19,   200,   342,    20,     3,   399,   400,
      56,    57,    51,    56,    57,   294,    48,    49,   201,   217,
      58,     4,   315,   266,   100,   202,   362,   363,   279,   108,
      33,    34,    35,    56,    57,   296,   297,    59,    60,    33,
      34,    35,   224,   268,    42,    43,   120,    33,    34,    35,
      36,    33,    34,    35,   126,   335,   336,   145,   146,    36,
      13,    53,    54,    63,    64,   106,   107,    36,    33,    34,
      35,    36,    33,    34,    35,    33,    34,    35,    15,   196,
     197,   198,   118,   119,    56,    57,   124,   125,    36,   159,
      43,    67,    36,   238,   239,    36,    33,    34,    35,   201,
      45,    46,    17,   280,   281,   282,   320,   321,   322,    47,
     263,    43,    24,    25,    26,   184,    36,   313,   314,    21,
     340,   341,    23,   283,    22,   328,   323,   373,   374,   375,
      45,    46,    27,    33,    34,    35,    68,    69,    70,   264,
      32,   383,   384,    85,    86,    87,    40,   376,    93,    94,
      95,   226,   228,    36,    65,    66,    71,    24,   134,    26,
      24,   221,    26,    88,   280,   281,   282,    41,    96,   196,
     197,   198,   320,   321,   322,    80,    81,   135,    82,    83,
     222,   373,   374,   375,   283,   129,   130,    56,    57,   201,
      56,    57,   323,    52,    84,   109,   110,   133,    61,    56,
      57,   376,    56,    57,   241,   403,   144,  -112,  -112,   152,
     245,   252,    62,   117,    77,   300,   230,   231,   232,   233,
     234,   235,    79,   411,   246,   247,   248,   249,   250,   251,
     160,    99,   161,   162,   163,   164,     5,     6,     7,     8,
       5,     6,     7,  -113,  -113,  -114,  -114,   121,   122,   131,
     132,   140,   141,   142,   143,   148,   149,   150,   151,  -119,
    -119,   101,  -110,  -110,   185,    64,   105,  -111,  -111,  -120,
    -120,  -115,  -115,  -117,  -117,  -116,  -116,  -118,  -118,   253,
     254,   102,   255,   256,   271,   272,   273,   274,   305,    64,
     316,   317,   103,   318,   319,    56,    57,   330,   331,   332,
     333,   111,   344,   345,   123,   346,   347,   356,   357,   358,
     359,   387,   388,   393,   394,   389,   390,   395,   396,   136,
     137,    89,    89,    75,    76,   337,   338,   298,   299,   401,
     402,   104,   364,   365,   128,   113,   112,   139,   114,   115,
     116,   138,   147,   127,   186,   154,   153,   155,   156,   157,
     158,   212,   175,   174,   190,   176,   177,   215,   178,   191,
     180,   179,   193,   181,   182,   183,   187,   188,   189,   194,
     243,   195,   244,   257,   229,   242,   259,   269,   261,   260,
     270,    78,   262,   213,   275,   265,   267,   277,   329,   366,
     306,   276,   301,   307,   302,   303,   308,   348,   355,   309,
     310,   223,   312,   327,   334,   349,   339,   361,   350,   351,
     352,   353,   354,   360,   380,   392,   369,   368,    12,   370,
     371,   372,   409,    16,   382,   381,   397,   398,   410,   405,
     404,   406,   407,   408,   412,   304,   214,   413,   278,     0,
       0,   227,     0,     0,     0,    92,     0,    74
};

static const yytype_int16 yycheck[] =
{
     166,    23,    20,   201,   200,   246,   247,   248,   249,   250,
     251,    18,    15,    32,    36,    59,    60,   376,    15,    16,
      17,    18,     3,    37,    21,   323,    40,    33,   387,   388,
      29,    30,    51,    29,    30,    42,    31,    32,    35,    42,
      39,     0,   283,    39,    62,    42,   344,   345,   244,    71,
      15,    16,    17,    29,    30,   253,   254,    31,    32,    15,
      16,    17,    18,    39,    29,    30,    88,    15,    16,    17,
      35,    15,    16,    17,    96,   316,   317,   121,   122,    35,
      15,    29,    30,    16,    17,    29,    30,    35,    15,    16,
      17,    35,    15,    16,    17,    15,    16,    17,    34,    15,
      16,    17,    29,    30,    29,    30,    29,    30,    35,    29,
      30,    36,    35,    29,    30,    35,    15,    16,    17,    35,
      29,    30,    15,    15,    16,    17,    15,    16,    17,    38,
      29,    30,    15,    16,    17,   153,    35,    29,    30,    39,
      29,    30,    28,    35,     4,   311,    35,    15,    16,    17,
      29,    30,    35,    15,    16,    17,    15,    16,    17,    38,
      33,    29,    30,    15,    16,    17,    37,    35,    15,    16,
      17,   193,   194,    35,    16,    17,    35,    15,    16,    17,
      15,    16,    17,    35,    15,    16,    17,    38,    35,    15,
      16,    17,    15,    16,    17,    16,    17,    35,    16,    17,
      35,    15,    16,    17,    35,    16,    17,    29,    30,    35,
      29,    30,    35,    37,    36,    31,    32,    36,    16,    29,
      30,    35,    29,    30,   202,   391,    36,    31,    32,    36,
     208,   209,    40,    37,    34,   257,    22,    23,    24,    25,
      26,    27,    16,   409,    22,    23,    24,    25,    26,    27,
      10,    38,    12,    13,    14,    15,     6,     7,     8,     9,
       6,     7,     8,    31,    32,    31,    32,    31,    32,    16,
      17,    16,    17,    16,    17,    16,    17,    16,    17,    31,
      32,    36,    31,    32,    16,    17,    37,    31,    32,    31,
      32,    31,    32,    31,    32,    31,    32,    31,    32,    29,
      30,    36,    31,    32,    16,    17,    16,    17,    16,    17,
      29,    30,    36,    31,    32,    29,    30,    16,    17,    16,
      17,     5,    29,    30,    37,    31,    32,    16,    17,    16,
      17,    29,    30,    16,    17,    31,    32,    16,    17,   109,
     110,    56,    57,    48,    49,   318,   319,   255,   256,   389,
     390,    36,   346,   347,    16,    36,    38,    16,    36,    36,
      36,    33,    16,    38,    35,    38,    40,    36,    36,    36,
      36,    15,    36,    38,    37,    36,    36,    15,    36,    34,
      36,    38,    28,    36,    36,    36,    35,    35,    35,    28,
      20,    36,    19,    28,    37,    36,    36,    16,    40,    36,
      18,    51,    38,   187,    36,    39,    39,    33,    16,    11,
      38,    42,    41,    36,    39,    39,    36,    38,    16,    36,
      36,   190,    37,    36,    36,    34,    37,    41,    38,    36,
      36,    36,    36,    36,    33,    16,    36,    38,     8,    36,
      36,    36,    33,    11,    37,    39,    36,    36,    34,    36,
      38,    36,    36,    36,    34,   261,   187,    39,   243,    -1,
      -1,   194,    -1,    -1,    -1,    57,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    44,    33,     0,     6,     7,     8,     9,    45,
      46,    49,    45,    15,    51,    34,    46,    15,    50,    37,
      40,    39,     4,    28,    15,    16,    17,    35,    56,    57,
      58,    51,    33,    15,    16,    17,    35,    82,    83,    84,
      37,    38,    29,    30,    82,    29,    30,    38,    31,    32,
      47,    49,    37,    29,    30,    82,    29,    30,    39,    31,
      32,    16,    40,    16,    17,    16,    17,    36,    15,    16,
      17,    35,    59,    60,    59,    60,    60,    34,    47,    16,
      16,    17,    16,    17,    36,    15,    16,    17,    35,    83,
      85,    86,    85,    15,    16,    17,    35,    86,    86,    38,
      51,    36,    36,    36,    36,    37,    29,    30,    82,    31,
      32,     5,    38,    36,    36,    36,    36,    37,    29,    30,
      82,    31,    32,    37,    29,    30,    82,    38,    16,    16,
      17,    16,    17,    36,    16,    35,    57,    57,    33,    16,
      16,    17,    16,    17,    36,    86,    86,    16,    16,    17,
      16,    17,    36,    40,    38,    36,    36,    36,    36,    29,
      10,    12,    13,    14,    15,    48,    52,    53,    54,    55,
      62,    66,    67,    71,    38,    36,    36,    36,    36,    38,
      36,    36,    36,    36,    51,    16,    35,    35,    35,    35,
      37,    34,    48,    28,    28,    36,    15,    16,    17,    18,
      21,    35,    42,    74,    75,    76,    77,    78,    79,    90,
      91,    92,    15,    54,    66,    15,    15,    42,    72,    73,
      99,    16,    35,    56,    18,    61,    82,    61,    82,    37,
      22,    23,    24,    25,    26,    27,    81,    77,    29,    30,
      90,    81,    36,    20,    19,    81,    22,    23,    24,    25,
      26,    27,    81,    29,    30,    31,    32,    28,    68,    36,
      36,    40,    38,    29,    38,    39,    39,    39,    39,    16,
      18,    16,    17,    16,    17,    36,    42,    33,    76,    77,
      15,    16,    17,    35,    87,    88,    89,    87,    87,    87,
      87,    87,    87,    18,    42,    80,    90,    90,    91,    91,
      82,    41,    39,    39,    72,    16,    38,    36,    36,    36,
      36,    63,    37,    29,    30,    87,    29,    30,    31,    32,
      15,    16,    17,    35,    96,    97,    98,    36,    48,    16,
      16,    17,    16,    17,    36,    87,    87,    88,    88,    37,
      29,    30,    96,    69,    29,    30,    31,    32,    38,    34,
      38,    36,    36,    36,    36,    16,    16,    17,    16,    17,
      36,    41,    96,    96,    97,    97,    11,    64,    38,    36,
      36,    36,    36,    15,    16,    17,    35,    93,    94,    95,
      33,    39,    37,    29,    30,    93,    70,    29,    30,    31,
      32,    65,    16,    16,    17,    16,    17,    36,    36,    93,
      93,    94,    94,    48,    38,    36,    36,    36,    36,    33,
      34,    48,    34,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    47,    47,
      48,    48,    49,    49,    50,    51,    51,    51,    51,    51,
      51,    52,    52,    52,    52,    52,    53,    53,    53,    53,
      54,    55,    55,    55,    56,    56,    56,    57,    57,    57,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    61,    63,    62,    65,    64,    64,    66,    68,    69,
      70,    67,    71,    71,    72,    72,    73,    73,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    79,    80,    80,
      81,    81,    81,    81,    81,    81,    82,    82,    82,    83,
      83,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    85,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    87,    87,    87,    88,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    90,    90,
      90,    91,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    93,    94,    94,    94,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    97,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    12,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     3,     6,     1,     1,     4,     4,     3,     6,
       9,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       1,     4,     7,     4,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       3,     3,     1,     1,     1,     4,     4,     4,     4,     3,
       4,     1,     0,    10,     0,     5,     0,     3,     0,     0,
       0,    15,     5,     5,     1,     3,     1,     1,     1,     3,
       1,     3,     1,     2,     1,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     1,     1,     4,     4,     4,     4,     3,
       4,     1,     3,     3,     1,     1,     1,     4,     4,     4,
       4,     3,     4,     1,     3,     3,     1,     3,     3,     1,
       1,     1,     4,     4,     4,     4,     3,     4,     1,     3,
       3,     1,     3,     3,     1,     1,     1,     4,     4,     4,
       4,     3,     4,     1,     3,     3,     1,     3,     3,     1,
       1,     1,     4,     4,     4,     4,     3,     4,     1,     3,
       3,     1,     3,     3,     1,     1,     1,     4,     4,     4,
       4,     3,     4,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* type: INTEGER  */
#line 109 "syntaxic.y"
            {strcpy(sauvType,"INTEGER");}
#line 1492 "syntaxic.tab.c"
    break;

  case 4: /* type: FLOAT  */
#line 110 "syntaxic.y"
            {strcpy(sauvType,"FLOAT");}
#line 1498 "syntaxic.tab.c"
    break;

  case 5: /* type: CHAR  */
#line 111 "syntaxic.y"
            {strcpy(sauvType,"CHAR");}
#line 1504 "syntaxic.tab.c"
    break;

  case 12: /* declaration: type variable_list SEMICOLON  */
#line 134 "syntaxic.y"
                                 {
        //verification de la double declaration et insertion du type
        for(j=0;strcmp(saveIdf[j].idfTab,"")!=0;j++){
            if(verifdeclaration(saveIdf[j].idfTab)==0) insererType(sauvType,saveIdf[j].idfTab);
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[j].idfTab,nb_ligne);
            //createQuad("DECL", sauvType, "", saveIdf[j].idfTab);
            strcpy(saveIdf[j].idfTab,"");
        }  
        j=0;  
    }
#line 1519 "syntaxic.tab.c"
    break;

  case 13: /* declaration: CONST type cst EQUALS term SEMICOLON  */
#line 144 "syntaxic.y"
                                          {
    // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ((yyvsp[-1].real) - floor((yyvsp[-1].real)) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
        }
         
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[-1].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f", (yyvsp[-1].real));  // Convertir en flottant
        }
        // Ajout du quadruplet pour la déclaration d'une constante
        //createQuad("CONST", sauvType, saveStr, saveIdf[0].idfTab);
        insererVal(saveIdf[0].idfTab,saveStr);
        strcpy(saveIdf[0].idfTab,"");
    }
#line 1541 "syntaxic.tab.c"
    break;

  case 14: /* cst: IDENTIFIER  */
#line 164 "syntaxic.y"
              {
        strcpy(saveIdf[0].idfTab,(yyvsp[0].string));
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType((yyvsp[0].string)));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[0].idfTab,nb_ligne);
            
            
    }
#line 1555 "syntaxic.tab.c"
    break;

  case 15: /* variable_list: IDENTIFIER  */
#line 177 "syntaxic.y"
               {strcpy(saveIdf[j].idfTab,(yyvsp[0].string));j++;}
#line 1561 "syntaxic.tab.c"
    break;

  case 16: /* variable_list: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 178 "syntaxic.y"
                                             {strcpy(saveIdf[j].idfTab,(yyvsp[-3].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;
        if (atoi((yyvsp[-1].string)) == 0) {
            printf("Erreur semantique : La taille du tableau doit etre strictement positive\n");
        } 
        sprintf(buffer1, "%d", atoi((yyvsp[-1].string))-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[-3].string),"","");
        }
#line 1574 "syntaxic.tab.c"
    break;

  case 17: /* variable_list: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 186 "syntaxic.y"
                                          {strcpy(saveIdf[j].idfTab,(yyvsp[-3].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;

        sprintf(buffer1, "T%d", cpttemp-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[-3].string),"","");
         if (fmod(valind, 1.0) != 0.0) {
            printf("Erreur semantique : La taille du tableau doit etre un entier (pas un nombre réel)\n");
        }
        
        // Vérifier que le nombre est un entier positif
        if ((yyvsp[-1].real) < 1) {
            printf("Erreur semantique : La taille du tableau doit etre un entier strictement positif\n");
        }
        }
#line 1593 "syntaxic.tab.c"
    break;

  case 18: /* variable_list: IDENTIFIER COMMA variable_list  */
#line 200 "syntaxic.y"
                                      {strcpy(saveIdf[j].idfTab,(yyvsp[-2].string));j++;}
#line 1599 "syntaxic.tab.c"
    break;

  case 19: /* variable_list: IDENTIFIER LBRACKET INT_NUMBER RBRACKET COMMA variable_list  */
#line 201 "syntaxic.y"
                                                                   {strcpy(saveIdf[j].idfTab,(yyvsp[-5].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;}
#line 1605 "syntaxic.tab.c"
    break;

  case 20: /* variable_list: IDENTIFIER LBRACKET LPAREN PLUS INT_NUMBER RPAREN RBRACKET COMMA variable_list  */
#line 202 "syntaxic.y"
                                                                                      {strcpy(saveIdf[j].idfTab,(yyvsp[-8].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;}
#line 1611 "syntaxic.tab.c"
    break;

  case 26: /* assignment: MDROIT EQUALS term SEMICOLON  */
#line 225 "syntaxic.y"
                                 {
        // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ((yyvsp[-1].real) - floor((yyvsp[-1].real)) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
        }   
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[-1].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f",(yyvsp[-1].real));  // Convertir en flottant
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    }
#line 1632 "syntaxic.tab.c"
    break;

  case 27: /* assignment: TAB EQUALS term SEMICOLON  */
#line 241 "syntaxic.y"
                               {
        // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ((yyvsp[-1].real) - floor((yyvsp[-1].real)) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
        }   
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[-1].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f",(yyvsp[-1].real));  // Convertir en flottant
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    }
#line 1653 "syntaxic.tab.c"
    break;

  case 28: /* assignment: TAB EQUALS EXPRESSION_CHAR SEMICOLON  */
#line 257 "syntaxic.y"
                                         {
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    }
#line 1663 "syntaxic.tab.c"
    break;

  case 29: /* assignment: MDROIT EQUALS EXPRESSION_CHAR SEMICOLON  */
#line 262 "syntaxic.y"
                                            {
        
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    }
#line 1674 "syntaxic.tab.c"
    break;

  case 30: /* MDROIT: IDENTIFIER  */
#line 271 "syntaxic.y"
               {
    // Vérification de la déclaration de la variable avant usage
    if (verifdeclaration((yyvsp[0].string)) == 0) {
        printf("Erreur sémantique : La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
    } else if(strcmp(getCode((yyvsp[0].string)),"IDF TAB")==0){
        printf("Erreur sémantique : La variable '%s' est un tableau.\n", (yyvsp[0].string));

        strcpy(typeG, getType((yyvsp[0].string)));  // Récupérer le type de la variable à gauche
        printf("type: %s", typeG);
        if (comparCode((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique à la ligne %d : affectation d'une constante\n", nb_ligne);
        } else {
            strcpy(mDroit, (yyvsp[0].string));
        }
        
    }
    else{
        strcpy(typeG, getType((yyvsp[0].string)));  // Récupérer le type de la variable à gauche
        printf("type: %s", typeG);
        if (comparCode((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique à la ligne %d : affectation d'une constante\n", nb_ligne);
        } else {
            strcpy(mDroit, (yyvsp[0].string));
        }
    }
    }
#line 1705 "syntaxic.tab.c"
    break;

  case 31: /* TAB: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 299 "syntaxic.y"
                                              {if(verifdeclaration((yyvsp[-3].string))==0 )
                    {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",(yyvsp[-3].string),nb_ligne);}
                    else if(strcmp(getCode((yyvsp[-3].string)),"IDF")==0){
                        printf("Erreur sémantique : La variable '%s' est n'est pasm un tableau.\n", (yyvsp[-3].string));
                        strcpy(typeG, getType((yyvsp[-3].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[-3].string)));

                    } 
                      
                        strcpy(mDroit,(yyvsp[-3].string));
                        temp=newtemp();
                        strcpy(temp,(yyvsp[-3].string));
                        strcpy(tmp,(yyvsp[-3].string));
                        strcat(tmp,"[");
                        sprintf(buffer2,"%d",atoi((yyvsp[-1].string)));
                        strcat(tmp,buffer2);
                        strcat(tmp,"]");
                    
                       
                    }
#line 1732 "syntaxic.tab.c"
    break;

  case 32: /* TAB: IDENTIFIER LBRACKET LPAREN PLUS INT_NUMBER RPAREN RBRACKET  */
#line 323 "syntaxic.y"
                                                                 {
                if(verifdeclaration((yyvsp[-6].string))==0 )
                  {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",(yyvsp[-6].string),nb_ligne);}
                  else if(strcmp(getCode((yyvsp[-6].string)),"IDF")==0){
                        printf("Erreur sémantique : La variable '%s' est n'est pas un tableau.\n", (yyvsp[-6].string));
                        strcpy(typeG, getType((yyvsp[-6].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[-6].string)));

                    }  
    }
#line 1749 "syntaxic.tab.c"
    break;

  case 33: /* TAB: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 335 "syntaxic.y"
                                            {printf("la valeur de l'indice est %f \n",(yyvsp[-1].real));
                    if(verifdeclaration((yyvsp[-3].string))==0 )
                    {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",(yyvsp[-3].string),nb_ligne);}
                    else if(strcmp(getCode((yyvsp[-3].string)),"IDF")==0){
                        printf("Erreur semantique : La variable '%s' est n'est pasm un tableau.\n", (yyvsp[-3].string));
                        strcpy(typeG, getType((yyvsp[-3].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[-3].string)));

                    }  
                    // Vérifier si le nombre a une partie fractionnelle
                    if (fmod(valind, 1.0) != 0.0) {
                        printf("Erreur semantique : L'indice du tableau doit etre un entier (pas un nombre reel)\n");
                    }
                    
                    // Vérifier que le nombre est un entier positif
                    if ((yyvsp[-1].real) < 0) {
                        printf("Erreur semantique : L'indice du tableau doit être un entier positif\n");
                    }
                    
        
                        strcpy(mDroit,(yyvsp[-3].string));
                        temp=newtemp();
                        strcpy(temp,(yyvsp[-3].string));
                        strcpy(tmp,(yyvsp[-3].string));
                        strcat(tmp,"[");
                        temp1=newtemp();
                        sprintf(buffer2,"T%d",cpttemp-1);
                        strcat(tmp,buffer2);
                        strcat(tmp,"]");
                       
                    }
#line 1787 "syntaxic.tab.c"
    break;

  case 35: /* termtab: termtab PLUS factorDtab  */
#line 372 "syntaxic.y"
                              {
        //existop++;
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        valind=t;
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        createQuad("+", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    }
#line 1807 "syntaxic.tab.c"
    break;

  case 36: /* termtab: termtab MINUS factorDtab  */
#line 387 "syntaxic.y"
                               {
        existop++;
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        valind=t;
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;
    }
#line 1825 "syntaxic.tab.c"
    break;

  case 38: /* factortab: factortab MULTIPLY primaryDtab  */
#line 405 "syntaxic.y"
                                     { 
        existop++;
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        valind=t;
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    }
#line 1844 "syntaxic.tab.c"
    break;

  case 39: /* factortab: factortab DIVIDE primaryDtab  */
#line 419 "syntaxic.y"
                                       { 
        if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
        valind=t;
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
}
#line 1864 "syntaxic.tab.c"
    break;

  case 40: /* primarytab: IDENTIFIER  */
#line 438 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                                strcpy(valIdf,getVal((yyvsp[0].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,(yyvsp[0].string));
                                 //exit(EXIT_FAILURE);
                                 }
                                 else{
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[0].string));
                                  strcpy(buffer1,(yyvsp[0].string));
                                 }
                             }
    }
#line 1885 "syntaxic.tab.c"
    break;

  case 41: /* primarytab: INT_NUMBER  */
#line 454 "syntaxic.y"
                 {
                   (yyval.real)=atof((yyvsp[0].string));
                  strcpy(saveStrq,(yyvsp[0].string));
                  strcpy(buffer1,(yyvsp[0].string));
                  
    }
#line 1896 "syntaxic.tab.c"
    break;

  case 42: /* primarytab: FLOAT_NUMBER  */
#line 460 "syntaxic.y"
                  {  
                   (yyval.real)=atof((yyvsp[0].string)); 
                   strcpy(saveStrq,(yyvsp[0].string));
                   strcpy(buffer1,(yyvsp[0].string));
    }
#line 1906 "syntaxic.tab.c"
    break;

  case 43: /* primarytab: LPAREN PLUS INT_NUMBER RPAREN  */
#line 465 "syntaxic.y"
                                  {
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(saveStrq,(yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        
    }
#line 1917 "syntaxic.tab.c"
    break;

  case 44: /* primarytab: LPAREN MINUS INT_NUMBER RPAREN  */
#line 471 "syntaxic.y"
                                   {
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(saveStrq, saveS);
                strcpy(buffer1, saveS);

    }
#line 1930 "syntaxic.tab.c"
    break;

  case 45: /* primarytab: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 479 "syntaxic.y"
                                      {(yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(saveStrq,(yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      
                   }
#line 1940 "syntaxic.tab.c"
    break;

  case 46: /* primarytab: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 484 "syntaxic.y"
                                       {
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(saveStrq, saveS);
                                           strcpy(buffer1, saveS);
                                       
    }
#line 1952 "syntaxic.tab.c"
    break;

  case 47: /* primarytab: LPAREN term RPAREN  */
#line 491 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-1].real);}
#line 1958 "syntaxic.tab.c"
    break;

  case 48: /* primarytab: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 492 "syntaxic.y"
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
                            
                }
#line 1967 "syntaxic.tab.c"
    break;

  case 50: /* factorDtab: primaryDtab MULTIPLY factortab  */
#line 499 "syntaxic.y"
                                     { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    }
#line 1985 "syntaxic.tab.c"
    break;

  case 51: /* factorDtab: primaryDtab DIVIDE factortab  */
#line 512 "syntaxic.y"
                                       { 
        if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);     
        
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
}
#line 2005 "syntaxic.tab.c"
    break;

  case 52: /* primaryDtab: IDENTIFIER  */
#line 531 "syntaxic.y"
               {
        nbop++;
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                                strcpy(valIdf,getVal((yyvsp[0].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,(yyvsp[0].string));}
                                 else{
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[0].string));
                                  strcpy(buffer2,(yyvsp[0].string));
                                  if(nbop>=2){
                                    temp=newtemp();
                                    sprintf(temp,"T%d",cpttemp-1);
                                    strcpy(buffer1,temp);} 
                                 }    
                             }                  

    }
#line 2030 "syntaxic.tab.c"
    break;

  case 53: /* primaryDtab: INT_NUMBER  */
#line 551 "syntaxic.y"
                 {nbop++;
                  (yyval.real)=atof((yyvsp[0].string));
                  strcpy(saveStrq,(yyvsp[0].string));
                  strcpy(buffer2,(yyvsp[0].string));
                  if(nbop>=2){
                    temp=newtemp();
                    sprintf(temp,"T%d",cpttemp-1);
                    strcpy(buffer1,temp);}
                  
    }
#line 2045 "syntaxic.tab.c"
    break;

  case 54: /* primaryDtab: FLOAT_NUMBER  */
#line 561 "syntaxic.y"
                  { nbop++;
                   (yyval.real)=atof((yyvsp[0].string)); 
                   strcpy(saveStrq,(yyvsp[0].string));
                   strcpy(buffer2,(yyvsp[0].string));
                   if(nbop>=2){
                    temp=newtemp();
                    sprintf(temp,"T%d",cpttemp-1);
                    strcpy(buffer1,temp);}
                   }
#line 2059 "syntaxic.tab.c"
    break;

  case 55: /* primaryDtab: LPAREN PLUS INT_NUMBER RPAREN  */
#line 570 "syntaxic.y"
                                  {
        nbop++;
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(saveStrq,(yyvsp[-1].string));
        strcpy(buffer2,(yyvsp[-1].string));
        if(nbop>=2)
        {
        temp=newtemp();
        sprintf(temp,"T%d",cpttemp-1);
        strcpy(buffer1,temp);
        }
    }
#line 2076 "syntaxic.tab.c"
    break;

  case 56: /* primaryDtab: LPAREN MINUS INT_NUMBER RPAREN  */
#line 583 "syntaxic.y"
                                   {
        nbop++;
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(saveStrq, saveS);
                strcpy(buffer2, saveS);
                if(nbop>=2){
                    temp=newtemp();
                    sprintf(temp,"T%d",cpttemp-1);
                    strcpy(buffer1,temp);}
                   
       }
#line 2094 "syntaxic.tab.c"
    break;

  case 57: /* primaryDtab: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 597 "syntaxic.y"
                                      {nbop++;
                                    (yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(saveStrq,(yyvsp[-1].string));
                                        strcpy(buffer2,(yyvsp[-1].string));
                                        if(nbop>=2)
                                        {
                                        temp=newtemp();
                                        sprintf(temp,"T%d",cpttemp-1);
                                        strcpy(buffer1,temp);}
                                        
        }
#line 2110 "syntaxic.tab.c"
    break;

  case 58: /* primaryDtab: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 609 "syntaxic.y"
                                       {nbop++;
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(saveStrq, saveS);
                                            strcpy(buffer2, saveS);
                                            if(nbop>=2){
                                                temp=newtemp();
                                                sprintf(temp,"T%d",cpttemp-1);
                                                strcpy(buffer1,temp);}
                                                                            
    }
#line 2126 "syntaxic.tab.c"
    break;

  case 59: /* primaryDtab: LPAREN term RPAREN  */
#line 620 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-1].real); }
#line 2132 "syntaxic.tab.c"
    break;

  case 60: /* primaryDtab: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 621 "syntaxic.y"
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                    strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer2,"%d",atoi((yyvsp[-1].string)));
                                    strcat(tmp,buffer2);
                                    strcat(tmp,"]");
                                    strcpy(saveStrq,tmp);
                                    strcpy(buffer2,tmp);
                                    if(nbop>=2){
                                        temp=newtemp();
                                        sprintf(temp,"T%d",cpttemp-1);
                                        strcpy(buffer1,temp);} 
                                    }
                }
#line 2154 "syntaxic.tab.c"
    break;

  case 61: /* EXPRESSION_CHAR: CHARACTERE  */
#line 640 "syntaxic.y"
                            {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[0].string));}
                            strcpy(saveStrq,(yyvsp[0].string));
                            sprintf(saveStr, "%s",(yyvsp[0].string)); 
                           }
#line 2165 "syntaxic.tab.c"
    break;

  case 62: /* $@1: %empty  */
#line 689 "syntaxic.y"
                                   {
          createQuad("BZ","",QuadR[qc-1].res,"");
          empiler_Int(&pile1,qc-1);
        }
#line 2174 "syntaxic.tab.c"
    break;

  case 63: /* condition: IF LPAREN COND RPAREN LBRACE $@1 instruction_section RBRACE elsebloc SEMICOLON  */
#line 693 "syntaxic.y"
                                                     {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        }
#line 2182 "syntaxic.tab.c"
    break;

  case 64: /* $@2: %empty  */
#line 697 "syntaxic.y"
                      {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
        empiler_Int(&pile1,qc);
        createQuad("BR","","","");
        }
#line 2192 "syntaxic.tab.c"
    break;

  case 67: /* assignment_int: MDROIT EQUALS term  */
#line 706 "syntaxic.y"
                       {
        // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ((yyvsp[0].real) - floor((yyvsp[0].real)) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
        }
        
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);
        }else{
            //sprintf(saveStr, "%d", (int)$3); 
            createQuad("=", saveStrq, "",mDroit);
        
        }
    }
#line 2212 "syntaxic.tab.c"
    break;

  case 68: /* $@3: %empty  */
#line 724 "syntaxic.y"
                              {
        // Initialisation
       // $$ = atoi($3); // Capturer la variable assignée
        empiler_Int(&pile1, qc);
        empiler_Int(&pile2, qc);
    }
#line 2223 "syntaxic.tab.c"
    break;

  case 69: /* $@4: %empty  */
#line 730 "syntaxic.y"
                {
        //$$ = atoi($6); // Capturer le pas
    }
#line 2231 "syntaxic.tab.c"
    break;

  case 70: /* $@5: %empty  */
#line 733 "syntaxic.y"
                {
        //char *cond_var = atoi($7); // Capturer la condition d'arrêt
        createQuad("BG", "", mDroit, brnsup); 
        strcpy(cptfor,mDroit);
    }
#line 2241 "syntaxic.tab.c"
    break;

  case 71: /* loop: FOR LPAREN assignment_int $@3 COLON term3 $@4 COLON term4 $@5 RPAREN LBRACE instruction_section RBRACE SEMICOLON  */
#line 738 "syntaxic.y"
                                                       {
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);    
        cpttemp++;    
        createQuad("+", cptfor, pasfor, temp); 
        createQuad("=", temp, "", cptfor); 
        createQuad("BR", ToSTR(atoi(depiler(&pile1))), "", "");
        QuadR[atoi(depiler(&pile2))].opd1=ToSTR(qc);
        //createQuad("END", "", "", "");
    }
#line 2256 "syntaxic.tab.c"
    break;

  case 72: /* io_statement: READ LPAREN IDENTIFIER RPAREN SEMICOLON  */
#line 757 "syntaxic.y"
                                           {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[-2].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[-2].string));
        }
    }
#line 2267 "syntaxic.tab.c"
    break;

  case 76: /* io_expr: IDENTIFIER  */
#line 774 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }
    }
#line 2278 "syntaxic.tab.c"
    break;

  case 79: /* OR_EXPR: OR_EXPR OR AND_EXPR  */
#line 819 "syntaxic.y"
    {
        temp = newtemp();
        sprintf(temp, "T%d", cpttemp);
        if(firstAND==0){firstAND=cpttemp;}
        if(firstAND!=0){
        sprintf(valcond1, "T%d", firstAND);
        }else{
            sprintf(valcond1, "T%d", cpttemp - 2);
        }
        sprintf(valcond2, "T%d", cpttemp - 1);
        createQuadL(2, valcond1, valcond2, temp);
        cpttemp++;
        firstAND=0;
    }
#line 2297 "syntaxic.tab.c"
    break;

  case 81: /* AND_EXPR: AND_EXPR AND NOT_EXPR  */
#line 838 "syntaxic.y"
    {
        temp = newtemp();
        sprintf(temp, "T%d", cpttemp);
        sprintf(valcond1, "T%d", cpttemp - 2);
        sprintf(valcond2, "T%d", cpttemp - 1);
        createQuadL(3, valcond1, valcond2, temp);
        if(firstAND==0){firstAND=cpttemp;}
        cpttemp++;
    }
#line 2311 "syntaxic.tab.c"
    break;

  case 83: /* NOT_EXPR: NOT NOT_EXPR  */
#line 852 "syntaxic.y"
    {
        temp = newtemp();
        sprintf(temp, "T%d", cpttemp);
        sprintf(valcond1, "T%d", cpttemp - 1);
        createQuadL(1, valcond1, "", temp);
        cpttemp++;
    }
#line 2323 "syntaxic.tab.c"
    break;

  case 86: /* comparison_expr: term2 GT term1  */
#line 867 "syntaxic.y"
    {
         char* temp=newtemp();
         sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(6,buffer1,buffer2,temp);
    }
#line 2334 "syntaxic.tab.c"
    break;

  case 87: /* comparison_expr: term2 LT term1  */
#line 873 "syntaxic.y"
                    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(5,buffer1,buffer2,temp);
    }
#line 2345 "syntaxic.tab.c"
    break;

  case 88: /* comparison_expr: term2 EQ term1  */
#line 879 "syntaxic.y"
                   {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(1,buffer1,buffer2,temp);
    }
#line 2356 "syntaxic.tab.c"
    break;

  case 89: /* comparison_expr: term2 GEQ term1  */
#line 885 "syntaxic.y"
                    {
       char* temp=newtemp();
       sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(3,buffer1,buffer2,temp);
    }
#line 2367 "syntaxic.tab.c"
    break;

  case 90: /* comparison_expr: term2 LEQ term1  */
#line 891 "syntaxic.y"
                    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(4,buffer1,buffer2,temp);
    }
#line 2378 "syntaxic.tab.c"
    break;

  case 91: /* comparison_expr: term2 NEQ term1  */
#line 897 "syntaxic.y"
                    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(2,buffer1,buffer2,temp);
    }
#line 2389 "syntaxic.tab.c"
    break;

  case 92: /* comparison_expr: STRING_LITERAL OP_COMP STRING_LITERAL  */
#line 903 "syntaxic.y"
                                          {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(nb_op,(yyvsp[-2].string),(yyvsp[0].string),temp);
    }
#line 2400 "syntaxic.tab.c"
    break;

  case 93: /* comparison_expr: CHARACTERE OP_COMP CHARACTERE  */
#line 909 "syntaxic.y"
                                   {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
       createQuadA(nb_op,(yyvsp[-2].string),(yyvsp[0].string),temp);
    }
#line 2411 "syntaxic.tab.c"
    break;

  case 94: /* comparison_expr: DROIT OP_COMP term1  */
#line 915 "syntaxic.y"
                         {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);}
#line 2417 "syntaxic.tab.c"
    break;

  case 95: /* comparison_expr: term2 OP_COMP GAUCHE  */
#line 916 "syntaxic.y"
                          {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);}
#line 2423 "syntaxic.tab.c"
    break;

  case 100: /* OP_COMP: GT  */
#line 930 "syntaxic.y"
        {nb_op=6;}
#line 2429 "syntaxic.tab.c"
    break;

  case 101: /* OP_COMP: LT  */
#line 931 "syntaxic.y"
        {nb_op=5;}
#line 2435 "syntaxic.tab.c"
    break;

  case 102: /* OP_COMP: GEQ  */
#line 932 "syntaxic.y"
          {nb_op=3;}
#line 2441 "syntaxic.tab.c"
    break;

  case 103: /* OP_COMP: LEQ  */
#line 933 "syntaxic.y"
          {nb_op=4;}
#line 2447 "syntaxic.tab.c"
    break;

  case 104: /* OP_COMP: EQ  */
#line 934 "syntaxic.y"
        {nb_op=1;}
#line 2453 "syntaxic.tab.c"
    break;

  case 105: /* OP_COMP: NEQ  */
#line 935 "syntaxic.y"
         {nb_op=2;}
#line 2459 "syntaxic.tab.c"
    break;

  case 107: /* term: term PLUS factorD  */
#line 1147 "syntaxic.y"
                        {
        //existop++;
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        /*
        if(existop>1){
        temp1 = newtemp(); 
        sprintf(temp1,"T%d",cpttemp-2);
        temp2 = newtemp(); 
        sprintf(temp2,"T%d",cpttemp-1);
        sprintf(buffer1,"%s",temp1);
        sprintf(buffer2,"%s",temp2);
        }
        */
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        createQuad("+", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        

    }
#line 2488 "syntaxic.tab.c"
    break;

  case 108: /* term: term MINUS factorD  */
#line 1171 "syntaxic.y"
                         {
        existop++;
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("-", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;
    }
#line 2506 "syntaxic.tab.c"
    break;

  case 110: /* factor: factor MULTIPLY primaryD  */
#line 1189 "syntaxic.y"
                               { 
        existop++;
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);

        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    }
#line 2525 "syntaxic.tab.c"
    break;

  case 111: /* factor: factor DIVIDE primaryD  */
#line 1203 "syntaxic.y"
                                 { 
        if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);  
    
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
}
#line 2545 "syntaxic.tab.c"
    break;

  case 112: /* primary: IDENTIFIER  */
#line 1222 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);}
                                strcpy(valIdf,getVal((yyvsp[0].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,(yyvsp[0].string));}
                                 else
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[0].string));
                                  strcpy(buffer1,(yyvsp[0].string));
                                  
                             }
    }
#line 2565 "syntaxic.tab.c"
    break;

  case 113: /* primary: INT_NUMBER  */
#line 1237 "syntaxic.y"
                 {
        printf("here %s\n",typeG);
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
                  strcpy(saveStrq,(yyvsp[0].string));
                  strcpy(buffer1,(yyvsp[0].string));
                  
    }
#line 2578 "syntaxic.tab.c"
    break;

  case 114: /* primary: FLOAT_NUMBER  */
#line 1245 "syntaxic.y"
                  {        printf("here 2 %s\n",typeG);

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); }  
                   strcpy(saveStrq,(yyvsp[0].string));
                   strcpy(buffer1,(yyvsp[0].string));
                   }
#line 2592 "syntaxic.tab.c"
    break;

  case 115: /* primary: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1254 "syntaxic.y"
                                  {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));
        strcpy(saveStrq,(yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        }
    }
#line 2605 "syntaxic.tab.c"
    break;

  case 116: /* primary: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1262 "syntaxic.y"
                                   {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(saveStrq, saveS);
                strcpy(buffer1, saveS);
            }
    }
#line 2621 "syntaxic.tab.c"
    break;

  case 117: /* primary: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1273 "syntaxic.y"
                                      {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
                                      else{(yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(saveStrq,(yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      }
                   }
#line 2633 "syntaxic.tab.c"
    break;

  case 118: /* primary: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1280 "syntaxic.y"
                                       {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(saveStrq, saveS);
                                           strcpy(buffer1, saveS);
                                       }
    }
#line 2648 "syntaxic.tab.c"
    break;

  case 119: /* primary: LPAREN term RPAREN  */
#line 1290 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-1].real);}
#line 2654 "syntaxic.tab.c"
    break;

  case 120: /* primary: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1291 "syntaxic.y"
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                }
#line 2666 "syntaxic.tab.c"
    break;

  case 122: /* factorD: factor MULTIPLY primaryD  */
#line 1301 "syntaxic.y"
                               { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;

    }
#line 2684 "syntaxic.tab.c"
    break;

  case 123: /* factorD: factor DIVIDE primaryD  */
#line 1314 "syntaxic.y"
                                 { 
        if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);     
        
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        strcpy(saveStrq,temp);
        cpttemp++;
        }
}
#line 2704 "syntaxic.tab.c"
    break;

  case 124: /* primaryD: IDENTIFIER  */
#line 1333 "syntaxic.y"
               {
        nbop++;
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);}
                                strcpy(valIdf,getVal((yyvsp[0].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,(yyvsp[0].string));}
                                 else
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[0].string));
                                  strcpy(buffer2,(yyvsp[0].string));
                                  if(nbop>=2){
                                    temp=newtemp();
                                    sprintf(temp,"T%d",cpttemp-1);
                                    strcpy(buffer1,temp);}     
                             }                  

    }
#line 2729 "syntaxic.tab.c"
    break;

  case 125: /* primaryD: INT_NUMBER  */
#line 1353 "syntaxic.y"
                 {nbop++;
        printf("here %s\n",typeG);
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
                  strcpy(saveStrq,(yyvsp[0].string));
                  strcpy(buffer2,(yyvsp[0].string));
                  if(nbop>=2){
                    temp=newtemp();
                    sprintf(temp,"T%d",cpttemp-1);
                    strcpy(buffer1,temp);}
                  
    }
#line 2746 "syntaxic.tab.c"
    break;

  case 126: /* primaryD: FLOAT_NUMBER  */
#line 1365 "syntaxic.y"
                  { nbop++;
               printf("here 2 %s\n",typeG);

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); }  
                   strcpy(saveStrq,(yyvsp[0].string));
                   strcpy(buffer2,(yyvsp[0].string));
                   if(nbop>=2){
                    temp=newtemp();
                    sprintf(temp,"T%d",cpttemp-1);
                    strcpy(buffer1,temp);}
                   }
#line 2765 "syntaxic.tab.c"
    break;

  case 127: /* primaryD: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1379 "syntaxic.y"
                                  {
        nbop++;
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));
        strcpy(saveStrq,(yyvsp[-1].string));
        strcpy(buffer2,(yyvsp[-1].string));
        if(nbop>=2)
        {
        temp=newtemp();
        sprintf(temp,"T%d",cpttemp-1);
        strcpy(buffer1,temp);}
        }
    }
#line 2784 "syntaxic.tab.c"
    break;

  case 128: /* primaryD: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1394 "syntaxic.y"
                                   {
        nbop++;
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(saveStrq, saveS);
                strcpy(buffer2, saveS);
                if(nbop>=2){
                    temp=newtemp();
                    sprintf(temp,"T%d",cpttemp-1);
                    strcpy(buffer1,temp);}
                   }
       }
#line 2805 "syntaxic.tab.c"
    break;

  case 129: /* primaryD: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1411 "syntaxic.y"
                                      {nbop++;
                                    if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
                                      else{(yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(saveStrq,(yyvsp[-1].string));
                                        strcpy(buffer2,(yyvsp[-1].string));
                                        if(nbop>=2)
                                        {
                                        temp=newtemp();
                                        sprintf(temp,"T%d",cpttemp-1);
                                        strcpy(buffer1,temp);}
                                        }
        }
#line 2823 "syntaxic.tab.c"
    break;

  case 130: /* primaryD: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1425 "syntaxic.y"
                                       {nbop++;
                                      if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(saveStrq, saveS);
                                            strcpy(buffer2, saveS);
                                            if(nbop>=2){
                                                temp=newtemp();
                                                sprintf(temp,"T%d",cpttemp-1);
                                                strcpy(buffer1,temp);}
                                            }                                  
    }
#line 2842 "syntaxic.tab.c"
    break;

  case 131: /* primaryD: LPAREN term RPAREN  */
#line 1439 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-1].real); }
#line 2848 "syntaxic.tab.c"
    break;

  case 132: /* primaryD: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1440 "syntaxic.y"
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                    strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer2,"%d",atoi((yyvsp[-1].string)));
                                    strcat(tmp,buffer2);
                                    strcat(tmp,"]");
                                    strcpy(saveStrq,tmp);
                                    strcpy(buffer2,tmp);
                                    if(nbop>=2){
                                        temp=newtemp();
                                        sprintf(temp,"T%d",cpttemp-1);
                                        strcpy(buffer1,temp);} 
                                    }
                }
#line 2871 "syntaxic.tab.c"
    break;

  case 134: /* term1: factor1 PLUS term1  */
#line 1461 "syntaxic.y"
                         {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real));  
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        createQuad("+", buffer1, buffer2, temp);
        cpttemp++;
        
    }
#line 2895 "syntaxic.tab.c"
    break;

  case 135: /* term1: factor1 MINUS term1  */
#line 1480 "syntaxic.y"
                          {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("-", buffer1, buffer2, temp);
        cpttemp++;
    }
#line 2917 "syntaxic.tab.c"
    break;

  case 137: /* factor1: primary1 MULTIPLY factor1  */
#line 1502 "syntaxic.y"
                                {
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        temp = newtemp();  // Génère un identifiant temporaire
       
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        cpttemp++;
    }
#line 2940 "syntaxic.tab.c"
    break;

  case 138: /* factor1: primary1 DIVIDE factor1  */
#line 1520 "syntaxic.y"
                                  { 
        if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        temp = newtemp();  // Génère un identifiant temporaire
        
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        cpttemp++;  
        }
    }
#line 2967 "syntaxic.tab.c"
    break;

  case 139: /* primary1: IDENTIFIER  */
#line 1546 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeG,getType((yyvsp[0].string)) );
                             if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0) ) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);}
                                strcpy(valIdf,getVal((yyvsp[0].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,(yyvsp[0].string));}
                                 else
                                  (yyval.real)=atof(valIdf);
                             }
        sprintf(buffer2, "%s", (yyvsp[0].string));
    }
#line 2985 "syntaxic.tab.c"
    break;

  case 140: /* primary1: INT_NUMBER  */
#line 1559 "syntaxic.y"
                 {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
        sprintf(buffer2, "%d",atoi((yyvsp[0].string)));
                  
    }
#line 2997 "syntaxic.tab.c"
    break;

  case 141: /* primary1: FLOAT_NUMBER  */
#line 1566 "syntaxic.y"
                  {        printf("here 2 %s\n",typeG);
                    strcpy(typeG,"FLOAT");
                    if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); } 
                   sprintf(buffer2, "%f", (yyvsp[0].string)); 
                   }
#line 3010 "syntaxic.tab.c"
    break;

  case 142: /* primary1: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1574 "syntaxic.y"
                                  {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));}
    }
#line 3021 "syntaxic.tab.c"
    break;

  case 143: /* primary1: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1580 "syntaxic.y"
                                   {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);}
    }
#line 3034 "syntaxic.tab.c"
    break;

  case 144: /* primary1: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1588 "syntaxic.y"
                                      {
        strcpy(typeG,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));}
                   }
#line 3045 "syntaxic.tab.c"
    break;

  case 145: /* primary1: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1594 "syntaxic.y"
                                       {
        strcpy(typeG,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                       }
    }
#line 3059 "syntaxic.tab.c"
    break;

  case 146: /* primary1: LPAREN term1 RPAREN  */
#line 1603 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3065 "syntaxic.tab.c"
    break;

  case 147: /* primary1: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1604 "syntaxic.y"
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
                                else {
                                    strcpy(typeG,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                }
#line 3077 "syntaxic.tab.c"
    break;

  case 149: /* term2: factor2 PLUS term2  */
#line 1614 "syntaxic.y"
                         {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real));  
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        createQuad("+", buffer1, buffer2, temp);
        cpttemp++;
        
    }
#line 3101 "syntaxic.tab.c"
    break;

  case 150: /* term2: factor2 MINUS term2  */
#line 1633 "syntaxic.y"
                          {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("-", buffer1, buffer2, temp);
        cpttemp++;
    }
#line 3124 "syntaxic.tab.c"
    break;

  case 152: /* factor2: primary2 MULTIPLY factor2  */
#line 1656 "syntaxic.y"
                                {
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        temp = newtemp();  // Génère un identifiant temporaire
       
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        cpttemp++;
    }
#line 3148 "syntaxic.tab.c"
    break;

  case 153: /* factor2: primary2 DIVIDE factor2  */
#line 1675 "syntaxic.y"
                                  { 
        if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        cpttemp++; 
        }
}
#line 3174 "syntaxic.tab.c"
    break;

  case 154: /* primary2: IDENTIFIER  */
#line 1700 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)));}
        sprintf(buffer1, "%s", (yyvsp[0].string));
    }
#line 3186 "syntaxic.tab.c"
    break;

  case 155: /* primary2: INT_NUMBER  */
#line 1707 "syntaxic.y"
                 {
        strcpy(typeD,"INTEGER");
        sprintf(buffer1, "%d", atoi((yyvsp[0].string)));
                  
    }
#line 3196 "syntaxic.tab.c"
    break;

  case 156: /* primary2: FLOAT_NUMBER  */
#line 1712 "syntaxic.y"
                  {
        strcpy(typeD,"FLOAT");
        sprintf(buffer1, "%f", (yyvsp[0].string));
    }
#line 3205 "syntaxic.tab.c"
    break;

  case 157: /* primary2: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1716 "syntaxic.y"
                                  {
        strcpy(typeD,"INTEGER");
    }
#line 3213 "syntaxic.tab.c"
    break;

  case 158: /* primary2: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1719 "syntaxic.y"
                                   {
        strcpy(typeD,"INTEGER");
    }
#line 3221 "syntaxic.tab.c"
    break;

  case 159: /* primary2: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1722 "syntaxic.y"
                                      {
        strcmp(typeD,"FLOAT");
                   }
#line 3229 "syntaxic.tab.c"
    break;

  case 160: /* primary2: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1725 "syntaxic.y"
                                       {
        strcpy(typeD,"FLOAT");
    }
#line 3237 "syntaxic.tab.c"
    break;

  case 161: /* primary2: LPAREN term2 RPAREN  */
#line 1728 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3243 "syntaxic.tab.c"
    break;

  case 162: /* primary2: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1729 "syntaxic.y"
                                             {
        if(verifdeclaration((yyvsp[-3].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
        else {
                strcpy(typeG,getType((yyvsp[-3].string)));
                }
    }
#line 3255 "syntaxic.tab.c"
    break;

  case 164: /* term4: factor4 PLUS term4  */
#line 1740 "syntaxic.y"
                         {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real));  
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        createQuad("+", buffer1, buffer2, temp);
        cpttemp++;
    }
#line 3278 "syntaxic.tab.c"
    break;

  case 165: /* term4: factor4 MINUS term4  */
#line 1758 "syntaxic.y"
                          {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("-", buffer1, buffer2, temp);
        cpttemp++;
    }
#line 3301 "syntaxic.tab.c"
    break;

  case 167: /* factor4: primary4 MULTIPLY factor4  */
#line 1781 "syntaxic.y"
                                {
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        temp = newtemp();  // Génère un identifiant temporaire
       
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        cpttemp++;
    }
#line 3325 "syntaxic.tab.c"
    break;

  case 168: /* factor4: primary4 DIVIDE factor4  */
#line 1800 "syntaxic.y"
                                  { 
        if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        cpttemp++;  
        }
    }
#line 3351 "syntaxic.tab.c"
    break;

  case 169: /* primary4: IDENTIFIER  */
#line 1825 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)));}
        strcpy(brnsup,(yyvsp[0].string));
    }
#line 3363 "syntaxic.tab.c"
    break;

  case 170: /* primary4: INT_NUMBER  */
#line 1832 "syntaxic.y"
                 {
        strcpy(typeD,"INTEGER");
                  
    }
#line 3372 "syntaxic.tab.c"
    break;

  case 171: /* primary4: FLOAT_NUMBER  */
#line 1836 "syntaxic.y"
                  {
        strcpy(typeD,"FLOAT");
    }
#line 3380 "syntaxic.tab.c"
    break;

  case 172: /* primary4: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1839 "syntaxic.y"
                                  {
        strcpy(typeD,"INTEGER");
    }
#line 3388 "syntaxic.tab.c"
    break;

  case 173: /* primary4: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1842 "syntaxic.y"
                                   {
        strcpy(typeD,"INTEGER");
    }
#line 3396 "syntaxic.tab.c"
    break;

  case 174: /* primary4: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1845 "syntaxic.y"
                                      {
        strcmp(typeD,"FLOAT");
                   }
#line 3404 "syntaxic.tab.c"
    break;

  case 175: /* primary4: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1848 "syntaxic.y"
                                       {
        strcpy(typeD,"FLOAT");
    }
#line 3412 "syntaxic.tab.c"
    break;

  case 176: /* primary4: LPAREN term4 RPAREN  */
#line 1851 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3418 "syntaxic.tab.c"
    break;

  case 177: /* primary4: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1852 "syntaxic.y"
                                             {
        if(verifdeclaration((yyvsp[-3].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
        else {
                strcpy(typeD,getType((yyvsp[-3].string)));
                }
    }
#line 3430 "syntaxic.tab.c"
    break;

  case 179: /* term3: factor3 PLUS term3  */
#line 1862 "syntaxic.y"
                         {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real));  
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);
        createQuad("+", buffer1, buffer2, temp);
        cpttemp++;
    }
#line 3453 "syntaxic.tab.c"
    break;

  case 180: /* term3: factor3 MINUS term3  */
#line 1880 "syntaxic.y"
                          {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("-", buffer1, buffer2, temp);
        cpttemp++;
    }
#line 3476 "syntaxic.tab.c"
    break;

  case 182: /* factor3: primary3 MULTIPLY factor3  */
#line 1903 "syntaxic.y"
                                {
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        temp = newtemp();  // Génère un identifiant temporaire
       
        sprintf(temp,"T%d",cpttemp);
        createQuad("*", buffer1, buffer2, temp);
        cpttemp++;
    }
#line 3500 "syntaxic.tab.c"
    break;

  case 183: /* factor3: primary3 DIVIDE factor3  */
#line 1922 "syntaxic.y"
                              {
        if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);
        tt=newtemp();
        sprintf(tt,"%f",t);
        (yyval.real)=atoi(tt);
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        temp = newtemp();  // Génère un identifiant temporaire
        sprintf(temp,"T%d",cpttemp);
        createQuad("/", buffer1, buffer2, temp);
        cpttemp++;  
        }
    }
#line 3526 "syntaxic.tab.c"
    break;

  case 184: /* primary3: IDENTIFIER  */
#line 1947 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeG,getType((yyvsp[0].string)));}
        strcpy(pasfor,(yyvsp[0].string));
    }
#line 3538 "syntaxic.tab.c"
    break;

  case 185: /* primary3: INT_NUMBER  */
#line 1954 "syntaxic.y"
                 {
        strcpy(typeG,"INTEGER");
        sprintf(pasfor,"%d",atoi((yyvsp[0].string)));
                  
    }
#line 3548 "syntaxic.tab.c"
    break;

  case 186: /* primary3: FLOAT_NUMBER  */
#line 1959 "syntaxic.y"
                  {
        strcpy(typeG,"FLOAT");
    }
#line 3556 "syntaxic.tab.c"
    break;

  case 187: /* primary3: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1962 "syntaxic.y"
                                  {
        strcpy(typeG,"INTEGER");
    }
#line 3564 "syntaxic.tab.c"
    break;

  case 188: /* primary3: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1965 "syntaxic.y"
                                   {
        strcpy(typeG,"INTEGER");
    }
#line 3572 "syntaxic.tab.c"
    break;

  case 189: /* primary3: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1968 "syntaxic.y"
                                      {
        strcmp(typeG,"FLOAT");
                   }
#line 3580 "syntaxic.tab.c"
    break;

  case 190: /* primary3: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1971 "syntaxic.y"
                                       {
        strcpy(typeG,"FLOAT");
    }
#line 3588 "syntaxic.tab.c"
    break;

  case 191: /* primary3: LPAREN term3 RPAREN  */
#line 1974 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3594 "syntaxic.tab.c"
    break;

  case 192: /* primary3: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1975 "syntaxic.y"
                                             {
        if(verifdeclaration((yyvsp[-3].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
        else {
                strcpy(typeG,getType((yyvsp[-3].string)));
                }
    }
#line 3606 "syntaxic.tab.c"
    break;


#line 3610 "syntaxic.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1988 "syntaxic.y"


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

