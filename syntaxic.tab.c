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
   char valIdf[20];
   char saveStr[20];
   char saveS[20];
   char mDroit[20];
   char buffer1[20], buffer2[20], tmp[20];
   char* temp;
   


#line 103 "syntaxic.tab.c"

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
  YYSYMBOL_io_statement = 66,              /* io_statement  */
  YYSYMBOL_io_expr_list = 67,              /* io_expr_list  */
  YYSYMBOL_io_expr = 68,                   /* io_expr  */
  YYSYMBOL_COND = 69,                      /* COND  */
  YYSYMBOL_comparison_expr = 70,           /* comparison_expr  */
  YYSYMBOL_DROIT = 71,                     /* DROIT  */
  YYSYMBOL_GAUCHE = 72,                    /* GAUCHE  */
  YYSYMBOL_OP_COMP = 73,                   /* OP_COMP  */
  YYSYMBOL_term = 74,                      /* term  */
  YYSYMBOL_factor = 75,                    /* factor  */
  YYSYMBOL_primary = 76,                   /* primary  */
  YYSYMBOL_term1 = 77,                     /* term1  */
  YYSYMBOL_factor1 = 78,                   /* factor1  */
  YYSYMBOL_primary1 = 79,                  /* primary1  */
  YYSYMBOL_term2 = 80,                     /* term2  */
  YYSYMBOL_factor2 = 81,                   /* factor2  */
  YYSYMBOL_primary2 = 82,                  /* primary2  */
  YYSYMBOL_term4 = 83,                     /* term4  */
  YYSYMBOL_factor4 = 84,                   /* factor4  */
  YYSYMBOL_primary4 = 85,                  /* primary4  */
  YYSYMBOL_term3 = 86,                     /* term3  */
  YYSYMBOL_factor3 = 87,                   /* factor3  */
  YYSYMBOL_primary3 = 88,                  /* primary3  */
  YYSYMBOL_string_literal = 89             /* string_literal  */
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
#define YYLAST   362

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
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
       0,    79,    79,    86,    87,    88,    93,    94,    99,   100,
     105,   106,   111,   121,   141,   154,   155,   163,   164,   165,
     178,   179,   180,   181,   182,   187,   203,   219,   220,   224,
     252,   274,   288,   294,   298,   329,   329,   337,   337,   342,
     345,   359,   362,   359,   384,   390,   395,   396,   401,   407,
     412,   413,   418,   423,   431,   432,   437,   441,   445,   449,
     453,   457,   461,   465,   466,   470,   471,   474,   475,   478,
     479,   480,   481,   482,   483,   487,   488,   504,   524,   525,
     540,   562,   574,   580,   587,   592,   599,   603,   611,   612,
     622,   623,   624,   629,   630,   631,   640,   653,   660,   668,
     674,   682,   688,   697,   698,   707,   708,   709,   714,   715,
     716,   725,   732,   737,   741,   744,   747,   750,   753,   754,
     764,   765,   766,   771,   772,   773,   782,   788,   792,   795,
     798,   801,   804,   807,   808,   817,   818,   819,   824,   825,
     826,   835,   841,   845,   848,   851,   854,   857,   860,   861,
     871
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
  "assignment_int", "loop", "$@3", "$@4", "io_statement", "io_expr_list",
  "io_expr", "COND", "comparison_expr", "DROIT", "GAUCHE", "OP_COMP",
  "term", "factor", "primary", "term1", "factor1", "primary1", "term2",
  "factor2", "primary2", "term4", "factor4", "primary4", "term3",
  "factor3", "primary3", "string_literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-186)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,    -6,    40,   150,  -186,  -186,  -186,  -186,   188,    27,
      10,   150,    45,   -20,    28,    66,  -186,  -186,    52,   -10,
      27,  -186,    68,    76,    35,    81,  -186,   150,   123,   169,
     173,    39,    65,    89,    51,    95,    75,    88,   115,    99,
     150,   119,   145,   151,   129,   152,   193,  -186,    76,    97,
      97,    76,   101,   101,    27,   161,   132,  -186,   164,   202,
     209,   231,   236,  -186,  -186,    76,   101,  -186,   181,  -186,
    -186,    42,  -186,  -186,  -186,   211,  -186,  -186,    46,  -186,
    -186,  -186,   238,   240,   176,   179,   182,   185,   189,  -186,
    -186,   195,   258,   210,   212,   259,   214,   216,   239,   172,
     101,   242,   246,   247,   248,   249,   243,   250,   251,   252,
     253,    27,   255,   256,   257,   260,   261,   244,   172,  -186,
     265,   266,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,    -3,   262,   281,
      -8,     0,  -186,  -186,    80,     6,   263,  -186,  -186,   148,
      -3,    49,   148,   267,   215,   148,   154,   207,   208,  -186,
     269,  -186,   268,  -186,  -186,   270,   271,  -186,   264,   272,
    -186,   273,   274,  -186,  -186,   275,   276,   283,  -186,  -186,
    -186,  -186,  -186,  -186,   287,  -186,   225,   227,   280,   277,
     284,    -3,    -3,   101,   101,   101,   101,   101,   101,   101,
     -14,   110,   110,   110,   110,    76,   279,   282,   285,    -8,
    -186,   291,  -186,  -186,  -186,  -186,   288,  -186,   286,   289,
     292,   293,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,   131,  -186,  -186,  -186,   294,  -186,  -186,  -186,
    -186,  -186,   172,   290,  -186,  -186,    70,  -186,   217,   218,
     295,   297,   302,   235,   237,   296,   298,   131,   131,   131,
     131,  -186,   299,   300,   301,   304,   305,   306,  -186,   134,
    -186,  -186,  -186,  -186,   303,   307,  -186,  -186,  -186,  -186,
    -186,   308,  -186,  -186,    73,   311,   226,   228,  -186,  -186,
     318,   241,   245,   312,   310,   134,   134,   134,   134,   172,
     313,   314,   316,   317,   319,  -186,   172,  -186,  -186,  -186,
    -186,   315,  -186,  -186,  -186,  -186,  -186,   320,  -186,   321,
    -186
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,     5,     0,     0,
       0,     6,     0,    15,     0,     0,     7,    14,     0,     0,
       0,    12,     0,     0,     0,     0,    17,     0,    96,    97,
      98,     0,     0,     0,    78,    75,    93,    16,     0,     0,
       8,     0,     0,     0,     0,     0,    75,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,    88,   103,     0,     0,    77,    81,    82,
      83,     0,    79,    80,    76,    96,    97,    98,     0,    94,
      95,    18,     0,     0,   104,    99,   101,   100,   102,    91,
      92,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,    10,    20,
       0,     0,    21,    24,    22,    23,    89,    84,    86,    85,
      87,   104,    99,   101,   100,   102,    19,    54,     0,     0,
       0,     0,     2,    11,     0,     0,   111,   112,   113,     0,
      54,     0,     0,     0,    50,     0,     0,   105,   108,    29,
       0,    41,     0,    48,   150,     0,    46,    49,     0,     0,
      32,     0,    40,    33,    34,     0,     0,     0,    73,    74,
      71,    70,    72,    69,     0,    51,     0,     0,     0,     0,
       0,    54,    54,     0,    73,    74,    71,    70,    72,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,    28,    25,    27,    26,     0,    62,     0,     0,
       0,     0,   118,    61,    35,    52,    53,    63,    57,    60,
      58,    56,    59,    55,    67,    68,    64,   106,   107,   109,
     110,    40,     0,    44,    45,    47,     0,   119,   114,   116,
     115,   117,     0,   141,   142,   143,     0,    42,   135,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    39,     0,     0,     0,     0,     0,   148,     0,
     136,   137,   139,   140,     0,     0,   149,   144,   146,   145,
     147,   126,   127,   128,     0,     0,   120,   123,    37,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,   121,   122,   124,
     125,     0,   134,   129,   131,   130,   132,     0,    38,     0,
      43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,   327,   333,   322,  -118,    11,  -186,   -17,  -186,
    -186,   170,  -186,  -186,  -186,  -186,  -186,  -186,  -186,   171,
    -186,  -186,  -186,  -186,   114,  -186,  -145,  -186,  -186,  -186,
      37,   -15,   219,  -186,   -55,   -22,  -186,  -149,    60,  -186,
    -185,   -42,  -186,  -104,     1,  -186,  -186
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    39,   117,    11,    18,    14,   118,
     119,   120,   121,   171,   175,   122,   252,   285,   309,   123,
     124,   206,   266,   125,   165,   166,   153,   154,   155,   236,
     184,    44,    33,    34,    45,    91,    36,   156,   157,   158,
     295,   296,   297,   257,   258,   259,   167
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     143,    35,   188,    26,   234,   185,    24,   163,    32,    46,
      89,    90,   146,   147,   148,   149,   168,    19,   150,     1,
      20,    28,    29,    30,   173,    25,    35,     3,   235,    35,
      79,    80,   151,    67,   164,   169,    74,    81,    40,   152,
       4,    31,    13,    46,    15,    89,   225,   226,   174,    35,
      74,    40,   237,   238,    28,    29,    30,    28,    29,    30,
      17,    75,    76,    77,   146,   147,   148,    21,    42,    43,
      22,    93,    94,    37,    31,    96,    97,    31,   186,   187,
      23,    78,    49,    50,   151,   253,   254,   255,   291,   292,
     293,    28,    29,    30,   136,    28,    29,    30,   170,   263,
     264,    27,   301,   302,    47,   256,    52,    53,   294,   303,
      38,    31,    68,    69,    70,    31,    75,    76,    77,    48,
     317,   318,    35,    35,    51,   146,   147,   148,    54,   172,
     176,    55,    71,    56,   261,    58,    78,    83,   227,   228,
     229,   230,   231,   232,   233,   151,   253,   254,   255,   291,
     292,   293,   265,   -81,   -81,   -81,     5,     6,     7,     8,
      41,    59,    60,   280,   281,    63,   256,    61,    62,   294,
     178,   179,   180,   181,   182,   183,   194,   195,   196,   197,
     198,   199,   112,    35,   113,   114,   115,   116,    64,   189,
     241,   321,   193,   200,     5,     6,     7,    82,   327,   -82,
     -82,   -82,    84,   -83,   -83,   -83,   -89,   -89,   -89,   -84,
     -84,   -84,   -86,   -86,   -86,   -85,   -85,   -85,    92,   -87,
     -87,   -87,    65,    66,   100,    66,   102,   103,   104,   105,
     107,   108,   109,   110,   191,   192,   201,   202,    85,   203,
     204,   218,   219,   220,   221,    86,   267,   268,    95,   269,
     270,   274,   275,   276,   277,   305,   306,   311,   312,   307,
     308,   313,   314,   239,   240,   319,   320,    87,    72,    73,
     282,   283,    88,    99,   101,   106,    98,   159,   142,   111,
     126,   131,   127,   128,   129,   130,   132,   133,   134,   135,
     137,   138,   139,   144,   145,   140,   162,   205,   141,   216,
     177,   211,   210,   190,   207,   217,   208,   246,   160,   161,
     284,   209,   212,   213,   214,   215,   222,   224,   273,   223,
     242,   243,   248,   245,   244,   249,   247,   262,   250,   251,
     260,   272,   278,   271,   310,    12,   298,   287,   286,   279,
     288,   289,   290,   316,    16,   300,   299,   304,   315,   328,
     323,   322,   324,   325,   329,   326,     0,     0,     0,     0,
     330,     0,    57
};

static const yytype_int16 yycheck[] =
{
     118,    23,   151,    20,    18,   150,    16,    15,    23,    31,
      65,    66,    15,    16,    17,    18,    16,    37,    21,     3,
      40,    15,    16,    17,    18,    35,    48,    33,    42,    51,
      52,    53,    35,    48,    42,    35,    51,    54,    27,    42,
       0,    35,    15,    65,    34,   100,   191,   192,    42,    71,
      65,    40,   201,   202,    15,    16,    17,    15,    16,    17,
      15,    15,    16,    17,    15,    16,    17,    39,    29,    30,
       4,    29,    30,    38,    35,    29,    30,    35,    29,    30,
      28,    35,    31,    32,    35,    15,    16,    17,    15,    16,
      17,    15,    16,    17,   111,    15,    16,    17,    18,    29,
      30,    33,    29,    30,    39,    35,    31,    32,    35,   294,
      29,    35,    15,    16,    17,    35,    15,    16,    17,    30,
     305,   306,   144,   145,    29,    15,    16,    17,    40,   144,
     145,    16,    35,    34,   252,    16,    35,     5,   193,   194,
     195,   196,   197,   198,   199,    35,    15,    16,    17,    15,
      16,    17,   256,    30,    31,    32,     6,     7,     8,     9,
      37,    16,    17,   267,   268,    36,    35,    16,    17,    35,
      22,    23,    24,    25,    26,    27,    22,    23,    24,    25,
      26,    27,    10,   205,    12,    13,    14,    15,    36,   152,
     205,   309,   155,   156,     6,     7,     8,    36,   316,    30,
      31,    32,    38,    30,    31,    32,    30,    31,    32,    30,
      31,    32,    30,    31,    32,    30,    31,    32,    37,    30,
      31,    32,    29,    30,    29,    30,    16,    17,    16,    17,
      16,    17,    16,    17,    19,    20,    29,    30,    36,    31,
      32,    16,    17,    16,    17,    36,    29,    30,    37,    31,
      32,    16,    17,    16,    17,    29,    30,    16,    17,    31,
      32,    16,    17,   203,   204,   307,   308,    36,    49,    50,
     269,   270,    36,    33,    16,    16,    38,    15,    34,    40,
      38,    38,    36,    36,    36,    36,    36,    36,    36,    36,
      35,    35,    35,    28,    28,    35,    15,    28,    37,    16,
      37,    29,    38,    36,    36,    18,    36,    16,   138,   138,
      11,    40,    39,    39,    39,    39,    36,    33,    16,    42,
      41,    39,    36,   209,    39,    36,    38,    37,    36,    36,
      36,    34,    36,    38,    16,     8,    33,    36,    38,    41,
      36,    36,    36,    33,    11,    37,    39,    36,    36,    34,
      36,    38,    36,    36,    34,    36,    -1,    -1,    -1,    -1,
      39,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    44,    33,     0,     6,     7,     8,     9,    45,
      46,    49,    45,    15,    51,    34,    46,    15,    50,    37,
      40,    39,     4,    28,    16,    35,    51,    33,    15,    16,
      17,    35,    74,    75,    76,    78,    79,    38,    29,    47,
      49,    37,    29,    30,    74,    77,    78,    39,    30,    31,
      32,    29,    31,    32,    40,    16,    34,    47,    16,    16,
      17,    16,    17,    36,    36,    29,    30,    74,    15,    16,
      17,    35,    75,    75,    74,    15,    16,    17,    35,    78,
      78,    51,    36,     5,    38,    36,    36,    36,    36,    77,
      77,    78,    37,    29,    30,    37,    29,    30,    38,    33,
      29,    16,    16,    17,    16,    17,    16,    16,    17,    16,
      17,    40,    10,    12,    13,    14,    15,    48,    52,    53,
      54,    55,    58,    62,    63,    66,    38,    36,    36,    36,
      36,    38,    36,    36,    36,    36,    51,    35,    35,    35,
      35,    37,    34,    48,    28,    28,    15,    16,    17,    18,
      21,    35,    42,    69,    70,    71,    80,    81,    82,    15,
      54,    62,    15,    15,    42,    67,    68,    89,    16,    35,
      18,    56,    74,    18,    42,    57,    74,    37,    22,    23,
      24,    25,    26,    27,    73,    69,    29,    30,    80,    73,
      36,    19,    20,    73,    22,    23,    24,    25,    26,    27,
      73,    29,    30,    31,    32,    28,    64,    36,    36,    40,
      38,    29,    39,    39,    39,    39,    16,    18,    16,    17,
      16,    17,    36,    42,    33,    69,    69,    77,    77,    77,
      77,    77,    77,    77,    18,    42,    72,    80,    80,    81,
      81,    74,    41,    39,    39,    67,    16,    38,    36,    36,
      36,    36,    59,    15,    16,    17,    35,    86,    87,    88,
      36,    48,    37,    29,    30,    86,    65,    29,    30,    31,
      32,    38,    34,    16,    16,    17,    16,    17,    36,    41,
      86,    86,    87,    87,    11,    60,    38,    36,    36,    36,
      36,    15,    16,    17,    35,    83,    84,    85,    33,    39,
      37,    29,    30,    83,    36,    29,    30,    31,    32,    61,
      16,    16,    17,    16,    17,    36,    33,    83,    83,    84,
      84,    48,    38,    36,    36,    36,    36,    48,    34,    34,
      39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    47,    47,
      48,    48,    49,    49,    50,    51,    51,    51,    51,    51,
      52,    52,    52,    52,    52,    53,    53,    53,    53,    54,
      55,    55,    56,    57,    57,    59,    58,    61,    60,    60,
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    12,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     3,     6,     1,     1,     4,     3,     6,     9,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     1,
       4,     7,     1,     1,     1,     0,    10,     0,     5,     0,
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
#line 86 "syntaxic.y"
            {strcpy(sauvType,"INTEGER");}
#line 1407 "syntaxic.tab.c"
    break;

  case 4: /* type: FLOAT  */
#line 87 "syntaxic.y"
            {strcpy(sauvType,"FLOAT");}
#line 1413 "syntaxic.tab.c"
    break;

  case 5: /* type: CHAR  */
#line 88 "syntaxic.y"
            {strcpy(sauvType,"CHAR");}
#line 1419 "syntaxic.tab.c"
    break;

  case 12: /* declaration: type variable_list SEMICOLON  */
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
    }
#line 1434 "syntaxic.tab.c"
    break;

  case 13: /* declaration: CONST type cst EQUALS term SEMICOLON  */
#line 121 "syntaxic.y"
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
#line 1456 "syntaxic.tab.c"
    break;

  case 14: /* cst: IDENTIFIER  */
#line 141 "syntaxic.y"
              {
        strcpy(saveIdf[0].idfTab,(yyvsp[0].string));
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType((yyvsp[0].string)));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[0].idfTab,nb_ligne);
            
            
    }
#line 1470 "syntaxic.tab.c"
    break;

  case 15: /* variable_list: IDENTIFIER  */
#line 154 "syntaxic.y"
               {strcpy(saveIdf[j].idfTab,(yyvsp[0].string));j++;}
#line 1476 "syntaxic.tab.c"
    break;

  case 16: /* variable_list: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 155 "syntaxic.y"
                                             {strcpy(saveIdf[j].idfTab,(yyvsp[-3].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;
        if (atoi((yyvsp[-1].string)) == 0) {
            printf("Erreur semantique : La taille du tableau doit etre strictement positive\n");
        } 
        sprintf(buffer1, "%d", atoi((yyvsp[-1].string))-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[-3].string),"","");
        }
#line 1489 "syntaxic.tab.c"
    break;

  case 17: /* variable_list: IDENTIFIER COMMA variable_list  */
#line 163 "syntaxic.y"
                                      {strcpy(saveIdf[j].idfTab,(yyvsp[-2].string));j++;}
#line 1495 "syntaxic.tab.c"
    break;

  case 18: /* variable_list: IDENTIFIER LBRACKET INT_NUMBER RBRACKET COMMA variable_list  */
#line 164 "syntaxic.y"
                                                                   {strcpy(saveIdf[j].idfTab,(yyvsp[-5].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;}
#line 1501 "syntaxic.tab.c"
    break;

  case 19: /* variable_list: IDENTIFIER LBRACKET LPAREN PLUS INT_NUMBER RPAREN RBRACKET COMMA variable_list  */
#line 165 "syntaxic.y"
                                                                                      {strcpy(saveIdf[j].idfTab,(yyvsp[-8].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;}
#line 1507 "syntaxic.tab.c"
    break;

  case 25: /* assignment: MDROIT EQUALS term SEMICOLON  */
#line 187 "syntaxic.y"
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
        createQuad("=", saveStr, "",mDroit);

        insererVal(mDroit, saveStr);
    }
#line 1528 "syntaxic.tab.c"
    break;

  case 26: /* assignment: TAB EQUALS term SEMICOLON  */
#line 203 "syntaxic.y"
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
        createQuad("=", saveStr, "",temp);

        insererVal(mDroit, saveStr);
    }
#line 1549 "syntaxic.tab.c"
    break;

  case 29: /* MDROIT: IDENTIFIER  */
#line 224 "syntaxic.y"
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
#line 1580 "syntaxic.tab.c"
    break;

  case 30: /* TAB: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 252 "syntaxic.y"
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
#line 1605 "syntaxic.tab.c"
    break;

  case 31: /* TAB: IDENTIFIER LBRACKET LPAREN PLUS INT_NUMBER RPAREN RBRACKET  */
#line 274 "syntaxic.y"
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
#line 1622 "syntaxic.tab.c"
    break;

  case 32: /* EXPRESSION_CHAR: CHARACTERE  */
#line 288 "syntaxic.y"
                            {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[0].string));}
                           }
#line 1631 "syntaxic.tab.c"
    break;

  case 33: /* EXPRESSION_CHAINE: CHARACTERE  */
#line 294 "syntaxic.y"
                        {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[0].string));}
                           }
#line 1640 "syntaxic.tab.c"
    break;

  case 34: /* EXPRESSION_CHAINE: STRING_LITERAL  */
#line 298 "syntaxic.y"
                             {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[0].string));}
                           }
#line 1649 "syntaxic.tab.c"
    break;

  case 35: /* $@1: %empty  */
#line 329 "syntaxic.y"
                                   {
          empiler_Int(&pile1,qc);
          createQuad("BZ","",QuadR[qc-1].res,"");
        }
#line 1658 "syntaxic.tab.c"
    break;

  case 36: /* condition: IF LPAREN COND RPAREN LBRACE $@1 instruction_section RBRACE elsebloc SEMICOLON  */
#line 333 "syntaxic.y"
                                                     {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        }
#line 1666 "syntaxic.tab.c"
    break;

  case 37: /* $@2: %empty  */
#line 337 "syntaxic.y"
                      {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
        empiler_Int(&pile1,qc);
        createQuad("BR","","","");
        }
#line 1676 "syntaxic.tab.c"
    break;

  case 40: /* assignment_int: MDROIT EQUALS term  */
#line 345 "syntaxic.y"
                       {
        // Vérifie si la valeur affectée est compatible avec le type de la variable
        if (strcmp(typeG, "INTEGER") == 0 && ((yyvsp[0].real) - floor((yyvsp[0].real)) != 0)) {
            printf("Erreur sémantique à la ligne %d : tentative d'affectation d'un flottant à une variable entière.\n", nb_ligne);
        }
        
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);
        }
    }
#line 1692 "syntaxic.tab.c"
    break;

  case 41: /* $@3: %empty  */
#line 359 "syntaxic.y"
                             {
        // Sauvegarde du début de la boucle
       // empiler_Int(&pile, qc);
    }
#line 1701 "syntaxic.tab.c"
    break;

  case 42: /* $@4: %empty  */
#line 362 "syntaxic.y"
                   {
        // Génération du quadruplet de test
        char* temp = newtemp();
       // empiler_Int(&pile_for, qc);
       // createQuad("BZ", temp, "", "");
    }
#line 1712 "syntaxic.tab.c"
    break;

  case 43: /* loop: FOR LPAREN assignment_int $@3 COLON term3 $@4 COLON term4 RPAREN LBRACE instruction_section RBRACE SEMICOLON  */
#line 367 "syntaxic.y"
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
    }
#line 1730 "syntaxic.tab.c"
    break;

  case 44: /* io_statement: READ LPAREN IDENTIFIER RPAREN SEMICOLON  */
#line 384 "syntaxic.y"
                                           {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[-2].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[-2].string));
        }
    }
#line 1741 "syntaxic.tab.c"
    break;

  case 48: /* io_expr: IDENTIFIER  */
#line 401 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }
    }
#line 1752 "syntaxic.tab.c"
    break;

  case 51: /* COND: NOT COND  */
#line 413 "syntaxic.y"
               {
        //char* temp = newtemcreateQuadLp();
        //createQuadL(1, $2, "", temp);
       // $$ = temp;    
    }
#line 1762 "syntaxic.tab.c"
    break;

  case 52: /* COND: comparison_expr AND COND  */
#line 418 "syntaxic.y"
                              {
        char* temp = newtemp();
       // (3, $1, $3, temp);
        (yyval.string) = temp;
    }
#line 1772 "syntaxic.tab.c"
    break;

  case 53: /* COND: comparison_expr OR COND  */
#line 423 "syntaxic.y"
                              {
        char* temp = newtemp();
       // createQuadL(2, $1, $3, temp);
        (yyval.string) = temp;
    }
#line 1782 "syntaxic.tab.c"
    break;

  case 55: /* comparison_expr: term2 GT term1  */
#line 433 "syntaxic.y"
    {
         char* temp=newtemp();
        createQuadA(6,buffer1,buffer2,temp);
    }
#line 1791 "syntaxic.tab.c"
    break;

  case 56: /* comparison_expr: term2 LT term1  */
#line 437 "syntaxic.y"
                    {
        char* temp=newtemp();
        createQuadA(5,buffer1,buffer2,temp);
    }
#line 1800 "syntaxic.tab.c"
    break;

  case 57: /* comparison_expr: term2 EQ term1  */
#line 441 "syntaxic.y"
                   {
        char* temp=newtemp();
        createQuadA(1,buffer1,buffer2,temp);
    }
#line 1809 "syntaxic.tab.c"
    break;

  case 58: /* comparison_expr: term2 GEQ term1  */
#line 445 "syntaxic.y"
                    {
       char* temp=newtemp();
        createQuadA(3,buffer1,buffer2,temp);
    }
#line 1818 "syntaxic.tab.c"
    break;

  case 59: /* comparison_expr: term2 LEQ term1  */
#line 449 "syntaxic.y"
                    {
        char* temp=newtemp();
        createQuadA(4,buffer1,buffer2,temp);
    }
#line 1827 "syntaxic.tab.c"
    break;

  case 60: /* comparison_expr: term2 NEQ term1  */
#line 453 "syntaxic.y"
                    {
        char* temp=newtemp();
        createQuadA(2,buffer1,buffer2,temp);
    }
#line 1836 "syntaxic.tab.c"
    break;

  case 61: /* comparison_expr: STRING_LITERAL OP_COMP STRING_LITERAL  */
#line 457 "syntaxic.y"
                                          { (yyval.string) = newtemp(); 
    sprintf(buffer1, "%f", (yyvsp[-2].string));
    sprintf(buffer2, "%f", (yyvsp[0].string));
    createQuad((yyvsp[-1].string),buffer1, buffer2, (yyval.string)); }
#line 1845 "syntaxic.tab.c"
    break;

  case 62: /* comparison_expr: CHARACTERE OP_COMP CHARACTERE  */
#line 461 "syntaxic.y"
                                   { (yyval.string) = newtemp(); 
    sprintf(buffer1, "%f", (yyvsp[-2].string));
    sprintf(buffer2, "%f", (yyvsp[0].string));
    createQuad((yyvsp[-1].string),buffer1, buffer2, (yyval.string));  }
#line 1854 "syntaxic.tab.c"
    break;

  case 63: /* comparison_expr: DROIT OP_COMP term1  */
#line 465 "syntaxic.y"
                         {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);}
#line 1860 "syntaxic.tab.c"
    break;

  case 64: /* comparison_expr: term2 OP_COMP GAUCHE  */
#line 466 "syntaxic.y"
                          {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);}
#line 1866 "syntaxic.tab.c"
    break;

  case 76: /* term: factor1 PLUS term  */
#line 488 "syntaxic.y"
                        {
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real));  
        char *temp = newtemp();  // Génère un identifiant temporaire
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        sprintf(temp,"%f",t);
        createQuad("+", buffer1, buffer2, temp);
        (yyval.real)=atof(temp);
        
    }
#line 1887 "syntaxic.tab.c"
    break;

  case 77: /* term: factor MINUS term  */
#line 504 "syntaxic.y"
                        {
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        char *temp = newtemp();  // Génère un identifiant temporaire
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        sprintf(temp,"%f",t);
        createQuad("-", buffer1, buffer2, temp);
        (yyval.real)=atof(temp);
     
    }
#line 1908 "syntaxic.tab.c"
    break;

  case 79: /* factor: primary MULTIPLY factor  */
#line 525 "syntaxic.y"
                              {
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        char *temp = newtemp();  // Génère un identifiant temporaire
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        sprintf(temp,"%f",t);
        createQuad("*", buffer1, buffer2, temp);
        (yyval.real)=atof(temp);
    }
#line 1928 "syntaxic.tab.c"
    break;

  case 80: /* factor: primary DIVIDE factor  */
#line 540 "syntaxic.y"
                                { 
        if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
        else{   
        if (strcmp(typeD, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[-2].real));
        sprintf(buffer1, "%d", i);  // Convertir en entier
        } else  sprintf(buffer1, "%f", (yyvsp[-2].real)); 
        if (strcmp(typeG, "INTEGER") == 0) {
        int i = (int)floor((yyvsp[0].real));
        sprintf(buffer2, "%d", i);  // Convertir en entier
        } else  sprintf(buffer2, "%f", (yyvsp[0].real)); 
        char *temp = newtemp();  // Génère un identifiant temporaire
        float t=(yyvsp[-2].real)/(yyvsp[0].real);
        sprintf(temp,"%f",t);
        createQuad("/", buffer1, buffer2, temp);
        (yyval.real)=atof(temp);
        }
}
#line 1951 "syntaxic.tab.c"
    break;

  case 81: /* primary: IDENTIFIER  */
#line 562 "syntaxic.y"
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
                             }
    }
#line 1968 "syntaxic.tab.c"
    break;

  case 82: /* primary: INT_NUMBER  */
#line 574 "syntaxic.y"
                 {
        printf("here %s\n",typeG);
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
                  
    }
#line 1979 "syntaxic.tab.c"
    break;

  case 83: /* primary: FLOAT_NUMBER  */
#line 580 "syntaxic.y"
                  {        printf("here 2 %s\n",typeG);

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); }  
                   }
#line 1991 "syntaxic.tab.c"
    break;

  case 84: /* primary: LPAREN PLUS INT_NUMBER RPAREN  */
#line 587 "syntaxic.y"
                                  {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));}
    }
#line 2001 "syntaxic.tab.c"
    break;

  case 85: /* primary: LPAREN MINUS INT_NUMBER RPAREN  */
#line 592 "syntaxic.y"
                                   {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);}
    }
#line 2013 "syntaxic.tab.c"
    break;

  case 86: /* primary: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 599 "syntaxic.y"
                                      {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
                                      else{(yyval.real)=atof((yyvsp[-1].string));}
                   }
#line 2022 "syntaxic.tab.c"
    break;

  case 87: /* primary: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 603 "syntaxic.y"
                                       {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                       }
    }
#line 2035 "syntaxic.tab.c"
    break;

  case 88: /* primary: LPAREN term RPAREN  */
#line 611 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-1].real);}
#line 2041 "syntaxic.tab.c"
    break;

  case 89: /* primary: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 612 "syntaxic.y"
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                }
#line 2053 "syntaxic.tab.c"
    break;

  case 91: /* term1: factor1 PLUS term1  */
#line 623 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-2].real)+(yyvsp[0].real);}
#line 2059 "syntaxic.tab.c"
    break;

  case 92: /* term1: factor1 MINUS term1  */
#line 624 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-2].real)-(yyvsp[0].real);}
#line 2065 "syntaxic.tab.c"
    break;

  case 94: /* factor1: primary1 MULTIPLY factor1  */
#line 630 "syntaxic.y"
                                {(yyval.real)=(yyvsp[-2].real)*(yyvsp[0].real);}
#line 2071 "syntaxic.tab.c"
    break;

  case 95: /* factor1: primary1 DIVIDE factor1  */
#line 631 "syntaxic.y"
                                  { if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[-2].real) / (yyvsp[0].real);  
                                             }
                            }
#line 2081 "syntaxic.tab.c"
    break;

  case 96: /* primary1: IDENTIFIER  */
#line 640 "syntaxic.y"
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
#line 2099 "syntaxic.tab.c"
    break;

  case 97: /* primary1: INT_NUMBER  */
#line 653 "syntaxic.y"
                 {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
        sprintf(buffer2, "%d",atoi((yyvsp[0].string)));
                  
    }
#line 2111 "syntaxic.tab.c"
    break;

  case 98: /* primary1: FLOAT_NUMBER  */
#line 660 "syntaxic.y"
                  {        printf("here 2 %s\n",typeG);
                    strcpy(typeG,"FLOAT");
                    if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); } 
                   sprintf(buffer2, "%f", (yyvsp[0].string)); 
                   }
#line 2124 "syntaxic.tab.c"
    break;

  case 99: /* primary1: LPAREN PLUS INT_NUMBER RPAREN  */
#line 668 "syntaxic.y"
                                  {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));}
    }
#line 2135 "syntaxic.tab.c"
    break;

  case 100: /* primary1: LPAREN MINUS INT_NUMBER RPAREN  */
#line 674 "syntaxic.y"
                                   {
        strcpy(typeG,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);}
    }
#line 2148 "syntaxic.tab.c"
    break;

  case 101: /* primary1: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 682 "syntaxic.y"
                                      {
        strcpy(typeG,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));}
                   }
#line 2159 "syntaxic.tab.c"
    break;

  case 102: /* primary1: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 688 "syntaxic.y"
                                       {
        strcpy(typeG,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                       }
    }
#line 2173 "syntaxic.tab.c"
    break;

  case 103: /* primary1: LPAREN term1 RPAREN  */
#line 697 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2179 "syntaxic.tab.c"
    break;

  case 104: /* primary1: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 698 "syntaxic.y"
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
                                else {
                                    strcpy(typeG,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                }
#line 2191 "syntaxic.tab.c"
    break;

  case 106: /* term2: factor2 PLUS term2  */
#line 708 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-2].real)+(yyvsp[0].real);}
#line 2197 "syntaxic.tab.c"
    break;

  case 107: /* term2: factor2 MINUS term2  */
#line 709 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-2].real)-(yyvsp[0].real);}
#line 2203 "syntaxic.tab.c"
    break;

  case 109: /* factor2: primary2 MULTIPLY factor2  */
#line 715 "syntaxic.y"
                                {(yyval.real)=(yyvsp[-2].real)*(yyvsp[0].real);}
#line 2209 "syntaxic.tab.c"
    break;

  case 110: /* factor2: primary2 DIVIDE factor2  */
#line 716 "syntaxic.y"
                                  { if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[-2].real) / (yyvsp[0].real);  
                                             }
                            }
#line 2219 "syntaxic.tab.c"
    break;

  case 111: /* primary2: IDENTIFIER  */
#line 725 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)));}
        sprintf(buffer1, "%s", (yyvsp[0].string));
    }
#line 2231 "syntaxic.tab.c"
    break;

  case 112: /* primary2: INT_NUMBER  */
#line 732 "syntaxic.y"
                 {
        strcpy(typeD,"INTEGER");
        sprintf(buffer1, "%d", atoi((yyvsp[0].string)));
                  
    }
#line 2241 "syntaxic.tab.c"
    break;

  case 113: /* primary2: FLOAT_NUMBER  */
#line 737 "syntaxic.y"
                  {
        strcpy(typeD,"FLOAT");
        sprintf(buffer1, "%f", (yyvsp[0].string));
    }
#line 2250 "syntaxic.tab.c"
    break;

  case 114: /* primary2: LPAREN PLUS INT_NUMBER RPAREN  */
#line 741 "syntaxic.y"
                                  {
        strcpy(typeD,"INTEGER");
    }
#line 2258 "syntaxic.tab.c"
    break;

  case 115: /* primary2: LPAREN MINUS INT_NUMBER RPAREN  */
#line 744 "syntaxic.y"
                                   {
        strcpy(typeD,"INTEGER");
    }
#line 2266 "syntaxic.tab.c"
    break;

  case 116: /* primary2: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 747 "syntaxic.y"
                                      {
        strcmp(typeD,"FLOAT");
                   }
#line 2274 "syntaxic.tab.c"
    break;

  case 117: /* primary2: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 750 "syntaxic.y"
                                       {
        strcpy(typeD,"FLOAT");
    }
#line 2282 "syntaxic.tab.c"
    break;

  case 118: /* primary2: LPAREN term2 RPAREN  */
#line 753 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2288 "syntaxic.tab.c"
    break;

  case 119: /* primary2: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 754 "syntaxic.y"
                                             {
        if(verifdeclaration((yyvsp[-3].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
        else {
                strcpy(typeG,getType((yyvsp[-3].string)));
                }
    }
#line 2300 "syntaxic.tab.c"
    break;

  case 121: /* term4: factor4 PLUS term4  */
#line 765 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-2].real)+(yyvsp[0].real);}
#line 2306 "syntaxic.tab.c"
    break;

  case 122: /* term4: factor4 MINUS term4  */
#line 766 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-2].real)-(yyvsp[0].real);}
#line 2312 "syntaxic.tab.c"
    break;

  case 124: /* factor4: primary4 MULTIPLY factor4  */
#line 772 "syntaxic.y"
                                {(yyval.real)=(yyvsp[-2].real)*(yyvsp[0].real);}
#line 2318 "syntaxic.tab.c"
    break;

  case 125: /* factor4: primary4 DIVIDE factor4  */
#line 773 "syntaxic.y"
                                  { if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[-2].real) / (yyvsp[0].real);  
                                             }
                            }
#line 2328 "syntaxic.tab.c"
    break;

  case 126: /* primary4: IDENTIFIER  */
#line 782 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)));}
    }
#line 2339 "syntaxic.tab.c"
    break;

  case 127: /* primary4: INT_NUMBER  */
#line 788 "syntaxic.y"
                 {
        strcpy(typeD,"INTEGER");
                  
    }
#line 2348 "syntaxic.tab.c"
    break;

  case 128: /* primary4: FLOAT_NUMBER  */
#line 792 "syntaxic.y"
                  {
        strcpy(typeD,"FLOAT");
    }
#line 2356 "syntaxic.tab.c"
    break;

  case 129: /* primary4: LPAREN PLUS INT_NUMBER RPAREN  */
#line 795 "syntaxic.y"
                                  {
        strcpy(typeD,"INTEGER");
    }
#line 2364 "syntaxic.tab.c"
    break;

  case 130: /* primary4: LPAREN MINUS INT_NUMBER RPAREN  */
#line 798 "syntaxic.y"
                                   {
        strcpy(typeD,"INTEGER");
    }
#line 2372 "syntaxic.tab.c"
    break;

  case 131: /* primary4: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 801 "syntaxic.y"
                                      {
        strcmp(typeD,"FLOAT");
                   }
#line 2380 "syntaxic.tab.c"
    break;

  case 132: /* primary4: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 804 "syntaxic.y"
                                       {
        strcpy(typeD,"FLOAT");
    }
#line 2388 "syntaxic.tab.c"
    break;

  case 133: /* primary4: LPAREN term4 RPAREN  */
#line 807 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2394 "syntaxic.tab.c"
    break;

  case 134: /* primary4: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 808 "syntaxic.y"
                                             {
        if(verifdeclaration((yyvsp[-3].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
        else {
                strcpy(typeD,getType((yyvsp[-3].string)));
                }
    }
#line 2406 "syntaxic.tab.c"
    break;

  case 136: /* term3: factor3 PLUS term3  */
#line 818 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-2].real)+(yyvsp[0].real);}
#line 2412 "syntaxic.tab.c"
    break;

  case 137: /* term3: factor3 MINUS term3  */
#line 819 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-2].real)-(yyvsp[0].real);}
#line 2418 "syntaxic.tab.c"
    break;

  case 139: /* factor3: primary3 MULTIPLY factor3  */
#line 825 "syntaxic.y"
                                {(yyval.real)=(yyvsp[-2].real)*(yyvsp[0].real);}
#line 2424 "syntaxic.tab.c"
    break;

  case 140: /* factor3: primary3 DIVIDE factor3  */
#line 826 "syntaxic.y"
                                  { if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[-2].real) / (yyvsp[0].real);  
                                             }
                            }
#line 2434 "syntaxic.tab.c"
    break;

  case 141: /* primary3: IDENTIFIER  */
#line 835 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeG,getType((yyvsp[0].string)));}
    }
#line 2445 "syntaxic.tab.c"
    break;

  case 142: /* primary3: INT_NUMBER  */
#line 841 "syntaxic.y"
                 {
        strcpy(typeG,"INTEGER");
                  
    }
#line 2454 "syntaxic.tab.c"
    break;

  case 143: /* primary3: FLOAT_NUMBER  */
#line 845 "syntaxic.y"
                  {
        strcpy(typeG,"FLOAT");
    }
#line 2462 "syntaxic.tab.c"
    break;

  case 144: /* primary3: LPAREN PLUS INT_NUMBER RPAREN  */
#line 848 "syntaxic.y"
                                  {
        strcpy(typeG,"INTEGER");
    }
#line 2470 "syntaxic.tab.c"
    break;

  case 145: /* primary3: LPAREN MINUS INT_NUMBER RPAREN  */
#line 851 "syntaxic.y"
                                   {
        strcpy(typeG,"INTEGER");
    }
#line 2478 "syntaxic.tab.c"
    break;

  case 146: /* primary3: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 854 "syntaxic.y"
                                      {
        strcmp(typeG,"FLOAT");
                   }
#line 2486 "syntaxic.tab.c"
    break;

  case 147: /* primary3: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 857 "syntaxic.y"
                                       {
        strcpy(typeG,"FLOAT");
    }
#line 2494 "syntaxic.tab.c"
    break;

  case 148: /* primary3: LPAREN term3 RPAREN  */
#line 860 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2500 "syntaxic.tab.c"
    break;

  case 149: /* primary3: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 861 "syntaxic.y"
                                             {
        if(verifdeclaration((yyvsp[-3].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
        else {
                strcpy(typeG,getType((yyvsp[-3].string)));
                }
    }
#line 2512 "syntaxic.tab.c"
    break;


#line 2516 "syntaxic.tab.c"

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

#line 874 "syntaxic.y"


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

