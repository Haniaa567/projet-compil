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
   char buffer1[20], buffer2[20], temp[20];
    pile *pile_if = NULL;
    pile *pile_for = NULL;



#line 104 "syntaxic.tab.c"

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
  YYSYMBOL_60_2 = 60,                      /* $@2  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_assignment_int = 62,            /* assignment_int  */
  YYSYMBOL_loop = 63,                      /* loop  */
  YYSYMBOL_64_4 = 64,                      /* $@4  */
  YYSYMBOL_65_5 = 65,                      /* $@5  */
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
#define YYLAST   343

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  301

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
       0,    80,    80,    87,    88,    89,    94,    95,   100,   101,
     106,   107,   112,   122,   142,   155,   156,   164,   165,   166,
     179,   180,   181,   182,   183,   188,   204,   205,   209,   224,
     227,   240,   249,   255,   259,   268,   268,   278,   283,   278,
     298,   312,   315,   312,   337,   343,   348,   349,   354,   360,
     365,   366,   371,   376,   385,   389,   393,   397,   398,   402,
     403,   406,   407,   410,   411,   412,   413,   414,   415,   419,
     420,   430,   444,   445,   454,   469,   481,   487,   494,   499,
     506,   510,   518,   519,   529,   530,   531,   536,   537,   538,
     547,   559,   566,   573,   579,   587,   593,   602,   603,   612,
     613,   614,   619,   620,   621,   630,   636,   640,   643,   646,
     649,   652,   655,   656,   666,   667,   668,   673,   674,   675,
     684,   690,   694,   697,   700,   703,   706,   709,   710,   719,
     720,   721,   726,   727,   728,   737,   743,   747,   750,   753,
     756,   759,   762,   763,   773
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
  "EXPRESSION_CHAINE", "condition", "$@1", "$@2", "$@3", "assignment_int",
  "loop", "$@4", "$@5", "io_statement", "io_expr_list", "io_expr", "COND",
  "comparison_expr", "DROIT", "GAUCHE", "OP_COMP", "term", "factor",
  "primary", "term1", "factor1", "primary1", "term2", "factor2",
  "primary2", "term4", "factor4", "primary4", "term3", "factor3",
  "primary3", "string_literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-193)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,   -26,    81,   140,  -193,  -193,  -193,  -193,   144,    82,
      65,   140,    88,     4,    70,   120,  -193,  -193,   104,    -7,
      82,  -193,   122,    63,   154,   129,  -193,   140,   148,  -193,
    -193,    37,   156,    -3,    19,   153,   178,   162,   140,   181,
      18,    42,   164,  -193,    63,    63,    63,    63,    82,   165,
     193,  -193,   166,   167,   169,   171,   172,  -193,  -193,  -193,
    -193,  -193,  -193,   173,   176,  -193,  -193,  -193,  -193,  -193,
     170,   115,    82,   177,   179,   180,   182,   183,   168,   115,
    -193,   185,   188,  -193,  -193,  -193,  -193,  -193,    -5,   203,
     204,    -9,    20,  -193,  -193,     7,   -13,   184,  -193,  -193,
     113,    -5,    47,   113,   186,    66,   113,   113,    86,    90,
     195,  -193,  -193,   189,  -193,  -193,   190,   187,  -193,   191,
     199,  -193,   192,   194,  -193,  -193,   196,   208,  -193,  -193,
    -193,  -193,  -193,  -193,   212,  -193,   126,   137,   198,   197,
     205,    -5,    -5,    79,     3,    85,    85,    85,    85,    63,
     200,   201,   206,    -9,  -193,   216,  -193,  -193,  -193,   209,
    -193,   207,   210,   213,   214,  -193,  -193,  -193,  -193,  -193,
     211,  -193,  -193,    54,  -193,   127,   128,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,    91,  -193,  -193,  -193,
     215,  -193,  -193,  -193,  -193,  -193,   115,   115,   220,   145,
     147,   217,    79,    79,    79,    79,   218,  -193,  -193,    58,
    -193,   136,   138,   219,   222,   224,   221,   225,   226,   227,
     228,  -193,  -193,  -193,  -193,  -193,   236,   151,   155,   229,
     230,    91,    91,    91,    91,  -193,   231,   233,  -193,  -193,
    -193,  -193,  -193,   234,   232,   237,   238,   239,  -193,    96,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,   223,  -193,  -193,    75,   240,   146,   142,   244,   250,
     161,   163,   242,   246,    96,    96,    96,    96,   115,   243,
     247,   248,   249,   251,  -193,   115,  -193,  -193,  -193,  -193,
     235,  -193,  -193,  -193,  -193,  -193,   252,   241,   253,  -193,
    -193
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,     5,     0,     0,
       0,     6,     0,    15,     0,     0,     7,    14,     0,     0,
       0,    12,     0,     0,     0,     0,    17,     0,    75,    76,
      77,     0,     0,    69,    72,    16,     0,     0,     8,     0,
       0,     0,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,    82,    70,    71,
      73,    74,    18,     0,     0,    83,    78,    80,    79,    81,
       0,     0,     0,     0,     0,     0,     0,    28,     0,    10,
      20,     0,     0,    21,    24,    22,    23,    19,     0,     0,
       0,     0,     0,     2,    11,     0,     0,   105,   106,   107,
       0,     0,     0,     0,     0,    50,     0,     0,    99,   102,
       0,    29,    41,     0,    48,   144,     0,    46,    49,     0,
       0,    32,     0,    40,    33,    34,     0,     0,    67,    68,
      65,    64,    66,    63,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    27,    25,    26,     0,
      56,     0,     0,     0,     0,   112,    55,    35,    52,    53,
      90,    91,    92,     0,    57,    84,    87,    61,    62,    58,
      54,   100,   101,   103,   104,    40,     0,    44,    45,    47,
       0,   113,   108,   110,   109,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,     0,
      42,   129,   132,     0,     0,     0,     0,     0,     0,     0,
       0,    97,    85,    86,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,    98,    93,
      95,    94,    96,     0,     0,     0,     0,     0,   142,     0,
     130,   131,   133,   134,    36,    38,   143,   138,   140,   139,
     141,   120,   121,   122,     0,     0,   114,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   127,     0,   115,   116,   118,   119,
       0,   128,   123,   125,   124,   126,     0,     0,     0,    39,
      43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -193,  -193,   259,   271,   255,   -79,    30,  -193,   -16,  -193,
    -193,   202,   245,  -193,  -193,  -193,  -193,  -193,  -193,   254,
    -193,  -193,  -193,  -193,    84,  -193,   -93,  -193,  -193,  -193,
      38,   -30,   135,  -193,  -142,   -21,  -193,   -99,    39,  -193,
    -141,   -88,  -193,  -192,   -43,  -193,  -193
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    37,    78,    11,    18,    14,    79,
      80,    81,    82,   122,   126,    83,   196,   197,   268,    84,
      85,   150,   230,    86,   116,   117,   104,   105,   106,   179,
     134,    32,    33,    34,   174,   175,   176,   107,   108,   109,
     265,   266,   267,   210,   211,   212,   118
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      94,    42,   180,   138,    26,   124,   114,     3,   135,    24,
      97,    98,    99,   100,    58,    59,   101,   229,   170,   171,
     172,   177,    28,    29,    30,   121,    44,    45,    25,   125,
     102,   201,    62,   115,    53,    54,   119,   103,   173,   250,
     251,    19,    31,     1,    20,   178,   181,   182,   168,   169,
      46,    47,    28,    29,    30,   120,    87,    38,    55,    56,
     222,   223,    97,    98,    99,   123,    40,    41,    38,   170,
     171,   172,    31,   206,   207,   208,   136,   137,    28,    29,
      30,     4,   102,   199,   200,   141,   142,   227,   228,   173,
     261,   262,   263,   209,   170,   171,   172,    13,    31,    15,
      97,    98,    99,    17,   270,   271,   206,   207,   208,    21,
     264,   261,   262,   263,   173,   145,   146,   214,   215,   185,
     102,   147,   148,   272,    22,    73,   209,    74,    75,    76,
      77,   264,    23,   286,   287,   128,   129,   130,   131,   132,
     133,   139,   161,   162,   143,   144,     5,     6,     7,     8,
       5,     6,     7,   163,   164,    27,   202,   203,    36,   204,
     205,   217,   218,   219,   220,   231,   232,   244,   245,   233,
     234,   246,   247,   276,   277,   274,   275,   280,   281,   282,
     283,    60,    61,   224,   225,    39,   183,   184,   288,   289,
     252,   253,    35,    48,    49,    43,    50,    52,    64,   290,
      57,    63,    93,    66,    65,    67,   296,    68,    69,    71,
      72,    70,    88,    95,    89,    90,    96,    91,    77,   113,
      92,   127,   140,   149,   159,   151,   152,   153,   155,   154,
     160,   156,   190,   157,   165,   158,   216,   189,   167,   166,
     187,   186,     0,   192,   255,   188,   193,   191,   198,   194,
     195,   213,   243,   221,     0,   226,   236,   235,   237,   238,
     269,   239,   240,   241,   242,   248,   279,    12,   257,   297,
     254,   249,   256,   258,   259,   260,   273,   278,   284,   285,
     299,   291,    16,   292,   293,   294,   298,   295,     0,     0,
       0,   110,   300,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,   112
};

static const yytype_int16 yycheck[] =
{
      79,    31,   144,   102,    20,    18,    15,    33,   101,    16,
      15,    16,    17,    18,    44,    45,    21,   209,    15,    16,
      17,    18,    15,    16,    17,    18,    29,    30,    35,    42,
      35,   173,    48,    42,    16,    17,    16,    42,    35,   231,
     232,    37,    35,     3,    40,    42,   145,   146,   141,   142,
      31,    32,    15,    16,    17,    35,    72,    27,    16,    17,
     202,   203,    15,    16,    17,    95,    29,    30,    38,    15,
      16,    17,    35,    15,    16,    17,    29,    30,    15,    16,
      17,     0,    35,    29,    30,    19,    20,    29,    30,    35,
      15,    16,    17,    35,    15,    16,    17,    15,    35,    34,
      15,    16,    17,    15,    29,    30,    15,    16,    17,    39,
      35,    15,    16,    17,    35,    29,    30,   196,   197,   149,
      35,    31,    32,   264,     4,    10,    35,    12,    13,    14,
      15,    35,    28,   274,   275,    22,    23,    24,    25,    26,
      27,   103,    16,    17,   106,   107,     6,     7,     8,     9,
       6,     7,     8,    16,    17,    33,    29,    30,    29,    31,
      32,    16,    17,    16,    17,    29,    30,    16,    17,    31,
      32,    16,    17,    31,    32,    29,    30,    16,    17,    16,
      17,    46,    47,   204,   205,    37,   147,   148,   276,   277,
     233,   234,    38,    40,    16,    39,    34,    16,     5,   278,
      36,    36,    34,    36,    38,    36,   285,    36,    36,    33,
      40,    38,    35,    28,    35,    35,    28,    35,    15,    15,
      37,    37,    36,    28,    16,    36,    36,    40,    29,    38,
      18,    39,    16,    39,    36,    39,    16,   153,    33,    42,
      39,    41,    -1,    36,    11,    39,    36,    38,    37,    36,
      36,    36,    16,    36,    -1,    37,    34,    38,    34,    38,
      37,    36,    36,    36,    36,    36,    16,     8,    36,    34,
      39,    41,    38,    36,    36,    36,    36,    33,    36,    33,
      39,    38,    11,    36,    36,    36,    34,    36,    -1,    -1,
      -1,    89,    39,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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
      54,    55,    62,    15,    15,    42,    67,    68,    89,    16,
      35,    18,    56,    74,    18,    42,    57,    37,    22,    23,
      24,    25,    26,    27,    73,    69,    29,    30,    80,    73,
      36,    19,    20,    73,    73,    29,    30,    31,    32,    28,
      64,    36,    36,    40,    38,    29,    39,    39,    39,    16,
      18,    16,    17,    16,    17,    36,    42,    33,    69,    69,
      15,    16,    17,    35,    77,    78,    79,    18,    42,    72,
      77,    80,    80,    81,    81,    74,    41,    39,    39,    67,
      16,    38,    36,    36,    36,    36,    59,    60,    37,    29,
      30,    77,    29,    30,    31,    32,    15,    16,    17,    35,
      86,    87,    88,    36,    48,    48,    16,    16,    17,    16,
      17,    36,    77,    77,    78,    78,    37,    29,    30,    86,
      65,    29,    30,    31,    32,    38,    34,    34,    38,    36,
      36,    36,    36,    16,    16,    17,    16,    17,    36,    41,
      86,    86,    87,    87,    39,    11,    38,    36,    36,    36,
      36,    15,    16,    17,    35,    83,    84,    85,    61,    37,
      29,    30,    83,    36,    29,    30,    31,    32,    33,    16,
      16,    17,    16,    17,    36,    33,    83,    83,    84,    84,
      48,    38,    36,    36,    36,    36,    48,    34,    34,    39,
      39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    47,    47,
      48,    48,    49,    49,    50,    51,    51,    51,    51,    51,
      52,    52,    52,    52,    52,    53,    53,    53,    54,    54,
      55,    55,    56,    57,    57,    59,    58,    60,    61,    58,
      62,    64,    65,    63,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    69,    70,    70,    70,    70,    70,    71,
      71,    72,    72,    73,    73,    73,    73,    73,    73,    74,
      74,    74,    75,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    77,    77,    78,    78,    78,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    80,
      80,    80,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    84,    84,    84,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    86,    87,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    12,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     3,     6,     1,     1,     4,     3,     6,     9,
       1,     1,     1,     1,     1,     4,     4,     4,     1,     1,
       4,     7,     1,     1,     1,     0,     9,     0,     0,    14,
       3,     0,     0,    14,     5,     5,     1,     3,     1,     1,
       1,     2,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     1,     1,     1,     4,     4,
       4,     4,     3,     4,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       3,     3,     1,     3,     3,     1,     1,     1,     4,     4,
       4,     4,     3,     4,     1,     3,     3,     1,     3,     3,
       1,     1,     1,     4,     4,     4,     4,     3,     4,     1,
       3,     3,     1,     3,     3,     1,     1,     1,     4,     4,
       4,     4,     3,     4,     1
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
#line 87 "syntaxic.y"
            {strcpy(sauvType,"INTEGER");}
#line 1392 "syntaxic.tab.c"
    break;

  case 4: /* type: FLOAT  */
#line 88 "syntaxic.y"
            {strcpy(sauvType,"FLOAT");}
#line 1398 "syntaxic.tab.c"
    break;

  case 5: /* type: CHAR  */
#line 89 "syntaxic.y"
            {strcpy(sauvType,"CHAR");}
#line 1404 "syntaxic.tab.c"
    break;

  case 12: /* declaration: type variable_list SEMICOLON  */
#line 112 "syntaxic.y"
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
#line 1419 "syntaxic.tab.c"
    break;

  case 13: /* declaration: CONST type cst EQUALS term SEMICOLON  */
#line 122 "syntaxic.y"
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
#line 1441 "syntaxic.tab.c"
    break;

  case 14: /* cst: IDENTIFIER  */
#line 142 "syntaxic.y"
              {
        strcpy(saveIdf[0].idfTab,(yyvsp[0].string));
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType((yyvsp[0].string)));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[0].idfTab,nb_ligne);
            
            
    }
#line 1455 "syntaxic.tab.c"
    break;

  case 15: /* variable_list: IDENTIFIER  */
#line 155 "syntaxic.y"
               {strcpy(saveIdf[j].idfTab,(yyvsp[0].string));j++;}
#line 1461 "syntaxic.tab.c"
    break;

  case 16: /* variable_list: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 156 "syntaxic.y"
                                             {strcpy(saveIdf[j].idfTab,(yyvsp[-3].string));j++;
        if (atoi((yyvsp[-1].string)) == 0) {
            printf("Erreur semantique : La taille du tableau doit etre strictement positive\n");
        } 
        sprintf(buffer1, "%d", atoi((yyvsp[-1].string))-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[-3].string),"","");
        }
#line 1474 "syntaxic.tab.c"
    break;

  case 17: /* variable_list: IDENTIFIER COMMA variable_list  */
#line 164 "syntaxic.y"
                                      {strcpy(saveIdf[j].idfTab,(yyvsp[-2].string));j++;}
#line 1480 "syntaxic.tab.c"
    break;

  case 18: /* variable_list: IDENTIFIER LBRACKET INT_NUMBER RBRACKET COMMA variable_list  */
#line 165 "syntaxic.y"
                                                                   {strcpy(saveIdf[j].idfTab,(yyvsp[-5].string));j++;}
#line 1486 "syntaxic.tab.c"
    break;

  case 19: /* variable_list: IDENTIFIER LBRACKET LPAREN PLUS INT_NUMBER RPAREN RBRACKET COMMA variable_list  */
#line 166 "syntaxic.y"
                                                                                      {strcpy(saveIdf[j].idfTab,(yyvsp[-8].string));j++;}
#line 1492 "syntaxic.tab.c"
    break;

  case 25: /* assignment: MDROIT EQUALS term SEMICOLON  */
#line 188 "syntaxic.y"
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

        insererVal(temp, saveStr);
    }
#line 1513 "syntaxic.tab.c"
    break;

  case 28: /* MDROIT: IDENTIFIER  */
#line 209 "syntaxic.y"
               {
    // Vérification de la déclaration de la variable avant usage
    if (verifdeclaration((yyvsp[0].string)) == 0) {
        printf("Erreur sémantique : La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
    } else {
        strcpy(typeG, getType((yyvsp[0].string)));  // Récupérer le type de la variable à gauche
        printf("type: %s", typeG);
        if (comparCode((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique à la ligne %d : affectation d'une constante\n", nb_ligne);
        } else {
            strcpy(mDroit, (yyvsp[0].string));
            strcpy(temp, (yyvsp[0].string));
        }
    }
    }
#line 1533 "syntaxic.tab.c"
    break;

  case 30: /* TAB: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 227 "syntaxic.y"
                                              {if(verifdeclaration((yyvsp[-3].string))==0 )
                    {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",(yyvsp[-3].string),nb_ligne);}
                    else {
                        strcpy(typeG, getType((yyvsp[-3].string)));
                            }
                    strcpy(temp,(yyvsp[-3].string));
                    strcpy(mDroit,(yyvsp[-3].string));
                    strcat(mDroit,"[");
                    sprintf(buffer2,"%d",atoi((yyvsp[-1].string)));
                    strcat(mDroit,buffer2);
                    strcat(mDroit,"]");
        }
#line 1550 "syntaxic.tab.c"
    break;

  case 31: /* TAB: IDENTIFIER LBRACKET LPAREN PLUS INT_NUMBER RPAREN RBRACKET  */
#line 240 "syntaxic.y"
                                                                 {
                if(verifdeclaration((yyvsp[-6].string))==0 )
                  {printf("Erreur semantique a la ligne %d :Tableau %s non declare\n",(yyvsp[-6].string),nb_ligne);}
                  else {
                     strcpy(typeG, getType((yyvsp[-6].string)));
                        }
                  }
#line 1562 "syntaxic.tab.c"
    break;

  case 32: /* EXPRESSION_CHAR: CHARACTERE  */
#line 249 "syntaxic.y"
                            {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[0].string));}
                           }
#line 1571 "syntaxic.tab.c"
    break;

  case 33: /* EXPRESSION_CHAINE: CHARACTERE  */
#line 255 "syntaxic.y"
                        {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[0].string));}
                           }
#line 1580 "syntaxic.tab.c"
    break;

  case 34: /* EXPRESSION_CHAINE: STRING_LITERAL  */
#line 259 "syntaxic.y"
                             {if(strcmp(typeG,"CHAR")!=0)   
                                 {printf("Erreur semantique a la ligne %d:type incompatible\n",nb_ligne);}
                            else {insererVal(mDroit,(yyvsp[0].string));}
                           }
#line 1589 "syntaxic.tab.c"
    break;

  case 35: /* $@1: %empty  */
#line 268 "syntaxic.y"
                                 {
        // Génération du quadruplet pour le saut conditionnel
        char* temp = newtemp();
        empiler_Int(&pile_if, qc);
        createQuad("BZ", temp, "", "");
    }
#line 1600 "syntaxic.tab.c"
    break;

  case 36: /* condition: IF LPAREN COND RPAREN LBRACE $@1 instruction_section RBRACE SEMICOLON  */
#line 273 "syntaxic.y"
                                         {
        // Mise à jour du quadruplet de saut
        int sauv = atoi(depiler(&pile_if));
        sprintf(QuadR[sauv].opd1, "%d", qc);
    }
#line 1610 "syntaxic.tab.c"
    break;

  case 37: /* $@2: %empty  */
#line 278 "syntaxic.y"
                                   {
        // Premier saut conditionnel
        char* temp = newtemp();
        empiler_Int(&pile_if, qc);
        createQuad("BZ", temp, "", "");
    }
#line 1621 "syntaxic.tab.c"
    break;

  case 38: /* $@3: %empty  */
#line 283 "syntaxic.y"
                                    {
        // Saut pour éviter le else
        empiler_Int(&pile_if, qc);
        createQuad("BR", "", "", "");
        
        // Mise à jour du premier saut
        int sauv = atoi(depiler(&pile_if));
        sprintf(QuadR[sauv].opd1, "%d", qc);
    }
#line 1635 "syntaxic.tab.c"
    break;

  case 39: /* condition: IF LPAREN COND RPAREN LBRACE $@2 instruction_section RBRACE ELSE $@3 LBRACE instruction_section RBRACE SEMICOLON  */
#line 291 "syntaxic.y"
                                                  {
        // Mise à jour du saut du else
        int sauv = atoi(depiler(&pile_if));
        sprintf(QuadR[sauv].opd1, "%d", qc);
    }
#line 1645 "syntaxic.tab.c"
    break;

  case 40: /* assignment_int: MDROIT EQUALS term  */
#line 298 "syntaxic.y"
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
#line 1661 "syntaxic.tab.c"
    break;

  case 41: /* $@4: %empty  */
#line 312 "syntaxic.y"
                             {
        // Sauvegarde du début de la boucle
        empiler_Int(&pile_for, qc);
    }
#line 1670 "syntaxic.tab.c"
    break;

  case 42: /* $@5: %empty  */
#line 315 "syntaxic.y"
                   {
        // Génération du quadruplet de test
        char* temp = newtemp();
        empiler_Int(&pile_for, qc);
        createQuad("BZ", temp, "", "");
    }
#line 1681 "syntaxic.tab.c"
    break;

  case 43: /* loop: FOR LPAREN assignment_int $@4 COLON term3 $@5 COLON term4 RPAREN LBRACE instruction_section RBRACE SEMICOLON  */
#line 320 "syntaxic.y"
                                                                   {
        if(strcmp(typeD,"INTEGER")!=0 || strcmp(typeG,"INTEGER")!=0)
        {
            printf("Erreur semantique parametre boucle type incompatible \n");
        }
        // Génération du saut de retour
        int debut = atoi(depiler(&pile_for));
        createQuad("BR", ToSTR(debut), "", "");
        
        // Mise à jour du quadruplet de test
        int sauv = atoi(depiler(&pile_for));
        sprintf(QuadR[sauv].opd1, "%d", qc);
    }
#line 1699 "syntaxic.tab.c"
    break;

  case 44: /* io_statement: READ LPAREN IDENTIFIER RPAREN SEMICOLON  */
#line 337 "syntaxic.y"
                                           {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[-2].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[-2].string));
        }
    }
#line 1710 "syntaxic.tab.c"
    break;

  case 48: /* io_expr: IDENTIFIER  */
#line 354 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }
    }
#line 1721 "syntaxic.tab.c"
    break;

  case 51: /* COND: NOT COND  */
#line 366 "syntaxic.y"
               {
        char* temp = newtemp();
        createQuadL(1, (yyvsp[0].string), "", temp);
        (yyval.string) = temp;    
    }
#line 1731 "syntaxic.tab.c"
    break;

  case 52: /* COND: comparison_expr AND COND  */
#line 371 "syntaxic.y"
                              {
        char* temp = newtemp();
        createQuadL(3, (yyvsp[-2].string), (yyvsp[0].string), temp);
        (yyval.string) = temp;
    }
#line 1741 "syntaxic.tab.c"
    break;

  case 53: /* COND: comparison_expr OR COND  */
#line 376 "syntaxic.y"
                              {
        char* temp = newtemp();
        createQuadL(2, (yyvsp[-2].string), (yyvsp[0].string), temp);
        (yyval.string) = temp;
    }
#line 1751 "syntaxic.tab.c"
    break;

  case 54: /* comparison_expr: term2 OP_COMP term1  */
#line 385 "syntaxic.y"
                        { (yyval.string) = newtemp(); 
    sprintf(buffer1, "%f", (yyvsp[-2].real));
    sprintf(buffer2, "%f", (yyvsp[0].real));
    createQuad((yyvsp[-1].string),buffer1, buffer2, (yyval.string)); }
#line 1760 "syntaxic.tab.c"
    break;

  case 55: /* comparison_expr: STRING_LITERAL OP_COMP STRING_LITERAL  */
#line 389 "syntaxic.y"
                                          { (yyval.string) = newtemp(); 
    sprintf(buffer1, "%f", (yyvsp[-2].string));
    sprintf(buffer2, "%f", (yyvsp[0].string));
    createQuad((yyvsp[-1].string),buffer1, buffer2, (yyval.string)); }
#line 1769 "syntaxic.tab.c"
    break;

  case 56: /* comparison_expr: CHARACTERE OP_COMP CHARACTERE  */
#line 393 "syntaxic.y"
                                   { (yyval.string) = newtemp(); 
    sprintf(buffer1, "%f", (yyvsp[-2].string));
    sprintf(buffer2, "%f", (yyvsp[0].string));
    createQuad((yyvsp[-1].string),buffer1, buffer2, (yyval.string));  }
#line 1778 "syntaxic.tab.c"
    break;

  case 57: /* comparison_expr: DROIT OP_COMP term1  */
#line 397 "syntaxic.y"
                         {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);}
#line 1784 "syntaxic.tab.c"
    break;

  case 58: /* comparison_expr: term2 OP_COMP GAUCHE  */
#line 398 "syntaxic.y"
                          {printf("Erreur semantique a la ligne %d:type incompatible \n",nb_ligne);}
#line 1790 "syntaxic.tab.c"
    break;

  case 70: /* term: factor PLUS term  */
#line 420 "syntaxic.y"
                       {
        sprintf(buffer1, "%f", (yyvsp[-2].real));
        sprintf(buffer2, "%f", (yyvsp[0].real));
        char* temp = newtemp();  // Génère un identifiant temporaire
        float t=(yyvsp[-2].real)+(yyvsp[0].real);
        sprintf(temp,"%f",t);
        createQuad("+", buffer1, buffer2, temp);
        (yyval.real)=atof(temp);
        
    }
#line 1805 "syntaxic.tab.c"
    break;

  case 71: /* term: factor MINUS term  */
#line 430 "syntaxic.y"
                        {
        sprintf(buffer1, "%f", (yyvsp[-2].real));
        sprintf(buffer2, "%f", (yyvsp[0].real));
        char* temp = newtemp();  // Génère un identifiant temporaire
        float t=(yyvsp[-2].real)-(yyvsp[0].real);
        sprintf(temp,"%f",t);
        createQuad("-", buffer1, buffer2, temp);
        (yyval.real)=atof(temp);
     
    }
#line 1820 "syntaxic.tab.c"
    break;

  case 73: /* factor: primary MULTIPLY factor  */
#line 445 "syntaxic.y"
                              {
        sprintf(buffer1, "%f", (yyvsp[-2].real));
        sprintf(buffer2, "%f", (yyvsp[0].real));
        char* temp = newtemp();  // Génère un identifiant temporaire
        float t=(yyvsp[-2].real)*(yyvsp[0].real);
        sprintf(temp,"%f",t);
        createQuad("*", buffer1, buffer2, temp);
        (yyval.real)=atof(temp);
    }
#line 1834 "syntaxic.tab.c"
    break;

  case 74: /* factor: primary DIVIDE factor  */
#line 454 "syntaxic.y"
                                { if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                               sprintf(buffer1, "%f", (yyvsp[-2].real));
                                                sprintf(buffer2, "%f", (yyvsp[0].real));
                                                char* temp = newtemp();  // Génère un identifiant temporaire
                                                float t=(yyvsp[-2].real)/(yyvsp[0].real);
                                                sprintf(temp,"%f",t);
                                                createQuad("/", buffer1, buffer2, temp);
                                                (yyval.real)=atof(temp);
                                             }
                            }
#line 1850 "syntaxic.tab.c"
    break;

  case 75: /* primary: IDENTIFIER  */
#line 469 "syntaxic.y"
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
#line 1867 "syntaxic.tab.c"
    break;

  case 76: /* primary: INT_NUMBER  */
#line 481 "syntaxic.y"
                 {
        printf("here %s\n",typeG);
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
                  
    }
#line 1878 "syntaxic.tab.c"
    break;

  case 77: /* primary: FLOAT_NUMBER  */
#line 487 "syntaxic.y"
                  {        printf("here 2 %s\n",typeG);

                    if(strcmp(typeG,"FLOAT")!=0) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); }  
                   }
#line 1890 "syntaxic.tab.c"
    break;

  case 78: /* primary: LPAREN PLUS INT_NUMBER RPAREN  */
#line 494 "syntaxic.y"
                                  {
        if(strcmp(typeG,"INTEGER")!=0) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));}
    }
#line 1900 "syntaxic.tab.c"
    break;

  case 79: /* primary: LPAREN MINUS INT_NUMBER RPAREN  */
#line 499 "syntaxic.y"
                                   {
        if(strcmp(typeG,"INTEGER")!=0) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);}
    }
#line 1912 "syntaxic.tab.c"
    break;

  case 80: /* primary: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 506 "syntaxic.y"
                                      {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
                                      else{(yyval.real)=atof((yyvsp[-1].string));}
                   }
#line 1921 "syntaxic.tab.c"
    break;

  case 81: /* primary: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 510 "syntaxic.y"
                                       {
        if(strcmp(typeG,"FLOAT")!=0) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                       }
    }
#line 1934 "syntaxic.tab.c"
    break;

  case 82: /* primary: LPAREN term RPAREN  */
#line 518 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-1].real);}
#line 1940 "syntaxic.tab.c"
    break;

  case 83: /* primary: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 519 "syntaxic.y"
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                }
#line 1952 "syntaxic.tab.c"
    break;

  case 85: /* term1: factor1 PLUS term1  */
#line 530 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-2].real)+(yyvsp[0].real);}
#line 1958 "syntaxic.tab.c"
    break;

  case 86: /* term1: factor1 MINUS term1  */
#line 531 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-2].real)-(yyvsp[0].real);}
#line 1964 "syntaxic.tab.c"
    break;

  case 88: /* factor1: primary1 MULTIPLY factor1  */
#line 537 "syntaxic.y"
                                {(yyval.real)=(yyvsp[-2].real)*(yyvsp[0].real);}
#line 1970 "syntaxic.tab.c"
    break;

  case 89: /* factor1: primary1 DIVIDE factor1  */
#line 538 "syntaxic.y"
                                  { if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[-2].real) / (yyvsp[0].real);  
                                             }
                            }
#line 1980 "syntaxic.tab.c"
    break;

  case 90: /* primary1: IDENTIFIER  */
#line 547 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)) );
                             if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0) ) {printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);}
                                strcpy(valIdf,getVal((yyvsp[0].string)));
                                 if(strcmp(valIdf,"") == 0){printf("erreur semantique a la ligne %d : variable %s non initialisee\n",nb_ligne,(yyvsp[0].string));}
                                 else
                                  (yyval.real)=atof(valIdf);
                             }
    }
#line 1997 "syntaxic.tab.c"
    break;

  case 91: /* primary1: INT_NUMBER  */
#line 559 "syntaxic.y"
                 {
        printf("here %s\n",typeG);
        strcpy(typeD,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 2\n",nb_ligne);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
                  
    }
#line 2009 "syntaxic.tab.c"
    break;

  case 92: /* primary1: FLOAT_NUMBER  */
#line 566 "syntaxic.y"
                  {        printf("here 2 %s\n",typeG);
                    strcpy(typeD,"FLOAT");
                    if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                   {printf("Erreur semantique a la ligne %d:type incompatible 3\n",nb_ligne);}
                   else{
                   (yyval.real)=atof((yyvsp[0].string)); }  
                   }
#line 2021 "syntaxic.tab.c"
    break;

  case 93: /* primary1: LPAREN PLUS INT_NUMBER RPAREN  */
#line 573 "syntaxic.y"
                                  {
        strcpy(typeD,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
        {printf("Erreur semantique a la ligne %d :type incompatible 4\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));}
    }
#line 2032 "syntaxic.tab.c"
    break;

  case 94: /* primary1: LPAREN MINUS INT_NUMBER RPAREN  */
#line 579 "syntaxic.y"
                                   {
        strcpy(typeD,"INTEGER");
        if(strcmp(typeG,"INTEGER")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 5\n",nb_ligne);}
                else{sprintf(saveStr,"%d",(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);}
    }
#line 2045 "syntaxic.tab.c"
    break;

  case 95: /* primary1: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 587 "syntaxic.y"
                                      {
        strcpy(typeD,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
            {printf("Erreur semantique a la ligne %d:type incompatible 6\n",nb_ligne);}
        else{(yyval.real)=atof((yyvsp[-1].string));}
                   }
#line 2056 "syntaxic.tab.c"
    break;

  case 96: /* primary1: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 593 "syntaxic.y"
                                       {
        strcpy(typeD,"FLOAT");
        if(strcmp(typeG,"FLOAT")!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) 
                                      {printf("Erreur semantique a la ligne %d:type incompatible 7\n",nb_ligne);}
                                       else{
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                       }
    }
#line 2070 "syntaxic.tab.c"
    break;

  case 97: /* primary1: LPAREN term1 RPAREN  */
#line 602 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2076 "syntaxic.tab.c"
    break;

  case 98: /* primary1: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 603 "syntaxic.y"
                                             {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0 && !(strcmp(typeD,"FLOAT")==0 && strcmp(typeG,"INTEGER")==0) && !(strcmp(typeG,"FLOAT")==0 && strcmp(typeD,"INTEGER")==0)) {printf("Erreur semantique a la ligne %d:type incompatible 8\n",nb_ligne);}
                                 }
                }
#line 2088 "syntaxic.tab.c"
    break;

  case 100: /* term2: factor2 PLUS term2  */
#line 613 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-2].real)+(yyvsp[0].real);}
#line 2094 "syntaxic.tab.c"
    break;

  case 101: /* term2: factor2 MINUS term2  */
#line 614 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-2].real)-(yyvsp[0].real);}
#line 2100 "syntaxic.tab.c"
    break;

  case 103: /* factor2: primary2 MULTIPLY factor2  */
#line 620 "syntaxic.y"
                                {(yyval.real)=(yyvsp[-2].real)*(yyvsp[0].real);}
#line 2106 "syntaxic.tab.c"
    break;

  case 104: /* factor2: primary2 DIVIDE factor2  */
#line 621 "syntaxic.y"
                                  { if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[-2].real) / (yyvsp[0].real);  
                                             }
                            }
#line 2116 "syntaxic.tab.c"
    break;

  case 105: /* primary2: IDENTIFIER  */
#line 630 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)));}
    }
#line 2127 "syntaxic.tab.c"
    break;

  case 106: /* primary2: INT_NUMBER  */
#line 636 "syntaxic.y"
                 {
        strcpy(typeD,"INTEGER");
                  
    }
#line 2136 "syntaxic.tab.c"
    break;

  case 107: /* primary2: FLOAT_NUMBER  */
#line 640 "syntaxic.y"
                  {
        strcpy(typeD,"FLOAT");
    }
#line 2144 "syntaxic.tab.c"
    break;

  case 108: /* primary2: LPAREN PLUS INT_NUMBER RPAREN  */
#line 643 "syntaxic.y"
                                  {
        strcpy(typeD,"INTEGER");
    }
#line 2152 "syntaxic.tab.c"
    break;

  case 109: /* primary2: LPAREN MINUS INT_NUMBER RPAREN  */
#line 646 "syntaxic.y"
                                   {
        strcpy(typeD,"INTEGER");
    }
#line 2160 "syntaxic.tab.c"
    break;

  case 110: /* primary2: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 649 "syntaxic.y"
                                      {
        strcmp(typeD,"FLOAT");
                   }
#line 2168 "syntaxic.tab.c"
    break;

  case 111: /* primary2: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 652 "syntaxic.y"
                                       {
        strcpy(typeD,"FLOAT");
    }
#line 2176 "syntaxic.tab.c"
    break;

  case 112: /* primary2: LPAREN term2 RPAREN  */
#line 655 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2182 "syntaxic.tab.c"
    break;

  case 113: /* primary2: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 656 "syntaxic.y"
                                             {
        if(verifdeclaration((yyvsp[-3].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
        else {
                strcpy(typeG,getType((yyvsp[-3].string)));
                }
    }
#line 2194 "syntaxic.tab.c"
    break;

  case 115: /* term4: factor4 PLUS term4  */
#line 667 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-2].real)+(yyvsp[0].real);}
#line 2200 "syntaxic.tab.c"
    break;

  case 116: /* term4: factor4 MINUS term4  */
#line 668 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-2].real)-(yyvsp[0].real);}
#line 2206 "syntaxic.tab.c"
    break;

  case 118: /* factor4: primary4 MULTIPLY factor4  */
#line 674 "syntaxic.y"
                                {(yyval.real)=(yyvsp[-2].real)*(yyvsp[0].real);}
#line 2212 "syntaxic.tab.c"
    break;

  case 119: /* factor4: primary4 DIVIDE factor4  */
#line 675 "syntaxic.y"
                                  { if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[-2].real) / (yyvsp[0].real);  
                                             }
                            }
#line 2222 "syntaxic.tab.c"
    break;

  case 120: /* primary4: IDENTIFIER  */
#line 684 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeD,getType((yyvsp[0].string)));}
    }
#line 2233 "syntaxic.tab.c"
    break;

  case 121: /* primary4: INT_NUMBER  */
#line 690 "syntaxic.y"
                 {
        strcpy(typeD,"INTEGER");
                  
    }
#line 2242 "syntaxic.tab.c"
    break;

  case 122: /* primary4: FLOAT_NUMBER  */
#line 694 "syntaxic.y"
                  {
        strcpy(typeD,"FLOAT");
    }
#line 2250 "syntaxic.tab.c"
    break;

  case 123: /* primary4: LPAREN PLUS INT_NUMBER RPAREN  */
#line 697 "syntaxic.y"
                                  {
        strcpy(typeD,"INTEGER");
    }
#line 2258 "syntaxic.tab.c"
    break;

  case 124: /* primary4: LPAREN MINUS INT_NUMBER RPAREN  */
#line 700 "syntaxic.y"
                                   {
        strcpy(typeD,"INTEGER");
    }
#line 2266 "syntaxic.tab.c"
    break;

  case 125: /* primary4: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 703 "syntaxic.y"
                                      {
        strcmp(typeD,"FLOAT");
                   }
#line 2274 "syntaxic.tab.c"
    break;

  case 126: /* primary4: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 706 "syntaxic.y"
                                       {
        strcpy(typeD,"FLOAT");
    }
#line 2282 "syntaxic.tab.c"
    break;

  case 127: /* primary4: LPAREN term4 RPAREN  */
#line 709 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2288 "syntaxic.tab.c"
    break;

  case 128: /* primary4: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 710 "syntaxic.y"
                                             {
        if(verifdeclaration((yyvsp[-3].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
        else {
                strcpy(typeD,getType((yyvsp[-3].string)));
                }
    }
#line 2300 "syntaxic.tab.c"
    break;

  case 130: /* term3: factor3 PLUS term3  */
#line 720 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-2].real)+(yyvsp[0].real);}
#line 2306 "syntaxic.tab.c"
    break;

  case 131: /* term3: factor3 MINUS term3  */
#line 721 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-2].real)-(yyvsp[0].real);}
#line 2312 "syntaxic.tab.c"
    break;

  case 133: /* factor3: primary3 MULTIPLY factor3  */
#line 727 "syntaxic.y"
                                {(yyval.real)=(yyvsp[-2].real)*(yyvsp[0].real);}
#line 2318 "syntaxic.tab.c"
    break;

  case 134: /* factor3: primary3 DIVIDE factor3  */
#line 728 "syntaxic.y"
                                  { if((yyvsp[0].real)==0) printf("Erreur semantique a la ligne %d :division sur 0\n",nb_ligne);
                                              else{   
                                                (yyval.real)= (yyvsp[-2].real) / (yyvsp[0].real);  
                                             }
                            }
#line 2328 "syntaxic.tab.c"
    break;

  case 135: /* primary3: IDENTIFIER  */
#line 737 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", (yyvsp[0].string));
        }else {strcpy(typeG,getType((yyvsp[0].string)));}
    }
#line 2339 "syntaxic.tab.c"
    break;

  case 136: /* primary3: INT_NUMBER  */
#line 743 "syntaxic.y"
                 {
        strcpy(typeG,"INTEGER");
                  
    }
#line 2348 "syntaxic.tab.c"
    break;

  case 137: /* primary3: FLOAT_NUMBER  */
#line 747 "syntaxic.y"
                  {
        strcpy(typeG,"FLOAT");
    }
#line 2356 "syntaxic.tab.c"
    break;

  case 138: /* primary3: LPAREN PLUS INT_NUMBER RPAREN  */
#line 750 "syntaxic.y"
                                  {
        strcpy(typeG,"INTEGER");
    }
#line 2364 "syntaxic.tab.c"
    break;

  case 139: /* primary3: LPAREN MINUS INT_NUMBER RPAREN  */
#line 753 "syntaxic.y"
                                   {
        strcpy(typeG,"INTEGER");
    }
#line 2372 "syntaxic.tab.c"
    break;

  case 140: /* primary3: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 756 "syntaxic.y"
                                      {
        strcmp(typeG,"FLOAT");
                   }
#line 2380 "syntaxic.tab.c"
    break;

  case 141: /* primary3: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 759 "syntaxic.y"
                                       {
        strcpy(typeG,"FLOAT");
    }
#line 2388 "syntaxic.tab.c"
    break;

  case 142: /* primary3: LPAREN term3 RPAREN  */
#line 762 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 2394 "syntaxic.tab.c"
    break;

  case 143: /* primary3: IDENTIFIER LBRACKET INT_NUMBER RBRACKET  */
#line 763 "syntaxic.y"
                                             {
        if(verifdeclaration((yyvsp[-3].string))==0 ){
            printf("Erreur semantique :Tableau %s non declaree a la ligne %d\n",(yyvsp[-3].string),nb_ligne);}
        else {
                strcpy(typeG,getType((yyvsp[-3].string)));
                }
    }
#line 2406 "syntaxic.tab.c"
    break;


#line 2410 "syntaxic.tab.c"

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

#line 776 "syntaxic.y"


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

