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

#line 116 "syntaxic.tab.c"

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
  YYSYMBOL_EXPRESSION_CHAR = 56,           /* EXPRESSION_CHAR  */
  YYSYMBOL_EXPRESSION_CHAINE = 57,         /* EXPRESSION_CHAINE  */
  YYSYMBOL_condition = 58,                 /* condition  */
  YYSYMBOL_59_1 = 59,                      /* $@1  */
  YYSYMBOL_elsebloc = 60,                  /* elsebloc  */
  YYSYMBOL_61_2 = 61,                      /* $@2  */
  YYSYMBOL_assignment_int = 62,            /* assignment_int  */
  YYSYMBOL_loop = 63,                      /* loop  */
  YYSYMBOL_64_3 = 64,                      /* $@3  */
  YYSYMBOL_65_4 = 65,                      /* $@4  */
  YYSYMBOL_66_5 = 66,                      /* $@5  */
  YYSYMBOL_io_statement = 67,              /* io_statement  */
  YYSYMBOL_io_expr_list = 68,              /* io_expr_list  */
  YYSYMBOL_io_expr = 69,                   /* io_expr  */
  YYSYMBOL_COND = 70,                      /* COND  */
  YYSYMBOL_comparison_expr = 71,           /* comparison_expr  */
  YYSYMBOL_DROIT = 72,                     /* DROIT  */
  YYSYMBOL_GAUCHE = 73,                    /* GAUCHE  */
  YYSYMBOL_OP_COMP = 74,                   /* OP_COMP  */
  YYSYMBOL_term = 75,                      /* term  */
  YYSYMBOL_factor = 76,                    /* factor  */
  YYSYMBOL_primary = 77,                   /* primary  */
  YYSYMBOL_factorD = 78,                   /* factorD  */
  YYSYMBOL_primaryD = 79,                  /* primaryD  */
  YYSYMBOL_term1 = 80,                     /* term1  */
  YYSYMBOL_factor1 = 81,                   /* factor1  */
  YYSYMBOL_primary1 = 82,                  /* primary1  */
  YYSYMBOL_term2 = 83,                     /* term2  */
  YYSYMBOL_factor2 = 84,                   /* factor2  */
  YYSYMBOL_primary2 = 85,                  /* primary2  */
  YYSYMBOL_term4 = 86,                     /* term4  */
  YYSYMBOL_factor4 = 87,                   /* factor4  */
  YYSYMBOL_primary4 = 88,                  /* primary4  */
  YYSYMBOL_term3 = 89,                     /* term3  */
  YYSYMBOL_factor3 = 90,                   /* factor3  */
  YYSYMBOL_primary3 = 91,                  /* primary3  */
  YYSYMBOL_string_literal = 92             /* string_literal  */
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
#define YYLAST   342

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  163
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  336

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
       0,    94,    94,   101,   102,   103,   108,   109,   114,   115,
     120,   121,   126,   136,   156,   169,   170,   178,   179,   180,
     193,   194,   195,   196,   197,   202,   218,   234,   239,   248,
     276,   298,   312,   320,   327,   361,   361,   369,   369,   374,
     378,   396,   402,   405,   396,   429,   435,   440,   441,   446,
     452,   457,   458,   466,   474,   486,   487,   494,   500,   506,
     512,   518,   524,   530,   536,   537,   543,   544,   547,   548,
     551,   552,   553,   554,   555,   556,   560,   561,   585,   602,
     603,   617,   636,   651,   659,   668,   676,   687,   694,   704,
     705,   714,   715,   728,   747,   767,   779,   793,   808,   825,
     839,   853,   854,   874,   875,   894,   915,   916,   934,   960,
     973,   980,   988,   994,  1002,  1008,  1017,  1018,  1027,  1028,
    1047,  1069,  1070,  1089,  1114,  1121,  1126,  1130,  1133,  1136,
    1139,  1142,  1143,  1153,  1154,  1172,  1194,  1195,  1214,  1239,
    1246,  1250,  1253,  1256,  1259,  1262,  1265,  1266,  1275,  1276,
    1294,  1316,  1317,  1336,  1361,  1368,  1373,  1376,  1379,  1382,
    1385,  1388,  1389,  1399
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
  "statement", "assignment", "MDROIT", "TAB", "EXPRESSION_CHAR",
  "EXPRESSION_CHAINE", "condition", "$@1", "elsebloc", "$@2",
  "assignment_int", "loop", "$@3", "$@4", "$@5", "io_statement",
  "io_expr_list", "io_expr", "COND", "comparison_expr", "DROIT", "GAUCHE",
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

#define YYPACT_NINF (-282)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    23,    78,   169,  -282,  -282,  -282,  -282,   173,    86,
      69,   169,   118,    48,    97,   139,  -282,  -282,    89,    26,
      86,  -282,   116,     9,   127,   111,  -282,   169,   163,  -282,
    -282,    35,    65,     2,  -282,   106,   196,   175,   169,   204,
     109,   155,    33,    20,    20,  -282,    20,    20,    86,   187,
     225,  -282,   206,   209,   211,   213,   214,  -282,   215,  -282,
    -282,    42,  -282,   151,  -282,  -282,  -282,  -282,   208,   218,
    -282,  -282,  -282,  -282,  -282,   232,   168,   170,   115,     9,
       9,   216,   154,   217,   221,   222,   223,   224,  -282,     2,
       2,    86,   219,   226,   227,   228,   229,   230,   154,  -282,
     237,   239,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,    -3,   238,   253,    -4,    44,  -282,  -282,    92,
       5,   233,  -282,  -282,   130,    -3,    51,   130,   235,   171,
     130,   136,   159,   161,  -282,   241,  -282,   236,  -282,  -282,
     240,   234,  -282,   242,   244,  -282,   243,   102,  -282,  -282,
     245,   108,   259,  -282,  -282,  -282,  -282,  -282,  -282,   260,
    -282,   178,   180,   247,   246,   248,    -3,    -3,    99,    99,
      99,    99,    99,    99,    99,     1,   104,   104,   104,   104,
       9,   249,   250,   252,    -4,  -282,   261,  -282,  -282,  -282,
    -282,   254,  -282,   251,   257,   258,   262,  -282,  -282,  -282,
    -282,  -282,   263,  -282,  -282,    67,  -282,   172,   167,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,   174,   107,  -282,  -282,  -282,   265,  -282,  -282,
    -282,  -282,  -282,   154,   269,   189,   191,   266,    99,    99,
      99,    99,   267,  -282,  -282,    76,  -282,   181,   182,   268,
     271,   270,   273,   274,   275,   276,  -282,  -282,  -282,  -282,
    -282,   279,   200,   202,   277,   255,   107,   107,   107,   107,
    -282,   286,  -282,  -282,  -282,  -282,  -282,   278,   281,   282,
     283,   284,  -282,   113,  -282,  -282,  -282,  -282,   288,   264,
    -282,  -282,  -282,  -282,  -282,   285,  -282,  -282,    83,  -282,
     192,   193,  -282,  -282,   291,   210,   212,   287,   289,   113,
     113,   113,   113,   154,   290,   293,   294,   295,   296,  -282,
     300,  -282,  -282,  -282,  -282,   280,  -282,  -282,  -282,  -282,
    -282,   154,  -282,   292,   297,  -282
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,     5,     0,     0,
       0,     6,     0,    15,     0,     0,     7,    14,     0,     0,
       0,    12,     0,     0,     0,     0,    17,     0,    82,    83,
      84,     0,     0,    76,    79,    16,     0,     0,     8,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,    89,    94,    95,
      96,     0,    77,    91,    78,    80,    81,    18,     0,     0,
      90,    85,    87,    86,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,    92,
      93,     0,     0,     0,     0,     0,    29,     0,    10,    20,
       0,     0,    21,    24,    22,    23,   102,    97,    99,    98,
     100,    19,    55,     0,     0,     0,     0,     2,    11,     0,
       0,   124,   125,   126,     0,    55,     0,     0,     0,    51,
       0,     0,   118,   121,    29,     0,    41,     0,    49,   163,
       0,    47,    50,     0,     0,    32,     0,    40,    33,    34,
       0,     0,     0,    74,    75,    72,    71,    73,    70,     0,
      52,     0,     0,     0,     0,     0,    55,    55,     0,    74,
      75,    72,    71,    73,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,    28,    25,    27,
      26,     0,    63,     0,     0,     0,     0,   131,    62,    35,
      53,    54,   109,   110,   111,     0,    64,   103,   106,    58,
      61,    59,    57,    60,    56,    68,    69,    65,   119,   120,
     122,   123,    40,     0,    45,    46,    48,     0,   132,   127,
     129,   128,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   154,   155,   156,     0,    42,   148,   151,     0,
       0,     0,     0,     0,     0,     0,   116,   104,   105,   107,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    39,   117,   112,   114,   113,   115,     0,     0,     0,
       0,     0,   161,     0,   149,   150,   152,   153,     0,     0,
     162,   157,   159,   158,   160,   139,   140,   141,     0,    43,
     133,   136,    37,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
       0,   134,   135,   137,   138,     0,   147,   142,   144,   143,
     145,     0,    38,     0,     0,    44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -282,  -282,   307,   313,   299,   -98,    49,  -282,   -18,  -282,
    -282,   166,  -282,  -282,  -282,  -282,  -282,  -282,  -282,   186,
    -282,  -282,  -282,  -282,  -282,   143,  -282,  -121,  -282,  -282,
    -282,    43,   -30,   152,  -282,   298,   188,  -164,    -2,  -282,
    -123,    58,  -282,  -281,   -71,  -282,  -218,   -26,  -282,  -282
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    37,    97,    11,    18,    14,    98,
      99,   100,   101,   146,   150,   102,   233,   289,   313,   103,
     104,   181,   265,   308,   105,   140,   141,   128,   129,   130,
     217,   159,    32,    33,    34,    62,    63,   206,   207,   208,
     131,   132,   133,   299,   300,   301,   246,   247,   248,   142
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     118,    42,    26,   163,   160,   209,   210,   211,   212,   213,
     214,   138,   121,   122,   123,   124,     1,   307,   125,   215,
      28,    29,    30,   148,    28,    29,    30,   264,   321,   322,
      67,    78,   126,    46,    47,    58,    59,    60,   139,   127,
      31,   237,    24,   216,    31,   200,   201,   149,   284,   285,
      28,    29,    30,   218,   219,    61,     3,    28,    29,    30,
     143,    25,    43,    44,    40,    41,   121,   122,   123,    57,
      31,    76,    77,   111,   257,   258,    38,    31,     4,   144,
     161,   162,   202,   203,   204,    19,   126,    38,    20,   147,
     151,   242,   243,   244,    43,    44,   235,   236,   295,   296,
     297,    13,   205,    15,    45,   262,   263,    28,    29,    30,
     145,   245,   305,   306,   202,   203,   204,    23,   298,   121,
     122,   123,   242,   243,   244,    53,    54,    31,   295,   296,
     297,    43,    44,    17,   205,   250,    21,    43,    44,   126,
      36,   188,   245,    22,    43,    44,    48,   190,   298,    27,
     222,    88,   153,   154,   155,   156,   157,   158,   169,   170,
     171,   172,   173,   174,    92,    35,    93,    94,    95,    96,
     164,    55,    56,   168,   175,     5,     6,     7,     8,     5,
       6,     7,    79,    80,    84,    85,    86,    87,   176,   177,
     166,   167,   178,   179,   193,   194,   195,   196,   240,   241,
      39,   238,   239,    43,    44,   252,   253,   254,   255,    50,
     266,   267,    49,   268,   269,   325,   278,   279,   280,   281,
      52,   309,   310,    68,   311,   312,   315,   316,   317,   318,
      69,    89,    90,   333,    65,    66,   220,   221,   259,   260,
     323,   324,   286,   287,    70,    71,    81,    72,    83,    73,
      74,    82,    75,   134,   112,   106,    91,   107,   108,   109,
     110,   113,   114,   115,   117,   119,   116,   120,   137,   180,
     152,   165,   182,   186,   184,   191,   183,   227,   192,   135,
     185,   199,   187,   197,   189,   251,     0,   229,   198,   224,
     223,   225,   228,   230,   231,   277,   283,   288,   232,   136,
     234,   249,   256,   303,   261,   271,   270,   314,   272,   273,
     274,   275,   276,   282,   332,    12,   290,   291,   292,   293,
     294,   302,   304,   319,    16,   320,   334,   226,   326,   327,
     328,   329,   330,   331,     0,     0,   335,    51,     0,     0,
       0,     0,    64
};

static const yytype_int16 yycheck[] =
{
      98,    31,    20,   126,   125,   169,   170,   171,   172,   173,
     174,    15,    15,    16,    17,    18,     3,   298,    21,    18,
      15,    16,    17,    18,    15,    16,    17,   245,   309,   310,
      48,    61,    35,    31,    32,    15,    16,    17,    42,    42,
      35,   205,    16,    42,    35,   166,   167,    42,   266,   267,
      15,    16,    17,   176,   177,    35,    33,    15,    16,    17,
      16,    35,    29,    30,    29,    30,    15,    16,    17,    36,
      35,    29,    30,    91,   238,   239,    27,    35,     0,    35,
      29,    30,    15,    16,    17,    37,    35,    38,    40,   119,
     120,    15,    16,    17,    29,    30,    29,    30,    15,    16,
      17,    15,    35,    34,    39,    29,    30,    15,    16,    17,
      18,    35,    29,    30,    15,    16,    17,    28,    35,    15,
      16,    17,    15,    16,    17,    16,    17,    35,    15,    16,
      17,    29,    30,    15,    35,   233,    39,    29,    30,    35,
      29,    39,    35,     4,    29,    30,    40,    39,    35,    33,
     180,    36,    22,    23,    24,    25,    26,    27,    22,    23,
      24,    25,    26,    27,    10,    38,    12,    13,    14,    15,
     127,    16,    17,   130,   131,     6,     7,     8,     9,     6,
       7,     8,    31,    32,    16,    17,    16,    17,    29,    30,
      19,    20,    31,    32,    16,    17,    16,    17,    31,    32,
      37,    29,    30,    29,    30,    16,    17,    16,    17,    34,
      29,    30,    16,    31,    32,   313,    16,    17,    16,    17,
      16,    29,    30,    36,    31,    32,    16,    17,    16,    17,
       5,    79,    80,   331,    46,    47,   178,   179,   240,   241,
     311,   312,   268,   269,    38,    36,    38,    36,    16,    36,
      36,    33,    37,    15,    35,    38,    40,    36,    36,    36,
      36,    35,    35,    35,    34,    28,    37,    28,    15,    28,
      37,    36,    36,    29,    40,    16,    36,    16,    18,   113,
      38,    33,    39,    36,    39,    16,    -1,    36,    42,    39,
      41,    39,    38,    36,    36,    16,    41,    11,    36,   113,
      37,    36,    36,    39,    37,    34,    38,    16,    38,    36,
      36,    36,    36,    36,    34,     8,    38,    36,    36,    36,
      36,    33,    37,    36,    11,    36,    34,   184,    38,    36,
      36,    36,    36,    33,    -1,    -1,    39,    38,    -1,    -1,
      -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    44,    33,     0,     6,     7,     8,     9,    45,
      46,    49,    45,    15,    51,    34,    46,    15,    50,    37,
      40,    39,     4,    28,    16,    35,    51,    33,    15,    16,
      17,    35,    75,    76,    77,    38,    29,    47,    49,    37,
      29,    30,    75,    29,    30,    39,    31,    32,    40,    16,
      34,    47,    16,    16,    17,    16,    17,    36,    15,    16,
      17,    35,    78,    79,    78,    79,    79,    51,    36,     5,
      38,    36,    36,    36,    36,    37,    29,    30,    75,    31,
      32,    38,    33,    16,    16,    17,    16,    17,    36,    76,
      76,    40,    10,    12,    13,    14,    15,    48,    52,    53,
      54,    55,    58,    62,    63,    67,    38,    36,    36,    36,
      36,    51,    35,    35,    35,    35,    37,    34,    48,    28,
      28,    15,    16,    17,    18,    21,    35,    42,    70,    71,
      72,    83,    84,    85,    15,    54,    62,    15,    15,    42,
      68,    69,    92,    16,    35,    18,    56,    75,    18,    42,
      57,    75,    37,    22,    23,    24,    25,    26,    27,    74,
      70,    29,    30,    83,    74,    36,    19,    20,    74,    22,
      23,    24,    25,    26,    27,    74,    29,    30,    31,    32,
      28,    64,    36,    36,    40,    38,    29,    39,    39,    39,
      39,    16,    18,    16,    17,    16,    17,    36,    42,    33,
      70,    70,    15,    16,    17,    35,    80,    81,    82,    80,
      80,    80,    80,    80,    80,    18,    42,    73,    83,    83,
      84,    84,    75,    41,    39,    39,    68,    16,    38,    36,
      36,    36,    36,    59,    37,    29,    30,    80,    29,    30,
      31,    32,    15,    16,    17,    35,    89,    90,    91,    36,
      48,    16,    16,    17,    16,    17,    36,    80,    80,    81,
      81,    37,    29,    30,    89,    65,    29,    30,    31,    32,
      38,    34,    38,    36,    36,    36,    36,    16,    16,    17,
      16,    17,    36,    41,    89,    89,    90,    90,    11,    60,
      38,    36,    36,    36,    36,    15,    16,    17,    35,    86,
      87,    88,    33,    39,    37,    29,    30,    86,    66,    29,
      30,    31,    32,    61,    16,    16,    17,    16,    17,    36,
      36,    86,    86,    87,    87,    48,    38,    36,    36,    36,
      36,    33,    34,    48,    34,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    47,    47,
      48,    48,    49,    49,    50,    51,    51,    51,    51,    51,
      52,    52,    52,    52,    52,    53,    53,    53,    53,    54,
      55,    55,    56,    57,    57,    59,    58,    61,    60,    60,
      62,    64,    65,    66,    63,    67,    67,    68,    68,    69,
      69,    70,    70,    70,    70,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    73,    73,
      74,    74,    74,    74,    74,    74,    75,    75,    75,    76,
      76,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    80,    80,    80,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      83,    84,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    87,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      89,    90,    90,    90,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    12,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     3,     6,     1,     1,     4,     3,     6,     9,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     1,
       4,     7,     1,     1,     1,     0,    10,     0,     5,     0,
       3,     0,     0,     0,    15,     5,     5,     1,     3,     1,
       1,     1,     2,     3,     3,     0,     3,     3,     3,     3,
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
#line 101 "syntaxic.y"
            {strcpy(sauvType,"INTEGER");}
#line 1422 "syntaxic.tab.c"
    break;

  case 4: /* type: FLOAT  */
#line 102 "syntaxic.y"
            {strcpy(sauvType,"FLOAT");}
#line 1428 "syntaxic.tab.c"
    break;

  case 5: /* type: CHAR  */
#line 103 "syntaxic.y"
            {strcpy(sauvType,"CHAR");}
#line 1434 "syntaxic.tab.c"
    break;

  case 12: /* declaration: type variable_list SEMICOLON  */
#line 126 "syntaxic.y"
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
#line 1449 "syntaxic.tab.c"
    break;

  case 13: /* declaration: CONST type cst EQUALS term SEMICOLON  */
#line 136 "syntaxic.y"
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
#line 1471 "syntaxic.tab.c"
    break;

  case 14: /* cst: IDENTIFIER  */
#line 156 "syntaxic.y"
              {
        strcpy(saveIdf[0].idfTab,(yyvsp[0].string));
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType((yyvsp[0].string)));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[0].idfTab,nb_ligne);
            
            
    }
#line 1485 "syntaxic.tab.c"
    break;

  case 15: /* variable_list: IDENTIFIER  */
#line 169 "syntaxic.y"
               {strcpy(saveIdf[j].idfTab,(yyvsp[0].string));j++;}
#line 1491 "syntaxic.tab.c"
    break;

  case 16: /* variable_list: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 170 "syntaxic.y"
                                             {strcpy(saveIdf[j].idfTab,(yyvsp[-3].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;
        if (atoi((yyvsp[-1].string)) == 0) {
            printf("Erreur semantique : La taille du tableau doit etre strictement positive\n");
        } 
        sprintf(buffer1, "%d", atoi((yyvsp[-1].string))-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[-3].string),"","");
        }
#line 1504 "syntaxic.tab.c"
    break;

  case 17: /* variable_list: IDENTIFIER COMMA variable_list  */
#line 178 "syntaxic.y"
                                      {strcpy(saveIdf[j].idfTab,(yyvsp[-2].string));j++;}
#line 1510 "syntaxic.tab.c"
    break;

  case 18: /* variable_list: IDENTIFIER LBRACKET INT_NUMBER RBRACKET COMMA variable_list  */
#line 179 "syntaxic.y"
                                                                   {strcpy(saveIdf[j].idfTab,(yyvsp[-5].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;}
#line 1516 "syntaxic.tab.c"
    break;

  case 19: /* variable_list: IDENTIFIER LBRACKET LPAREN PLUS INT_NUMBER RPAREN RBRACKET COMMA variable_list  */
#line 180 "syntaxic.y"
                                                                                      {strcpy(saveIdf[j].idfTab,(yyvsp[-8].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;}
#line 1522 "syntaxic.tab.c"
    break;

  case 25: /* assignment: MDROIT EQUALS term SEMICOLON  */
#line 202 "syntaxic.y"
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
#line 1543 "syntaxic.tab.c"
    break;

  case 26: /* assignment: TAB EQUALS term SEMICOLON  */
#line 218 "syntaxic.y"
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
#line 1564 "syntaxic.tab.c"
    break;

  case 27: /* assignment: TAB EQUALS EXPRESSION_CHAINE SEMICOLON  */
#line 234 "syntaxic.y"
                                           {
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    }
#line 1574 "syntaxic.tab.c"
    break;

  case 28: /* assignment: MDROIT EQUALS EXPRESSION_CHAR SEMICOLON  */
#line 239 "syntaxic.y"
                                            {
        
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    }
#line 1585 "syntaxic.tab.c"
    break;

  case 29: /* MDROIT: IDENTIFIER  */
#line 248 "syntaxic.y"
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
#line 1616 "syntaxic.tab.c"
    break;

  case 30: /* TAB: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 276 "syntaxic.y"
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
#line 1641 "syntaxic.tab.c"
    break;

  case 31: /* TAB: IDENTIFIER LBRACKET LPAREN PLUS INT_NUMBER RPAREN RBRACKET  */
#line 298 "syntaxic.y"
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
#line 1658 "syntaxic.tab.c"
    break;

  case 32: /* EXPRESSION_CHAR: CHARACTERE  */
#line 312 "syntaxic.y"
                            {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[0].string));}
                            strcpy(saveStrq,(yyvsp[0].string));
                            sprintf(saveStr, "%s",(yyvsp[0].string)); 
                           }
#line 1669 "syntaxic.tab.c"
    break;

  case 33: /* EXPRESSION_CHAINE: CHARACTERE  */
#line 320 "syntaxic.y"
                        {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[0].string));}
                            strcpy(saveStrq,(yyvsp[0].string));
                            sprintf(saveStr, "%s",(yyvsp[0].string)); 
                           }
#line 1680 "syntaxic.tab.c"
    break;

  case 34: /* EXPRESSION_CHAINE: STRING_LITERAL  */
#line 327 "syntaxic.y"
                             {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[0].string));}
                            strcpy(saveStrq,(yyvsp[0].string));
                            sprintf(saveStr, "%s",(yyvsp[0].string)); 
                           }
#line 1691 "syntaxic.tab.c"
    break;

  case 35: /* $@1: %empty  */
#line 361 "syntaxic.y"
                                   {
          createQuad("BZ","",QuadR[qc-1].res,"");
          empiler_Int(&pile1,qc-1);
        }
#line 1700 "syntaxic.tab.c"
    break;

  case 36: /* condition: IF LPAREN COND RPAREN LBRACE $@1 instruction_section RBRACE elsebloc SEMICOLON  */
#line 365 "syntaxic.y"
                                                     {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        }
#line 1708 "syntaxic.tab.c"
    break;

  case 37: /* $@2: %empty  */
#line 369 "syntaxic.y"
                      {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
        empiler_Int(&pile1,qc);
        createQuad("BR","","","");
        }
#line 1718 "syntaxic.tab.c"
    break;

  case 40: /* assignment_int: MDROIT EQUALS term  */
#line 378 "syntaxic.y"
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
#line 1738 "syntaxic.tab.c"
    break;

  case 41: /* $@3: %empty  */
#line 396 "syntaxic.y"
                              {
        // Initialisation
       // $$ = atoi($3); // Capturer la variable assignée
        empiler_Int(&pile1, qc);
        empiler_Int(&pile2, qc);
    }
#line 1749 "syntaxic.tab.c"
    break;

  case 42: /* $@4: %empty  */
#line 402 "syntaxic.y"
                {
        //$$ = atoi($6); // Capturer le pas
    }
#line 1757 "syntaxic.tab.c"
    break;

  case 43: /* $@5: %empty  */
#line 405 "syntaxic.y"
                {
        //char *cond_var = atoi($7); // Capturer la condition d'arrêt
        createQuad("BG", "", mDroit, brnsup); 
        strcpy(cptfor,mDroit);
    }
#line 1767 "syntaxic.tab.c"
    break;

  case 44: /* loop: FOR LPAREN assignment_int $@3 COLON term3 $@4 COLON term4 $@5 RPAREN LBRACE instruction_section RBRACE SEMICOLON  */
#line 410 "syntaxic.y"
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
#line 1782 "syntaxic.tab.c"
    break;

  case 45: /* io_statement: READ LPAREN IDENTIFIER RPAREN SEMICOLON  */
#line 429 "syntaxic.y"
                                           {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[-2].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[-2].string));
        }
    }
#line 1793 "syntaxic.tab.c"
    break;

  case 49: /* io_expr: IDENTIFIER  */
#line 446 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }
    }
#line 1804 "syntaxic.tab.c"
    break;

  case 52: /* COND: NOT COND  */
#line 459 "syntaxic.y"
    {
        temp = newtemp();
        sprintf(temp,"T%d",cpttemp);
        sprintf(valcond1,"T%d",cpttemp-1);
        createQuadL(1, valcond1, "", temp);
        cpttemp++;
    }
#line 1816 "syntaxic.tab.c"
    break;

  case 53: /* COND: comparison_expr AND COND  */
#line 466 "syntaxic.y"
                              {
         temp = newtemp();
        sprintf(temp,"T%d",cpttemp);
        sprintf(valcond1,"T%d",cpttemp-2);
        sprintf(valcond2,"T%d",cpttemp-1);
        createQuadL(3, valcond1, valcond2, temp);
        cpttemp++;
    }
#line 1829 "syntaxic.tab.c"
    break;

  case 54: /* COND: comparison_expr OR COND  */
#line 474 "syntaxic.y"
                              {
        temp = newtemp();
        sprintf(temp,"T%d",cpttemp);
        sprintf(valcond1,"T%d",cpttemp-2);
        sprintf(valcond2,"T%d",cpttemp-1);
        createQuadL(2, valcond1, valcond2, temp);
        cpttemp++;
    }
#line 1842 "syntaxic.tab.c"
    break;

  case 56: /* comparison_expr: term2 GT term1  */
#line 488 "syntaxic.y"
    {
         char* temp=newtemp();
         sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(6,buffer1,buffer2,temp);
    }
#line 1853 "syntaxic.tab.c"
    break;

  case 57: /* comparison_expr: term2 LT term1  */
#line 494 "syntaxic.y"
                    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(5,buffer1,buffer2,temp);
    }
#line 1864 "syntaxic.tab.c"
    break;

  case 58: /* comparison_expr: term2 EQ term1  */
#line 500 "syntaxic.y"
                   {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(1,buffer1,buffer2,temp);
    }
#line 1875 "syntaxic.tab.c"
    break;

  case 59: /* comparison_expr: term2 GEQ term1  */
#line 506 "syntaxic.y"
                    {
       char* temp=newtemp();
       sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(3,buffer1,buffer2,temp);
    }
#line 1886 "syntaxic.tab.c"
    break;

  case 60: /* comparison_expr: term2 LEQ term1  */
#line 512 "syntaxic.y"
                    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(4,buffer1,buffer2,temp);
    }
#line 1897 "syntaxic.tab.c"
    break;

  case 61: /* comparison_expr: term2 NEQ term1  */
#line 518 "syntaxic.y"
                    {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(2,buffer1,buffer2,temp);
    }
#line 1908 "syntaxic.tab.c"
    break;

  case 62: /* comparison_expr: STRING_LITERAL OP_COMP STRING_LITERAL  */
#line 524 "syntaxic.y"
                                          {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
        createQuadA(nb_op,(yyvsp[-2].string),(yyvsp[0].string),temp);
    }
#line 1919 "syntaxic.tab.c"
    break;

  case 63: /* comparison_expr: CHARACTERE OP_COMP CHARACTERE  */
#line 530 "syntaxic.y"
                                   {
        char* temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
       createQuadA(nb_op,(yyvsp[-2].string),(yyvsp[0].string),temp);
    }
#line 1930 "syntaxic.tab.c"
    break;

  case 64: /* comparison_expr: DROIT OP_COMP term1  */
#line 536 "syntaxic.y"
                         {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);}
#line 1936 "syntaxic.tab.c"
    break;

  case 65: /* comparison_expr: term2 OP_COMP GAUCHE  */
#line 537 "syntaxic.y"
                          {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);}
#line 1942 "syntaxic.tab.c"
    break;

  case 70: /* OP_COMP: GT  */
#line 551 "syntaxic.y"
        {nb_op=6;}
#line 1948 "syntaxic.tab.c"
    break;

  case 71: /* OP_COMP: LT  */
#line 552 "syntaxic.y"
        {nb_op=5;}
#line 1954 "syntaxic.tab.c"
    break;

  case 72: /* OP_COMP: GEQ  */
#line 553 "syntaxic.y"
          {nb_op=3;}
#line 1960 "syntaxic.tab.c"
    break;

  case 73: /* OP_COMP: LEQ  */
#line 554 "syntaxic.y"
          {nb_op=4;}
#line 1966 "syntaxic.tab.c"
    break;

  case 74: /* OP_COMP: EQ  */
#line 555 "syntaxic.y"
        {nb_op=1;}
#line 1972 "syntaxic.tab.c"
    break;

  case 75: /* OP_COMP: NEQ  */
#line 556 "syntaxic.y"
         {nb_op=2;}
#line 1978 "syntaxic.tab.c"
    break;

  case 77: /* term: term PLUS factorD  */
#line 561 "syntaxic.y"
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
#line 2007 "syntaxic.tab.c"
    break;

  case 78: /* term: term MINUS factorD  */
#line 585 "syntaxic.y"
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
#line 2025 "syntaxic.tab.c"
    break;

  case 80: /* factor: factor MULTIPLY primaryD  */
#line 603 "syntaxic.y"
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
#line 2044 "syntaxic.tab.c"
    break;

  case 81: /* factor: factor DIVIDE primaryD  */
#line 617 "syntaxic.y"
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
#line 2064 "syntaxic.tab.c"
    break;

  case 82: /* primary: IDENTIFIER  */
#line 636 "syntaxic.y"
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
#line 2084 "syntaxic.tab.c"
    break;

  case 83: /* primary: INT_NUMBER  */
#line 651 "syntaxic.y"
                 {
        printf("here %s\n",typeG);
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
                  strcpy(saveStrq,(yyvsp[0].string));
                  strcpy(buffer1,(yyvsp[0].string));
                  
    }
#line 2097 "syntaxic.tab.c"
    break;

  case 84: /* primary: FLOAT_NUMBER  */
#line 659 "syntaxic.y"
                  {        printf("here 2 %s\n",typeG);

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); }  
                   strcpy(saveStrq,(yyvsp[0].string));
                   strcpy(buffer1,(yyvsp[0].string));
                   }
#line 2111 "syntaxic.tab.c"
    break;

  case 85: /* primary: LPAREN PLUS INT_NUMBER RPAREN  */
#line 668 "syntaxic.y"
                                  {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));
        strcpy(saveStrq,(yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        }
    }
#line 2124 "syntaxic.tab.c"
    break;

  case 86: /* primary: LPAREN MINUS INT_NUMBER RPAREN  */
#line 676 "syntaxic.y"
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
#line 2140 "syntaxic.tab.c"
    break;

  case 87: /* primary: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 687 "syntaxic.y"
                                      {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
                                      else{(yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(saveStrq,(yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      }
                   }
#line 2152 "syntaxic.tab.c"
    break;

  case 88: /* primary: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 694 "syntaxic.y"
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
#line 2167 "syntaxic.tab.c"
    break;

  case 89: /* primary: LPAREN term RPAREN  */
#line 704 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-1].real);}
#line 2173 "syntaxic.tab.c"
    break;

  case 90: /* primary: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 705 "syntaxic.y"
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                }
#line 2185 "syntaxic.tab.c"
    break;

  case 92: /* factorD: primaryD MULTIPLY factor  */
#line 715 "syntaxic.y"
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
#line 2203 "syntaxic.tab.c"
    break;

  case 93: /* factorD: primaryD DIVIDE factor  */
#line 728 "syntaxic.y"
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
#line 2223 "syntaxic.tab.c"
    break;

  case 94: /* primaryD: IDENTIFIER  */
#line 747 "syntaxic.y"
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
#line 2248 "syntaxic.tab.c"
    break;

  case 95: /* primaryD: INT_NUMBER  */
#line 767 "syntaxic.y"
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
#line 2265 "syntaxic.tab.c"
    break;

  case 96: /* primaryD: FLOAT_NUMBER  */
#line 779 "syntaxic.y"
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
#line 2284 "syntaxic.tab.c"
    break;

  case 97: /* primaryD: LPAREN PLUS INT_NUMBER RPAREN  */
#line 793 "syntaxic.y"
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
#line 2303 "syntaxic.tab.c"
    break;

  case 98: /* primaryD: LPAREN MINUS INT_NUMBER RPAREN  */
#line 808 "syntaxic.y"
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
#line 2324 "syntaxic.tab.c"
    break;

  case 99: /* primaryD: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 825 "syntaxic.y"
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
#line 2342 "syntaxic.tab.c"
    break;

  case 100: /* primaryD: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 839 "syntaxic.y"
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
#line 2361 "syntaxic.tab.c"
    break;

  case 101: /* primaryD: LPAREN term RPAREN  */
#line 853 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-1].real); }
#line 2367 "syntaxic.tab.c"
    break;

  case 102: /* primaryD: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 854 "syntaxic.y"
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
#line 2390 "syntaxic.tab.c"
    break;

  case 104: /* term1: factor1 PLUS term1  */
#line 875 "syntaxic.y"
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
#line 2414 "syntaxic.tab.c"
    break;

  case 105: /* term1: factor1 MINUS term1  */
#line 894 "syntaxic.y"
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
#line 2436 "syntaxic.tab.c"
    break;

  case 107: /* factor1: primary1 MULTIPLY factor1  */
#line 916 "syntaxic.y"
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
#line 2459 "syntaxic.tab.c"
    break;

  case 108: /* factor1: primary1 DIVIDE factor1  */
#line 934 "syntaxic.y"
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
#line 2486 "syntaxic.tab.c"
    break;

  case 109: /* primary1: IDENTIFIER  */
#line 960 "syntaxic.y"
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
#line 2504 "syntaxic.tab.c"
    break;

  case 110: /* primary1: INT_NUMBER  */
#line 973 "syntaxic.y"
                 {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
        sprintf(buffer2, "%d",atoi((yyvsp[0].string)));
                  
    }
#line 2516 "syntaxic.tab.c"
    break;

  case 111: /* primary1: FLOAT_NUMBER  */
#line 980 "syntaxic.y"
                  {        printf("here 2 %s\n",typeG);
                    strcpy(typeG,"FLOAT");
                    if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); } 
                   sprintf(buffer2, "%f", (yyvsp[0].string)); 
                   }
#line 2529 "syntaxic.tab.c"
    break;

  case 112: /* primary1: LPAREN PLUS INT_NUMBER RPAREN  */
#line 988 "syntaxic.y"
                                  {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));}
    }
#line 2540 "syntaxic.tab.c"
    break;

  case 113: /* primary1: LPAREN MINUS INT_NUMBER RPAREN  */
#line 994 "syntaxic.y"
                                   {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);}
    }
#line 2553 "syntaxic.tab.c"
    break;

  case 114: /* primary1: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1002 "syntaxic.y"
                                      {
        strcpy(typeG,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));}
                   }
#line 2564 "syntaxic.tab.c"
    break;

  case 115: /* primary1: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1008 "syntaxic.y"
                                       {
        strcpy(typeG,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                       }
    }
#line 2578 "syntaxic.tab.c"
    break;

  case 116: /* primary1: LPAREN term1 RPAREN  */
#line 1017 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2584 "syntaxic.tab.c"
    break;

  case 117: /* primary1: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1018 "syntaxic.y"
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
                                else {
                                    strcpy(typeG,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                }
#line 2596 "syntaxic.tab.c"
    break;

  case 119: /* term2: factor2 PLUS term2  */
#line 1028 "syntaxic.y"
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
#line 2620 "syntaxic.tab.c"
    break;

  case 120: /* term2: factor2 MINUS term2  */
#line 1047 "syntaxic.y"
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
#line 2643 "syntaxic.tab.c"
    break;

  case 122: /* factor2: primary2 MULTIPLY factor2  */
#line 1070 "syntaxic.y"
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
#line 2667 "syntaxic.tab.c"
    break;

  case 123: /* factor2: primary2 DIVIDE factor2  */
#line 1089 "syntaxic.y"
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
#line 2693 "syntaxic.tab.c"
    break;

  case 124: /* primary2: IDENTIFIER  */
#line 1114 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)));}
        sprintf(buffer1, "%s", (yyvsp[0].string));
    }
#line 2705 "syntaxic.tab.c"
    break;

  case 125: /* primary2: INT_NUMBER  */
#line 1121 "syntaxic.y"
                 {
        strcpy(typeD,"INTEGER");
        sprintf(buffer1, "%d", atoi((yyvsp[0].string)));
                  
    }
#line 2715 "syntaxic.tab.c"
    break;

  case 126: /* primary2: FLOAT_NUMBER  */
#line 1126 "syntaxic.y"
                  {
        strcpy(typeD,"FLOAT");
        sprintf(buffer1, "%f", (yyvsp[0].string));
    }
#line 2724 "syntaxic.tab.c"
    break;

  case 127: /* primary2: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1130 "syntaxic.y"
                                  {
        strcpy(typeD,"INTEGER");
    }
#line 2732 "syntaxic.tab.c"
    break;

  case 128: /* primary2: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1133 "syntaxic.y"
                                   {
        strcpy(typeD,"INTEGER");
    }
#line 2740 "syntaxic.tab.c"
    break;

  case 129: /* primary2: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1136 "syntaxic.y"
                                      {
        strcmp(typeD,"FLOAT");
                   }
#line 2748 "syntaxic.tab.c"
    break;

  case 130: /* primary2: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1139 "syntaxic.y"
                                       {
        strcpy(typeD,"FLOAT");
    }
#line 2756 "syntaxic.tab.c"
    break;

  case 131: /* primary2: LPAREN term2 RPAREN  */
#line 1142 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2762 "syntaxic.tab.c"
    break;

  case 132: /* primary2: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1143 "syntaxic.y"
                                             {
        if(verifdeclaration((yyvsp[-3].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
        else {
                strcpy(typeG,getType((yyvsp[-3].string)));
                }
    }
#line 2774 "syntaxic.tab.c"
    break;

  case 134: /* term4: factor4 PLUS term4  */
#line 1154 "syntaxic.y"
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
#line 2797 "syntaxic.tab.c"
    break;

  case 135: /* term4: factor4 MINUS term4  */
#line 1172 "syntaxic.y"
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
#line 2820 "syntaxic.tab.c"
    break;

  case 137: /* factor4: primary4 MULTIPLY factor4  */
#line 1195 "syntaxic.y"
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
#line 2844 "syntaxic.tab.c"
    break;

  case 138: /* factor4: primary4 DIVIDE factor4  */
#line 1214 "syntaxic.y"
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
#line 2870 "syntaxic.tab.c"
    break;

  case 139: /* primary4: IDENTIFIER  */
#line 1239 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)));}
        strcpy(brnsup,(yyvsp[0].string));
    }
#line 2882 "syntaxic.tab.c"
    break;

  case 140: /* primary4: INT_NUMBER  */
#line 1246 "syntaxic.y"
                 {
        strcpy(typeD,"INTEGER");
                  
    }
#line 2891 "syntaxic.tab.c"
    break;

  case 141: /* primary4: FLOAT_NUMBER  */
#line 1250 "syntaxic.y"
                  {
        strcpy(typeD,"FLOAT");
    }
#line 2899 "syntaxic.tab.c"
    break;

  case 142: /* primary4: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1253 "syntaxic.y"
                                  {
        strcpy(typeD,"INTEGER");
    }
#line 2907 "syntaxic.tab.c"
    break;

  case 143: /* primary4: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1256 "syntaxic.y"
                                   {
        strcpy(typeD,"INTEGER");
    }
#line 2915 "syntaxic.tab.c"
    break;

  case 144: /* primary4: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1259 "syntaxic.y"
                                      {
        strcmp(typeD,"FLOAT");
                   }
#line 2923 "syntaxic.tab.c"
    break;

  case 145: /* primary4: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1262 "syntaxic.y"
                                       {
        strcpy(typeD,"FLOAT");
    }
#line 2931 "syntaxic.tab.c"
    break;

  case 146: /* primary4: LPAREN term4 RPAREN  */
#line 1265 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2937 "syntaxic.tab.c"
    break;

  case 147: /* primary4: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1266 "syntaxic.y"
                                             {
        if(verifdeclaration((yyvsp[-3].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
        else {
                strcpy(typeD,getType((yyvsp[-3].string)));
                }
    }
#line 2949 "syntaxic.tab.c"
    break;

  case 149: /* term3: factor3 PLUS term3  */
#line 1276 "syntaxic.y"
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
#line 2972 "syntaxic.tab.c"
    break;

  case 150: /* term3: factor3 MINUS term3  */
#line 1294 "syntaxic.y"
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
#line 2995 "syntaxic.tab.c"
    break;

  case 152: /* factor3: primary3 MULTIPLY factor3  */
#line 1317 "syntaxic.y"
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
#line 3019 "syntaxic.tab.c"
    break;

  case 153: /* factor3: primary3 DIVIDE factor3  */
#line 1336 "syntaxic.y"
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
#line 3045 "syntaxic.tab.c"
    break;

  case 154: /* primary3: IDENTIFIER  */
#line 1361 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeG,getType((yyvsp[0].string)));}
        strcpy(pasfor,(yyvsp[0].string));
    }
#line 3057 "syntaxic.tab.c"
    break;

  case 155: /* primary3: INT_NUMBER  */
#line 1368 "syntaxic.y"
                 {
        strcpy(typeG,"INTEGER");
        sprintf(pasfor,"%d",atoi((yyvsp[0].string)));
                  
    }
#line 3067 "syntaxic.tab.c"
    break;

  case 156: /* primary3: FLOAT_NUMBER  */
#line 1373 "syntaxic.y"
                  {
        strcpy(typeG,"FLOAT");
    }
#line 3075 "syntaxic.tab.c"
    break;

  case 157: /* primary3: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1376 "syntaxic.y"
                                  {
        strcpy(typeG,"INTEGER");
    }
#line 3083 "syntaxic.tab.c"
    break;

  case 158: /* primary3: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1379 "syntaxic.y"
                                   {
        strcpy(typeG,"INTEGER");
    }
#line 3091 "syntaxic.tab.c"
    break;

  case 159: /* primary3: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1382 "syntaxic.y"
                                      {
        strcmp(typeG,"FLOAT");
                   }
#line 3099 "syntaxic.tab.c"
    break;

  case 160: /* primary3: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1385 "syntaxic.y"
                                       {
        strcpy(typeG,"FLOAT");
    }
#line 3107 "syntaxic.tab.c"
    break;

  case 161: /* primary3: LPAREN term3 RPAREN  */
#line 1388 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3113 "syntaxic.tab.c"
    break;

  case 162: /* primary3: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1389 "syntaxic.y"
                                             {
        if(verifdeclaration((yyvsp[-3].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
        else {
                strcpy(typeG,getType((yyvsp[-3].string)));
                }
    }
#line 3125 "syntaxic.tab.c"
    break;


#line 3129 "syntaxic.tab.c"

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

#line 1402 "syntaxic.y"


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

