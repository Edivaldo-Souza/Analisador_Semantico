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
#line 1 "owl.y"

#include <iostream>
#include <cstring>
#include <vector>
using std::cout;

int yylex(void);
int yyparse(void);
void yyerror(const char *);
char* clearString(char*);
int error_count = 0;
int quant_primitiva = 0;
int quant_enumerada = 0;
int quant_definida = 0;
int quant_axioma_fechamento = 0;
int quant_aninhada = 0;
int quant_coberta = 0;

char* currentClass;
char* currentKw;
char* currentProp;
char* currentType;
char* currentLesserKw; 
std::vector<std::string> classesAxioma;
bool seekingProps, newClass, checkingClasses, semanticErrorFound, keepType = false;
int kwLine;
extern char* yytext;
extern int yylineno;


#line 102 "owl.tab.c"

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

#include "owl.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CLASS = 3,                      /* CLASS  */
  YYSYMBOL_KEYWORD = 4,                    /* KEYWORD  */
  YYSYMBOL_PROP = 5,                       /* PROP  */
  YYSYMBOL_NUM = 6,                        /* NUM  */
  YYSYMBOL_SYMBOL = 7,                     /* SYMBOL  */
  YYSYMBOL_TYPE = 8,                       /* TYPE  */
  YYSYMBOL_INDIVIDUAL = 9,                 /* INDIVIDUAL  */
  YYSYMBOL_KEYWORD_CLASS = 10,             /* KEYWORD_CLASS  */
  YYSYMBOL_KEYWORD_EQUIVALENTTO = 11,      /* KEYWORD_EQUIVALENTTO  */
  YYSYMBOL_KEYWORD_SUBCLASSOF = 12,        /* KEYWORD_SUBCLASSOF  */
  YYSYMBOL_KEYWORD_DISJOINTCLASSES = 13,   /* KEYWORD_DISJOINTCLASSES  */
  YYSYMBOL_KEYWORD_INDIVIDUALS = 14,       /* KEYWORD_INDIVIDUALS  */
  YYSYMBOL_ABRE_CHAVE = 15,                /* ABRE_CHAVE  */
  YYSYMBOL_FECHA_CHAVE = 16,               /* FECHA_CHAVE  */
  YYSYMBOL_ABRE_COLCHETES = 17,            /* ABRE_COLCHETES  */
  YYSYMBOL_FECHA_COLCHETES = 18,           /* FECHA_COLCHETES  */
  YYSYMBOL_VIRGULA = 19,                   /* VIRGULA  */
  YYSYMBOL_ABRE_PARENTESES = 20,           /* ABRE_PARENTESES  */
  YYSYMBOL_FECHA_PARENTESES = 21,          /* FECHA_PARENTESES  */
  YYSYMBOL_QUANTIFIER = 22,                /* QUANTIFIER  */
  YYSYMBOL_FLOAT = 23,                     /* FLOAT  */
  YYSYMBOL_YYACCEPT = 24,                  /* $accept  */
  YYSYMBOL_class = 25,                     /* class  */
  YYSYMBOL_keyword_class = 26,             /* keyword_class  */
  YYSYMBOL_class_name = 27,                /* class_name  */
  YYSYMBOL_body = 28,                      /* body  */
  YYSYMBOL_body_prop_subclassof = 29,      /* body_prop_subclassof  */
  YYSYMBOL_body_prop_equivalentto = 30,    /* body_prop_equivalentto  */
  YYSYMBOL_keyword_equivalent = 31,        /* keyword_equivalent  */
  YYSYMBOL_keyword_subclass = 32,          /* keyword_subclass  */
  YYSYMBOL_keyword_disjoint = 33,          /* keyword_disjoint  */
  YYSYMBOL_keyword_individuals = 34,       /* keyword_individuals  */
  YYSYMBOL_fecha = 35,                     /* fecha  */
  YYSYMBOL_axioma_quantifier = 36,         /* axioma_quantifier  */
  YYSYMBOL_aux = 37,                       /* aux  */
  YYSYMBOL_class_or_class = 38,            /* class_or_class  */
  YYSYMBOL_param = 39,                     /* param  */
  YYSYMBOL_props_equivalent_to = 40,       /* props_equivalent_to  */
  YYSYMBOL_number = 41,                    /* number  */
  YYSYMBOL_type = 42,                      /* type  */
  YYSYMBOL_keyword = 43,                   /* keyword  */
  YYSYMBOL_props_subclass_of = 44,         /* props_subclass_of  */
  YYSYMBOL_key_prop = 45,                  /* key_prop  */
  YYSYMBOL_acept_class = 46,               /* acept_class  */
  YYSYMBOL_acept_individual = 47           /* acept_individual  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   263

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   278


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
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    37,    37,    38,    39,    40,    43,    48,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   103,   104,   105,   106,   107,   108,   109,
     113,   114,   115,   116,   117,   118,   119,   122,   138,   152,
     165,   176,   177,   178,   179,   180,   182,   183,   184,   185,
     186,   187,   189,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   206,   207,   210,   213,   214,
     217,   222,   234,   238,   243,   244,   245,   246,   247,   251,
     252,   253,   254,   255,   258,   259,   262,   263
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
  "\"end of file\"", "error", "\"invalid token\"", "CLASS", "KEYWORD",
  "PROP", "NUM", "SYMBOL", "TYPE", "INDIVIDUAL", "KEYWORD_CLASS",
  "KEYWORD_EQUIVALENTTO", "KEYWORD_SUBCLASSOF", "KEYWORD_DISJOINTCLASSES",
  "KEYWORD_INDIVIDUALS", "ABRE_CHAVE", "FECHA_CHAVE", "ABRE_COLCHETES",
  "FECHA_COLCHETES", "VIRGULA", "ABRE_PARENTESES", "FECHA_PARENTESES",
  "QUANTIFIER", "FLOAT", "$accept", "class", "keyword_class", "class_name",
  "body", "body_prop_subclassof", "body_prop_equivalentto",
  "keyword_equivalent", "keyword_subclass", "keyword_disjoint",
  "keyword_individuals", "fecha", "axioma_quantifier", "aux",
  "class_or_class", "param", "props_equivalent_to", "number", "type",
  "keyword", "props_subclass_of", "key_prop", "acept_class",
  "acept_individual", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-128)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-69)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     126,   194,  -128,   174,    21,  -128,  -128,  -128,  -128,  -128,
      72,   208,    21,    76,  -128,   194,    21,  -128,   194,    76,
      15,    95,   128,  -128,     9,   163,   176,   147,   152,  -128,
     154,   136,   157,   136,  -128,   194,  -128,   164,    14,    15,
    -128,    57,    76,    21,    24,    43,    84,  -128,    58,    72,
      21,    19,    21,    21,    72,   208,    76,    72,   208,  -128,
    -128,    56,    43,   173,    22,   166,   186,  -128,  -128,  -128,
    -128,  -128,   182,  -128,  -128,  -128,    21,    25,   213,  -128,
     152,    26,    15,   201,    95,    21,    43,    95,  -128,  -128,
    -128,  -128,  -128,  -128,    64,  -128,    24,    15,    88,    43,
      30,   202,    80,    21,   216,  -128,    24,   204,    43,    39,
      21,    62,    21,    76,    76,   203,    21,    76,   186,   206,
    -128,  -128,  -128,    21,    15,  -128,    21,   135,    15,   221,
      95,   209,  -128,   210,    21,    21,    21,    43,    95,    15,
      95,   152,  -128,   186,    91,  -128,    21,  -128,   211,  -128,
      15,   214,  -128,    43,    76,  -128,    84,   212,   215,   217,
      21,    76,    76,    21,  -128,   186,  -128,   218,    15,  -128,
     219,  -128,  -128,  -128,   100,   125,   220,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,    42,  -128,   100,   100,   130,    21,
      43,  -128,  -128,   231,   100,   223,    21,   224,  -128,   100,
     215,    21,  -128
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     6,     0,     0,    37,    38,    39,    40,     5,
       0,     0,     0,     0,     1,     0,     0,     7,     0,     0,
      66,     9,    34,    73,     0,    28,     8,     0,     0,    78,
      85,    22,    87,    21,     4,     0,     3,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      30,     0,     0,     0,     0,     0,    66,    65,    33,    10,
      36,    72,    75,    76,    70,    71,     0,     0,     0,    27,
      25,     0,     0,    12,     0,     0,     0,     0,    84,    20,
      18,    86,    19,    17,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,    52,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,     0,     0,
      59,    60,    55,     0,    68,    69,     0,     0,    54,     0,
       0,     0,    74,    75,     0,     0,     0,     0,    26,     0,
      14,    13,    11,     0,    81,    23,     0,    58,     0,    62,
      63,    57,    53,     0,     0,    32,     0,     0,    49,     0,
       0,     0,     0,     0,    79,     0,    82,     0,     0,    64,
       0,    31,    50,    51,     0,    41,     0,    24,    15,    16,
      83,    56,    61,    67,     0,    48,     0,     0,    47,    52,
       0,    43,    42,    44,     0,     0,     0,     0,    46,     0,
      49,     0,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,   237,    -4,     7,   103,   139,   169,   146,   -25,
      79,   -41,  -128,   -11,   -20,  -128,   178,    73,   -94,    60,
     -31,  -127,   -42,    37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    30,     9,    26,    21,    10,    11,    12,
      13,   172,   107,   101,    22,   131,    68,    76,    73,    48,
      28,    29,    31,    33
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    50,   121,    52,   125,    79,    20,    25,    84,    40,
      87,    88,    35,    23,    47,    80,   164,   166,    23,    23,
      38,    67,    34,    23,    17,    36,    23,    17,    63,    23,
      23,    44,    71,   125,    23,    39,    61,    66,   180,    70,
      72,    85,    59,    23,    98,    20,    23,   106,   111,    74,
      20,    25,   127,    20,    25,   110,    37,    95,   112,    17,
      17,   136,    64,    81,   189,    17,    75,    17,   138,   118,
     140,    27,   105,   132,   119,    17,    94,    65,    82,    69,
      41,   115,   123,    67,    45,    32,   122,    19,    23,    77,
      66,    17,   120,    91,   124,    23,    71,   129,    62,    66,
      42,   130,   133,   148,    78,   184,    27,   139,   123,     8,
     165,    86,   144,   149,   157,    27,   163,   152,    27,    66,
      78,   179,   150,   151,    99,   132,   103,     1,   149,    23,
      66,   158,   159,   185,    23,    96,     2,   108,    17,   169,
      43,    99,   167,    71,   186,   191,   192,     5,     6,   193,
     141,   142,    51,   198,   145,    94,   176,   182,    90,   116,
      62,    93,   113,   114,    27,     7,   117,    23,    38,   137,
      23,   100,   126,    53,    14,    15,    56,    55,   146,    58,
      60,   135,    46,    39,     2,   195,    39,     5,    83,     7,
      23,   171,   200,    89,    97,    49,    92,   202,   177,   178,
      54,   104,    57,    27,    27,     5,     6,     7,     8,   154,
     160,    17,    23,    24,     7,     8,    27,   161,   109,   162,
      23,    24,   143,   128,   134,    27,   170,   147,   153,   156,
     155,   -68,   168,   173,   174,   187,   197,   183,   175,   181,
      16,   188,   199,   102,   190,     0,   201,     0,   194,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196
};

static const yytype_int16 yycheck[] =
{
       4,    26,    96,    28,    98,    46,    10,    11,    50,    20,
      52,    53,    16,     4,    25,    46,   143,   144,     4,     4,
       5,    41,    15,     4,     3,    18,     4,     3,    39,     4,
       4,    22,     8,   127,     4,    20,    22,    41,   165,    43,
      44,    22,    35,     4,    22,    49,     4,    22,    22,     6,
      54,    55,    22,    57,    58,    80,    19,    61,    83,     3,
       3,    22,     5,     5,    22,     3,    23,     3,   110,     5,
     112,    11,    76,   104,    94,     3,    20,    20,    20,    42,
      20,    85,    20,   103,    24,     9,    97,    15,     4,     5,
      94,     3,    96,    56,    98,     4,     8,    17,    38,   103,
      21,    21,   106,   123,    20,     5,    46,   111,    20,    14,
      19,    51,   116,   124,   134,    55,   141,   128,    58,   123,
      20,   163,   126,   127,    64,   156,    66,     1,   139,     4,
     134,   135,   136,   174,     4,    62,    10,    77,     3,   150,
      12,    81,   146,     8,    19,   186,   187,    11,    12,    19,
     113,   114,     5,   194,   117,    20,   160,   168,    55,    86,
     100,    58,    83,    84,   104,    13,    87,     4,     5,   109,
       4,     5,    99,    19,     0,     1,    19,    31,   118,    33,
      16,   108,    19,    20,    10,   189,    20,    11,    49,    13,
       4,   154,   196,    54,    21,    26,    57,   201,   161,   162,
      31,    19,    33,   143,   144,    11,    12,    13,    14,   130,
     137,     3,     4,     5,    13,    14,   156,   138,     5,   140,
       4,     5,    19,    21,    20,   165,   153,    21,     7,    19,
      21,    17,    21,    21,    19,   175,     5,    18,    21,    21,
       3,    21,    19,    65,   184,    -1,    22,    -1,   188,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    10,    25,    26,    11,    12,    13,    14,    28,
      31,    32,    33,    34,     0,     1,    26,     3,    27,    15,
      27,    30,    38,     4,     5,    27,    29,    43,    44,    45,
      27,    46,     9,    47,    28,    27,    28,    47,     5,    20,
      37,    43,    34,    12,    22,    43,    19,    37,    43,    31,
      33,     5,    33,    19,    31,    32,    19,    31,    32,    28,
      16,    22,    43,    37,     5,    20,    27,    38,    40,    47,
      27,     8,    27,    42,     6,    23,    41,     5,    20,    35,
      44,     5,    20,    30,    46,    22,    43,    46,    46,    30,
      29,    47,    30,    29,    20,    27,    41,    21,    22,    43,
       5,    37,    40,    43,    19,    27,    22,    36,    43,     5,
      33,    22,    33,    34,    34,    27,    41,    34,     5,    38,
      27,    42,    37,    20,    27,    42,    41,    22,    21,    17,
      21,    39,    44,    27,    20,    41,    22,    43,    46,    27,
      46,    47,    47,    19,    27,    47,    43,    21,    38,    37,
      27,    27,    37,     7,    34,    21,    19,    38,    27,    27,
      41,    34,    34,    33,    45,    19,    45,    27,    21,    37,
      41,    47,    35,    21,    19,    21,    27,    47,    47,    46,
      45,    21,    37,    18,     5,    35,    19,    43,    21,    22,
      43,    35,    35,    19,    43,    27,    41,     5,    35,    19,
      27,    22,    27
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    24,    25,    25,    25,    25,    26,    27,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    29,    29,    29,    29,    29,    29,    29,
      30,    30,    30,    30,    30,    30,    30,    31,    32,    33,
      34,    35,    35,    35,    35,    35,    35,    35,    35,    35,
      35,    35,    36,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    38,    38,    39,    40,    40,
      41,    41,    42,    43,    44,    44,    44,    44,    44,    45,
      45,    45,    45,    45,    46,    46,    47,    47
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     1,     1,     2,     2,
       4,     6,     4,     6,     6,     8,     8,     4,     4,     4,
       4,     2,     2,     5,     7,     3,     5,     3,     1,     2,
       3,     7,     6,     3,     1,     2,     3,     1,     1,     1,
       1,     5,     7,     7,     7,    10,     8,     6,     6,     4,
       5,     5,     1,     5,     4,     4,     7,     3,     5,     4,
       4,     7,     5,     5,     6,     3,     1,     4,     3,     3,
       1,     1,     1,     1,     5,     3,     3,     4,     1,     6,
       4,     5,     6,     7,     3,     1,     3,     1
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
  case 6: /* keyword_class: KEYWORD_CLASS  */
#line 43 "owl.y"
                            {
	newClass = true;
	checkingClasses = false;
}
#line 1277 "owl.tab.c"
    break;

  case 7: /* class_name: CLASS  */
#line 48 "owl.y"
                  {
		if(newClass){
			semanticErrorFound = false;
			currentKw = new char[100];
			currentProp = new char[100];
			currentType = new char[100];
			currentLesserKw = new char[100];
			currentClass = new char[strlen(yytext)+1]; 
			strcpy(currentClass,yytext);
			strcpy(currentKw,"Class:");
			kwLine = yylineno;
			cout << "\nClass Atual: "<< currentClass << "\n";
			newClass = false;
		}
		if(seekingProps){
			std::string cl(yytext);
			classesAxioma.push_back(cl);
		}
		if(checkingClasses){
			std::string ctClass(yytext);
			
			bool hasClass = false;
			for(int i = 0; i<classesAxioma.size(); i++){
				if(strcmp(classesAxioma[i].c_str(),yytext)==0){
					hasClass = true;
				}
			}
			if(!hasClass){
				cout << "\nErro Semantico: Classe: "<< ctClass <<" não declarada no axioma de fechamento. Linha "<< kwLine <<"\n";
				semanticErrorFound = true;
				checkingClasses = false;
			}
		}
		
	}
#line 1317 "owl.tab.c"
    break;

  case 23: /* body_prop_subclassof: props_subclass_of keyword_disjoint acept_class keyword_individuals acept_individual  */
#line 103 "owl.y"
                                                                                                          {quant_primitiva++;}
#line 1323 "owl.tab.c"
    break;

  case 24: /* body_prop_subclassof: class_name VIRGULA props_subclass_of keyword_disjoint acept_class keyword_individuals acept_individual  */
#line 104 "owl.y"
                                                                                                                                                 {quant_primitiva++;}
#line 1329 "owl.tab.c"
    break;

  case 25: /* body_prop_subclassof: class_name VIRGULA props_subclass_of  */
#line 105 "owl.y"
                                                                               {quant_primitiva++;}
#line 1335 "owl.tab.c"
    break;

  case 26: /* body_prop_subclassof: class_name VIRGULA props_subclass_of keyword_disjoint acept_class  */
#line 106 "owl.y"
                                                                                                            {quant_primitiva++;}
#line 1341 "owl.tab.c"
    break;

  case 27: /* body_prop_subclassof: class_name VIRGULA fecha  */
#line 107 "owl.y"
                                                                   {quant_axioma_fechamento++;}
#line 1347 "owl.tab.c"
    break;

  case 28: /* body_prop_subclassof: class_name  */
#line 108 "owl.y"
                                                     {quant_aninhada++;}
#line 1353 "owl.tab.c"
    break;

  case 29: /* body_prop_subclassof: class_name aux  */
#line 109 "owl.y"
                                                        {quant_aninhada++;}
#line 1359 "owl.tab.c"
    break;

  case 30: /* body_prop_equivalentto: ABRE_CHAVE acept_individual FECHA_CHAVE  */
#line 113 "owl.y"
                                                                {quant_enumerada++;}
#line 1365 "owl.tab.c"
    break;

  case 31: /* body_prop_equivalentto: class_name keyword ABRE_PARENTESES props_equivalent_to FECHA_PARENTESES keyword_individuals acept_individual  */
#line 114 "owl.y"
                                                                                                                                                         {quant_definida++;}
#line 1371 "owl.tab.c"
    break;

  case 32: /* body_prop_equivalentto: class_name keyword ABRE_PARENTESES props_equivalent_to param FECHA_PARENTESES  */
#line 115 "owl.y"
                                                                                                                          {quant_definida++;}
#line 1377 "owl.tab.c"
    break;

  case 33: /* body_prop_equivalentto: class_name keyword props_equivalent_to  */
#line 116 "owl.y"
                                                                                   {quant_definida++;}
#line 1383 "owl.tab.c"
    break;

  case 34: /* body_prop_equivalentto: class_or_class  */
#line 117 "owl.y"
                                                           {quant_coberta++;}
#line 1389 "owl.tab.c"
    break;

  case 35: /* body_prop_equivalentto: class_name aux  */
#line 118 "owl.y"
                                                           {quant_aninhada++;}
#line 1395 "owl.tab.c"
    break;

  case 36: /* body_prop_equivalentto: class_or_class KEYWORD_SUBCLASSOF class_name  */
#line 119 "owl.y"
                                                                                         {quant_aninhada++;}
#line 1401 "owl.tab.c"
    break;

  case 37: /* keyword_equivalent: KEYWORD_EQUIVALENTTO  */
#line 122 "owl.y"
                                         {
	checkingClasses = false;
	if(strcmp("SubClassOf:",currentKw)==0){
		cout << "\nErro de semantica: SubClassOf antes de EquivalentTo. Linha "<< kwLine <<".\n";
	}
	if(strcmp("DisjointClasses:",currentKw)==0){
		cout << "\nErro de semantica: DisjointClasses antes de EquivalentTo. Linha "<< kwLine <<".\n";
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de EquivalentTo. Linha "<< kwLine <<".\n";
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
#line 1421 "owl.tab.c"
    break;

  case 38: /* keyword_subclass: KEYWORD_SUBCLASSOF  */
#line 138 "owl.y"
                                     {
	seekingProps = true;
	if(strcmp("DisjointClasses:",currentKw)==0){
		cout << "\nErro de semantica: DisjointClasses antes de SubClassOf. Linha "<< kwLine <<".\n";
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de SubClassOf. Linha "<< kwLine <<".\n";
	}

	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
#line 1439 "owl.tab.c"
    break;

  case 39: /* keyword_disjoint: KEYWORD_DISJOINTCLASSES  */
#line 152 "owl.y"
                                          {
	checkingClasses = false;
	if(strcmp("Class:",currentKw)==0){
		cout << "\nErro de semantica: Ausencia dos termos obrigatorios SubClassOf/EquivalentTo . Linha "<< kwLine <<".\n";
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de DisjointClasses. Linha "<< kwLine <<".\n";
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
#line 1456 "owl.tab.c"
    break;

  case 40: /* keyword_individuals: KEYWORD_INDIVIDUALS  */
#line 165 "owl.y"
                                         {
	checkingClasses = false;
	if(strcmp("Class:",currentKw)==0){
		cout << "\nErro de semantica: Ausencia dos termos obrigatorios SubClassOf/EquivalentTo no escopo da Classe. Linha "<< kwLine <<".\n";
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
#line 1470 "owl.tab.c"
    break;

  case 52: /* axioma_quantifier: QUANTIFIER  */
#line 189 "owl.y"
                              {kwLine = yylineno; seekingProps=false;checkingClasses=true;}
#line 1476 "owl.tab.c"
    break;

  case 70: /* number: NUM  */
#line 217 "owl.y"
            {
	if(strcmp(currentType,"xsd:float")==0 ){
		cout << "\nErro Semantico: O valor esperado era do tipo xsd:float. Linha "<< yylineno <<"\n";
	}
	}
#line 1486 "owl.tab.c"
    break;

  case 71: /* number: FLOAT  */
#line 222 "owl.y"
                {
		if(strcmp(currentType,"xsd:integer")==0 ){
		cout << "\nErro Semantico: O valor esperado era do tipo xsd:integer. Linha "<< yylineno <<"\n";
		}
		if(strcmp(currentLesserKw,"min")==0 ||
			strcmp(currentLesserKw,"max")==0 ||
			strcmp(currentLesserKw,"exactly")==0){
				cout << "\nErro Semantico: Apos o operador "<< currentLesserKw<<" espera-se cardinalidade do tipo xsd:integer. Linha "<< yylineno <<"\n";
			}
	}
#line 1501 "owl.tab.c"
    break;

  case 72: /* type: TYPE  */
#line 234 "owl.y"
           {
	strcpy(currentType,yytext);
}
#line 1509 "owl.tab.c"
    break;

  case 73: /* keyword: KEYWORD  */
#line 238 "owl.y"
                 {
	strcpy(currentLesserKw,yytext);

}
#line 1518 "owl.tab.c"
    break;


#line 1522 "owl.tab.c"

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

#line 266 "owl.y"


extern FILE * yyin;  

int main(int argc, char ** argv)
{
	if (argc > 1)
	{
		FILE * file;
		file = fopen(argv[1], "r");
		if (!file)
		{
			cout << "Arquivo " << argv[1] << " não encontrado!\n";
			exit(1);
		}
		
		yyin = file;
	}

	yyparse();
	cout << std::endl;
	cout << "Erros Encontrados: \t"<< error_count<< "\n";
	cout << "Classes Primitivas: \t" << quant_primitiva << "\n";
	cout << "Classes Definidas: \t" << quant_definida << "\n";
	cout << "Classes Enumeradas: \t" << quant_enumerada << "\n";
	cout << "Classes Coberta: \t" << quant_coberta << "\n";
	cout << "Classes com \nAxioma de Fechamento: \t" << quant_axioma_fechamento << "\n";
	cout << "Classes Aninhadas: \t" << quant_aninhada << "\n";
	if(error_count<1){
		cout << "Compilado com Sucesso\n";
	}
}

void yyerror(const char * s)
{
	extern int yylineno;    
	extern char * yytext;   

	if(!semanticErrorFound){
		error_count++;
		cout << "\n";
    	cout << "Erro de Sintaxe: *"<< yytext <<"*, linha " << yylineno << "\n";
	}
	
}
