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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VAR_GLOBAL = 258,              /* VAR_GLOBAL  */
    DECLARATION = 259,             /* DECLARATION  */
    INSTRUCTION = 260,             /* INSTRUCTION  */
    INTEGER = 261,                 /* INTEGER  */
    FLOAT = 262,                   /* FLOAT  */
    CHAR = 263,                    /* CHAR  */
    CONST = 264,                   /* CONST  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    FOR = 267,                     /* FOR  */
    READ = 268,                    /* READ  */
    WRITE = 269,                   /* WRITE  */
    IDENTIFIER = 270,              /* IDENTIFIER  */
    INT_NUMBER = 271,              /* INT_NUMBER  */
    FLOAT_NUMBER = 272,            /* FLOAT_NUMBER  */
    CHARACTERE = 273,              /* CHARACTERE  */
    AND = 274,                     /* AND  */
    OR = 275,                      /* OR  */
    NOT = 276,                     /* NOT  */
    EQ = 277,                      /* EQ  */
    NEQ = 278,                     /* NEQ  */
    GEQ = 279,                     /* GEQ  */
    LT = 280,                      /* LT  */
    LEQ = 281,                     /* LEQ  */
    GT = 282,                      /* GT  */
    EQUALS = 283,                  /* EQUALS  */
    PLUS = 284,                    /* PLUS  */
    MINUS = 285,                   /* MINUS  */
    MULTIPLY = 286,                /* MULTIPLY  */
    DIVIDE = 287,                  /* DIVIDE  */
    LBRACE = 288,                  /* LBRACE  */
    RBRACE = 289,                  /* RBRACE  */
    LPAREN = 290,                  /* LPAREN  */
    RPAREN = 291,                  /* RPAREN  */
    LBRACKET = 292,                /* LBRACKET  */
    RBRACKET = 293,                /* RBRACKET  */
    SEMICOLON = 294,               /* SEMICOLON  */
    COMMA = 295,                   /* COMMA  */
    COLON = 296,                   /* COLON  */
    STRING_LITERAL = 297           /* STRING_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 48 "syntaxic.y"

    int entier;
    float real;
    char character;
    char* string;

#line 214 "syntaxic.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



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
#define YYLAST   439

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  185
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  362

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
       0,   100,   100,   103,   106,   109,   112,   115,   118,   121,
     129,   130,   131,   136,   137,   138,   145,   146,   147,   153,
     154,   160,   171,   196,   209,   211,   217,   218,   225,   226,
     227,   228,   229,   230,   231,   232,   237,   250,   262,   267,
     276,   304,   334,   335,   354,   375,   376,   394,   418,   441,
     447,   454,   460,   470,   478,   487,   488,   515,   517,   521,
     529,   557,   557,   565,   565,   570,   574,   588,   599,   609,
     621,   626,   621,   649,   661,   695,   700,   701,   706,   712,
     713,   717,   729,   733,   745,   750,   760,   761,   767,   779,
     790,   801,   812,   823,   835,   853,   869,   891,   894,   899,
     902,   907,   908,   909,   910,   911,   912,   918,   919,   938,
     959,   960,   978,  1002,  1018,  1027,  1037,  1047,  1060,  1069,
    1081,  1082,  1103,  1104,  1123,  1144,  1145,  1163,  1187,  1207,
    1217,  1228,  1238,  1251,  1260,  1272,  1273,  1294,  1295,  1314,
    1335,  1336,  1354,  1378,  1390,  1397,  1402,  1409,  1418,  1424,
    1431,  1432,  1449,  1450,  1469,  1490,  1491,  1509,  1533,  1550,
    1558,  1567,  1576,  1588,  1598,  1609,  1610,  1629,  1632,  1636,
    1637,  1656,  1677,  1678,  1696,  1720,  1737,  1744,  1752,  1760,
    1771,  1780,  1790,  1791,  1810,  1813
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

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,   -19,    16,    23,  -176,  -176,  -176,  -176,   319,    45,
      32,    28,    31,    57,    44,    39,  -176,    82,   152,  -176,
      63,    27,   120,    32,    71,  -176,    43,   119,   122,   100,
     109,  -176,  -176,  -176,    83,  -176,    51,   117,  -176,  -176,
      37,   133,  -176,  -176,   188,    -3,   141,  -176,   144,   137,
     152,   120,   263,   312,   218,   120,   120,   143,   120,   120,
     180,   157,   120,   314,   316,   262,    43,    43,    43,    43,
      41,   165,  -176,    81,   166,   177,   179,   186,  -176,   117,
     117,    32,  -176,  -176,   175,   224,   146,   199,   214,   216,
     227,  -176,   141,   141,  -176,  -176,   196,   205,   241,   253,
     233,  -176,   240,   309,   256,   250,   269,   268,   270,   281,
      53,  -176,  -176,  -176,  -176,  -176,  -176,    93,   266,  -176,
    -176,  -176,  -176,  -176,   105,   296,   333,    -4,   120,  -176,
    -176,  -176,   136,   136,  -176,  -176,  -176,  -176,   337,  -176,
     354,   182,   325,  -176,  -176,  -176,   105,    67,  -176,     4,
     376,  -176,  -176,   291,   260,   303,  -176,   323,   368,   356,
     300,   233,  -176,  -176,   362,   359,   171,  -176,  -176,  -176,
      -3,  -176,    -3,  -176,  -176,  -176,   366,   120,  -176,   322,
     324,     5,   235,   105,   369,   105,  -176,  -176,  -176,  -176,
    -176,  -176,   151,   211,   211,   211,   211,   211,   211,   221,
     221,    -5,   221,   221,   136,   136,   164,  -176,   120,  -176,
      -4,  -176,  -176,   213,   365,   367,   370,   371,  -176,  -176,
     376,  -176,  -176,   372,  -176,  -176,  -176,   195,  -176,  -176,
     313,   315,  -176,   313,   313,   313,   313,   313,   313,   204,
     303,   303,  -176,  -176,  -176,  -176,    -3,  -176,    -3,   373,
    -176,  -176,  -176,    99,  -176,   320,   321,  -176,   215,  -176,
    -176,  -176,  -176,  -176,  -176,   309,   120,   328,   338,   264,
     211,   211,   211,   211,   272,   120,   340,   342,   274,   164,
     164,   363,   164,   164,   375,   374,   237,   377,   378,   379,
     380,  -176,   315,   315,  -176,  -176,   239,   381,   382,   383,
     384,  -176,   321,   321,   172,  -176,  -176,  -176,   394,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,   385,
    -176,  -176,  -176,   115,  -176,   331,   332,  -176,   388,  -176,
     120,   349,   351,   276,   172,   172,   387,   172,   172,  -176,
     243,   389,   390,   391,   392,  -176,   332,   332,   396,  -176,
    -176,   309,  -176,  -176,  -176,  -176,  -176,   309,   397,   398,
    -176,  -176
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    10,    11,    12,     0,     0,
       0,     0,    15,     0,     0,    24,    21,     0,    13,    23,
       0,     0,     0,     0,     0,    14,     0,     0,     0,    18,
      48,    49,    50,    57,     0,    58,     0,    42,    45,    26,
       0,   113,   114,   115,     0,    22,   107,   110,     0,     0,
      16,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,    55,    43,
      44,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,   120,   108,   109,   111,   112,     0,     0,     0,     0,
      40,     3,     0,    19,    32,     0,     0,    33,    34,    35,
       0,    56,    51,    53,    52,    54,    27,     0,     0,   121,
     116,   118,   117,   119,     0,     0,     0,     0,     0,     4,
      20,    28,     0,     0,    29,    30,    31,     5,     0,     7,
       0,     0,   143,   144,   145,    97,     0,     0,    98,     0,
      82,    84,    86,     0,     0,   137,   140,     0,     0,     0,
       0,    78,    79,    80,     0,    76,     0,    59,    60,    39,
      36,    38,    37,     6,     8,     9,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   103,   102,
     104,   101,     0,   105,   106,   103,   102,   104,   101,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    75,
       0,    41,     2,     0,     0,     0,     0,     0,    87,   150,
      81,    61,    83,   128,   129,   130,    99,     0,   100,    96,
      94,   122,   125,    90,    93,    91,    89,    92,    88,     0,
     138,   139,    95,   141,   142,    69,    66,    68,    67,   175,
     176,   177,   185,     0,   184,    70,   169,   172,     0,    77,
     151,   146,   148,   147,   149,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,   123,   124,   126,   127,     0,     0,     0,     0,
       0,   182,   170,   171,     0,   173,   174,    74,    65,   136,
     131,   133,   132,   134,   183,   178,   180,   179,   181,   158,
     159,   160,   168,     0,   167,    71,   152,   155,     0,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,     0,     0,     0,     0,   165,   153,   154,     0,   156,
     157,     0,   166,   161,   163,   162,   164,     0,     0,     0,
      64,    72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,   404,    -8,   393,  -102,    29,  -176,   -17,  -176,
    -176,   299,  -120,   -34,   317,   311,  -131,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,   220,  -176,   287,   252,
    -137,  -176,  -176,   236,   283,   -40,   308,   310,  -175,   106,
     108,  -144,   183,   184,   116,    50,    52,   185,   112,   111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    10,    11,    28,   102,    12,    20,    16,   103,
     104,   105,   106,    36,    37,    38,   169,   107,   265,   329,
     351,   159,   108,   281,   336,   109,   164,   165,   149,   150,
     151,   152,   153,   229,   201,    45,    46,    47,   230,   231,
     232,   154,   155,   156,   325,   326,   327,   255,   256,   257
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,   130,   171,   182,    65,   158,    39,   163,   138,   178,
      25,   161,     1,   226,     3,   140,     4,    73,   233,   234,
     235,   236,   237,   238,   183,   183,    66,    67,    86,     5,
       6,     7,     8,     5,     6,     7,     8,   228,   162,   176,
     184,   218,    72,     5,     6,     7,     8,    15,   222,    14,
      29,    96,   269,    97,    98,    99,   100,     9,    41,    42,
      43,    27,    17,    96,   116,    97,    98,    99,   100,    29,
      18,    60,    19,   245,   247,   101,    22,    21,    44,    23,
      55,    56,   142,   143,   144,   145,    24,   137,   146,    57,
     163,    26,   170,   172,   166,   274,   179,   180,    30,    31,
      32,    33,   147,    96,    40,    97,    98,    99,   100,   148,
      55,    56,    52,    53,   249,   250,   251,   252,    34,   111,
     142,   143,   144,   145,    48,    35,   146,   139,   276,   277,
     319,   320,   321,   322,   253,    30,    31,    32,    33,    50,
     147,   254,    71,   213,   331,   332,    51,   148,    58,    59,
     323,    41,    42,    43,   167,    34,    49,   324,     5,     6,
       7,     8,    35,   285,   246,   248,   223,   224,   225,   226,
      62,    44,    68,    69,   258,    55,    56,    70,   168,   249,
     250,   251,   252,    81,   119,    84,   227,   319,   320,   321,
     322,    85,    96,   228,    97,    98,    99,   100,   110,   253,
      55,    56,   112,    41,    42,    43,   254,   323,   117,   211,
     223,   224,   225,   113,   324,   114,   175,    63,    64,   142,
     143,   144,   115,    44,   267,   268,   223,   224,   225,   118,
     227,   124,   286,   179,   180,   120,   142,   143,   144,   239,
     125,   296,    55,    56,    55,    56,   227,    55,    56,   358,
     121,   260,   122,   284,    78,   359,   239,   193,   194,   195,
     196,   197,   198,   123,   199,   200,    55,    56,    55,    56,
     128,   219,    55,    56,   129,   309,   126,   314,   132,    74,
      75,   352,   193,   194,   195,   196,   197,   198,   127,   199,
     200,    66,    67,   270,   271,   131,   340,   133,    91,   141,
     291,   199,   200,   279,   280,   334,   335,   134,   219,   135,
     301,   100,   345,   186,   187,   188,   189,   190,   191,    96,
     136,    97,    98,    99,   100,     5,     6,     7,    76,    77,
      87,    88,    89,    90,   202,   203,   207,   208,   214,   215,
     216,   217,   270,   271,   287,   288,   272,   273,   160,   279,
     280,   204,   282,   283,   289,   290,   297,   298,   299,   300,
     334,   335,   177,   337,   338,   341,   342,   343,   344,    82,
      83,   173,    79,    80,    92,    93,   292,   293,    94,    95,
     294,   295,   240,   241,   346,   347,   243,   244,   174,   349,
     350,   302,   303,   305,   306,   185,   205,   206,   209,   210,
     212,   261,   221,   262,   304,   328,   263,   264,   308,   266,
     275,   307,    13,   310,   311,   312,   313,   315,   316,   317,
     318,   339,   330,   348,   157,   353,   354,   355,   356,   357,
     259,   360,   361,    61,   181,   220,   192,   242,   278,   333
};

static const yytype_int16 yycheck[] =
{
      34,   103,   133,   147,    44,   125,    23,   127,   110,   146,
      18,    15,     3,    18,    33,   117,     0,    51,   193,   194,
     195,   196,   197,   198,    20,    20,    29,    30,    62,     6,
       7,     8,     9,     6,     7,     8,     9,    42,    42,   141,
      36,    36,    50,     6,     7,     8,     9,    15,   185,     4,
      21,    10,   227,    12,    13,    14,    15,    34,    15,    16,
      17,    34,    34,    10,    81,    12,    13,    14,    15,    40,
      39,    34,    15,   204,   205,    34,    37,    33,    35,    40,
      29,    30,    15,    16,    17,    18,     4,    34,    21,    38,
     210,    28,   132,   133,   128,   239,    29,    30,    15,    16,
      17,    18,    35,    10,    33,    12,    13,    14,    15,    42,
      29,    30,    29,    30,    15,    16,    17,    18,    35,    38,
      15,    16,    17,    18,     5,    42,    21,    34,    29,    30,
      15,    16,    17,    18,    35,    15,    16,    17,    18,    39,
      35,    42,     5,   177,    29,    30,    37,    42,    31,    32,
      35,    15,    16,    17,    18,    35,    34,    42,     6,     7,
       8,     9,    42,   265,   204,   205,    15,    16,    17,    18,
      37,    35,    31,    32,   208,    29,    30,    33,    42,    15,
      16,    17,    18,    40,    38,     5,    35,    15,    16,    17,
      18,    34,    10,    42,    12,    13,    14,    15,    33,    35,
      29,    30,    36,    15,    16,    17,    42,    35,    33,    38,
      15,    16,    17,    36,    42,    36,    34,    29,    30,    15,
      16,    17,    36,    35,    29,    30,    15,    16,    17,     5,
      35,    35,   266,    29,    30,    36,    15,    16,    17,    35,
      35,   275,    29,    30,    29,    30,    35,    29,    30,   351,
      36,    38,    36,    38,    36,   357,    35,    22,    23,    24,
      25,    26,    27,    36,    29,    30,    29,    30,    29,    30,
      37,    36,    29,    30,    34,    38,    35,    38,    28,    16,
      17,    38,    22,    23,    24,    25,    26,    27,    35,    29,
      30,    29,    30,    29,    30,    39,   330,    28,    36,    33,
      36,    29,    30,    29,    30,    29,    30,    39,    36,    39,
      36,    15,    36,    22,    23,    24,    25,    26,    27,    10,
      39,    12,    13,    14,    15,     6,     7,     8,    16,    17,
      16,    17,    16,    17,    31,    32,    36,    37,    16,    17,
      16,    17,    29,    30,    16,    17,    31,    32,    15,    29,
      30,    28,    31,    32,    16,    17,    16,    17,    16,    17,
      29,    30,    37,    31,    32,    16,    17,    16,    17,    58,
      59,    34,    55,    56,    66,    67,   270,   271,    68,    69,
     272,   273,   199,   200,   334,   335,   202,   203,    34,   337,
     338,   279,   280,   282,   283,    19,    28,    41,    36,    40,
      34,    36,    33,    36,    41,    11,    36,    36,    34,    37,
      37,    36,     8,    36,    36,    36,    36,    36,    36,    36,
      36,    33,    37,    36,   125,    36,    36,    36,    36,    33,
     210,    34,    34,    40,   147,   183,   153,   201,   253,   323
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    44,    33,     0,     6,     7,     8,     9,    34,
      45,    46,    49,    45,     4,    15,    51,    34,    39,    15,
      50,    33,    37,    40,     4,    46,    28,    34,    47,    49,
      15,    16,    17,    18,    35,    42,    56,    57,    58,    51,
      33,    15,    16,    17,    35,    78,    79,    80,     5,    34,
      39,    37,    29,    30,    56,    29,    30,    38,    31,    32,
      34,    47,    37,    29,    30,    78,    29,    30,    31,    32,
      33,     5,    46,    56,    16,    17,    16,    17,    36,    57,
      57,    40,    58,    58,     5,    34,    56,    16,    17,    16,
      17,    36,    79,    79,    80,    80,    10,    12,    13,    14,
      15,    34,    48,    52,    53,    54,    55,    60,    65,    68,
      33,    38,    36,    36,    36,    36,    51,    33,     5,    38,
      36,    36,    36,    36,    35,    35,    35,    35,    37,    34,
      48,    39,    28,    28,    39,    39,    39,    34,    48,    34,
      48,    33,    15,    16,    17,    18,    21,    35,    42,    71,
      72,    73,    74,    75,    84,    85,    86,    54,    55,    64,
      15,    15,    42,    55,    69,    70,    56,    18,    42,    59,
      78,    59,    78,    34,    34,    34,    48,    37,    73,    29,
      30,    71,    84,    20,    36,    19,    22,    23,    24,    25,
      26,    27,    77,    22,    23,    24,    25,    26,    27,    29,
      30,    77,    31,    32,    28,    28,    41,    36,    37,    36,
      40,    38,    34,    56,    16,    17,    16,    17,    36,    36,
      72,    33,    73,    15,    16,    17,    18,    35,    42,    76,
      81,    82,    83,    81,    81,    81,    81,    81,    81,    35,
      85,    85,    76,    86,    86,    59,    78,    59,    78,    15,
      16,    17,    18,    35,    42,    90,    91,    92,    56,    69,
      38,    36,    36,    36,    36,    61,    37,    29,    30,    81,
      29,    30,    31,    32,    84,    37,    29,    30,    90,    29,
      30,    66,    31,    32,    38,    48,    56,    16,    17,    16,
      17,    36,    82,    82,    83,    83,    56,    16,    17,    16,
      17,    36,    91,    91,    41,    92,    92,    36,    34,    38,
      36,    36,    36,    36,    38,    36,    36,    36,    36,    15,
      16,    17,    18,    35,    42,    87,    88,    89,    11,    62,
      37,    29,    30,    87,    29,    30,    67,    31,    32,    33,
      56,    16,    17,    16,    17,    36,    88,    88,    36,    89,
      89,    63,    38,    36,    36,    36,    36,    33,    48,    48,
      34,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    44,    44,    44,    44,    44,    44,
      45,    45,    45,    46,    46,    46,    47,    47,    47,    48,
      48,    49,    49,    50,    51,    51,    51,    51,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    53,    53,
      54,    55,    56,    56,    56,    57,    57,    57,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    61,    60,    63,    62,    62,    64,    64,    64,    64,
      66,    67,    65,    68,    68,    68,    69,    69,    70,    70,
      70,    71,    71,    72,    72,    73,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    75,    76,
      76,    77,    77,    77,    77,    77,    77,    78,    78,    78,
      79,    79,    79,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    81,    81,    82,    82,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    84,
      85,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    87,    87,    87,    88,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      90,    90,    91,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    12,     9,    10,    10,    11,    10,    11,    11,
       1,     1,     1,     2,     3,     1,     2,     3,     1,     1,
       2,     2,     5,     1,     1,     4,     3,     6,     2,     2,
       2,     2,     1,     1,     1,     1,     3,     3,     3,     3,
       1,     4,     1,     3,     3,     1,     3,     3,     1,     1,
       1,     4,     4,     4,     4,     3,     4,     1,     1,     1,
       1,     0,     9,     0,     5,     0,     3,     3,     3,     3,
       0,     0,    13,     4,     7,     4,     1,     3,     1,     1,
       1,     3,     1,     3,     1,     2,     1,     3,     3,     3,
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
  case 10: /* type: INTEGER  */
#line 129 "syntaxic.y"
            {strcpy(sauvType,"INTEGER");}
#line 1545 "syntaxic.tab.c"
    break;

  case 11: /* type: FLOAT  */
#line 130 "syntaxic.y"
            {strcpy(sauvType,"FLOAT");}
#line 1551 "syntaxic.tab.c"
    break;

  case 12: /* type: CHAR  */
#line 131 "syntaxic.y"
            {strcpy(sauvType,"CHAR");}
#line 1557 "syntaxic.tab.c"
    break;

  case 15: /* global_var_section: declaration  */
#line 138 "syntaxic.y"
                 {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d apres declaration",nb_ligne,colPrd);exit(0);}
#line 1563 "syntaxic.tab.c"
    break;

  case 18: /* declaration_section: declaration  */
#line 147 "syntaxic.y"
                 {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d apres declaration",nb_ligne,colPrd);exit(0);}
#line 1569 "syntaxic.tab.c"
    break;

  case 21: /* declaration: type variable_list  */
#line 160 "syntaxic.y"
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
#line 1585 "syntaxic.tab.c"
    break;

  case 22: /* declaration: CONST type cst EQUALS term  */
#line 171 "syntaxic.y"
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
#line 1612 "syntaxic.tab.c"
    break;

  case 23: /* cst: IDENTIFIER  */
#line 196 "syntaxic.y"
              {
        strcpy(saveIdf[0].idfTab,(yyvsp[0].string));
        
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) {insererType(sauvType,saveIdf[0].idfTab);strcpy(typeG,getType((yyvsp[0].string)));}
            else printf("Erreur semantique :double declaration de %s a la ligne %d colonne %d \n",saveIdf[0].idfTab,nb_ligne,col);
            
            
    }
#line 1626 "syntaxic.tab.c"
    break;

  case 24: /* variable_list: IDENTIFIER  */
#line 209 "syntaxic.y"
               {strcpy(saveIdf[j].idfTab,(yyvsp[0].string));j++;}
#line 1632 "syntaxic.tab.c"
    break;

  case 25: /* variable_list: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 211 "syntaxic.y"
                                          {strcpy(saveIdf[j].idfTab,(yyvsp[-3].string));modifierCode("IDF TAB",saveIdf[j].idfTab);j++;

        sprintf(buffer1, "T%d", cpttemp-1);
        createQuad("BOUNDS", "0", buffer1,"");
        createQuad("ADEC",(yyvsp[-3].string),"","");
        }
#line 1643 "syntaxic.tab.c"
    break;

  case 26: /* variable_list: IDENTIFIER COMMA variable_list  */
#line 217 "syntaxic.y"
                                      {strcpy(saveIdf[j].idfTab,(yyvsp[-2].string));j++;}
#line 1649 "syntaxic.tab.c"
    break;

  case 32: /* statement: assignment  */
#line 229 "syntaxic.y"
                {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d (';' apres chaque instruction)",nb_ligne,colPrd);exit(0);}
#line 1655 "syntaxic.tab.c"
    break;

  case 33: /* statement: condition  */
#line 230 "syntaxic.y"
                {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d (';' apres chaque instruction)",nb_ligne,colPrd);exit(0);}
#line 1661 "syntaxic.tab.c"
    break;

  case 34: /* statement: loop  */
#line 231 "syntaxic.y"
           {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d (';' apres chaque instruction)",nb_ligne,colPrd);exit(0);}
#line 1667 "syntaxic.tab.c"
    break;

  case 35: /* statement: io_statement  */
#line 232 "syntaxic.y"
                   {printf("erreur syntaxic: il manque ';' dans la linge %d colonne %d (';' apres chaque instruction)",nb_ligne,colPrd);exit(0);}
#line 1673 "syntaxic.tab.c"
    break;

  case 36: /* assignment: MDROIT EQUALS term  */
#line 237 "syntaxic.y"
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
#line 1691 "syntaxic.tab.c"
    break;

  case 37: /* assignment: TAB EQUALS term  */
#line 250 "syntaxic.y"
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
#line 1708 "syntaxic.tab.c"
    break;

  case 38: /* assignment: TAB EQUALS EXPRESSION_CHAR  */
#line 262 "syntaxic.y"
                                {
        createQuad("=", saveStrq, "",tmp);

        insererVal(mDroit, saveStr);
    }
#line 1718 "syntaxic.tab.c"
    break;

  case 39: /* assignment: MDROIT EQUALS EXPRESSION_CHAR  */
#line 267 "syntaxic.y"
                                   {
        
        createQuad("=", saveStrq, "",mDroit);

        insererVal(mDroit, saveStr);
    }
#line 1729 "syntaxic.tab.c"
    break;

  case 40: /* MDROIT: IDENTIFIER  */
#line 276 "syntaxic.y"
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
#line 1760 "syntaxic.tab.c"
    break;

  case 41: /* TAB: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 304 "syntaxic.y"
                                           {
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
#line 1791 "syntaxic.tab.c"
    break;

  case 43: /* termtab: termtab PLUS factortab  */
#line 335 "syntaxic.y"
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
#line 1815 "syntaxic.tab.c"
    break;

  case 44: /* termtab: termtab MINUS factortab  */
#line 354 "syntaxic.y"
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
#line 1837 "syntaxic.tab.c"
    break;

  case 46: /* factortab: factortab MULTIPLY primarytab  */
#line 376 "syntaxic.y"
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
#line 1860 "syntaxic.tab.c"
    break;

  case 47: /* factortab: factortab DIVIDE primarytab  */
#line 394 "syntaxic.y"
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
#line 1885 "syntaxic.tab.c"
    break;

  case 48: /* primarytab: IDENTIFIER  */
#line 418 "syntaxic.y"
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
#line 1913 "syntaxic.tab.c"
    break;

  case 49: /* primarytab: INT_NUMBER  */
#line 441 "syntaxic.y"
                 {
                  (yyval.real)=atof((yyvsp[0].string));
                  strcpy(buffer1,(yyvsp[0].string));
                  empiler(&pile3,buffer1);
                  
    }
#line 1924 "syntaxic.tab.c"
    break;

  case 50: /* primarytab: FLOAT_NUMBER  */
#line 447 "syntaxic.y"
                  {
        printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
        printf("l'indice/taille de tableau ne peut pas etre FLOAT\n",typeD,typeG); exit(0);
                   (yyval.real)=atof((yyvsp[0].string)); 
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
#line 1936 "syntaxic.tab.c"
    break;

  case 51: /* primarytab: LPAREN PLUS INT_NUMBER RPAREN  */
#line 454 "syntaxic.y"
                                  {
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        
    }
#line 1947 "syntaxic.tab.c"
    break;

  case 52: /* primarytab: LPAREN MINUS INT_NUMBER RPAREN  */
#line 460 "syntaxic.y"
                                   {
        printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
        printf("l'indice/taille de tableau ne peut pas etre NEGATIVE\n",typeD,typeG); exit(0);
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    }
#line 1962 "syntaxic.tab.c"
    break;

  case 53: /* primarytab: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 470 "syntaxic.y"
                                      {
                                   printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                         printf("l'indice/taille de tableau ne peut pas etre FLOAT\n",typeD,typeG); exit(0); 
                                    (yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      
                   }
#line 1975 "syntaxic.tab.c"
    break;

  case 54: /* primarytab: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 478 "syntaxic.y"
                                       {
        printf("Erreur semantique a la ligne %d:type incompatible 1\n",nb_ligne);
                                                         printf("l'indice/taille de tableau ne peut pas etre FLOAT\n",typeD,typeG); exit(0);
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    }
#line 1989 "syntaxic.tab.c"
    break;

  case 55: /* primarytab: LPAREN termtab RPAREN  */
#line 487 "syntaxic.y"
                            {(yyval.real)=(yyvsp[-1].real);}
#line 1995 "syntaxic.tab.c"
    break;

  case 56: /* primarytab: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 488 "syntaxic.y"
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
#line 2027 "syntaxic.tab.c"
    break;

  case 57: /* primarytab: CHARACTERE  */
#line 515 "syntaxic.y"
                    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible\n",nb_ligne,col);
                                 printf("l'indice/taille ne peut pas etre CHAR\n"); exit(0);}
#line 2034 "syntaxic.tab.c"
    break;

  case 58: /* primarytab: STRING_LITERAL  */
#line 517 "syntaxic.y"
                       {printf("Erreur semantique a la ligne %d colonne %d :type incompatible\n",nb_ligne,col);
                                 printf("l'indice/taille ne peut pas etre STRING\n"); exit(0);}
#line 2041 "syntaxic.tab.c"
    break;

  case 59: /* EXPRESSION_CHAR: CHARACTERE  */
#line 521 "syntaxic.y"
                            {if(strcmp(typeG,"CHAR")!=0)   
                                {printf("Erreur semantique a la ligne %d colonne %d :type incompatible\n",nb_ligne,col);
                                 printf("tentative d'affecter CHAR a un %s\n",typeG); exit(0);
                                }
                            else {insererVal(mDroit,(yyvsp[0].string));}
                            strcpy(saveStrq,(yyvsp[0].string));
                            sprintf(saveStr, "%s",(yyvsp[0].string)); 
                           }
#line 2054 "syntaxic.tab.c"
    break;

  case 60: /* EXPRESSION_CHAR: STRING_LITERAL  */
#line 529 "syntaxic.y"
                                {   
                                 printf("Erreur semantique a la ligne %d colonne %d:type incompatible\n",nb_ligne,col);
                                 if(strcmp(typeG,"CHAR")==0) {printf("On ne peut pas affecter STRING a CHAR(on doit le faire caractere par caratere dans un tableaux)\n");exit(0);}
                                 else{printf("tentative d'affecter STRING a un %s\n",typeG); exit(0);}
                                 
                            
                            }
#line 2066 "syntaxic.tab.c"
    break;

  case 61: /* $@1: %empty  */
#line 557 "syntaxic.y"
                                   {
          createQuad("BZ","",QuadR[qc-1].res,"");
          empiler_Int(&pile1,qc-1);
        }
#line 2075 "syntaxic.tab.c"
    break;

  case 62: /* condition: IF LPAREN COND RPAREN LBRACE $@1 instruction_section RBRACE elsebloc  */
#line 561 "syntaxic.y"
                                            {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        }
#line 2083 "syntaxic.tab.c"
    break;

  case 63: /* $@2: %empty  */
#line 565 "syntaxic.y"
                      {
        QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
        empiler_Int(&pile1,qc);
        createQuad("BR","","","");
        }
#line 2093 "syntaxic.tab.c"
    break;

  case 66: /* assignment_int: MDROIT EQUALS term  */
#line 574 "syntaxic.y"
                       {
        
        // Si c'est compatible, on sauvegarde la valeur dans la table des symboles
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }else{
            //sprintf(saveStr, "%d", (int)$3); 
            createQuad("=", saveStrq, "",mDroit);
            empiler(&pile4,mDroit);
          //  insererVal(mDroit, saveStr);
        
        }
    }
#line 2112 "syntaxic.tab.c"
    break;

  case 67: /* assignment_int: TAB EQUALS term  */
#line 588 "syntaxic.y"
                      {
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d colonne %d:type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }
        // Génération du quadruplet d'affectation
        createQuad("=", saveStrq, "",tmp);
        empiler(&pile4,tmp);

        insererVal(mDroit, saveStr);
    }
#line 2128 "syntaxic.tab.c"
    break;

  case 68: /* assignment_int: TAB EQUALS EXPRESSION_CHAR  */
#line 599 "syntaxic.y"
                                {
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }
        createQuad("=", saveStrq, "",tmp);
        empiler(&pile4,tmp);

        insererVal(mDroit, saveStr);
    }
#line 2143 "syntaxic.tab.c"
    break;

  case 69: /* assignment_int: MDROIT EQUALS EXPRESSION_CHAR  */
#line 609 "syntaxic.y"
                                   {
        if (strcmp(typeG, "INTEGER") != 0) {
            printf("Erreur semantique a la la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("Parametre de boucle doit etre un entier"); exit(0);
        }
        createQuad("=", saveStrq, "",mDroit);
        empiler(&pile4,mDroit);
        insererVal(mDroit, saveStr);
    }
#line 2157 "syntaxic.tab.c"
    break;

  case 70: /* $@3: %empty  */
#line 621 "syntaxic.y"
                                          {
        valDepile = depiler(&pile3); 
        strcpy(pasfor, valDepile); 
        //$$ = atoi($6); // Capturer le pas
    }
#line 2167 "syntaxic.tab.c"
    break;

  case 71: /* $@4: %empty  */
#line 626 "syntaxic.y"
                {
        //char *cond_var = atoi($7); // Capturer la condition d'arrêt
        valDepile = depiler(&pile3); 
        strcpy(brnsup, valDepile); 
        empiler_Int(&pile1, qc);
        empiler_Int(&pile2, qc);
        valDepile = depiler(&pile4); 
        strcpy(mDroit, valDepile);
        createQuad("BG", "", mDroit, brnsup); 
        strcpy(cptfor,mDroit);
    }
#line 2183 "syntaxic.tab.c"
    break;

  case 72: /* loop: FOR LPAREN assignment_int COLON term3 $@3 COLON term4 $@4 RPAREN LBRACE instruction_section RBRACE  */
#line 637 "syntaxic.y"
                                              {
        temp = newtemp(); 
        sprintf(temp,"T%d",cpttemp);    
        cpttemp++;    
        createQuad("+", cptfor, pasfor, temp); 
        createQuad("=", temp, "", cptfor); 
        createQuad("BR", ToSTR(atoi(depiler(&pile1))), "", "");
        QuadR[atoi(depiler(&pile2))].opd1=ToSTR(qc);
    }
#line 2197 "syntaxic.tab.c"
    break;

  case 73: /* io_statement: READ LPAREN IDENTIFIER RPAREN  */
#line 649 "syntaxic.y"
                                  {
        // Vérification de la déclaration de la variable avant usage dans READ
       if (verifdeclaration((yyvsp[-1].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col,(yyvsp[-1].string)); exit(0);
        }
        if(strcmp(getType((yyvsp[-1].string)),"INTEGER")==0){
            insererVal((yyvsp[-1].string),"1");
        }
        else if(strcmp(getType((yyvsp[-1].string)),"FLOAT")==0){
            insererVal((yyvsp[-1].string),"1.0");
        }
    }
#line 2214 "syntaxic.tab.c"
    break;

  case 74: /* io_statement: READ LPAREN IDENTIFIER LBRACKET termtab RBRACKET RPAREN  */
#line 662 "syntaxic.y"
        {
                    if(verifdeclaration((yyvsp[-4].string))==0 )
                    {printf("Erreur semantique a la ligne %d colonne %d :Tableau %s non declare\n",nb_ligne,col,(yyvsp[-4].string));
                     exit(0);}
                    else if(strcmp(getCode((yyvsp[-4].string)),"IDF")==0){
                        printf("Erreur semantique la ligne %d colonne %d: La variable '%s' est n'est pasm un tableau.\n",nb_ligne,col, (yyvsp[-4].string));
                         exit(0);
                        strcpy(typeG, getType((yyvsp[-4].string)));
                            }
                            else{
                        strcpy(typeG, getType((yyvsp[-4].string)));

                    }  
                    
                    
                        strcpy(mDroit,(yyvsp[-4].string));
                        temp=newtemp();
                        strcpy(temp,(yyvsp[-4].string));
                        strcpy(tmp,(yyvsp[-4].string));
                        strcat(tmp,"[");
                        valDepile = depiler(&pile3); 
                        strcpy(buffer2, valDepile); 
                        strcat(tmp,buffer2);
                        strcat(tmp,"]");
                        if(strcmp(getType((yyvsp[-4].string)),"INTEGER")==0){
                        insererVal((yyvsp[-4].string),"1");
                        }
                        else if(strcmp(getType((yyvsp[-4].string)),"FLOAT")==0){
                            insererVal((yyvsp[-4].string),"1.0");
                        }
                       
                    }
#line 2251 "syntaxic.tab.c"
    break;

  case 78: /* io_expr: IDENTIFIER  */
#line 706 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }
    }
#line 2262 "syntaxic.tab.c"
    break;

  case 81: /* COND: COND OR AND_EXPR  */
#line 718 "syntaxic.y"
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
#line 2278 "syntaxic.tab.c"
    break;

  case 83: /* AND_EXPR: AND_EXPR AND NOT_EXPR  */
#line 734 "syntaxic.y"
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
#line 2294 "syntaxic.tab.c"
    break;

  case 85: /* NOT_EXPR: NOT NOT_EXPR  */
#line 751 "syntaxic.y"
    {
        temp = newtemp();
        sprintf(temp, "T%d", cpttemp);
        valDepile = depiler(&pile3); 
        strcpy(valcond1, valDepile); 
        createQuadL(1, valcond1, "", temp);
        empiler(&pile3,temp);
        cpttemp++;
    }
#line 2308 "syntaxic.tab.c"
    break;

  case 87: /* NOT_EXPR: LPAREN COND RPAREN  */
#line 761 "syntaxic.y"
                        { (yyval.string) = (yyvsp[-1].string); }
#line 2314 "syntaxic.tab.c"
    break;

  case 88: /* comparison_expr: term2 GT term1  */
#line 768 "syntaxic.y"
    {
        temp=newtemp();
         sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(6,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    }
#line 2330 "syntaxic.tab.c"
    break;

  case 89: /* comparison_expr: term2 LT term1  */
#line 779 "syntaxic.y"
                    {
        temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(5,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    }
#line 2346 "syntaxic.tab.c"
    break;

  case 90: /* comparison_expr: term2 EQ term1  */
#line 790 "syntaxic.y"
                   {
        temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(1,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    }
#line 2362 "syntaxic.tab.c"
    break;

  case 91: /* comparison_expr: term2 GEQ term1  */
#line 801 "syntaxic.y"
                    {
       temp=newtemp();
       sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(3,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    }
#line 2378 "syntaxic.tab.c"
    break;

  case 92: /* comparison_expr: term2 LEQ term1  */
#line 812 "syntaxic.y"
                    {
        temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(4,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    }
#line 2394 "syntaxic.tab.c"
    break;

  case 93: /* comparison_expr: term2 NEQ term1  */
#line 823 "syntaxic.y"
                    {
        temp=newtemp();
        sprintf(temp,"T%d",cpttemp);
         cpttemp++;
         valDepile = depiler(&pile3); 
        strcpy(buffer2, valDepile); 
        valDepile = depiler(&pile3); 
        strcpy(buffer1, valDepile);
        createQuadA(2,buffer1,buffer2,temp);
        empiler(&pile3,temp);
    }
#line 2410 "syntaxic.tab.c"
    break;

  case 94: /* comparison_expr: DROIT OP_COMP term1  */
#line 835 "syntaxic.y"
                          {
            if(strcmp(typeD,typeG)!=0){
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("on ne peut pas comparer %s avec %s\n",typeG,typeD); exit(0);
        }
        else{
            temp=newtemp();
            sprintf(temp,"T%d",cpttemp);
            cpttemp++;
            valDepile = depiler(&pile3); 
            strcpy(buffer2, valDepile); 
            valDepile = depiler(&pile3); 
            strcpy(buffer1, valDepile);
            createQuadA(nb_op,buffer1,buffer2,temp);
            empiler(&pile3,temp);
        }
        
    }
#line 2433 "syntaxic.tab.c"
    break;

  case 95: /* comparison_expr: term2 OP_COMP GAUCHE  */
#line 853 "syntaxic.y"
                           {if(strcmp(typeD,typeG)!=0){
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("on ne peut pas comparer %s avec %s\n",typeG,typeD); exit(0);
        }
        else{
            temp=newtemp();
            sprintf(temp,"T%d",cpttemp);
            cpttemp++;
            valDepile = depiler(&pile3); 
            strcpy(buffer2, valDepile); 
            valDepile = depiler(&pile3); 
            strcpy(buffer1, valDepile);
            createQuadA(nb_op,buffer1,buffer2,temp);
            empiler(&pile3,temp);
        }
                            }
#line 2454 "syntaxic.tab.c"
    break;

  case 96: /* comparison_expr: DROIT OP_COMP GAUCHE  */
#line 869 "syntaxic.y"
                          {
        if(strcmp(typeD,typeG)!=0){
            printf("Erreur semantique a la ligne %d colonne %d :type incompatible \n",nb_ligne,col);
            printf("on ne peut pas comparer %s avec %s\n",typeG,typeD); exit(0);
        }
        else{
            temp=newtemp();
            sprintf(temp,"T%d",cpttemp);
            cpttemp++;
            valDepile = depiler(&pile3); 
            strcpy(buffer2, valDepile); 
            valDepile = depiler(&pile3); 
            strcpy(buffer1, valDepile);
            createQuadA(nb_op,buffer1,buffer2,temp);
            empiler(&pile3,temp);
        }
    }
#line 2476 "syntaxic.tab.c"
    break;

  case 97: /* DROIT: CHARACTERE  */
#line 891 "syntaxic.y"
              {strcpy(typeG,"CHAR");
    empiler(&pile3,(yyvsp[0].string));
    }
#line 2484 "syntaxic.tab.c"
    break;

  case 98: /* DROIT: STRING_LITERAL  */
#line 894 "syntaxic.y"
                   {strcpy(typeG,"STRING");
    empiler(&pile3,(yyvsp[0].string));
    }
#line 2492 "syntaxic.tab.c"
    break;

  case 99: /* GAUCHE: CHARACTERE  */
#line 899 "syntaxic.y"
             {strcpy(typeD,"CHAR");
   empiler(&pile3,(yyvsp[0].string));
   }
#line 2500 "syntaxic.tab.c"
    break;

  case 100: /* GAUCHE: STRING_LITERAL  */
#line 902 "syntaxic.y"
                   {strcpy(typeD,"STRING");
    empiler(&pile3,(yyvsp[0].string));
    }
#line 2508 "syntaxic.tab.c"
    break;

  case 101: /* OP_COMP: GT  */
#line 907 "syntaxic.y"
        {nb_op=6;}
#line 2514 "syntaxic.tab.c"
    break;

  case 102: /* OP_COMP: LT  */
#line 908 "syntaxic.y"
        {nb_op=5;}
#line 2520 "syntaxic.tab.c"
    break;

  case 103: /* OP_COMP: GEQ  */
#line 909 "syntaxic.y"
          {nb_op=3;}
#line 2526 "syntaxic.tab.c"
    break;

  case 104: /* OP_COMP: LEQ  */
#line 910 "syntaxic.y"
          {nb_op=4;}
#line 2532 "syntaxic.tab.c"
    break;

  case 105: /* OP_COMP: EQ  */
#line 911 "syntaxic.y"
        {nb_op=1;}
#line 2538 "syntaxic.tab.c"
    break;

  case 106: /* OP_COMP: NEQ  */
#line 912 "syntaxic.y"
         {nb_op=2;}
#line 2544 "syntaxic.tab.c"
    break;

  case 108: /* term: term PLUS factor  */
#line 919 "syntaxic.y"
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
#line 2568 "syntaxic.tab.c"
    break;

  case 109: /* term: term MINUS factor  */
#line 938 "syntaxic.y"
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
#line 2590 "syntaxic.tab.c"
    break;

  case 111: /* factor: factor MULTIPLY primary  */
#line 960 "syntaxic.y"
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
#line 2613 "syntaxic.tab.c"
    break;

  case 112: /* factor: factor DIVIDE primary  */
#line 978 "syntaxic.y"
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
#line 2638 "syntaxic.tab.c"
    break;

  case 113: /* primary: IDENTIFIER  */
#line 1002 "syntaxic.y"
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
#line 2659 "syntaxic.tab.c"
    break;

  case 114: /* primary: INT_NUMBER  */
#line 1018 "syntaxic.y"
                 {
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 2\n",nb_ligne,col);
                                        printf("tentative d'affecter INTEGER a un %s\n",typeG); exit(0);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
                  strcpy(saveStrq,(yyvsp[0].string));
                  strcpy(buffer1,(yyvsp[0].string));
                  empiler(&pile3,buffer1);
                  
    }
#line 2673 "syntaxic.tab.c"
    break;

  case 115: /* primary: FLOAT_NUMBER  */
#line 1027 "syntaxic.y"
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
#line 2688 "syntaxic.tab.c"
    break;

  case 116: /* primary: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1037 "syntaxic.y"
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
#line 2703 "syntaxic.tab.c"
    break;

  case 117: /* primary: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1047 "syntaxic.y"
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
#line 2721 "syntaxic.tab.c"
    break;

  case 118: /* primary: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1060 "syntaxic.y"
                                      {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 6\n",nb_ligne,col);
                                    printf("tentative d'affecter FLOAT a un %s\n",typeG); exit(0);}
                                      else{(yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(saveStrq,(yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      }
                   }
#line 2735 "syntaxic.tab.c"
    break;

  case 119: /* primary: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1069 "syntaxic.y"
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
#line 2752 "syntaxic.tab.c"
    break;

  case 120: /* primary: LPAREN term RPAREN  */
#line 1081 "syntaxic.y"
                         {(yyval.real)=(yyvsp[-1].real);}
#line 2758 "syntaxic.tab.c"
    break;

  case 121: /* primary: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 1082 "syntaxic.y"
                                          {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d \n",(yyvsp[-3].string),nb_ligne,col); exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 8\n",nb_ligne,col);
                                                                printf("tentative d'affecter %s a un %s\n",typeD,typeG); exit(0);}     
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
                                 
                }
#line 2781 "syntaxic.tab.c"
    break;

  case 123: /* term1: term1 PLUS factor1  */
#line 1104 "syntaxic.y"
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
#line 2805 "syntaxic.tab.c"
    break;

  case 124: /* term1: term1 MINUS factor1  */
#line 1123 "syntaxic.y"
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
#line 2827 "syntaxic.tab.c"
    break;

  case 126: /* factor1: factor1 MULTIPLY primary1  */
#line 1145 "syntaxic.y"
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
#line 2850 "syntaxic.tab.c"
    break;

  case 127: /* factor1: factor1 DIVIDE primary1  */
#line 1163 "syntaxic.y"
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
#line 2875 "syntaxic.tab.c"
    break;

  case 128: /* primary1: IDENTIFIER  */
#line 1187 "syntaxic.y"
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
#line 2900 "syntaxic.tab.c"
    break;

  case 129: /* primary1: INT_NUMBER  */
#line 1207 "syntaxic.y"
                 {
       
        if(strcmp(typeG,"INTEGER")!=0) {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 2\n",nb_ligne,col);
        printf("on ne peut pas comparer INTEGER avec %s\n",typeG); exit(0);}
                   else{(yyval.real)=atof((yyvsp[0].string));}
                  strcpy(saveStrq,(yyvsp[0].string));
                  strcpy(buffer1,(yyvsp[0].string));
                  empiler(&pile3,buffer1);
                  
    }
#line 2915 "syntaxic.tab.c"
    break;

  case 130: /* primary1: FLOAT_NUMBER  */
#line 1217 "syntaxic.y"
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
#line 2931 "syntaxic.tab.c"
    break;

  case 131: /* primary1: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1228 "syntaxic.y"
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
#line 2946 "syntaxic.tab.c"
    break;

  case 132: /* primary1: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1238 "syntaxic.y"
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
#line 2964 "syntaxic.tab.c"
    break;

  case 133: /* primary1: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1251 "syntaxic.y"
                                      {if(strcmp(typeG,"FLOAT")!=0) 
                                    {printf("Erreur semantique a la ligne %d colonne %d :type incompatible 6\n",nb_ligne,col);
                                    printf("on ne peut pas comparer FLOAT avec %s\n",typeG); exit(0);}
                                      else{(yyval.real)=atof((yyvsp[-1].string));
                                      strcpy(saveStrq,(yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      }
                   }
#line 2978 "syntaxic.tab.c"
    break;

  case 134: /* primary1: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1260 "syntaxic.y"
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
#line 2995 "syntaxic.tab.c"
    break;

  case 135: /* primary1: LPAREN term1 RPAREN  */
#line 1272 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3001 "syntaxic.tab.c"
    break;

  case 136: /* primary1: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 1273 "syntaxic.y"
                                          {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique  :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[-3].string),nb_ligne,col);
                                          exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                     if(strcmp(typeG,typeD)!=0) {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 8\n",nb_ligne,col);
                                     printf("on ne peut pas comparer %s avec %s\n",typeD,typeG); exit(0);}
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
                }
#line 3024 "syntaxic.tab.c"
    break;

  case 138: /* term2: term2 PLUS factor2  */
#line 1295 "syntaxic.y"
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
#line 3048 "syntaxic.tab.c"
    break;

  case 139: /* term2: term2 MINUS factor2  */
#line 1314 "syntaxic.y"
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
#line 3070 "syntaxic.tab.c"
    break;

  case 141: /* factor2: factor2 MULTIPLY primary2  */
#line 1336 "syntaxic.y"
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
#line 3093 "syntaxic.tab.c"
    break;

  case 142: /* factor2: factor2 DIVIDE primary2  */
#line 1354 "syntaxic.y"
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
#line 3118 "syntaxic.tab.c"
    break;

  case 143: /* primary2: IDENTIFIER  */
#line 1378 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }else {strcpy(typeG,getType((yyvsp[0].string)));
                                strcpy(valIdf,getVal((yyvsp[0].string)));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
#line 3135 "syntaxic.tab.c"
    break;

  case 144: /* primary2: INT_NUMBER  */
#line 1390 "syntaxic.y"
                 {
       strcpy(typeG,"INTEGER");
       (yyval.real)=atof((yyvsp[0].string));
       strcpy(buffer1,(yyvsp[0].string));
       empiler(&pile3,buffer1);
                  
    }
#line 3147 "syntaxic.tab.c"
    break;

  case 145: /* primary2: FLOAT_NUMBER  */
#line 1397 "syntaxic.y"
                  {strcpy(typeG,"FLOAT");
                   (yyval.real)=atof((yyvsp[0].string));  
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
#line 3157 "syntaxic.tab.c"
    break;

  case 146: /* primary2: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1402 "syntaxic.y"
                                  {
        strcpy(typeG,"INTEGER");
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        
    }
#line 3169 "syntaxic.tab.c"
    break;

  case 147: /* primary2: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1409 "syntaxic.y"
                                   {
        strcpy(typeG,"INTEGER");
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    }
#line 3183 "syntaxic.tab.c"
    break;

  case 148: /* primary2: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1418 "syntaxic.y"
                                      {strcpy(typeG,"FLOAT");
                                      (yyval.real)=atof((yyvsp[-1].string));;
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      
                   }
#line 3194 "syntaxic.tab.c"
    break;

  case 149: /* primary2: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1424 "syntaxic.y"
                                       {strcpy(typeG,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    }
#line 3206 "syntaxic.tab.c"
    break;

  case 150: /* primary2: LPAREN term2 RPAREN  */
#line 1431 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3212 "syntaxic.tab.c"
    break;

  case 151: /* primary2: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 1432 "syntaxic.y"
                                          {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[-3].string),nb_ligne,col); exit(0);}
                                else {
                                    strcpy(typeG,getType((yyvsp[-3].string)));
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    valDepile = depiler(&pile3); 
                                    strcpy(buffer1, valDepile);
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                }
#line 3231 "syntaxic.tab.c"
    break;

  case 153: /* term4: term4 PLUS factor4  */
#line 1450 "syntaxic.y"
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
#line 3255 "syntaxic.tab.c"
    break;

  case 154: /* term4: term4 MINUS factor4  */
#line 1469 "syntaxic.y"
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
#line 3277 "syntaxic.tab.c"
    break;

  case 156: /* factor4: factor4 MULTIPLY primary4  */
#line 1491 "syntaxic.y"
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
#line 3300 "syntaxic.tab.c"
    break;

  case 157: /* factor4: factor4 DIVIDE primary4  */
#line 1509 "syntaxic.y"
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
#line 3325 "syntaxic.tab.c"
    break;

  case 158: /* primary4: IDENTIFIER  */
#line 1533 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n",nb_ligne,col, (yyvsp[0].string)); exit(0);
        }else {strcpy(typeD,getType((yyvsp[0].string)));
                if(strcmp(typeD,"CHAR")==0){printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle ne doit pas etre CHAR\n",nb_ligne,col);exit(0);}
                else if(strcmp(typeD,"INTEGER")!=0){
                    printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle doit etre INTEGER et pas FLOAT\n",nb_ligne,col);exit(0);
                }                
                                 strcpy(valIdf,getVal((yyvsp[0].string)));
                                  strcpy(brnsup,(yyvsp[0].string));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
#line 3347 "syntaxic.tab.c"
    break;

  case 159: /* primary4: INT_NUMBER  */
#line 1550 "syntaxic.y"
                 {
        strcpy(brnsup,(yyvsp[0].string));
       strcpy(typeD,"INTEGER");
       (yyval.real)=atof((yyvsp[0].string));
       strcpy(buffer1,(yyvsp[0].string));
       empiler(&pile3,buffer1);
                  
    }
#line 3360 "syntaxic.tab.c"
    break;

  case 160: /* primary4: FLOAT_NUMBER  */
#line 1558 "syntaxic.y"
                  {  
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre FLOAT\n");exit(0);
        strcpy(brnsup,(yyvsp[0].string));
        strcpy(typeD,"FLOAT");
                   (yyval.real)=atof((yyvsp[0].string));  
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
#line 3374 "syntaxic.tab.c"
    break;

  case 161: /* primary4: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1567 "syntaxic.y"
                                  {
        
         strcpy(brnsup,(yyvsp[-1].string));
        strcpy(typeD,"INTEGER");
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        
    }
#line 3388 "syntaxic.tab.c"
    break;

  case 162: /* primary4: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1576 "syntaxic.y"
                                   {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit etre POSITIVE\n");exit(0);
        strcpy(typeD,"INTEGER");
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                 strcpy(brnsup,saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    }
#line 3405 "syntaxic.tab.c"
    break;

  case 163: /* primary4: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1588 "syntaxic.y"
                                      {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre FLOAT\n");exit(0);
        strcpy(typeD,"FLOAT");
                                      (yyval.real)=atof((yyvsp[-1].string));;
                                       strcpy(brnsup,(yyvsp[-1].string));
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      
                   }
#line 3420 "syntaxic.tab.c"
    break;

  case 164: /* primary4: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1598 "syntaxic.y"
                                       {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre FLOAT\n");exit(0);
        strcpy(typeD,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                            strcpy(brnsup,saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    }
#line 3436 "syntaxic.tab.c"
    break;

  case 165: /* primary4: LPAREN term4 RPAREN  */
#line 1609 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3442 "syntaxic.tab.c"
    break;

  case 166: /* primary4: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 1610 "syntaxic.y"
                                          {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d\n",(yyvsp[-3].string),nb_ligne,col); exit(0);}
                                else {
                                    strcpy(typeD,getType((yyvsp[-3].string)));
                                    if(strcmp(typeD,"CHAR")==0){printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle ne doit pas etre CHAR\n",nb_ligne,col);exit(0);}
                else if(strcmp(typeD,"INTEGER")!=0){
                    printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle doit etre INTEGER et pas FLOAT\n",nb_ligne,col);exit(0);
                }
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    valDepile = depiler(&pile3); 
                                    strcpy(buffer1, valDepile); 
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(buffer1,tmp);
                                     strcpy(brnsup,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                }
#line 3466 "syntaxic.tab.c"
    break;

  case 167: /* primary4: STRING_LITERAL  */
#line 1629 "syntaxic.y"
                   {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre characters\n");exit(0);}
#line 3473 "syntaxic.tab.c"
    break;

  case 168: /* primary4: CHARACTERE  */
#line 1632 "syntaxic.y"
               {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre character\n");exit(0);}
#line 3480 "syntaxic.tab.c"
    break;

  case 170: /* term3: term3 PLUS factor3  */
#line 1637 "syntaxic.y"
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
#line 3504 "syntaxic.tab.c"
    break;

  case 171: /* term3: term3 MINUS factor3  */
#line 1656 "syntaxic.y"
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
#line 3526 "syntaxic.tab.c"
    break;

  case 173: /* factor3: factor3 MULTIPLY primary3  */
#line 1678 "syntaxic.y"
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
#line 3549 "syntaxic.tab.c"
    break;

  case 174: /* factor3: factor3 DIVIDE primary3  */
#line 1696 "syntaxic.y"
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
#line 3574 "syntaxic.tab.c"
    break;

  case 175: /* primary3: IDENTIFIER  */
#line 1720 "syntaxic.y"
               {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration((yyvsp[0].string)) == 0) {
            printf("Erreur sémantique la ligne %d colonne %d: La variable '%s' n'est pas déclarée avant son utilisation.\n", nb_ligne,col,(yyvsp[0].string));
             exit(0);
        }else {strcpy(typeG,getType((yyvsp[0].string)));
                if(strcmp(typeG,"CHAR")==0 ){printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle ne doit pas etre CHAR\n",nb_ligne,col);exit(0);}
                else if(strcmp(typeG,"INTEGER")!=0){
                    printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle doit INTEGER pas FLOAT\n",nb_ligne,col);exit(0);
                } 
                                  strcpy(valIdf,getVal((yyvsp[0].string)));
                                  (yyval.real)=atof(valIdf);
                                  strcpy(buffer1,(yyvsp[0].string));
                                  empiler(&pile3,buffer1);
                                  
                             }
    }
#line 3596 "syntaxic.tab.c"
    break;

  case 176: /* primary3: INT_NUMBER  */
#line 1737 "syntaxic.y"
                 {
       strcpy(typeG,"INTEGER");
       (yyval.real)=atof((yyvsp[0].string));
       strcpy(buffer1,(yyvsp[0].string));
       empiler(&pile3,buffer1);
                  
    }
#line 3608 "syntaxic.tab.c"
    break;

  case 177: /* primary3: FLOAT_NUMBER  */
#line 1744 "syntaxic.y"
                  {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre FLOAT\n");exit(0);
        strcpy(typeG,"FLOAT");
                   (yyval.real)=atof((yyvsp[0].string));  
                   strcpy(buffer1,(yyvsp[0].string));
                   empiler(&pile3,buffer1);
                   }
#line 3621 "syntaxic.tab.c"
    break;

  case 178: /* primary3: LPAREN PLUS INT_NUMBER RPAREN  */
#line 1752 "syntaxic.y"
                                  {
        
        strcpy(typeG,"INTEGER");
        (yyval.real)=atof((yyvsp[-1].string));
        strcpy(buffer1,(yyvsp[-1].string));
        empiler(&pile3,buffer1);
        
    }
#line 3634 "syntaxic.tab.c"
    break;

  case 179: /* primary3: LPAREN MINUS INT_NUMBER RPAREN  */
#line 1760 "syntaxic.y"
                                   {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit etre positive\n");exit(0);
        strcpy(typeG,"INTEGER");
                strcpy(saveStr,(yyvsp[-1].string));
                strcat(strcpy(saveS,"-"),saveStr);
                (yyval.real)=atoi(saveS);
                strcpy(buffer1, saveS);
                empiler(&pile3,buffer1);
            
    }
#line 3650 "syntaxic.tab.c"
    break;

  case 180: /* primary3: LPAREN PLUS FLOAT_NUMBER RPAREN  */
#line 1771 "syntaxic.y"
                                      {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre FLOAT\n");exit(0);
        strcpy(typeG,"FLOAT");
                                      (yyval.real)=atof((yyvsp[-1].string));;
                                      strcpy(buffer1,(yyvsp[-1].string));
                                      empiler(&pile3,buffer1);
                                      
                   }
#line 3664 "syntaxic.tab.c"
    break;

  case 181: /* primary3: LPAREN MINUS FLOAT_NUMBER RPAREN  */
#line 1780 "syntaxic.y"
                                       {
        printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre FLOAT\n");exit(0);
        strcpy(typeG,"FLOAT");
                                           strcat(strcpy(saveS,"-"),(yyvsp[-1].string));
                                           (yyval.real)=atof(saveS);
                                           strcpy(buffer1, saveS);
                                           empiler(&pile3,buffer1);
                                       
    }
#line 3679 "syntaxic.tab.c"
    break;

  case 182: /* primary3: LPAREN term3 RPAREN  */
#line 1790 "syntaxic.y"
                          {(yyval.real)=(yyvsp[-1].real);}
#line 3685 "syntaxic.tab.c"
    break;

  case 183: /* primary3: IDENTIFIER LBRACKET termtab RBRACKET  */
#line 1791 "syntaxic.y"
                                          {if(verifdeclaration((yyvsp[-3].string))==0 )
                                         {printf("Erreur semantique :Tableau %s non declaree a la ligne %d colonne %d \n",(yyvsp[-3].string),nb_ligne,col); exit(0);}
                                else {
                                    
                                    strcpy(typeG,getType((yyvsp[-3].string)));
                                    if(strcmp(typeG,"CHAR")==0 ){printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle ne doit pas etre CHAR\n",nb_ligne,col);exit(0);}
                else if(strcmp(typeG,"INTEGER")!=0){
                    printf("Erreur semantique a la ligne %d colonne %d :type incompatible parametre de boucle doit INTEGER pas FLOAT\n",nb_ligne,col);exit(0);
                }
                                     strcpy(tmp,(yyvsp[-3].string));
                                    strcat(tmp,"[");
                                    valDepile = depiler(&pile3); 
                                    strcpy(buffer1, valDepile); 
                                    strcat(tmp,buffer1);
                                    strcat(tmp,"]");
                                    strcpy(buffer1,tmp);
                                    empiler(&pile3,buffer1);
                                 }
                }
#line 3709 "syntaxic.tab.c"
    break;

  case 184: /* primary3: STRING_LITERAL  */
#line 1810 "syntaxic.y"
                   {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre characters\n");exit(0);}
#line 3716 "syntaxic.tab.c"
    break;

  case 185: /* primary3: CHARACTERE  */
#line 1813 "syntaxic.y"
               {printf("Erreur semantique a la ligne %d colonne %d:type incompatible 7\n",nb_ligne,col);
                    printf("parametres de boucle doit pas etre character\n");exit(0);}
#line 3723 "syntaxic.tab.c"
    break;


#line 3727 "syntaxic.tab.c"

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

#line 1817 "syntaxic.y"


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

