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
   char *temp,*tt;
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


#line 118 "syntaxic.tab.c"

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
  YYSYMBOL_EXPRESSION_CHAR = 59,           /* EXPRESSION_CHAR  */
  YYSYMBOL_condition = 60,                 /* condition  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_elsebloc = 62,                  /* elsebloc  */
  YYSYMBOL_63_2 = 63,                      /* $@2  */
  YYSYMBOL_assignment_int = 64,            /* assignment_int  */
  YYSYMBOL_loop = 65,                      /* loop  */
  YYSYMBOL_66_3 = 66,                      /* $@3  */
  YYSYMBOL_67_4 = 67,                      /* $@4  */
  YYSYMBOL_io_statement = 68,              /* io_statement  */
  YYSYMBOL_io_expr_list = 69,              /* io_expr_list  */
  YYSYMBOL_io_expr = 70,                   /* io_expr  */
  YYSYMBOL_COND = 71,                      /* COND  */
  YYSYMBOL_AND_EXPR = 72,                  /* AND_EXPR  */
  YYSYMBOL_NOT_EXPR = 73,                  /* NOT_EXPR  */
  YYSYMBOL_comparison_expr = 74,           /* comparison_expr  */
  YYSYMBOL_DROIT = 75,                     /* DROIT  */
  YYSYMBOL_GAUCHE = 76,                    /* GAUCHE  */
  YYSYMBOL_OP_COMP = 77,                   /* OP_COMP  */
  YYSYMBOL_term = 78,                      /* term  */
  YYSYMBOL_factor = 79,                    /* factor  */
  YYSYMBOL_primary = 80,                   /* primary  */
  YYSYMBOL_term1 = 81,                     /* term1  */
  YYSYMBOL_factor1 = 82,                   /* factor1  */
  YYSYMBOL_primary1 = 83,                  /* primary1  */
  YYSYMBOL_term2 = 84,                     /* term2  */
  YYSYMBOL_factor2 = 85,                   /* factor2  */
  YYSYMBOL_primary2 = 86,                  /* primary2  */
  YYSYMBOL_term4 = 87,                     /* term4  */
  YYSYMBOL_factor4 = 88,                   /* factor4  */
  YYSYMBOL_primary4 = 89,                  /* primary4  */
  YYSYMBOL_term3 = 90,                     /* term3  */
  YYSYMBOL_factor3 = 91,                   /* factor3  */
  YYSYMBOL_primary3 = 92                   /* primary3  */
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
<<<<<<< HEAD
#define YYLAST   350
=======
#define YYLAST   358
>>>>>>> d5a5dd5 (++)

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
<<<<<<< HEAD
#define YYNRULES  177
=======
#define YYNRULES  170
>>>>>>> d5a5dd5 (++)
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  331

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
<<<<<<< HEAD
       0,   100,   100,   107,   108,   109,   114,   115,   116,   122,
     123,   124,   129,   130,   135,   146,   171,   184,   186,   202,
     203,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     223,   236,   248,   253,   262,   289,   291,   332,   333,   352,
     373,   374,   392,   416,   437,   443,   450,   456,   466,   474,
     483,   484,   521,   523,   527,   535,   563,   563,   571,   571,
     576,   580,   592,   602,   611,   623,   628,   623,   649,   655,
     660,   661,   666,   672,   678,   690,   694,   706,   710,   720,
     727,   739,   750,   761,   772,   783,   809,   813,   816,   834,
     835,   838,   839,   842,   843,   844,   845,   846,   847,   853,
     854,   873,   894,   895,   913,   937,   954,   963,   973,   983,
     996,  1005,  1017,  1018,  1037,  1038,  1057,  1078,  1079,  1097,
    1121,  1141,  1151,  1162,  1172,  1185,  1194,  1206,  1207,  1227,
    1228,  1247,  1268,  1269,  1287,  1311,  1322,  1329,  1334,  1341,
    1350,  1356,  1363,  1364,  1380,  1381,  1400,  1421,  1422,  1440,
    1464,  1478,  1486,  1492,  1500,  1510,  1517,  1525,  1526,  1540,
    1543,  1547,  1548,  1567,  1588,  1589,  1607,  1631,  1644,  1651,
    1656,  1663,  1672,  1678,  1685,  1686,  1699,  1702
=======
       0,   100,   100,   107,   108,   109,   114,   115,   120,   121,
     126,   127,   132,   143,   168,   181,   183,   199,   200,   207,
     208,   209,   210,   211,   216,   229,   241,   246,   255,   283,
     318,   319,   338,   359,   360,   378,   402,   425,   431,   438,
     444,   454,   462,   471,   472,   505,   507,   511,   519,   547,
     547,   555,   555,   560,   564,   576,   586,   595,   607,   612,
     607,   633,   639,   644,   645,   650,   656,   662,   674,   678,
     690,   694,   704,   711,   723,   734,   745,   756,   767,   793,
     797,   800,   818,   819,   822,   823,   826,   827,   828,   829,
     830,   831,   837,   838,   857,   878,   879,   897,   921,   937,
     946,   956,   966,   979,   988,  1000,  1001,  1020,  1021,  1040,
    1061,  1062,  1080,  1104,  1124,  1134,  1145,  1155,  1168,  1177,
    1189,  1190,  1210,  1211,  1230,  1251,  1252,  1270,  1294,  1305,
    1312,  1317,  1324,  1333,  1339,  1346,  1347,  1363,  1364,  1383,
    1404,  1405,  1423,  1447,  1461,  1469,  1475,  1483,  1493,  1500,
    1508,  1509,  1523,  1526,  1530,  1531,  1550,  1571,  1572,  1590,
    1614,  1627,  1634,  1639,  1646,  1655,  1661,  1668,  1669,  1682,
    1685
>>>>>>> d5a5dd5 (++)
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
  "primarytab", "EXPRESSION_CHAR", "condition", "$@1", "elsebloc", "$@2",
  "assignment_int", "loop", "$@3", "$@4", "io_statement", "io_expr_list",
  "io_expr", "COND", "AND_EXPR", "NOT_EXPR", "comparison_expr", "DROIT",
  "GAUCHE", "OP_COMP", "term", "factor", "primary", "term1", "factor1",
  "primary1", "term2", "factor2", "primary2", "term4", "factor4",
  "primary4", "term3", "factor3", "primary3", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-164)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

<<<<<<< HEAD
#define YYTABLE_NINF (-36)
=======
#define YYTABLE_NINF (-1)
>>>>>>> d5a5dd5 (++)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD
      12,    14,    60,   188,  -164,  -164,  -164,  -164,   108,    28,
      46,    35,    47,     9,  -164,    87,   188,  -164,    74,    10,
      28,    79,  -164,   138,    56,  -164,  -164,  -164,     2,  -164,
       4,   100,  -164,  -164,   188,    83,  -164,  -164,   106,   117,
     144,  -164,    10,   197,   201,    65,    10,    10,    86,    10,
      10,   131,   101,   156,   203,   207,    75,   138,   138,   138,
     138,    21,   153,   162,   171,   176,  -164,   100,   100,    28,
    -164,  -164,   169,   188,   177,   185,   224,   230,   245,  -164,
     144,   144,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
     214,  -164,  -164,  -164,  -164,  -164,  -164,   196,   228,   247,
     248,   249,   250,   251,   154,   252,   258,   260,   253,  -164,
     254,   255,    50,   274,   275,    -2,    10,  -164,  -164,  -164,
      61,    61,  -164,  -164,  -164,   259,  -164,  -164,  -164,    50,
     113,  -164,    -6,   276,  -164,  -164,   178,   161,   148,  -164,
     269,   270,   261,   263,  -164,  -164,   264,   265,    43,  -164,
    -164,  -164,   117,  -164,   117,   285,  -164,   209,   211,    89,
      50,   271,    50,  -164,  -164,  -164,  -164,  -164,  -164,    71,
     143,   143,   143,   143,   143,   143,   146,   146,    11,   146,
     146,    61,    61,    82,  -164,  -164,    -2,  -164,   268,   267,
     272,   273,   277,  -164,   276,  -164,  -164,   278,  -164,  -164,
    -164,   122,  -164,  -164,   200,   202,  -164,   200,   200,   200,
     200,   200,   200,   148,   148,  -164,  -164,  -164,  -164,   117,
    -164,   117,   279,  -164,  -164,  -164,     6,  -164,   206,   208,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,   196,   291,   215,
     221,   120,   143,   143,   143,   143,   294,   225,   227,   141,
      82,    82,   280,    82,    82,   283,   281,   282,   284,   286,
     287,  -164,   202,   202,  -164,  -164,   288,   289,   292,   293,
     295,  -164,   208,   208,    92,  -164,  -164,   300,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,   290,  -164,
    -164,  -164,    40,  -164,   216,   217,  -164,   297,  -164,   296,
     234,   236,   163,    92,    92,   298,    92,    92,  -164,   299,
     302,   303,   304,   305,  -164,   217,   217,   309,  -164,  -164,
     196,  -164,  -164,  -164,  -164,  -164,   196,   301,   310,  -164,
    -164
=======
      14,    -8,    31,   195,  -162,  -162,  -162,  -162,   207,    32,
      19,   195,    55,    22,    45,    54,  -162,  -162,    46,    62,
      32,  -162,    58,    40,    56,  -162,  -162,  -162,    -3,  -162,
      -1,   100,  -162,  -162,   195,    68,  -162,  -162,   113,    73,
     186,  -162,    62,   128,   204,   132,    62,    62,    75,    62,
      62,    77,   195,   131,   206,   210,   134,    40,    40,  -162,
      40,    40,     4,   119,   124,   129,   133,  -162,   100,   100,
      32,  -162,  -162,   144,  -162,   146,   157,   159,   169,   180,
    -162,   186,   186,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,   164,  -162,  -162,  -162,  -162,  -162,   161,   189,   203,
     221,   228,   233,   241,   161,  -162,   258,   261,  -162,  -162,
    -162,  -162,    50,   275,   278,     3,    62,  -162,  -162,    71,
      71,   257,  -162,  -162,  -162,    50,   121,  -162,    10,   224,
    -162,  -162,   185,   156,   197,  -162,   267,   268,   256,   262,
    -162,  -162,   263,   260,    43,  -162,  -162,   264,    87,   265,
      94,   285,  -162,   214,   216,   158,    50,   269,    50,  -162,
    -162,  -162,  -162,  -162,  -162,    83,    79,    79,    79,    79,
      79,    79,   142,   142,     1,   142,   142,    71,    71,    92,
     266,   270,     3,  -162,  -162,  -162,  -162,  -162,   272,   271,
     276,   277,   279,  -162,   224,  -162,  -162,   274,  -162,  -162,
    -162,   137,  -162,  -162,   205,   208,  -162,   205,   205,   205,
     205,   205,   205,   197,   197,  -162,  -162,  -162,  -162,   212,
    -162,   212,   280,  -162,  -162,  -162,     6,  -162,   215,   217,
    -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,   161,
     290,   220,   230,   160,    79,    79,    79,    79,   292,   234,
     236,   162,    92,    92,   273,    92,    92,   282,   281,   284,
     286,   287,   288,  -162,   208,   208,  -162,  -162,   283,   289,
     291,   293,   294,  -162,   217,   217,   104,  -162,  -162,   307,
    -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
     295,  -162,  -162,  -162,    34,  -162,   225,   226,  -162,   298,
     296,   310,   243,   245,   170,   104,   104,   297,   104,   104,
    -162,  -162,   299,   300,   302,   303,   304,  -162,   226,   226,
     301,  -162,  -162,   161,  -162,  -162,  -162,  -162,  -162,   161,
     308,   309,  -162,   305,  -162
>>>>>>> d5a5dd5 (++)
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,     5,     0,     0,
<<<<<<< HEAD
       0,     8,     0,    17,    14,     0,     6,    16,     0,     0,
       0,     0,     7,     0,    43,    44,    45,    52,     0,    53,
       0,    37,    40,    19,     0,   105,   106,   107,     0,    15,
      99,   102,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    38,    39,     0,
      41,    42,     0,     9,     0,     0,     0,     0,     0,   112,
     100,   101,   103,   104,    51,    46,    48,    47,    49,    20,
       0,    10,   113,   108,   110,   109,   111,    35,     0,     0,
       0,     0,    34,     0,    12,    26,     0,     0,    27,    25,
      28,    29,     0,    35,     0,     0,     0,     2,    13,    21,
       0,     0,    22,    23,    24,   135,   136,   137,    89,     0,
       0,    90,     0,    75,    77,    79,     0,     0,   129,   132,
       0,     0,     0,     0,    72,    73,     0,    70,     0,    54,
      55,    33,    30,    32,    31,     0,    78,     0,     0,     0,
       0,     0,     0,    97,    98,    95,    94,    96,    93,     0,
      97,    98,    95,    94,    96,    93,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,     0,    36,     0,     0,
       0,     0,     0,   142,    74,    56,    76,   120,   121,   122,
      91,     0,    92,    88,    86,   114,   117,    82,    85,    83,
      81,    84,    80,   130,   131,    87,   133,   134,    64,    61,
      63,    62,   167,   168,   169,   177,     0,   176,    65,   161,
     164,    71,   143,   138,   140,   139,   141,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   127,   115,   116,   118,   119,     0,     0,     0,     0,
       0,   174,   162,   163,     0,   165,   166,    60,   128,   123,
     125,   124,   126,   175,   170,   172,   171,   173,   150,   151,
     152,   160,     0,   159,    66,   144,   147,     0,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,   157,   145,   146,     0,   148,   149,
      35,   158,   153,   155,   154,   156,    35,     0,     0,    59,
      67
=======
       0,     6,     0,    15,     0,     0,     7,    14,     0,     0,
       0,    12,     0,     0,    36,    37,    38,    45,     0,    46,
       0,    30,    33,    17,     0,    98,    99,   100,     0,     0,
      92,    95,     0,     0,     0,     0,     0,     0,    16,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,     0,     0,     0,     0,    43,    31,    32,
       0,    34,    35,     0,     9,     0,     0,     0,     0,     0,
     105,    93,    94,    96,    97,    44,    39,    41,    40,    42,
      18,     0,   106,   101,   103,   102,   104,     0,     0,     0,
       0,     0,    28,     0,    10,    19,     0,     0,    20,    23,
      21,    22,     0,     0,     0,     0,     0,     2,    11,     0,
       0,   128,   129,   130,    82,     0,     0,    83,     0,    68,
      70,    72,     0,     0,   122,   125,     0,     0,     0,     0,
      65,    66,     0,    63,     0,    47,    48,    57,    54,    56,
      55,     0,    71,     0,     0,     0,     0,     0,     0,    90,
      91,    88,    87,    89,    86,     0,    90,    91,    88,    87,
      89,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    27,    24,    26,    25,     0,     0,
       0,     0,     0,   135,    67,    49,    69,   113,   114,   115,
      84,     0,    85,    81,    79,   107,   110,    75,    78,    76,
      74,    77,    73,   123,   124,    80,   126,   127,    57,    54,
      56,    55,   160,   161,   162,   170,     0,   169,    58,   154,
     157,    61,    62,    64,   136,   131,   133,   132,   134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,   108,   109,   111,   112,     0,     0,
       0,     0,     0,   167,   155,   156,     0,   158,   159,    53,
     121,   116,   118,   117,   119,   168,   163,   165,   164,   166,
     143,   144,   145,   153,     0,   152,    59,   137,   140,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    50,     0,     0,     0,     0,     0,   150,   138,   139,
       0,   141,   142,     0,   151,   146,   148,   147,   149,     0,
       0,     0,    52,     0,    60
>>>>>>> d5a5dd5 (++)
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
    -164,  -164,   306,   -12,  -164,  -104,   311,  -164,   -15,  -164,
    -164,   219,   220,   -26,   210,   205,  -118,  -164,  -164,  -164,
    -164,   223,  -164,  -164,  -164,  -164,   157,  -164,  -164,   164,
    -123,  -164,  -164,   168,   212,   -37,   204,   199,  -163,    22,
      23,   218,    93,    94,    55,   -32,   -31,   124,    27,    26
=======
    -162,  -162,   320,   330,   306,  -104,   -14,  -162,   -16,  -162,
    -162,   232,   235,   -26,   218,   219,  -117,  -162,  -162,  -162,
    -162,   237,  -162,  -162,  -162,  -162,   165,  -162,  -162,   190,
    -114,  -162,  -162,   175,   222,   -37,   209,   211,  -161,    29,
      30,   227,   106,   105,    57,   -23,   -24,   126,    35,    36
>>>>>>> d5a5dd5 (++)
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    51,   103,    11,    18,    14,   104,
     105,   106,   107,    30,    31,    32,   151,   108,   237,   298,
     320,   109,   110,   252,   305,   111,   146,   147,   132,   133,
     134,   135,   136,   203,   169,    39,    40,    41,   204,   205,
     206,   137,   138,   139,   294,   295,   296,   228,   229,   230
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
<<<<<<< HEAD
     118,    56,    45,   153,    22,    33,   156,   207,   208,   209,
     210,   211,   212,   144,   160,     1,    61,    24,    25,    26,
      27,   222,   223,   224,   225,    24,    25,    26,    27,   200,
     161,    43,    44,    46,    47,   247,   248,    28,   241,   196,
     145,   226,    48,    13,    29,    28,    19,     3,   227,    20,
      46,    47,    29,   202,    89,   288,   289,   290,   291,    84,
       4,    91,    17,   218,   220,   125,   126,   127,   128,   300,
     301,   129,    46,    47,    16,   292,    35,    36,    37,   149,
      15,   187,   293,   152,   154,   130,   197,   198,   199,   200,
     148,    21,   131,    42,    46,    47,    38,   222,   223,   224,
     225,    66,    23,   150,    57,    58,   201,   288,   289,   290,
     291,    79,    34,   202,     5,     6,     7,   226,   176,   177,
      53,    35,    36,    37,   227,   193,    69,   292,   125,   126,
     127,    49,    50,   255,   293,    54,    55,   197,   198,   199,
      73,    38,   157,   158,   219,   221,    57,    58,   130,   242,
     243,   239,   240,    35,    36,    37,   261,   201,   197,   198,
     199,   125,   126,   127,    98,    72,    99,   100,   101,   102,
     250,   251,    74,    38,    90,    59,    60,   271,   201,   179,
     180,   130,   -35,   170,   171,   172,   173,   174,   175,    85,
     176,   177,   303,   304,     5,     6,     7,     8,    86,   314,
     163,   164,   165,   166,   167,   168,    98,    87,    99,   100,
     101,   102,    88,    62,    63,    92,   327,    64,    65,    75,
      76,    93,   328,    77,    78,   189,   190,   191,   192,   242,
     243,   257,   258,   244,   245,   250,   251,   259,   260,   253,
     254,   267,   268,   269,   270,   303,   304,    97,   306,   307,
     310,   311,   312,   313,    70,    71,    67,    68,    82,    83,
      94,    80,    81,   112,   262,   263,    95,   264,   265,   213,
     214,   315,   316,   216,   217,   318,   319,   272,   273,   275,
     276,    96,   113,   114,   115,   117,   120,   116,   121,   102,
     143,   119,   122,   123,   124,   162,   155,   181,   182,   184,
     185,   188,   183,   233,   195,   186,   232,   256,   234,   235,
     266,   297,   309,   236,    12,   238,   246,   277,   279,   278,
     280,   274,   281,   282,   194,   284,   283,   299,   285,   286,
     308,   287,   140,   141,   317,   329,   142,   321,   322,   323,
     324,   325,   326,   231,   330,    52,   215,   302,   159,   178,
     249
=======
     118,    56,    45,   149,    33,   207,   208,   209,   210,   211,
     212,   152,    24,    25,    26,    27,    62,     1,   140,   200,
      52,   222,   223,   224,   225,     3,    43,    44,    46,    47,
     156,     4,    28,    46,    47,   249,   250,    48,    52,    29,
     243,   226,    85,   202,   196,   141,   157,    13,   227,   290,
     291,   292,   293,    15,    90,    35,    36,    37,    22,    19,
     218,   220,    20,   302,   303,   121,   122,   123,   124,   294,
      17,   125,    46,    47,    23,    38,   295,    24,    25,    26,
      27,   183,   148,   150,    21,   126,    35,    36,    37,   145,
     144,    34,   127,    42,   197,   198,   199,    28,   197,   198,
     199,   200,    57,    58,    29,    53,    38,   222,   223,   224,
     225,    73,    59,   146,   201,    70,    57,    58,   201,   290,
     291,   292,   293,    57,    58,   202,   185,   226,    35,    36,
      37,    49,    50,   187,   227,   257,   121,   122,   123,   294,
     219,   221,    54,    55,    63,    64,   295,    75,    38,    91,
     153,   154,   197,   198,   199,    86,   126,   121,   122,   123,
      87,    46,    47,    57,    58,    88,   241,   242,    67,    89,
      80,    98,   201,    99,   100,   101,   102,   126,   166,   167,
     168,   169,   170,   171,    92,   172,   173,   172,   173,   244,
     245,   252,   253,    93,   193,    94,   263,    97,   273,   305,
     306,     5,     6,     7,     8,    95,   317,   159,   160,   161,
     162,   163,   164,     5,     6,     7,    96,    60,    61,   330,
      65,    66,    76,    77,   112,   331,    78,    79,   175,   176,
     189,   190,   191,   192,   244,   245,   259,   260,   113,   246,
     247,    57,    58,   158,   252,   253,   261,   262,   255,   256,
     269,   270,   271,   272,   305,   306,   114,   308,   309,   313,
     314,   315,   316,   115,    68,    69,    81,    82,    71,    72,
     116,    83,    84,   264,   265,   117,   266,   267,   213,   214,
     216,   217,   318,   319,   321,   322,   119,   274,   275,   120,
     102,   277,   278,   139,   151,   177,   178,   179,   180,   181,
     182,   188,   195,   184,   186,   231,   258,   235,   268,   232,
     234,   240,   236,   237,   276,   238,   279,   248,   299,   280,
     281,   285,   282,   283,   284,   286,   312,   287,    12,   288,
     289,   310,   301,   320,   329,   311,   325,   324,   326,   327,
     328,    16,   332,   333,   334,   136,   194,   233,   137,   215,
     138,   304,   251,   155,     0,   174,     0,     0,    74
>>>>>>> d5a5dd5 (++)
};

static const yytype_int16 yycheck[] =
{
<<<<<<< HEAD
     104,    38,    28,   121,    16,    20,   129,   170,   171,   172,
     173,   174,   175,    15,    20,     3,    42,    15,    16,    17,
      18,    15,    16,    17,    18,    15,    16,    17,    18,    18,
      36,    29,    30,    29,    30,    29,    30,    35,   201,   162,
      42,    35,    38,    15,    42,    35,    37,    33,    42,    40,
      29,    30,    42,    42,    69,    15,    16,    17,    18,    38,
       0,    73,    15,   181,   182,    15,    16,    17,    18,    29,
      30,    21,    29,    30,    39,    35,    15,    16,    17,    18,
      34,    38,    42,   120,   121,    35,    15,    16,    17,    18,
     116,     4,    42,    37,    29,    30,    35,    15,    16,    17,
      18,    36,    28,    42,    29,    30,    35,    15,    16,    17,
      18,    36,    33,    42,     6,     7,     8,    35,    29,    30,
      37,    15,    16,    17,    42,    36,    40,    35,    15,    16,
      17,    31,    32,   237,    42,    29,    30,    15,    16,    17,
      39,    35,    29,    30,   181,   182,    29,    30,    35,    29,
      30,    29,    30,    15,    16,    17,    36,    35,    15,    16,
      17,    15,    16,    17,    10,    34,    12,    13,    14,    15,
      29,    30,    16,    35,     5,    31,    32,    36,    35,    31,
      32,    35,    28,    22,    23,    24,    25,    26,    27,    36,
      29,    30,    29,    30,     6,     7,     8,     9,    36,    36,
      22,    23,    24,    25,    26,    27,    10,    36,    12,    13,
      14,    15,    36,    16,    17,    38,   320,    16,    17,    16,
      17,    36,   326,    16,    17,    16,    17,    16,    17,    29,
      30,    16,    17,    31,    32,    29,    30,    16,    17,    31,
      32,    16,    17,    16,    17,    29,    30,    33,    31,    32,
      16,    17,    16,    17,    49,    50,    46,    47,    59,    60,
      36,    57,    58,    35,   242,   243,    36,   244,   245,   176,
     177,   303,   304,   179,   180,   306,   307,   250,   251,   253,
     254,    36,    35,    35,    35,    34,    28,    37,    28,    15,
      15,    39,    39,    39,    39,    19,    37,    28,    28,    36,
      36,    16,    41,    36,    33,    40,    38,    16,    36,    36,
      16,    11,    16,    36,     8,    37,    37,    34,    36,    38,
      36,    41,    36,    36,   160,    36,    38,    37,    36,    36,
      33,    36,   113,   113,    36,    34,   113,    38,    36,    36,
      36,    36,    33,   186,    34,    34,   178,   292,   130,   137,
     226
=======
     104,    38,    28,   120,    20,   166,   167,   168,   169,   170,
     171,   125,    15,    16,    17,    18,    42,     3,    15,    18,
      34,    15,    16,    17,    18,    33,    29,    30,    29,    30,
      20,     0,    35,    29,    30,    29,    30,    38,    52,    42,
     201,    35,    38,    42,   158,    42,    36,    15,    42,    15,
      16,    17,    18,    34,    70,    15,    16,    17,     4,    37,
     177,   178,    40,    29,    30,    15,    16,    17,    18,    35,
      15,    21,    29,    30,    28,    35,    42,    15,    16,    17,
      18,    38,   119,   120,    39,    35,    15,    16,    17,    18,
     116,    33,    42,    37,    15,    16,    17,    35,    15,    16,
      17,    18,    29,    30,    42,    37,    35,    15,    16,    17,
      18,    34,    39,    42,    35,    40,    29,    30,    35,    15,
      16,    17,    18,    29,    30,    42,    39,    35,    15,    16,
      17,    31,    32,    39,    42,   239,    15,    16,    17,    35,
     177,   178,    29,    30,    16,    17,    42,    16,    35,     5,
      29,    30,    15,    16,    17,    36,    35,    15,    16,    17,
      36,    29,    30,    29,    30,    36,    29,    30,    36,    36,
      36,    10,    35,    12,    13,    14,    15,    35,    22,    23,
      24,    25,    26,    27,    38,    29,    30,    29,    30,    29,
      30,    29,    30,    36,    36,    36,    36,    33,    36,    29,
      30,     6,     7,     8,     9,    36,    36,    22,    23,    24,
      25,    26,    27,     6,     7,     8,    36,    31,    32,   323,
      16,    17,    16,    17,    35,   329,    16,    17,    31,    32,
      16,    17,    16,    17,    29,    30,    16,    17,    35,    31,
      32,    29,    30,    19,    29,    30,    16,    17,    31,    32,
      16,    17,    16,    17,    29,    30,    35,    31,    32,    16,
      17,    16,    17,    35,    46,    47,    57,    58,    49,    50,
      37,    60,    61,   244,   245,    34,   246,   247,   172,   173,
     175,   176,   305,   306,   308,   309,    28,   252,   253,    28,
      15,   255,   256,    15,    37,    28,    28,    41,    36,    36,
      40,    16,    33,    39,    39,    39,    16,    36,    16,    39,
      38,    37,    36,    36,    41,    36,    34,    37,    11,    38,
      36,    38,    36,    36,    36,    36,    16,    36,     8,    36,
      36,    33,    37,    36,    33,    39,    36,    38,    36,    36,
      36,    11,    34,    34,    39,   113,   156,   182,   113,   174,
     113,   294,   226,   126,    -1,   133,    -1,    -1,    52
>>>>>>> d5a5dd5 (++)
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    44,    33,     0,     6,     7,     8,     9,    45,
      46,    49,    45,    15,    51,    34,    39,    15,    50,    37,
      40,     4,    46,    28,    15,    16,    17,    18,    35,    42,
      56,    57,    58,    51,    33,    15,    16,    17,    35,    78,
      79,    80,    37,    29,    30,    56,    29,    30,    38,    31,
      32,    47,    49,    37,    29,    30,    78,    29,    30,    31,
      32,    56,    16,    17,    16,    17,    36,    57,    57,    40,
      58,    58,    34,    39,    16,    16,    17,    16,    17,    36,
      79,    79,    80,    80,    38,    36,    36,    36,    36,    51,
       5,    46,    38,    36,    36,    36,    36,    33,    10,    12,
      13,    14,    15,    48,    52,    53,    54,    55,    60,    64,
      65,    68,    35,    35,    35,    35,    37,    34,    48,    39,
      28,    28,    39,    39,    39,    15,    16,    17,    18,    21,
      35,    42,    71,    72,    73,    74,    75,    84,    85,    86,
      54,    55,    64,    15,    15,    42,    69,    70,    56,    18,
      42,    59,    78,    59,    78,    37,    73,    29,    30,    84,
      20,    36,    19,    22,    23,    24,    25,    26,    27,    77,
      22,    23,    24,    25,    26,    27,    29,    30,    77,    31,
      32,    28,    28,    41,    36,    36,    40,    38,    16,    16,
      17,    16,    17,    36,    72,    33,    73,    15,    16,    17,
      18,    35,    42,    76,    81,    82,    83,    81,    81,    81,
      81,    81,    81,    85,    85,    76,    86,    86,    59,    78,
      59,    78,    15,    16,    17,    18,    35,    42,    90,    91,
      92,    69,    38,    36,    36,    36,    36,    61,    37,    29,
      30,    81,    29,    30,    31,    32,    37,    29,    30,    90,
      29,    30,    66,    31,    32,    48,    16,    16,    17,    16,
      17,    36,    82,    82,    83,    83,    16,    16,    17,    16,
      17,    36,    91,    91,    41,    92,    92,    34,    38,    36,
      36,    36,    36,    38,    36,    36,    36,    36,    15,    16,
      17,    18,    35,    42,    87,    88,    89,    11,    62,    37,
      29,    30,    87,    29,    30,    67,    31,    32,    33,    16,
      16,    17,    16,    17,    36,    88,    88,    36,    89,    89,
      63,    38,    36,    36,    36,    36,    33,    48,    48,    34,
      34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
<<<<<<< HEAD
       0,    43,    44,    45,    45,    45,    46,    46,    46,    47,
      47,    47,    48,    48,    49,    49,    50,    51,    51,    51,
      51,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    53,    54,    55,    55,    56,    56,    56,
      57,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    59,    59,    61,    60,    63,    62,
      62,    64,    64,    64,    64,    66,    67,    65,    68,    68,
      69,    69,    70,    70,    71,    71,    72,    72,    73,    73,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    77,    77,    77,    77,    78,
      78,    78,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    81,    81,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    84,    85,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    87,    87,    87,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    90,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92
=======
       0,    43,    44,    45,    45,    45,    46,    46,    47,    47,
      48,    48,    49,    49,    50,    51,    51,    51,    51,    52,
      52,    52,    52,    52,    53,    53,    53,    53,    54,    55,
      56,    56,    56,    57,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    59,    59,    61,
      60,    63,    62,    62,    64,    64,    64,    64,    66,    67,
      65,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    78,    78,    78,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    81,
      82,    82,    82,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      88,    88,    88,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    91,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92
>>>>>>> d5a5dd5 (++)
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
<<<<<<< HEAD
       0,     2,    12,     1,     1,     1,     2,     3,     1,     2,
       3,     1,     1,     2,     2,     5,     1,     1,     4,     3,
       6,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     1,     0,     4,     1,     3,     3,
       1,     3,     3,     1,     1,     1,     4,     4,     4,     4,
       3,     4,     1,     1,     1,     1,     0,     9,     0,     5,
       0,     3,     3,     3,     3,     0,     0,    13,     4,     4,
       1,     3,     1,     1,     3,     1,     3,     1,     2,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     1,     1,     1,     4,     4,
       4,     4,     3,     4,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       3,     3,     1,     3,     3,     1,     1,     1,     4,     4,
       4,     4,     3,     4,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       1,     1,     3,     3,     1,     3,     3,     1,     1,     1,
       4,     4,     4,     4,     3,     4,     1,     1
=======
       0,     2,    12,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     3,     6,     1,     1,     4,     3,     6,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     1,     4,
       1,     3,     3,     1,     3,     3,     1,     1,     1,     4,
       4,     4,     4,     3,     4,     1,     1,     1,     1,     0,
      10,     0,     5,     0,     3,     3,     3,     3,     0,     0,
      14,     5,     5,     1,     3,     1,     1,     3,     1,     3,
       1,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     3,     3,     1,     1,
       1,     4,     4,     4,     4,     3,     4,     1,     3,     3,
       1,     3,     3,     1,     1,     1,     4,     4,     4,     4,
       3,     4,     1,     3,     3,     1,     3,     3,     1,     1,
       1,     4,     4,     4,     4,     3,     4,     1,     3,     3,
       1,     3,     3,     1,     1,     1,     4,     4,     4,     4,
       3,     4,     1,     1,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       1
>>>>>>> d5a5dd5 (++)
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
#line 107 "syntaxic.y"
            {strcpy(sauvType,"INTEGER");}
#line 1429 "syntaxic.tab.c"
    break;

  case 4: /* type: FLOAT  */
#line 108 "syntaxic.y"
            {strcpy(sauvType,"FLOAT");}
#line 1435 "syntaxic.tab.c"
    break;

  case 5: /* type: CHAR  */
#line 109 "syntaxic.y"
            {strcpy(sauvType,"CHAR");}
#line 1441 "syntaxic.tab.c"
    break;

  case 8: /* global_var_section: declaration  */
#line 116 "syntaxic.y"
                 {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d apres declaration",nb_ligne,colPrd);exit(0);}
#line 1447 "syntaxic.tab.c"
    break;

  case 11: /* declaration_section: declaration  */
#line 124 "syntaxic.y"
                 {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d apres declaration",nb_ligne,colPrd);exit(0);}
#line 1453 "syntaxic.tab.c"
    break;

  case 14: /* declaration: type variable_list  */
#line 135 "syntaxic.y"
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
    }
<<<<<<< HEAD
#line 1469 "syntaxic.tab.c"
=======
#line 1457 "syntaxic.tab.c"
>>>>>>> d5a5dd5 (++)
    break;

  case 15: /* declaration: CONST type cst EQUALS term  */
#line 146 "syntaxic.y"
                                 {
    // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ((yyvsp[0].real) - floor((yyvsp[0].real)) != 0)) {
            printf("Erreur sémantique à la ligne %d colonne %d  : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne,col);
             exit(0);
        }
         
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[0].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f", (yyvsp[0].real));  // Convertir en flottant
        }
        sprintf(mDroit,"%s",(yyvsp[-2].string));
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",mDroit);

        // Ajout du quadruplet pour la déclaration d'une constante
        //createQuad("CONST", sauvType, saveStr, saveIdf[0].idfTab);
        insererVal(saveIdf[0].idfTab,saveStr);
        strcpy(saveIdf[0].idfTab,"");
    }
<<<<<<< HEAD
#line 1496 "syntaxic.tab.c"
=======
#line 1484 "syntaxic.tab.c"
>>>>>>> d5a5dd5 (++)
    break;

  case 16: /* cst: IDENTIFIER  */
#line 171 "syntaxic.y"
              {
        strcpy(saveIdf[0].idfTab,(yyvsp[0].string));
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType((yyvsp[0].string)));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d colonne %d \n",saveIdf[0].idfTab,nb_ligne,col);
            
            
    }
<<<<<<< HEAD
#line 1510 "syntaxic.tab.c"
=======
#line 1498 "syntaxic.tab.c"
>>>>>>> d5a5dd5 (++)
    break;

  case 17: /* variable_list: IDENTIFIER  */
#line 184 "syntaxic.y"
               {strcpy(saveIdf[j].idfTab,(yyvsp[0].string));j++;}
<<<<<<< HEAD
#line 1516 "syntaxic.tab.c"
=======
#line 1504 "syntaxic.tab.c"
>>>>>>> d5a5dd5 (++)
    break;

  case 18: /* variable_list: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 186 "syntaxic.y"
                                          {strcpy(saveIdf[j].idfTab,(yyvsp[-3].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;

        sprintf(buffer1, "T%d", cpttemp-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[-3].string),"","");
         if (fmod(valind, 1.0) != 0.0) {
            printf("Erreur semantique la ligne %d colonne %d : La taille du tableau doit etre un entier (pas un nombre réel)\n",nb_ligne,col);
             exit(0);
        }
        
        // Vérifier que le nombre est un entier positif
        if ((yyvsp[-1].real) < 1) {
            printf("Erreur semantique la ligne %d colonne %d : La taille du tableau doit etre un entier strictement positif\n",nb_ligne,col);
             exit(0);
        }
        }
<<<<<<< HEAD
#line 1537 "syntaxic.tab.c"
=======
#line 1525 "syntaxic.tab.c"
>>>>>>> d5a5dd5 (++)
    break;

  case 19: /* variable_list: IDENTIFIER COMMA variable_list  */
#line 202 "syntaxic.y"
                                      {strcpy(saveIdf[j].idfTab,(yyvsp[-2].string));j++;}
<<<<<<< HEAD
#line 1543 "syntaxic.tab.c"
=======
#line 1531 "syntaxic.tab.c"
>>>>>>> d5a5dd5 (++)
    break;

  case 26: /* statement: assignment  */
#line 215 "syntaxic.y"
                {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d (';' apres chaque instruction)",nb_ligne,colPrd);exit(0);}
#line 1549 "syntaxic.tab.c"
    break;

  case 27: /* statement: condition  */
#line 216 "syntaxic.y"
                {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d (';' apres chaque instruction)",nb_ligne,colPrd);exit(0);}
#line 1555 "syntaxic.tab.c"
    break;

  case 28: /* statement: loop  */
#line 217 "syntaxic.y"
           {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d (';' apres chaque instruction)",nb_ligne,colPrd);exit(0);}
#line 1561 "syntaxic.tab.c"
    break;

  case 29: /* statement: io_statement  */
#line 218 "syntaxic.y"
                   {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d (';' apres chaque instruction)",nb_ligne,colPrd);exit(0);}
#line 1567 "syntaxic.tab.c"
    break;

  case 30: /* assignment: MDROIT EQUALS term  */
#line 223 "syntaxic.y"
                        {
  
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[0].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f",(yyvsp[0].real));  // Convertir en flottant
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    }
<<<<<<< HEAD
#line 1585 "syntaxic.tab.c"
=======
#line 1549 "syntaxic.tab.c"
>>>>>>> d5a5dd5 (++)
    break;

  case 31: /* assignment: TAB EQUALS term  */
#line 236 "syntaxic.y"
                      {
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") == 0) {
            sprintf(saveStr, "%d", (int)(yyvsp[0].real));  // Convertir en entier
        } else if (strcmp(typeG, "FLOAT") == 0) {
            sprintf(saveStr, "%f",(yyvsp[0].real));  // Convertir en flottant
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    }
<<<<<<< HEAD
#line 1602 "syntaxic.tab.c"
=======
#line 1566 "syntaxic.tab.c"
>>>>>>> d5a5dd5 (++)
    break;

  case 32: /* assignment: TAB EQUALS EXPRESSION_CHAR  */
#line 248 "syntaxic.y"
                                {
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    }
<<<<<<< HEAD
#line 1612 "syntaxic.tab.c"
=======
#line 1576 "syntaxic.tab.c"
>>>>>>> d5a5dd5 (++)
    break;

  case 33: /* assignment: MDROIT EQUALS EXPRESSION_CHAR  */
#line 253 "syntaxic.y"
                                   {
        
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    }
<<<<<<< HEAD
#line 1623 "syntaxic.tab.c"
=======
#line 1587 "syntaxic.tab.c"
>>>>>>> d5a5dd5 (++)
    break;

  case 34: /* MDROIT: IDENTIFIER  */
#line 262 "syntaxic.y"
               {
    // Vérification de la déclaration de la variable avant usage
    if (verifdeclaration((yyvsp[0].string)) == 0) {
        printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string));
         exit(0);
    } else if(strcmp(getCode((yyvsp[0].string)),"IDF TAB")==0){
        printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' est un tableau.\n",nb_ligne,col, (yyvsp[0].string));
         exit(0);
        strcpy(typeG, getType((yyvsp[0].string)));  // Récupérer le type de la variable à gauche
        if (comparCode((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique à la ligne %d colonne %d : affectation d'une constante\n", nb_ligne,col);
        } else {
            strcpy(mDroit, (yyvsp[0].string));
        }
        
    }
    else{
        strcpy(typeG, getType((yyvsp[0].string)));  // Récupérer le type de la variable à gauche
        if (comparCode((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique à la ligne %d colonne %d : affectation d'une constante\n", nb_ligne,col);
             exit(0);
        } else {
            strcpy(mDroit, (yyvsp[0].string));
        }
    }
    }
<<<<<<< HEAD
#line 1654 "syntaxic.tab.c"
    break;

  case 36: /* TAB: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 291 "syntaxic.y"
                                            {
=======
#line 1618 "syntaxic.tab.c"
    break;

  case 29: /* TAB: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 283 "syntaxic.y"
                                           {
>>>>>>> d5a5dd5 (++)
                    if(verifdeclaration((yyvsp[-3].string))==0 )
                    {printf("Erreur semantique a la ligne %d colonne %d :Tableau %s non declare\n",nb_ligne,col,(yyvsp[-3].string));
                     exit(0);}
                    else if(strcmp(getCode((yyvsp[-3].string)),"IDF")==0){
                        printf("Erreur semantique la ligne %d colonne %d: La variable '%s' est n'est pasm un tableau.\n",nb_ligne,col, (yyvsp[-3].string));
                         exit(0);
                        strcpy(typeG, getType((yyvsp[-3].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[-3].string)));

                    }  
                    // Vérifier que le nombre est un entier positif
                    if ((yyvsp[-1].real) < 0) {
                        printf("Erreur semantique la ligne %d colonne %d : L'indice/taille du tableau doit être un entier positif\n",nb_ligne,col);
                         exit(0);
                    }
                    
                    
                        strcpy(mDroit,(yyvsp[-3].string));
                        temp=newtemp();
                        strcpy(temp,(yyvsp[-3].string));
                        strcpy(tmp,(yyvsp[-3].string));
                        strcat(tmp,"[");
                        valDepile = depiler(&pile3); 
                        strcpy(buffer2, valDepile); 
                        strcat(tmp,buffer2);
                        strcat(tmp,"]");
                       
                    }
<<<<<<< HEAD
#line 1696 "syntaxic.tab.c"
    break;

  case 38: /* termtab: termtab PLUS factortab  */
#line 333 "syntaxic.y"
=======
#line 1654 "syntaxic.tab.c"
    break;

  case 31: /* termtab: termtab PLUS factortab  */
#line 319 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                             {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
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
        

    }
<<<<<<< HEAD
#line 1720 "syntaxic.tab.c"
    break;

  case 39: /* termtab: termtab MINUS factortab  */
#line 352 "syntaxic.y"
=======
#line 1678 "syntaxic.tab.c"
    break;

  case 32: /* termtab: termtab MINUS factortab  */
#line 338 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                              {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
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
    }
<<<<<<< HEAD
#line 1742 "syntaxic.tab.c"
    break;

  case 41: /* factortab: factortab MULTIPLY primarytab  */
#line 374 "syntaxic.y"
=======
#line 1700 "syntaxic.tab.c"
    break;

  case 34: /* factortab: factortab MULTIPLY primarytab  */
#line 360 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                     { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
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

    }
<<<<<<< HEAD
#line 1765 "syntaxic.tab.c"
    break;

  case 42: /* factortab: factortab DIVIDE primarytab  */
#line 392 "syntaxic.y"
=======
#line 1723 "syntaxic.tab.c"
    break;

  case 35: /* factortab: factortab DIVIDE primarytab  */
#line 378 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                      { 
        if((yyvsp[0].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
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
}
<<<<<<< HEAD
#line 1790 "syntaxic.tab.c"
    break;

  case 43: /* primarytab: IDENTIFIER  */
#line 416 "syntaxic.y"
=======
#line 1748 "syntaxic.tab.c"
    break;

  case 36: /* primarytab: IDENTIFIER  */
#line 402 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                             if(strcmp("CHAR",typeD)==0 || strcmp("STRING",typeD)==0  ) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                         printf("l'indice/taille de tableau ne peut pas etre CHARACTERS\n",typeD,typeG); exit(0);
                                                        }
                            else if (strcmp("FLOAT",typeD)==0)
                            {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                         printf("l'indice/taille de tableau ne peut pas etre FLOAT\n",typeD,typeG); exit(0);}
                                
                                // if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d colonne %d : variable %s non initialisee\n",nb_ligne,col,$1); exit(0);}
                                 else{
                                  strcpy(valIdf,getVal((yyvsp[0].string)));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[0].string));
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  }
                                  
                             }
    }
<<<<<<< HEAD
#line 1816 "syntaxic.tab.c"
    break;

  case 44: /* primarytab: INT_NUMBER  */
#line 437 "syntaxic.y"
=======
#line 1776 "syntaxic.tab.c"
    break;

  case 37: /* primarytab: INT_NUMBER  */
#line 425 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                 {
                  (yyval.real)=atof((yyvsp[0].string));
                  strcpy(buffer1,(yyvsp[0].string));
                  empiler(&pile3,buffer1);
                  
    }
<<<<<<< HEAD
#line 1827 "syntaxic.tab.c"
    break;

  case 45: /* primarytab: FLOAT_NUMBER  */
#line 443 "syntaxic.y"
=======
#line 1787 "syntaxic.tab.c"
    break;

  case 38: /* primarytab: FLOAT_NUMBER  */
#line 431 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                  {
        printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
        printf("l'indice/taille de tableau ne peut pas etre FLOAT\n",typeD,typeG); exit(0);
                   (yyval.real)=atof((yyvsp[0].string)); 
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
<<<<<<< HEAD
#line 1839 "syntaxic.tab.c"
    break;

  case 46: /* primarytab: LPAREN PLUS INT_NUMBER RPAREN  */
#line 450 "syntaxic.y"
=======
#line 1799 "syntaxic.tab.c"
    break;

  case 39: /* primarytab: LPAREN PLUS INT_NUMBER RPAREN  */
#line 438 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                  {
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        
    }
<<<<<<< HEAD
#line 1850 "syntaxic.tab.c"
    break;

  case 47: /* primarytab: LPAREN MINUS INT_NUMBER RPAREN  */
#line 456 "syntaxic.y"
=======
#line 1810 "syntaxic.tab.c"
    break;

  case 40: /* primarytab: LPAREN MINUS INT_NUMBER RPAREN  */
#line 444 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                   {
        printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
        printf("l'indice/taille de tableau ne peut pas etre NEGATIVE\n",typeD,typeG); exit(0);
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    }
<<<<<<< HEAD
#line 1865 "syntaxic.tab.c"
    break;

  case 48: /* primarytab: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 466 "syntaxic.y"
=======
#line 1825 "syntaxic.tab.c"
    break;

  case 41: /* primarytab: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 454 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                      {
                                   printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                         printf("l'indice/taille de tableau ne peut pas etre FLOAT\n",typeD,typeG); exit(0); 
                                    (yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      
                   }
<<<<<<< HEAD
#line 1878 "syntaxic.tab.c"
    break;

  case 49: /* primarytab: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 474 "syntaxic.y"
=======
#line 1838 "syntaxic.tab.c"
    break;

  case 42: /* primarytab: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 462 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                       {
        printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                         printf("l'indice/taille de tableau ne peut pas etre FLOAT\n",typeD,typeG); exit(0);
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    }
<<<<<<< HEAD
#line 1892 "syntaxic.tab.c"
    break;

  case 50: /* primarytab: LPAREN termtab RPAREN  */
#line 483 "syntaxic.y"
                            {(yyval.real)=(yyvsp[-1].real);}
#line 1898 "syntaxic.tab.c"
    break;

  case 51: /* primarytab: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 484 "syntaxic.y"
=======
#line 1852 "syntaxic.tab.c"
    break;

  case 43: /* primarytab: LPAREN termtab RPAREN  */
#line 471 "syntaxic.y"
                            {(yyval.real)=(yyvsp[-1].real);}
#line 1858 "syntaxic.tab.c"
    break;

  case 44: /* primarytab: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 472 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                          {
         if(verifdeclaration((yyvsp[-3].string))==0 )
                    {printf("Erreur semantique a la ligne %d colonne %d :Tableau %s non declare\n",nb_ligne,col,(yyvsp[-3].string));
                     exit(0);}
                    else if(strcmp(getCode((yyvsp[-3].string)),"IDF")==0){
                        printf("Erreur semantique la ligne %d colonne %d: La variable '%s' est n'est pas un tableau.\n",nb_ligne,col, (yyvsp[-3].string));
                         exit(0);
                            }
                            else{
                        if(strcmp(getType((yyvsp[-3].string)),"INTEGER")!=0){
                            printf("Erreur semantique la ligne %d colonne %d: L'indice/taille du tableau doit etre un entier\n",nb_ligne,col);
                         exit(0);
                        }

                    }  
                    
                    // Vérifier que le nombre est un entier positif
                    if ((yyvsp[-1].real) < 0) {
                        printf("Erreur semantique la ligne %d colonne %d : L'indice/taille du tableau doit être un entier positif\n",nb_ligne,col);
                         exit(0);
                    }
                                        
                        strcpy(tmp,(yyvsp[-3].string));
                        strcat(tmp,"[");
                        valDepile = depiler(&pile3); 
                        strcpy(buffer1, valDepile); 
                        strcat(tmp,buffer1);
                        strcat(tmp,"]");
                        strcpy(saveStrq,tmp);
                        strcpy(buffer1,tmp);
                        empiler(&pile3,buffer1);  
 
                }
<<<<<<< HEAD
#line 1940 "syntaxic.tab.c"
    break;

  case 52: /* primarytab: CHARACTERE  */
#line 521 "syntaxic.y"
                    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible\n",nb_ligne,col);
                                 printf("l'indice/taille ne peut pas etre CHAR\n"); exit(0);}
#line 1947 "syntaxic.tab.c"
    break;

  case 53: /* primarytab: STRING_LITERAL  */
#line 523 "syntaxic.y"
                       {printf("Erreur semantique a la ligne %d colonne %d :type incompatible\n",nb_ligne,col);
                                 printf("l'indice/taille ne peut pas etre STRING\n"); exit(0);}
#line 1954 "syntaxic.tab.c"
    break;

  case 54: /* EXPRESSION_CHAR: CHARACTERE  */
#line 527 "syntaxic.y"
=======
#line 1896 "syntaxic.tab.c"
    break;

  case 45: /* primarytab: CHARACTERE  */
#line 505 "syntaxic.y"
                    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible\n",nb_ligne,col);
                                 printf("l'indice/taille ne peut pas etre CHAR\n"); exit(0);}
#line 1903 "syntaxic.tab.c"
    break;

  case 46: /* primarytab: STRING_LITERAL  */
#line 507 "syntaxic.y"
                       {printf("Erreur semantique a la ligne %d colonne %d :type incompatible\n",nb_ligne,col);
                                 printf("l'indice/taille ne peut pas etre STRING\n"); exit(0);}
#line 1910 "syntaxic.tab.c"
    break;

  case 47: /* EXPRESSION_CHAR: CHARACTERE  */
#line 511 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                            {if(strcmp(typeG,"CHAR")!=0)   
                                {printf("Erreur semantique a la ligne %d colonne %d :type incompatible\n",nb_ligne,col);
                                 printf("tentative d'affecter CHAR a un %s\n",typeG); exit(0);
                                }
                            else {insererVal(mDroit,(yyvsp[0].string));}
                            strcpy(saveStrq,(yyvsp[0].string));
                            sprintf(saveStr, "%s",(yyvsp[0].string)); 
                           }
<<<<<<< HEAD
#line 1967 "syntaxic.tab.c"
    break;

  case 55: /* EXPRESSION_CHAR: STRING_LITERAL  */
#line 535 "syntaxic.y"
=======
#line 1923 "syntaxic.tab.c"
    break;

  case 48: /* EXPRESSION_CHAR: STRING_LITERAL  */
#line 519 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                {   
                                 printf("Erreur semantique a la ligne %d colonne %d:type incompatible\n",nb_ligne,col);
                                 if(strcmp(typeG,"CHAR")==0) {printf("On ne peut pas affecter STRING a CHAR(on doit le faire caractere par caratere dans un tableaux)\n");exit(0);}
                                 else{printf("tentative d'affecter STRING a un %s\n",typeG); exit(0);}
                                 
                            
                            }
<<<<<<< HEAD
#line 1979 "syntaxic.tab.c"
    break;

  case 56: /* $@1: %empty  */
#line 563 "syntaxic.y"
=======
#line 1935 "syntaxic.tab.c"
    break;

  case 49: /* $@1: %empty  */
#line 547 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                   {
          createQuad("BZ","",QuadR[qc-1].res,"");
          empiler_Int(&pile1,qc-1);
        }
<<<<<<< HEAD
#line 1988 "syntaxic.tab.c"
    break;

  case 57: /* condition: IF LPAREN COND RPAREN LBRACE $@1 instruction_section RBRACE elsebloc  */
#line 567 "syntaxic.y"
                                            {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        }
#line 1996 "syntaxic.tab.c"
    break;

  case 58: /* $@2: %empty  */
#line 571 "syntaxic.y"
=======
#line 1944 "syntaxic.tab.c"
    break;

  case 50: /* condition: IF LPAREN COND RPAREN LBRACE $@1 instruction_section RBRACE elsebloc SEMICOLON  */
#line 551 "syntaxic.y"
                                                     {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        }
#line 1952 "syntaxic.tab.c"
    break;

  case 51: /* $@2: %empty  */
#line 555 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                      {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
        empiler_Int(&pile1,qc);
        createQuad("BR","","","");
        }
<<<<<<< HEAD
#line 2006 "syntaxic.tab.c"
    break;

  case 61: /* assignment_int: MDROIT EQUALS term  */
#line 580 "syntaxic.y"
=======
#line 1962 "syntaxic.tab.c"
    break;

  case 54: /* assignment_int: MDROIT EQUALS term  */
#line 564 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                       {
        
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }else{
            //sprintf(saveStr, "%d", (int)$3); 
            createQuad("=", saveStrq, "",mDroit);
        
        }
    }
<<<<<<< HEAD
#line 2023 "syntaxic.tab.c"
    break;

  case 62: /* assignment_int: TAB EQUALS term  */
#line 592 "syntaxic.y"
=======
#line 1979 "syntaxic.tab.c"
    break;

  case 55: /* assignment_int: TAB EQUALS term  */
#line 576 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                      {
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d colonne %d:type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    }
<<<<<<< HEAD
#line 2038 "syntaxic.tab.c"
    break;

  case 63: /* assignment_int: TAB EQUALS EXPRESSION_CHAR  */
#line 602 "syntaxic.y"
=======
#line 1994 "syntaxic.tab.c"
    break;

  case 56: /* assignment_int: TAB EQUALS EXPRESSION_CHAR  */
#line 586 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                {
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    }
<<<<<<< HEAD
#line 2052 "syntaxic.tab.c"
    break;

  case 64: /* assignment_int: MDROIT EQUALS EXPRESSION_CHAR  */
#line 611 "syntaxic.y"
=======
#line 2008 "syntaxic.tab.c"
    break;

  case 57: /* assignment_int: MDROIT EQUALS EXPRESSION_CHAR  */
#line 595 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                   {
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    }
<<<<<<< HEAD
#line 2066 "syntaxic.tab.c"
    break;

  case 65: /* $@3: %empty  */
#line 623 "syntaxic.y"
=======
#line 2022 "syntaxic.tab.c"
    break;

  case 58: /* $@3: %empty  */
#line 607 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                          {
        valDepile = depiler(&pile3); 
        strcpy(pasfor, valDepile); 
        //$$ = atoi($6); // Capturer le pas
    }
<<<<<<< HEAD
#line 2076 "syntaxic.tab.c"
    break;

  case 66: /* $@4: %empty  */
#line 628 "syntaxic.y"
=======
#line 2032 "syntaxic.tab.c"
    break;

  case 59: /* $@4: %empty  */
#line 612 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                {
        //char *cond_var = atoi($7); // Capturer la condition d'arrêt
        valDepile = depiler(&pile3); 
        strcpy(brnsup, valDepile); 
        empiler_Int(&pile1, qc);
        empiler_Int(&pile2, qc);
        createQuad("BG", "", mDroit, brnsup); 
        strcpy(cptfor,mDroit);
    }
<<<<<<< HEAD
#line 2090 "syntaxic.tab.c"
    break;

  case 67: /* loop: FOR LPAREN assignment_int COLON term3 $@3 COLON term4 $@4 RPAREN LBRACE instruction_section RBRACE  */
#line 637 "syntaxic.y"
                                              {
=======
#line 2046 "syntaxic.tab.c"
    break;

  case 60: /* loop: FOR LPAREN assignment_int COLON term3 $@3 COLON term4 $@4 RPAREN LBRACE instruction_section RBRACE SEMICOLON  */
#line 621 "syntaxic.y"
                                                       {
>>>>>>> d5a5dd5 (++)
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);    
        cpttemp++;    
        createQuad("+", cptfor, pasfor, temp); 
        createQuad("=", temp, "", cptfor); 
        createQuad("BR", ToSTR(atoi(depiler(&pile1))), "", "");
        QuadR[atoi(depiler(&pile2))].opd1=ToSTR(qc);
    }
<<<<<<< HEAD
#line 2104 "syntaxic.tab.c"
    break;

  case 68: /* io_statement: READ LPAREN IDENTIFIER RPAREN  */
#line 649 "syntaxic.y"
                                  {
=======
#line 2060 "syntaxic.tab.c"
    break;

  case 61: /* io_statement: READ LPAREN IDENTIFIER RPAREN SEMICOLON  */
#line 633 "syntaxic.y"
                                           {
>>>>>>> d5a5dd5 (++)
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[-1].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col,(yyvsp[-1].string)); exit(0);
        }
    }
<<<<<<< HEAD
#line 2115 "syntaxic.tab.c"
    break;

  case 72: /* io_expr: IDENTIFIER  */
#line 666 "syntaxic.y"
=======
#line 2071 "syntaxic.tab.c"
    break;

  case 65: /* io_expr: IDENTIFIER  */
#line 650 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }
    }
<<<<<<< HEAD
#line 2126 "syntaxic.tab.c"
    break;

  case 74: /* COND: COND OR AND_EXPR  */
#line 679 "syntaxic.y"
=======
#line 2082 "syntaxic.tab.c"
    break;

  case 67: /* COND: COND OR AND_EXPR  */
#line 663 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
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
    }
<<<<<<< HEAD
#line 2142 "syntaxic.tab.c"
    break;

  case 76: /* AND_EXPR: AND_EXPR AND NOT_EXPR  */
#line 695 "syntaxic.y"
=======
#line 2098 "syntaxic.tab.c"
    break;

  case 69: /* AND_EXPR: AND_EXPR AND NOT_EXPR  */
#line 679 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
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
    }
<<<<<<< HEAD
#line 2158 "syntaxic.tab.c"
    break;

  case 78: /* NOT_EXPR: NOT NOT_EXPR  */
#line 711 "syntaxic.y"
=======
#line 2114 "syntaxic.tab.c"
    break;

  case 71: /* NOT_EXPR: NOT NOT_EXPR  */
#line 695 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
    {
        temp = newtemp();
        sprintf(temp, "T%d", cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(valcond1, valDepile); 
        createQuadL(1, valcond1, "", temp);
        empiler(&pile3,temp);
        cpttemp++;
    }
<<<<<<< HEAD
#line 2172 "syntaxic.tab.c"
    break;

  case 80: /* comparison_expr: term2 GT term1  */
#line 728 "syntaxic.y"
=======
#line 2128 "syntaxic.tab.c"
    break;

  case 73: /* comparison_expr: term2 GT term1  */
#line 712 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
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
    }
<<<<<<< HEAD
#line 2188 "syntaxic.tab.c"
    break;

  case 81: /* comparison_expr: term2 LT term1  */
#line 739 "syntaxic.y"
=======
#line 2144 "syntaxic.tab.c"
    break;

  case 74: /* comparison_expr: term2 LT term1  */
#line 723 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
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
    }
<<<<<<< HEAD
#line 2204 "syntaxic.tab.c"
    break;

  case 82: /* comparison_expr: term2 EQ term1  */
#line 750 "syntaxic.y"
=======
#line 2160 "syntaxic.tab.c"
    break;

  case 75: /* comparison_expr: term2 EQ term1  */
#line 734 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
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
    }
<<<<<<< HEAD
#line 2220 "syntaxic.tab.c"
    break;

  case 83: /* comparison_expr: term2 GEQ term1  */
#line 761 "syntaxic.y"
=======
#line 2176 "syntaxic.tab.c"
    break;

  case 76: /* comparison_expr: term2 GEQ term1  */
#line 745 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
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
    }
<<<<<<< HEAD
#line 2236 "syntaxic.tab.c"
    break;

  case 84: /* comparison_expr: term2 LEQ term1  */
#line 772 "syntaxic.y"
=======
#line 2192 "syntaxic.tab.c"
    break;

  case 77: /* comparison_expr: term2 LEQ term1  */
#line 756 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
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
    }
<<<<<<< HEAD
#line 2252 "syntaxic.tab.c"
    break;

  case 85: /* comparison_expr: term2 NEQ term1  */
#line 783 "syntaxic.y"
=======
#line 2208 "syntaxic.tab.c"
    break;

  case 78: /* comparison_expr: term2 NEQ term1  */
#line 767 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
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
    }
<<<<<<< HEAD
#line 2268 "syntaxic.tab.c"
    break;

  case 86: /* comparison_expr: DROIT OP_COMP term1  */
#line 809 "syntaxic.y"
=======
#line 2224 "syntaxic.tab.c"
    break;

  case 79: /* comparison_expr: DROIT OP_COMP term1  */
#line 793 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                          {
                            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
                          printf("on ne peut pas comparer CARACTERE avec avec %s\n",typeD); exit(0);
                         }
<<<<<<< HEAD
#line 2277 "syntaxic.tab.c"
    break;

  case 87: /* comparison_expr: term2 OP_COMP GAUCHE  */
#line 813 "syntaxic.y"
                           {printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
                            printf("on ne peut pas comparer %s avec avec %s\n",typeG,typeD); exit(0);
                            }
#line 2285 "syntaxic.tab.c"
    break;

  case 88: /* comparison_expr: DROIT OP_COMP GAUCHE  */
#line 816 "syntaxic.y"
=======
#line 2233 "syntaxic.tab.c"
    break;

  case 80: /* comparison_expr: term2 OP_COMP GAUCHE  */
#line 797 "syntaxic.y"
                           {printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
                            printf("on ne peut pas comparer %s avec avec %s\n",typeG,typeD); exit(0);
                            }
#line 2241 "syntaxic.tab.c"
    break;

  case 81: /* comparison_expr: DROIT OP_COMP GAUCHE  */
#line 800 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                          {
        if(strcmp(typeD,typeG)!=0){
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("on ne peut pas comparer %s avec %s\n",typeG,typeD); exit(0);
        }
        else{
            char* temp=newtemp();
            sprintf(temp,"T%d",cpttemp);
            cpttemp++;
            createQuadA(nb_op,(yyvsp[-2].string),(yyvsp[0].string),temp);
            empiler(&pile3,temp);
        }
    }
<<<<<<< HEAD
#line 2303 "syntaxic.tab.c"
    break;

  case 89: /* DROIT: CHARACTERE  */
#line 834 "syntaxic.y"
              {strcpy(typeG,"CHAR");}
#line 2309 "syntaxic.tab.c"
    break;

  case 90: /* DROIT: STRING_LITERAL  */
#line 835 "syntaxic.y"
                   {strcpy(typeG,"STRING");}
#line 2315 "syntaxic.tab.c"
    break;

  case 91: /* GAUCHE: CHARACTERE  */
#line 838 "syntaxic.y"
             {strcpy(typeD,"CHAR");}
#line 2321 "syntaxic.tab.c"
    break;

  case 92: /* GAUCHE: STRING_LITERAL  */
#line 839 "syntaxic.y"
                   {strcpy(typeD,"STRING");}
#line 2327 "syntaxic.tab.c"
    break;

  case 93: /* OP_COMP: GT  */
#line 842 "syntaxic.y"
        {nb_op=6;}
#line 2333 "syntaxic.tab.c"
    break;

  case 94: /* OP_COMP: LT  */
#line 843 "syntaxic.y"
        {nb_op=5;}
#line 2339 "syntaxic.tab.c"
    break;

  case 95: /* OP_COMP: GEQ  */
#line 844 "syntaxic.y"
          {nb_op=3;}
#line 2345 "syntaxic.tab.c"
    break;

  case 96: /* OP_COMP: LEQ  */
#line 845 "syntaxic.y"
          {nb_op=4;}
#line 2351 "syntaxic.tab.c"
    break;

  case 97: /* OP_COMP: EQ  */
#line 846 "syntaxic.y"
        {nb_op=1;}
#line 2357 "syntaxic.tab.c"
    break;

  case 98: /* OP_COMP: NEQ  */
#line 847 "syntaxic.y"
         {nb_op=2;}
#line 2363 "syntaxic.tab.c"
    break;

  case 100: /* term: term PLUS factor  */
#line 854 "syntaxic.y"
=======
#line 2259 "syntaxic.tab.c"
    break;

  case 82: /* DROIT: CHARACTERE  */
#line 818 "syntaxic.y"
              {strcpy(typeG,"CHAR");}
#line 2265 "syntaxic.tab.c"
    break;

  case 83: /* DROIT: STRING_LITERAL  */
#line 819 "syntaxic.y"
                   {strcpy(typeG,"STRING");}
#line 2271 "syntaxic.tab.c"
    break;

  case 84: /* GAUCHE: CHARACTERE  */
#line 822 "syntaxic.y"
             {strcpy(typeD,"CHAR");}
#line 2277 "syntaxic.tab.c"
    break;

  case 85: /* GAUCHE: STRING_LITERAL  */
#line 823 "syntaxic.y"
                   {strcpy(typeD,"STRING");}
#line 2283 "syntaxic.tab.c"
    break;

  case 86: /* OP_COMP: GT  */
#line 826 "syntaxic.y"
        {nb_op=6;}
#line 2289 "syntaxic.tab.c"
    break;

  case 87: /* OP_COMP: LT  */
#line 827 "syntaxic.y"
        {nb_op=5;}
#line 2295 "syntaxic.tab.c"
    break;

  case 88: /* OP_COMP: GEQ  */
#line 828 "syntaxic.y"
          {nb_op=3;}
#line 2301 "syntaxic.tab.c"
    break;

  case 89: /* OP_COMP: LEQ  */
#line 829 "syntaxic.y"
          {nb_op=4;}
#line 2307 "syntaxic.tab.c"
    break;

  case 90: /* OP_COMP: EQ  */
#line 830 "syntaxic.y"
        {nb_op=1;}
#line 2313 "syntaxic.tab.c"
    break;

  case 91: /* OP_COMP: NEQ  */
#line 831 "syntaxic.y"
         {nb_op=2;}
#line 2319 "syntaxic.tab.c"
    break;

  case 93: /* term: term PLUS factor  */
#line 838 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                       {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
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
        

    }
<<<<<<< HEAD
#line 2387 "syntaxic.tab.c"
    break;

  case 101: /* term: term MINUS factor  */
#line 873 "syntaxic.y"
=======
#line 2343 "syntaxic.tab.c"
    break;

  case 94: /* term: term MINUS factor  */
#line 857 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                        {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
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
    }
<<<<<<< HEAD
#line 2409 "syntaxic.tab.c"
    break;

  case 103: /* factor: factor MULTIPLY primary  */
#line 895 "syntaxic.y"
=======
#line 2365 "syntaxic.tab.c"
    break;

  case 96: /* factor: factor MULTIPLY primary  */
#line 879 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                               { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
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

    }
<<<<<<< HEAD
#line 2432 "syntaxic.tab.c"
    break;

  case 104: /* factor: factor DIVIDE primary  */
#line 913 "syntaxic.y"
=======
#line 2388 "syntaxic.tab.c"
    break;

  case 97: /* factor: factor DIVIDE primary  */
#line 897 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                { 
        if((yyvsp[0].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
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
}
<<<<<<< HEAD
#line 2457 "syntaxic.tab.c"
    break;

  case 105: /* primary: IDENTIFIER  */
#line 937 "syntaxic.y"
=======
#line 2413 "syntaxic.tab.c"
    break;

  case 98: /* primary: IDENTIFIER  */
#line 921 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d : La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 1\n",nb_ligne,col);
                                                            printf("tentative d'affecter %s a un %s\n",typeD,typeG); exit(0);}
                                strcpy(valIdf,getVal((yyvsp[0].string)));
                                 //if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d colonne %d : variable %s non initialisee\n",nb_ligne,col,$1); exit(0);}
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[0].string));
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
<<<<<<< HEAD
#line 2479 "syntaxic.tab.c"
    break;

  case 106: /* primary: INT_NUMBER  */
#line 954 "syntaxic.y"
=======
#line 2434 "syntaxic.tab.c"
    break;

  case 99: /* primary: INT_NUMBER  */
#line 937 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                 {
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 2\n",nb_ligne,col);
                                        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
                  strcpy(saveStrq,(yyvsp[0].string));
                  strcpy(buffer1,(yyvsp[0].string));
                  empiler(&pile3,buffer1);
                  
    }
<<<<<<< HEAD
#line 2493 "syntaxic.tab.c"
    break;

  case 107: /* primary: FLOAT_NUMBER  */
#line 963 "syntaxic.y"
=======
#line 2448 "syntaxic.tab.c"
    break;

  case 100: /* primary: FLOAT_NUMBER  */
#line 946 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                  {
                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 3\n",nb_ligne,col);
                   printf("tentative d'affecter FLOAT a un %s\n",typeG); exit(0);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); }  
                   strcpy(saveStrq,(yyvsp[0].string));
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
<<<<<<< HEAD
#line 2508 "syntaxic.tab.c"
    break;

  case 108: /* primary: LPAREN PLUS INT_NUMBER RPAREN  */
#line 973 "syntaxic.y"
=======
#line 2463 "syntaxic.tab.c"
    break;

  case 101: /* primary: LPAREN PLUS INT_NUMBER RPAREN  */
#line 956 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                  {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 4\n",nb_ligne,col);
        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
        else{(yyval.real)=atof((yyvsp[-1].string));
        strcpy(saveStrq,(yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        }
    }
<<<<<<< HEAD
#line 2523 "syntaxic.tab.c"
    break;

  case 109: /* primary: LPAREN MINUS INT_NUMBER RPAREN  */
#line 983 "syntaxic.y"
=======
#line 2478 "syntaxic.tab.c"
    break;

  case 102: /* primary: LPAREN MINUS INT_NUMBER RPAREN  */
#line 966 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                   {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 5\n",nb_ligne,col);
            printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
                else{
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(saveStrq, saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            }
    }
<<<<<<< HEAD
#line 2541 "syntaxic.tab.c"
    break;

  case 110: /* primary: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 996 "syntaxic.y"
=======
#line 2496 "syntaxic.tab.c"
    break;

  case 103: /* primary: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 979 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                      {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 6\n",nb_ligne,col);
                                    printf("tentative d'affecter FLOAT a un %s\n",typeG); exit(0);}
                                      else{(yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(saveStrq,(yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      }
                   }
<<<<<<< HEAD
#line 2555 "syntaxic.tab.c"
    break;

  case 111: /* primary: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1005 "syntaxic.y"
=======
#line 2510 "syntaxic.tab.c"
    break;

  case 104: /* primary: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 988 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                       {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 7\n",nb_ligne,col);
                                      printf("tentative d'affecter FlOAT a un %s\n",typeG); exit(0);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(saveStrq, saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       }
    }
<<<<<<< HEAD
#line 2572 "syntaxic.tab.c"
    break;

  case 112: /* primary: LPAREN term RPAREN  */
#line 1017 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-1].real);}
#line 2578 "syntaxic.tab.c"
    break;

  case 113: /* primary: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1018 "syntaxic.y"
=======
#line 2527 "syntaxic.tab.c"
    break;

  case 105: /* primary: LPAREN term RPAREN  */
#line 1000 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-1].real);}
#line 2533 "syntaxic.tab.c"
    break;

  case 106: /* primary: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1001 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d \n",(yyvsp[-3].string),nb_ligne,col); exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 8\n",nb_ligne,col);
                                                                printf("tentative d'affecter %s a un %s\n",typeD,typeG); exit(0);}
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer1,"%d",atoi((yyvsp[-1].string)));
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(saveStrq,tmp);
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                }
<<<<<<< HEAD
#line 2599 "syntaxic.tab.c"
    break;

  case 115: /* term1: term1 PLUS factor1  */
#line 1038 "syntaxic.y"
=======
#line 2554 "syntaxic.tab.c"
    break;

  case 108: /* term1: term1 PLUS factor1  */
#line 1021 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                         {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
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
        

    }
<<<<<<< HEAD
#line 2623 "syntaxic.tab.c"
    break;

  case 116: /* term1: term1 MINUS factor1  */
#line 1057 "syntaxic.y"
=======
#line 2578 "syntaxic.tab.c"
    break;

  case 109: /* term1: term1 MINUS factor1  */
#line 1040 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                          {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
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
    }
<<<<<<< HEAD
#line 2645 "syntaxic.tab.c"
    break;

  case 118: /* factor1: factor1 MULTIPLY primary1  */
#line 1079 "syntaxic.y"
=======
#line 2600 "syntaxic.tab.c"
    break;

  case 111: /* factor1: factor1 MULTIPLY primary1  */
#line 1062 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                 { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
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

    }
<<<<<<< HEAD
#line 2668 "syntaxic.tab.c"
    break;

  case 119: /* factor1: factor1 DIVIDE primary1  */
#line 1097 "syntaxic.y"
=======
#line 2623 "syntaxic.tab.c"
    break;

  case 112: /* factor1: factor1 DIVIDE primary1  */
#line 1080 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                  { 
        if((yyvsp[0].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
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
}
<<<<<<< HEAD
#line 2693 "syntaxic.tab.c"
    break;

  case 120: /* primary1: IDENTIFIER  */
#line 1121 "syntaxic.y"
=======
#line 2648 "syntaxic.tab.c"
    break;

  case 113: /* primary1: IDENTIFIER  */
#line 1104 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string));
             exit(0);
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                             if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 1\n",nb_ligne,col);
                             printf("on ne peut pas comparer %s avec %s\n",typeD,typeG);
                              exit(0);
                             }
                                strcpy(valIdf,getVal((yyvsp[0].string)));
                                 //if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d colonne %d : variable %s non initialisee\n",nb_ligne,col,$1); exit(0);}
                            
                                  (yyval.real)=atof(valIdf);
                                  strcpy(saveStrq,(yyvsp[0].string));
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
<<<<<<< HEAD
#line 2718 "syntaxic.tab.c"
    break;

  case 121: /* primary1: INT_NUMBER  */
#line 1141 "syntaxic.y"
=======
#line 2673 "syntaxic.tab.c"
    break;

  case 114: /* primary1: INT_NUMBER  */
#line 1124 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                 {
       
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 2\n",nb_ligne,col);
        printf("on ne peut pas comparer INTEGER avec %s\n",typeG); exit(0);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
                  strcpy(saveStrq,(yyvsp[0].string));
                  strcpy(buffer1,(yyvsp[0].string));
                  empiler(&pile3,buffer1);
                  
    }
<<<<<<< HEAD
#line 2733 "syntaxic.tab.c"
    break;

  case 122: /* primary1: FLOAT_NUMBER  */
#line 1151 "syntaxic.y"
=======
#line 2688 "syntaxic.tab.c"
    break;

  case 115: /* primary1: FLOAT_NUMBER  */
#line 1134 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                  {       

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 3\n",nb_ligne,col);
                   printf("on ne peut pas comparer FLOAT avec %s\n",typeG); exit(0);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); }  
                   strcpy(saveStrq,(yyvsp[0].string));
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
<<<<<<< HEAD
#line 2749 "syntaxic.tab.c"
    break;

  case 123: /* primary1: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1162 "syntaxic.y"
=======
#line 2704 "syntaxic.tab.c"
    break;

  case 116: /* primary1: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1145 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                  {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 4\n",nb_ligne,col);
        printf("on ne peut pas comparer INTEGER avec %s\n",typeG); exit(0);}
        else{(yyval.real)=atof((yyvsp[-1].string));
        strcpy(saveStrq,(yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        }
    }
<<<<<<< HEAD
#line 2764 "syntaxic.tab.c"
    break;

  case 124: /* primary1: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1172 "syntaxic.y"
=======
#line 2719 "syntaxic.tab.c"
    break;

  case 117: /* primary1: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1155 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                   {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 5\n",nb_ligne,col);
            printf("on ne peut pas comparer INTEGER avec %s\n",typeG); exit(0);}
                else{
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(saveStrq, saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            }
    }
<<<<<<< HEAD
#line 2782 "syntaxic.tab.c"
    break;

  case 125: /* primary1: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1185 "syntaxic.y"
=======
#line 2737 "syntaxic.tab.c"
    break;

  case 118: /* primary1: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1168 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                      {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 6\n",nb_ligne,col);
                                    printf("on ne peut pas comparer FLOAT avec %s\n",typeG); exit(0);}
                                      else{(yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(saveStrq,(yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      }
                   }
<<<<<<< HEAD
#line 2796 "syntaxic.tab.c"
    break;

  case 126: /* primary1: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1194 "syntaxic.y"
=======
#line 2751 "syntaxic.tab.c"
    break;

  case 119: /* primary1: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1177 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                       {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 7\n",nb_ligne,col);
                                      printf("on ne peut pas comparer FLOAT avec %s\n",typeG); exit(0);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(saveStrq, saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       }
    }
<<<<<<< HEAD
#line 2813 "syntaxic.tab.c"
    break;

  case 127: /* primary1: LPAREN term1 RPAREN  */
#line 1206 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2819 "syntaxic.tab.c"
    break;

  case 128: /* primary1: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1207 "syntaxic.y"
=======
#line 2768 "syntaxic.tab.c"
    break;

  case 120: /* primary1: LPAREN term1 RPAREN  */
#line 1189 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2774 "syntaxic.tab.c"
    break;

  case 121: /* primary1: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1190 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique  :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[-3].string),nb_ligne,col);
                                          exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 8\n",nb_ligne,col);
                                     printf("on ne peut pas comparer %s avec %s\n",typeD,typeG); exit(0);}
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer1,"%d",atoi((yyvsp[-1].string)));
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(saveStrq,tmp);
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                }
<<<<<<< HEAD
#line 2841 "syntaxic.tab.c"
    break;

  case 130: /* term2: term2 PLUS factor2  */
#line 1228 "syntaxic.y"
=======
#line 2796 "syntaxic.tab.c"
    break;

  case 123: /* term2: term2 PLUS factor2  */
#line 1211 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                         {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
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
        

    }
<<<<<<< HEAD
#line 2865 "syntaxic.tab.c"
    break;

  case 131: /* term2: term2 MINUS factor2  */
#line 1247 "syntaxic.y"
=======
#line 2820 "syntaxic.tab.c"
    break;

  case 124: /* term2: term2 MINUS factor2  */
#line 1230 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                          {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
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
    }
<<<<<<< HEAD
#line 2887 "syntaxic.tab.c"
    break;

  case 133: /* factor2: factor2 MULTIPLY primary2  */
#line 1269 "syntaxic.y"
=======
#line 2842 "syntaxic.tab.c"
    break;

  case 126: /* factor2: factor2 MULTIPLY primary2  */
#line 1252 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                 { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
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

    }
<<<<<<< HEAD
#line 2910 "syntaxic.tab.c"
    break;

  case 134: /* factor2: factor2 DIVIDE primary2  */
#line 1287 "syntaxic.y"
=======
#line 2865 "syntaxic.tab.c"
    break;

  case 127: /* factor2: factor2 DIVIDE primary2  */
#line 1270 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                  { 
        if((yyvsp[0].real)==0){ printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
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
}
<<<<<<< HEAD
#line 2935 "syntaxic.tab.c"
    break;

  case 135: /* primary2: IDENTIFIER  */
#line 1311 "syntaxic.y"
=======
#line 2890 "syntaxic.tab.c"
    break;

  case 128: /* primary2: IDENTIFIER  */
#line 1294 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }else {strcpy(typeG,getType((yyvsp[0].string)));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
<<<<<<< HEAD
#line 2951 "syntaxic.tab.c"
    break;

  case 136: /* primary2: INT_NUMBER  */
#line 1322 "syntaxic.y"
=======
#line 2906 "syntaxic.tab.c"
    break;

  case 129: /* primary2: INT_NUMBER  */
#line 1305 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                 {
       strcpy(typeG,"INTEGER");
       (yyval.real)=atof((yyvsp[0].string));
       strcpy(buffer1,(yyvsp[0].string));
       empiler(&pile3,buffer1);
                  
    }
<<<<<<< HEAD
#line 2963 "syntaxic.tab.c"
    break;

  case 137: /* primary2: FLOAT_NUMBER  */
#line 1329 "syntaxic.y"
=======
#line 2918 "syntaxic.tab.c"
    break;

  case 130: /* primary2: FLOAT_NUMBER  */
#line 1312 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                  {strcpy(typeG,"FLOAT");
                   (yyval.real)=atof((yyvsp[0].string));  
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
<<<<<<< HEAD
#line 2973 "syntaxic.tab.c"
    break;

  case 138: /* primary2: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1334 "syntaxic.y"
=======
#line 2928 "syntaxic.tab.c"
    break;

  case 131: /* primary2: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1317 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                  {
        strcpy(typeG,"INTEGER");
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        
    }
<<<<<<< HEAD
#line 2985 "syntaxic.tab.c"
    break;

  case 139: /* primary2: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1341 "syntaxic.y"
=======
#line 2940 "syntaxic.tab.c"
    break;

  case 132: /* primary2: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1324 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                   {
        strcpy(typeG,"INTEGER");
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    }
<<<<<<< HEAD
#line 2999 "syntaxic.tab.c"
    break;

  case 140: /* primary2: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1350 "syntaxic.y"
=======
#line 2954 "syntaxic.tab.c"
    break;

  case 133: /* primary2: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1333 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                      {strcpy(typeG,"FLOAT");
                                      (yyval.real)=atof((yyvsp[-1].string));;
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      
                   }
<<<<<<< HEAD
#line 3010 "syntaxic.tab.c"
    break;

  case 141: /* primary2: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1356 "syntaxic.y"
=======
#line 2965 "syntaxic.tab.c"
    break;

  case 134: /* primary2: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1339 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                       {strcpy(typeG,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    }
<<<<<<< HEAD
#line 3022 "syntaxic.tab.c"
    break;

  case 142: /* primary2: LPAREN term2 RPAREN  */
#line 1363 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3028 "syntaxic.tab.c"
    break;

  case 143: /* primary2: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1364 "syntaxic.y"
=======
#line 2977 "syntaxic.tab.c"
    break;

  case 135: /* primary2: LPAREN term2 RPAREN  */
#line 1346 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2983 "syntaxic.tab.c"
    break;

  case 136: /* primary2: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1347 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[-3].string),nb_ligne,col); exit(0);}
                                else {
                                    strcpy(typeG,getType((yyvsp[-3].string)));
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer1,"%d",atoi((yyvsp[-1].string)));
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                }
<<<<<<< HEAD
#line 3046 "syntaxic.tab.c"
    break;

  case 145: /* term4: term4 PLUS factor4  */
#line 1381 "syntaxic.y"
=======
#line 3001 "syntaxic.tab.c"
    break;

  case 138: /* term4: term4 PLUS factor4  */
#line 1364 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                         {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
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
        

    }
<<<<<<< HEAD
#line 3070 "syntaxic.tab.c"
    break;

  case 146: /* term4: term4 MINUS factor4  */
#line 1400 "syntaxic.y"
=======
#line 3025 "syntaxic.tab.c"
    break;

  case 139: /* term4: term4 MINUS factor4  */
#line 1383 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                          {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
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
    }
<<<<<<< HEAD
#line 3092 "syntaxic.tab.c"
    break;

  case 148: /* factor4: factor4 MULTIPLY primary4  */
#line 1422 "syntaxic.y"
=======
#line 3047 "syntaxic.tab.c"
    break;

  case 141: /* factor4: factor4 MULTIPLY primary4  */
#line 1405 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                 { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
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

    }
<<<<<<< HEAD
#line 3115 "syntaxic.tab.c"
    break;

  case 149: /* factor4: factor4 DIVIDE primary4  */
#line 1440 "syntaxic.y"
=======
#line 3070 "syntaxic.tab.c"
    break;

  case 142: /* factor4: factor4 DIVIDE primary4  */
#line 1423 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                  { 
        if((yyvsp[0].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
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
}
<<<<<<< HEAD
#line 3140 "syntaxic.tab.c"
    break;

  case 150: /* primary4: IDENTIFIER  */
#line 1464 "syntaxic.y"
=======
#line 3095 "syntaxic.tab.c"
    break;

  case 143: /* primary4: IDENTIFIER  */
#line 1447 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                if(strcmp(typeD,"CHAR")==0){printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle ne doit pas etre CHAR\n",nb_ligne,col);exit(0);}

                                  strcpy(brnsup,(yyvsp[0].string));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
<<<<<<< HEAD
#line 3159 "syntaxic.tab.c"
    break;

  case 151: /* primary4: INT_NUMBER  */
#line 1478 "syntaxic.y"
=======
#line 3114 "syntaxic.tab.c"
    break;

  case 144: /* primary4: INT_NUMBER  */
#line 1461 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                 {
        strcpy(brnsup,(yyvsp[0].string));
       strcpy(typeD,"INTEGER");
       (yyval.real)=atof((yyvsp[0].string));
       strcpy(buffer1,(yyvsp[0].string));
       empiler(&pile3,buffer1);
                  
    }
<<<<<<< HEAD
#line 3172 "syntaxic.tab.c"
    break;

  case 152: /* primary4: FLOAT_NUMBER  */
#line 1486 "syntaxic.y"
=======
#line 3127 "syntaxic.tab.c"
    break;

  case 145: /* primary4: FLOAT_NUMBER  */
#line 1469 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                  {  strcpy(brnsup,(yyvsp[0].string));
        strcpy(typeD,"FLOAT");
                   (yyval.real)=atof((yyvsp[0].string));  
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
<<<<<<< HEAD
#line 3183 "syntaxic.tab.c"
    break;

  case 153: /* primary4: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1492 "syntaxic.y"
=======
#line 3138 "syntaxic.tab.c"
    break;

  case 146: /* primary4: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1475 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                  {
         strcpy(brnsup,(yyvsp[-1].string));
        strcpy(typeD,"INTEGER");
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        
    }
<<<<<<< HEAD
#line 3196 "syntaxic.tab.c"
    break;

  case 154: /* primary4: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1500 "syntaxic.y"
=======
#line 3151 "syntaxic.tab.c"
    break;

  case 147: /* primary4: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1483 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                   {
        strcpy(typeD,"INTEGER");
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                 strcpy(brnsup,saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    }
<<<<<<< HEAD
#line 3211 "syntaxic.tab.c"
    break;

  case 155: /* primary4: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1510 "syntaxic.y"
=======
#line 3166 "syntaxic.tab.c"
    break;

  case 148: /* primary4: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1493 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                      {strcpy(typeD,"FLOAT");
                                      (yyval.real)=atof((yyvsp[-1].string));;
                                       strcpy(brnsup,(yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      
                   }
<<<<<<< HEAD
#line 3223 "syntaxic.tab.c"
    break;

  case 156: /* primary4: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1517 "syntaxic.y"
=======
#line 3178 "syntaxic.tab.c"
    break;

  case 149: /* primary4: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1500 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                       {strcpy(typeD,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                            strcpy(brnsup,saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    }
<<<<<<< HEAD
#line 3236 "syntaxic.tab.c"
    break;

  case 157: /* primary4: LPAREN term4 RPAREN  */
#line 1525 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3242 "syntaxic.tab.c"
    break;

  case 158: /* primary4: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1526 "syntaxic.y"
=======
#line 3191 "syntaxic.tab.c"
    break;

  case 150: /* primary4: LPAREN term4 RPAREN  */
#line 1508 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3197 "syntaxic.tab.c"
    break;

  case 151: /* primary4: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1509 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[-3].string),nb_ligne,col); exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer1,"%d",atoi((yyvsp[-1].string)));
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(buffer1,tmp);
                                     strcpy(brnsup,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                }
<<<<<<< HEAD
#line 3261 "syntaxic.tab.c"
    break;

  case 159: /* primary4: STRING_LITERAL  */
#line 1540 "syntaxic.y"
                   {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre characters\n");exit(0);}
#line 3268 "syntaxic.tab.c"
    break;

  case 160: /* primary4: CHARACTERE  */
#line 1543 "syntaxic.y"
               {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre character\n");exit(0);}
#line 3275 "syntaxic.tab.c"
    break;

  case 162: /* term3: term3 PLUS factor3  */
#line 1548 "syntaxic.y"
=======
#line 3216 "syntaxic.tab.c"
    break;

  case 152: /* primary4: STRING_LITERAL  */
#line 1523 "syntaxic.y"
                   {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre characters\n");exit(0);}
#line 3223 "syntaxic.tab.c"
    break;

  case 153: /* primary4: CHARACTERE  */
#line 1526 "syntaxic.y"
               {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre character\n");exit(0);}
#line 3230 "syntaxic.tab.c"
    break;

  case 155: /* term3: term3 PLUS factor3  */
#line 1531 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                         {
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
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
        

    }
<<<<<<< HEAD
#line 3299 "syntaxic.tab.c"
    break;

  case 163: /* term3: term3 MINUS factor3  */
#line 1567 "syntaxic.y"
=======
#line 3254 "syntaxic.tab.c"
    break;

  case 156: /* term3: term3 MINUS factor3  */
#line 1550 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                          {
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
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
    }
<<<<<<< HEAD
#line 3321 "syntaxic.tab.c"
    break;

  case 165: /* factor3: factor3 MULTIPLY primary3  */
#line 1589 "syntaxic.y"
=======
#line 3276 "syntaxic.tab.c"
    break;

  case 158: /* factor3: factor3 MULTIPLY primary3  */
#line 1572 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                 { 
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
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

    }
<<<<<<< HEAD
#line 3344 "syntaxic.tab.c"
    break;

  case 166: /* factor3: factor3 DIVIDE primary3  */
#line 1607 "syntaxic.y"
=======
#line 3299 "syntaxic.tab.c"
    break;

  case 159: /* factor3: factor3 DIVIDE primary3  */
#line 1590 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                 { 
        if((yyvsp[0].real)==0) {printf("Erreur semantique a la ligne %d colonne %d :division sur 0\n",nb_ligne,col); exit(0);}
        else{   
        float t=(yyvsp[-2].real)/(yyvsp[0].real);        
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
}
<<<<<<< HEAD
#line 3369 "syntaxic.tab.c"
    break;

  case 167: /* primary3: IDENTIFIER  */
#line 1631 "syntaxic.y"
=======
#line 3324 "syntaxic.tab.c"
    break;

  case 160: /* primary3: IDENTIFIER  */
#line 1614 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n", nb_ligne,col,(yyvsp[0].string));
             exit(0);
        }else {strcpy(typeG,getType((yyvsp[0].string)));
                if(strcmp(typeG,"CHAR")==0){printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle ne doit pas etre CHAR\n",nb_ligne,col);exit(0);}
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
<<<<<<< HEAD
#line 3387 "syntaxic.tab.c"
    break;

  case 168: /* primary3: INT_NUMBER  */
#line 1644 "syntaxic.y"
=======
#line 3342 "syntaxic.tab.c"
    break;

  case 161: /* primary3: INT_NUMBER  */
#line 1627 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                 {
       strcpy(typeG,"INTEGER");
       (yyval.real)=atof((yyvsp[0].string));
       strcpy(buffer1,(yyvsp[0].string));
       empiler(&pile3,buffer1);
                  
    }
<<<<<<< HEAD
#line 3399 "syntaxic.tab.c"
    break;

  case 169: /* primary3: FLOAT_NUMBER  */
#line 1651 "syntaxic.y"
=======
#line 3354 "syntaxic.tab.c"
    break;

  case 162: /* primary3: FLOAT_NUMBER  */
#line 1634 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                  {strcpy(typeG,"FLOAT");
                   (yyval.real)=atof((yyvsp[0].string));  
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
<<<<<<< HEAD
#line 3409 "syntaxic.tab.c"
    break;

  case 170: /* primary3: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1656 "syntaxic.y"
=======
#line 3364 "syntaxic.tab.c"
    break;

  case 163: /* primary3: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1639 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                  {
        strcpy(typeG,"INTEGER");
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        
    }
<<<<<<< HEAD
#line 3421 "syntaxic.tab.c"
    break;

  case 171: /* primary3: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1663 "syntaxic.y"
=======
#line 3376 "syntaxic.tab.c"
    break;

  case 164: /* primary3: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1646 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                   {
        strcpy(typeG,"INTEGER");
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    }
<<<<<<< HEAD
#line 3435 "syntaxic.tab.c"
    break;

  case 172: /* primary3: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1672 "syntaxic.y"
=======
#line 3390 "syntaxic.tab.c"
    break;

  case 165: /* primary3: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1655 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                      {strcpy(typeG,"FLOAT");
                                      (yyval.real)=atof((yyvsp[-1].string));;
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      
                   }
<<<<<<< HEAD
#line 3446 "syntaxic.tab.c"
    break;

  case 173: /* primary3: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1678 "syntaxic.y"
=======
#line 3401 "syntaxic.tab.c"
    break;

  case 166: /* primary3: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1661 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                       {strcpy(typeG,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    }
<<<<<<< HEAD
#line 3458 "syntaxic.tab.c"
    break;

  case 174: /* primary3: LPAREN term3 RPAREN  */
#line 1685 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3464 "syntaxic.tab.c"
    break;

  case 175: /* primary3: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1686 "syntaxic.y"
=======
#line 3413 "syntaxic.tab.c"
    break;

  case 167: /* primary3: LPAREN term3 RPAREN  */
#line 1668 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3419 "syntaxic.tab.c"
    break;

  case 168: /* primary3: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 1669 "syntaxic.y"
>>>>>>> d5a5dd5 (++)
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d \n",(yyvsp[-3].string),nb_ligne,col); exit(0);}
                                else {
                                    strcpy(typeG,getType((yyvsp[-3].string)));
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    sprintf(buffer1,"%d",atoi((yyvsp[-1].string)));
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                }
<<<<<<< HEAD
#line 3482 "syntaxic.tab.c"
    break;

  case 176: /* primary3: STRING_LITERAL  */
#line 1699 "syntaxic.y"
                   {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre characters\n");exit(0);}
#line 3489 "syntaxic.tab.c"
    break;

  case 177: /* primary3: CHARACTERE  */
#line 1702 "syntaxic.y"
               {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre character\n");exit(0);}
#line 3496 "syntaxic.tab.c"
    break;


#line 3500 "syntaxic.tab.c"
=======
#line 3437 "syntaxic.tab.c"
    break;

  case 169: /* primary3: STRING_LITERAL  */
#line 1682 "syntaxic.y"
                   {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre characters\n");exit(0);}
#line 3444 "syntaxic.tab.c"
    break;

  case 170: /* primary3: CHARACTERE  */
#line 1685 "syntaxic.y"
               {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre character\n");exit(0);}
#line 3451 "syntaxic.tab.c"
    break;


#line 3455 "syntaxic.tab.c"
>>>>>>> d5a5dd5 (++)

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

<<<<<<< HEAD
#line 1706 "syntaxic.y"
=======
#line 1689 "syntaxic.y"
>>>>>>> d5a5dd5 (++)


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

