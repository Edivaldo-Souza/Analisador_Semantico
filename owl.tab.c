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

#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <unordered_map>
using std::cout;

int yylex(void);
int yyparse(void);
void yyerror(const char *);
char* clearString(char*);
int error_count = 0;
int semantic_error_count = 0;
int quant_primitiva = 0;
int quant_enumerada = 0;
int quant_definida = 0;
int quant_axioma_fechamento = 0;
int quant_aninhada = 0;
int quant_coberta = 0;

char* chosenProp;
char* currentClass;
char* currentKw;
char* currentProp;
char* currentType;
char* currentLesserKw; 
std::unordered_map<std::string,std::vector<std::string>> propsAxioma;
std::vector<std::string> classesAxioma, dataPropertys, objPropertys;
bool seekingProps, newClass, checkingClasses, semanticErrorFound, keepType, canVerifyProp, inDisjoint = false;
int kwLine;
extern char* yytext;
extern int yylineno;


#line 107 "owl.tab.c"

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
  YYSYMBOL_prop_name = 27,                 /* prop_name  */
  YYSYMBOL_class_name = 28,                /* class_name  */
  YYSYMBOL_body = 29,                      /* body  */
  YYSYMBOL_body_prop_subclassof = 30,      /* body_prop_subclassof  */
  YYSYMBOL_body_prop_equivalentto = 31,    /* body_prop_equivalentto  */
  YYSYMBOL_keyword_equivalent = 32,        /* keyword_equivalent  */
  YYSYMBOL_keyword_subclass = 33,          /* keyword_subclass  */
  YYSYMBOL_keyword_disjoint = 34,          /* keyword_disjoint  */
  YYSYMBOL_keyword_individuals = 35,       /* keyword_individuals  */
  YYSYMBOL_fecha = 36,                     /* fecha  */
  YYSYMBOL_axioma_quantifier = 37,         /* axioma_quantifier  */
  YYSYMBOL_aux = 38,                       /* aux  */
  YYSYMBOL_class_or_class = 39,            /* class_or_class  */
  YYSYMBOL_param = 40,                     /* param  */
  YYSYMBOL_props_equivalent_to = 41,       /* props_equivalent_to  */
  YYSYMBOL_number = 42,                    /* number  */
  YYSYMBOL_type = 43,                      /* type  */
  YYSYMBOL_keyword = 44,                   /* keyword  */
  YYSYMBOL_props_subclass_of = 45,         /* props_subclass_of  */
  YYSYMBOL_key_prop = 46,                  /* key_prop  */
  YYSYMBOL_acept_class = 47,               /* acept_class  */
  YYSYMBOL_acept_individual = 48           /* acept_individual  */
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
#define YYLAST   287

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

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
       0,    42,    42,    43,    44,    45,    48,    55,    61,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   157,   158,   159,   160,   161,   162,
     163,   167,   168,   169,   170,   171,   172,   173,   176,   198,
     216,   234,   247,   248,   249,   250,   251,   253,   254,   255,
     256,   257,   258,   260,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   283,   284,   287,   290,
     291,   294,   302,   316,   323,   334,   339,   340,   341,   342,
     343,   347,   348,   349,   350,   351,   354,   355,   358,   359
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
  "QUANTIFIER", "FLOAT", "$accept", "class", "keyword_class", "prop_name",
  "class_name", "body", "body_prop_subclassof", "body_prop_equivalentto",
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

#define YYPACT_NINF (-134)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     107,   214,  -134,   213,    30,  -134,  -134,  -134,  -134,  -134,
      46,   226,    30,    14,  -134,   214,    30,  -134,   214,    14,
     157,    95,    43,  -134,  -134,    10,   185,    74,    55,  -134,
    -134,   106,   154,   172,   154,  -134,   214,  -134,   143,   157,
      21,  -134,    91,    14,    30,    19,    11,   166,  -134,    -1,
      46,    30,    25,    30,    46,   226,    14,    46,   226,  -134,
    -134,   153,    61,    11,   157,    35,   203,  -134,  -134,  -134,
    -134,  -134,   200,  -134,  -134,  -134,  -134,    30,    55,    41,
    -134,   208,   157,    67,   202,    95,    30,    11,  -134,  -134,
    -134,  -134,  -134,  -134,   157,   196,  -134,    19,    82,   211,
       7,   144,    11,    30,   174,  -134,    84,    19,   215,    11,
      30,    99,    30,    14,    14,   217,    30,  -134,   203,   212,
    -134,  -134,   155,   157,   227,    95,   216,    30,   157,  -134,
      30,  -134,    30,    11,   219,    30,    30,    95,   157,    95,
     208,  -134,   203,   165,    30,  -134,   222,  -134,    11,    14,
    -134,   220,  -134,   157,   221,    30,   166,   225,   224,    14,
      14,    30,  -134,   203,  -134,   228,   229,  -134,   157,  -134,
     192,   230,  -134,  -134,    60,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,    60,    60,   193,   112,  -134,  -134,  -134,    55,
      60,    30,    11,   218,  -134,   231,    30,    30,    60,   224,
    -134
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     6,     0,     0,    38,    39,    40,    41,     5,
       0,     0,     0,     0,     1,     0,     0,     8,     0,     0,
      67,    10,    35,    75,     7,     0,    29,     9,     0,    24,
      80,    87,    23,    89,    22,     4,     0,     3,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      31,     0,     0,     0,     0,     0,    67,    66,    34,    11,
      37,    74,    77,    78,    73,    71,    72,     0,     0,     0,
      28,    26,     0,     0,    13,     0,     0,     0,    86,    21,
      19,    88,    20,    18,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,    53,     0,     0,
       0,     0,     0,     0,     0,    82,     0,    56,     0,     0,
      60,    61,     0,    55,     0,     0,     0,     0,    69,    70,
       0,    76,     0,     0,    77,     0,     0,    27,     0,    15,
      14,    12,     0,    83,     0,    59,    58,    54,     0,     0,
      33,     0,    63,    64,     0,     0,     0,     0,    50,     0,
       0,     0,    81,     0,    84,     0,     0,    32,     0,    65,
      42,     0,    51,    52,     0,    25,    16,    17,    85,    57,
      68,    62,     0,     0,    48,     0,    49,    44,    43,    45,
       0,    53,     0,     0,    47,     0,     0,     0,     0,    50,
      46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,   245,    20,    -4,     0,   140,     2,   190,   111,
      -7,    16,   -44,  -134,   -18,    53,  -134,   188,   -19,   -96,
     102,   -12,  -133,   -40,    23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    40,    31,     9,    27,    21,    10,    11,
      12,    13,   172,   108,    99,    22,   126,    68,    77,    73,
      49,    29,    30,    32,    34
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,   121,    41,    80,    24,   129,    20,    26,    48,   162,
     164,    85,    36,    88,    23,    35,    74,    75,    37,    82,
      51,    61,    17,    33,   124,    23,   129,    71,   125,    23,
     178,    25,    45,    17,    76,    81,    59,    43,    66,    23,
      70,    72,    38,    62,    97,    23,    20,    86,    52,    17,
      20,    26,    84,    20,    26,    44,    89,   101,    96,    92,
      24,    19,    65,   107,    17,    24,    69,    79,   116,    83,
     137,    23,   139,   105,   110,    25,   117,   112,    25,    91,
      78,    95,   115,   130,    98,     5,    23,     7,    23,   111,
     136,    66,   131,   120,    17,    67,    24,   128,   106,    66,
     113,   114,    17,   134,   122,   147,   132,   138,     1,     8,
     152,    64,   143,    28,   155,   118,    23,     2,   146,   127,
     152,   177,    42,    66,    25,    53,   153,    46,   154,   166,
     186,    66,   158,   161,   191,   169,   140,   141,   187,   188,
     165,   149,    63,    55,   131,    58,   194,    17,   119,    28,
     181,   171,    71,   159,    87,   160,    67,    28,    17,    60,
      28,    23,    24,    71,   127,     5,     6,   102,   103,    23,
      23,    24,   167,   196,    94,    95,    79,    39,    23,    24,
     151,   109,   175,   176,   163,   102,    78,   195,   157,    23,
      24,    56,   199,   200,   185,    90,    23,    23,    93,    17,
      63,    24,   185,   185,    47,    39,    28,    23,   133,   193,
     185,   182,   189,    14,    15,     7,     8,    50,   185,   104,
     144,     7,    54,     2,    57,     5,     6,     7,     8,    17,
      23,    24,   123,   145,   148,   135,   142,   150,   156,   -69,
     197,   168,   170,   174,    28,    28,   173,   180,    16,   179,
     198,   184,   100,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,   183,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   190,   192
};

static const yytype_int16 yycheck[] =
{
       4,    97,    20,    47,     5,   101,    10,    11,    26,   142,
     143,    51,    16,    53,     4,    15,     5,     6,    18,    20,
      27,    39,     3,     9,    17,     4,   122,     8,    21,     4,
     163,    11,    22,     3,    23,    47,    36,    21,    42,     4,
      44,    45,    19,    22,    63,     4,    50,    22,    28,     3,
      54,    55,    50,    57,    58,    12,    54,    22,    62,    57,
       5,    15,    42,    22,     3,     5,    43,    47,    87,    49,
     110,     4,   112,    77,    81,    55,    94,    84,    58,    56,
      20,    20,    86,   102,    64,    11,     4,    13,     4,    22,
     109,    95,   104,    97,     3,    42,     5,   101,    78,   103,
      84,    85,     3,   107,    22,   123,    22,   111,     1,    14,
     128,    20,   116,    11,   133,    95,     4,    10,   122,    20,
     138,   161,    20,   127,   104,    19,   130,    25,   132,   148,
     174,   135,   136,   140,    22,   153,   113,   114,   182,   183,
     144,   125,    40,    32,   156,    34,   190,     3,    95,    47,
     168,   155,     8,   137,    52,   139,   103,    55,     3,    16,
      58,     4,     5,     8,    20,    11,    12,    65,    66,     4,
       4,     5,   149,   192,    21,    20,   156,    20,     4,     5,
     127,    79,   159,   160,    19,    83,    20,   191,   135,     4,
       5,    19,   196,   197,   174,    55,     4,     4,    58,     3,
      98,     5,   182,   183,    19,    20,   104,     4,   106,   189,
     190,    19,    19,     0,     1,    13,    14,    27,   198,    19,
     118,    13,    32,    10,    34,    11,    12,    13,    14,     3,
       4,     5,    21,    21,     7,    20,    19,    21,    19,    17,
      22,    21,    21,    19,   142,   143,    21,    18,     3,    21,
      19,    21,    64,    -1,    -1,    -1,    -1,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   184,   185
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    10,    25,    26,    11,    12,    13,    14,    29,
      32,    33,    34,    35,     0,     1,    26,     3,    28,    15,
      28,    31,    39,     4,     5,    27,    28,    30,    44,    45,
      46,    28,    47,     9,    48,    29,    28,    29,    48,    20,
      27,    38,    44,    35,    12,    22,    44,    19,    38,    44,
      32,    34,    27,    19,    32,    33,    19,    32,    33,    29,
      16,    38,    22,    44,    20,    27,    28,    39,    41,    48,
      28,     8,    28,    43,     5,     6,    23,    42,    20,    27,
      36,    45,    20,    27,    31,    47,    22,    44,    47,    31,
      30,    48,    31,    30,    21,    20,    28,    42,    27,    38,
      41,    22,    44,    44,    19,    28,    27,    22,    37,    44,
      34,    22,    34,    35,    35,    28,    42,    38,    27,    39,
      28,    43,    22,    21,    17,    21,    40,    20,    28,    43,
      42,    45,    22,    44,    28,    20,    42,    47,    28,    47,
      48,    48,    19,    28,    44,    21,    28,    38,     7,    35,
      21,    39,    38,    28,    28,    42,    19,    39,    28,    35,
      35,    34,    46,    19,    46,    28,    42,    48,    21,    38,
      21,    28,    36,    21,    19,    48,    48,    47,    46,    21,
      18,    38,    19,    44,    21,    27,    36,    36,    36,    19,
      44,    22,    44,    27,    36,    28,    42,    22,    19,    28,
      28
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    24,    25,    25,    25,    25,    26,    27,    28,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    30,    30,    30,    30,    30,    30,
      30,    31,    31,    31,    31,    31,    31,    31,    32,    33,
      34,    35,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    37,    38,    38,    38,    38,    38,    38,
      38,    38,    38,    38,    38,    38,    39,    39,    40,    41,
      41,    42,    42,    42,    43,    44,    45,    45,    45,    45,
      45,    46,    46,    46,    46,    46,    47,    47,    48,    48
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     1,     1,     1,     2,
       2,     4,     6,     4,     6,     6,     8,     8,     4,     4,
       4,     4,     2,     2,     1,     7,     3,     5,     3,     1,
       2,     3,     7,     6,     3,     1,     2,     3,     1,     1,
       1,     1,     5,     7,     7,     7,    10,     8,     6,     6,
       4,     5,     5,     1,     5,     4,     4,     7,     3,     5,
       4,     4,     7,     5,     5,     6,     3,     1,     4,     3,
       3,     1,     1,     1,     1,     1,     5,     3,     3,     4,
       1,     6,     4,     5,     6,     7,     3,     1,     3,     1
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
#line 48 "owl.y"
                            {
	newClass = true;
	checkingClasses = false;
	canVerifyProp = false;
	inDisjoint = false;
	
}
#line 1290 "owl.tab.c"
    break;

  case 7: /* prop_name: PROP  */
#line 55 "owl.y"
                {
	canVerifyProp = true;
	strcpy(currentProp,yytext);

}
#line 1300 "owl.tab.c"
    break;

  case 8: /* class_name: CLASS  */
#line 61 "owl.y"
                  {
		if(newClass){
			semanticErrorFound = false;
			currentKw = new char[100];
			currentProp = new char[100];
			currentType = new char[100];
			currentLesserKw = new char[100];
			chosenProp = new char[100];
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
			
			std::string p(currentProp);
			std::vector<std::string> temp;
			temp.push_back(cl);
			if(propsAxioma.count(p)==0){
				propsAxioma[p] = temp;
			}
			else {
				temp = propsAxioma[p];
				temp.push_back(cl);
				propsAxioma[p] = temp;
			}
			
		}
		if(checkingClasses){
			std::string ctClass(yytext);
			
			std::string prop(chosenProp);
			int cont;
			if(propsAxioma.count(prop)==0){
				cout << "\nErro de semantica: Propriedade não declarada no axioma de fechamento. Linha "<< kwLine <<"\n";
				semantic_error_count++;
				semanticErrorFound = true;
				checkingClasses = false;
			}
			else{
				classesAxioma = propsAxioma[prop];
				cont = classesAxioma.size();
				bool hasClass = false;
			for(int i = 0; i<classesAxioma.size(); i++){
				if(strcmp(classesAxioma[i].c_str(),yytext)==0){
					hasClass = true;
				}
			}
			if(!hasClass){
				cout << "\nErro de semantica: Classe: "<< ctClass <<" não declarada no axioma de fechamento. Linha "<< kwLine <<"\n";
				semantic_error_count++;
				semanticErrorFound = true;
				checkingClasses = false;
			}
			}
		}

		if(inDisjoint){
			if(strcmp(currentClass,yytext)==0){
				cout << "\nErro de semantica: A classe "<< currentClass <<" nao pode ser disjunta de si mesma. Linha "<< yylineno <<"\n";
				semantic_error_count++;
			}
		}

		std::string prop(currentProp);
		int quant = count(objPropertys.begin(),objPropertys.end(),prop);
		int quant_d = count(dataPropertys.begin(),dataPropertys.end(),prop);
		if(quant==0 && quant_d==0 && !prop.empty() && canVerifyProp){
			objPropertys.push_back(prop);
		}
		
	}
#line 1381 "owl.tab.c"
    break;

  case 24: /* body_prop_subclassof: props_subclass_of  */
#line 157 "owl.y"
                                         {quant_primitiva++;}
#line 1387 "owl.tab.c"
    break;

  case 25: /* body_prop_subclassof: class_name VIRGULA props_subclass_of keyword_disjoint acept_class keyword_individuals acept_individual  */
#line 158 "owl.y"
                                                                                                                                                 {quant_primitiva++;}
#line 1393 "owl.tab.c"
    break;

  case 26: /* body_prop_subclassof: class_name VIRGULA props_subclass_of  */
#line 159 "owl.y"
                                                                               {quant_primitiva++;}
#line 1399 "owl.tab.c"
    break;

  case 27: /* body_prop_subclassof: class_name VIRGULA props_subclass_of keyword_disjoint acept_class  */
#line 160 "owl.y"
                                                                                                            {quant_primitiva++;}
#line 1405 "owl.tab.c"
    break;

  case 28: /* body_prop_subclassof: class_name VIRGULA fecha  */
#line 161 "owl.y"
                                                                   {quant_axioma_fechamento++;}
#line 1411 "owl.tab.c"
    break;

  case 29: /* body_prop_subclassof: class_name  */
#line 162 "owl.y"
                                                     {quant_aninhada++;}
#line 1417 "owl.tab.c"
    break;

  case 30: /* body_prop_subclassof: class_name aux  */
#line 163 "owl.y"
                                                        {quant_aninhada++;}
#line 1423 "owl.tab.c"
    break;

  case 31: /* body_prop_equivalentto: ABRE_CHAVE acept_individual FECHA_CHAVE  */
#line 167 "owl.y"
                                                                {quant_enumerada++;}
#line 1429 "owl.tab.c"
    break;

  case 32: /* body_prop_equivalentto: class_name keyword ABRE_PARENTESES props_equivalent_to FECHA_PARENTESES keyword_individuals acept_individual  */
#line 168 "owl.y"
                                                                                                                                                         {quant_definida++;}
#line 1435 "owl.tab.c"
    break;

  case 33: /* body_prop_equivalentto: class_name keyword ABRE_PARENTESES props_equivalent_to param FECHA_PARENTESES  */
#line 169 "owl.y"
                                                                                                                          {quant_definida++;}
#line 1441 "owl.tab.c"
    break;

  case 34: /* body_prop_equivalentto: class_name keyword props_equivalent_to  */
#line 170 "owl.y"
                                                                                   {quant_definida++;}
#line 1447 "owl.tab.c"
    break;

  case 35: /* body_prop_equivalentto: class_or_class  */
#line 171 "owl.y"
                                                           {quant_coberta++;}
#line 1453 "owl.tab.c"
    break;

  case 36: /* body_prop_equivalentto: class_name aux  */
#line 172 "owl.y"
                                                           {quant_aninhada++;}
#line 1459 "owl.tab.c"
    break;

  case 37: /* body_prop_equivalentto: class_or_class KEYWORD_SUBCLASSOF class_name  */
#line 173 "owl.y"
                                                                                         {quant_aninhada++;}
#line 1465 "owl.tab.c"
    break;

  case 38: /* keyword_equivalent: KEYWORD_EQUIVALENTTO  */
#line 176 "owl.y"
                                         {
	checkingClasses = false;
	if(strcmp("SubClassOf:",currentKw)==0){
		cout << "\nErro de semantica: SubClassOf antes de EquivalentTo. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	if(strcmp("DisjointClasses:",currentKw)==0){
		cout << "\nErro de semantica: DisjointClasses antes de EquivalentTo. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de EquivalentTo. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
#line 1491 "owl.tab.c"
    break;

  case 39: /* keyword_subclass: KEYWORD_SUBCLASSOF  */
#line 198 "owl.y"
                                     {
	seekingProps = true;
	if(strcmp("DisjointClasses:",currentKw)==0){
		cout << "\nErro de semantica: DisjointClasses antes de SubClassOf. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de SubClassOf. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}

	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
#line 1513 "owl.tab.c"
    break;

  case 40: /* keyword_disjoint: KEYWORD_DISJOINTCLASSES  */
#line 216 "owl.y"
                                          {
	checkingClasses = false;
	inDisjoint = true;
	if(strcmp("Class:",currentKw)==0){
		cout << "\nErro de semantica: Ausencia dos termos obrigatorios SubClassOf/EquivalentTo no escopo da classe. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de DisjointClasses. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
#line 1535 "owl.tab.c"
    break;

  case 41: /* keyword_individuals: KEYWORD_INDIVIDUALS  */
#line 234 "owl.y"
                                         {
	checkingClasses = false;
	inDisjoint = false;
	if(strcmp("Class:",currentKw)==0){
		cout << "\nErro de semantica: Ausencia dos termos obrigatorios SubClassOf/EquivalentTo no escopo da Classe. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
#line 1551 "owl.tab.c"
    break;

  case 53: /* axioma_quantifier: QUANTIFIER  */
#line 260 "owl.y"
                              {
	kwLine = yylineno; 
	seekingProps=false;
	checkingClasses=true;

	strcpy(chosenProp,currentProp);	
	}
#line 1563 "owl.tab.c"
    break;

  case 71: /* number: NUM  */
#line 294 "owl.y"
            {
	if(strcmp(currentType,"xsd:float")==0 ){
		cout << "\nErro Semantico: O valor esperado era do tipo xsd:float. Linha "<< yylineno <<"\n";
		semanticErrorFound = true;
		semantic_error_count++;

	}
	}
#line 1576 "owl.tab.c"
    break;

  case 72: /* number: FLOAT  */
#line 302 "owl.y"
                {
		if(strcmp(currentType,"xsd:integer")==0 ){
		cout << "\nErro Semantico: O valor esperado era do tipo xsd:integer. Linha "<< yylineno <<"\n";
		semanticErrorFound = true;
		semantic_error_count++;
		}
		if(strcmp(currentLesserKw,"min")==0 ||
			strcmp(currentLesserKw,"max")==0 ||
			strcmp(currentLesserKw,"exactly")==0){
				cout << "\nErro Semantico: Apos o operador "<< currentLesserKw<<" espera-se cardinalidade do tipo xsd:integer. Linha "<< yylineno <<"\n";
				semanticErrorFound = true;
				semantic_error_count++;
			}
	}
#line 1595 "owl.tab.c"
    break;

  case 73: /* number: PROP  */
#line 316 "owl.y"
              {
		cout << "\nErro Semantico: O valor esperado era do tipo xsd:integer. Linha "<< yylineno <<"\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
#line 1605 "owl.tab.c"
    break;

  case 74: /* type: TYPE  */
#line 323 "owl.y"
           {
	strcpy(currentType,yytext);

	std::string prop(currentProp);
		int quant = count(dataPropertys.begin(),dataPropertys.end(),prop);
		int quant_o = count(objPropertys.begin(),objPropertys.end(),prop);
		if(quant==0 && quant_o==0 && !prop.empty()){
			dataPropertys.push_back(prop);
	}
}
#line 1620 "owl.tab.c"
    break;

  case 75: /* keyword: KEYWORD  */
#line 334 "owl.y"
                 {
	strcpy(currentLesserKw,yytext);

}
#line 1629 "owl.tab.c"
    break;


#line 1633 "owl.tab.c"

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

#line 362 "owl.y"


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
	cout << "--------------Resultados--------------\n";
	cout << "Erros Semanticos Encontrados: \t"<< semantic_error_count<< "\n"; 
	cout << "Erros Sintaticos Encontrados: \t"<< error_count<< "\n";
	
	cout << "\n\tLista de DataProperties:\n";
	for(int i = 0; i<dataPropertys.size(); i++){
		cout << i+1 << "--" << dataPropertys[i] << "\n";
	}
	cout << "Total de DataProperties: " << dataPropertys.size() << ".\n\n";
	cout << "\tLista de ObjectProperties:\n";
	for(int i = 0; i<objPropertys.size(); i++){
		cout << i+1 << "--" << objPropertys[i] << "\n";
	}
	cout << "Total de ObjectProperties: " << objPropertys.size() << ".\n\n";

	cout << "Classes Primitivas: \t" << quant_primitiva << "\n";
	cout << "Classes Definidas: \t" << quant_definida << "\n";
	cout << "Classes Enumeradas: \t" << quant_enumerada << "\n";
	cout << "Classes Coberta: \t" << quant_coberta << "\n";
	cout << "Classes com \nAxioma de Fechamento: \t" << quant_axioma_fechamento << "\n";
	cout << "Classes Aninhadas: \t" << quant_aninhada << "\n";
	if(error_count<1 && semantic_error_count<1){
		cout << "Compilado com Sucesso\n";
	}
	else cout << "Compilacao Falhou\n";
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
