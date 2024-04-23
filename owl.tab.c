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
int contClasses;
extern char* yytext;
extern int yylineno;


#line 108 "owl.tab.c"

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
#define YYLAST   278

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
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
       0,    43,    43,    44,    45,    46,    49,    57,    63,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   172,   173,   174,   175,   176,   177,
     178,   182,   183,   184,   185,   186,   187,   188,   191,   214,
     232,   250,   263,   264,   265,   266,   267,   269,   270,   271,
     272,   273,   274,   282,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   308,   309,   312,
     315,   316,   319,   327,   341,   348,   369,   374,   375,   376,
     377,   378,   382,   383,   384,   385,   386,   389,   390,   393,
     394
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

#define YYPACT_NINF (-143)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     175,   211,  -143,   203,    12,  -143,  -143,  -143,  -143,  -143,
     162,   223,    12,    54,  -143,   211,    12,  -143,   211,    54,
      16,    28,    94,  -143,  -143,     5,   168,   167,    82,  -143,
    -143,    74,   200,   107,   200,  -143,   211,  -143,   142,    16,
       9,  -143,    29,    54,    12,    93,    24,   130,  -143,     6,
     162,    12,    33,    12,   162,   223,    54,   162,   223,  -143,
    -143,   171,   151,    24,    16,    58,   178,  -143,  -143,  -143,
    -143,  -143,   181,  -143,  -143,  -143,  -143,    12,    82,    66,
    -143,   202,    16,    67,   192,    28,    12,    24,  -143,  -143,
    -143,  -143,  -143,  -143,    16,   194,  -143,  -143,    93,    70,
     195,    44,   161,    24,    12,   215,  -143,    75,    93,   210,
      24,    12,     2,    12,    54,    54,   213,    12,  -143,   178,
     212,  -143,  -143,   151,    16,   229,    28,   216,    12,    16,
    -143,    12,  -143,    12,    24,   219,    12,    12,    28,    16,
      28,   202,  -143,   178,    80,    12,  -143,   222,   224,  -143,
      24,    54,  -143,   221,  -143,    16,   225,    12,   130,   226,
     231,    54,    54,    12,  -143,   178,  -143,   227,   234,  -143,
      16,  -143,    86,   232,  -143,  -143,   120,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,   120,   120,   126,    81,  -143,  -143,
    -143,    82,   120,    12,    24,   218,  -143,   235,    12,    12,
     120,   231,  -143
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     6,     0,     0,    38,    39,    40,    41,     5,
       0,     0,     0,     0,     1,     0,     0,     8,     0,     0,
      68,    10,    35,    76,     7,     0,    29,     9,     0,    24,
      81,    88,    23,    90,    22,     4,     0,     3,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      31,     0,     0,     0,     0,     0,    68,    67,    34,    11,
      37,    75,    78,    79,    74,    72,    73,     0,     0,     0,
      28,    26,     0,     0,    13,     0,     0,     0,    87,    21,
      19,    89,    20,    18,     0,     0,    59,    58,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,    53,     0,
       0,     0,     0,     0,     0,     0,    83,     0,    56,     0,
       0,    61,    62,     0,    55,     0,     0,     0,     0,    70,
      71,     0,    77,     0,     0,    78,     0,     0,    27,     0,
      15,    14,    12,     0,    84,     0,    60,    59,    58,    54,
       0,     0,    33,     0,    64,    65,     0,     0,     0,     0,
      50,     0,     0,     0,    82,     0,    85,     0,     0,    32,
       0,    66,    42,     0,    51,    52,     0,    25,    16,    17,
      86,    57,    69,    63,     0,     0,    48,     0,    49,    44,
      43,    45,     0,    53,     0,     0,    47,     0,     0,     0,
       0,    50,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,   240,    17,    -4,    -1,   108,   164,   152,   197,
     -24,   -17,   -37,  -143,    13,   -18,  -143,   180,    57,   -54,
      91,   -22,  -142,   -35,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    40,    31,     9,    27,    21,    10,    11,
      12,    13,   174,   109,   100,    22,   127,    68,    77,    73,
      49,    29,    30,    32,    34
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,   164,   166,    51,    43,    17,    20,    26,    97,    23,
      80,    24,    36,    23,    35,    17,    85,    37,    88,    38,
      23,    24,   128,   180,    67,    81,    82,    45,    25,    74,
      75,    62,    17,    41,    24,    59,    39,    23,    66,    48,
      70,    72,     8,    69,   122,    52,    20,    76,   130,    64,
      20,    26,    61,    20,    26,    86,    91,   111,    96,    65,
     113,   125,    23,    33,    79,   126,    83,   114,   115,   148,
      23,    23,    25,   106,    23,    25,   138,   120,   140,    23,
     102,    99,   116,   132,    23,    23,    67,    24,   108,   112,
      23,    66,   123,    53,   121,   107,    17,   133,   129,   165,
      66,    71,    28,   193,   135,   184,    44,   118,   139,   151,
     153,    42,   119,   144,   141,   142,    46,   163,   159,   147,
      98,   161,    25,   162,    66,    24,    56,   155,   179,   156,
      23,    63,    66,   160,    23,    24,   132,   149,    28,   188,
      78,   167,   154,    87,   117,   191,    28,   189,   190,    28,
      78,   169,   154,   173,    17,   196,   103,   104,    60,    71,
     131,   177,   178,    90,    17,    17,    93,   137,   171,    71,
     110,    95,    23,    24,   103,    79,     1,    19,     5,    50,
       7,   128,    23,   183,    54,     2,    57,    47,    39,   197,
      63,   157,    94,   187,   201,   202,    28,    17,   134,    24,
     105,   187,   187,    14,    15,     7,     8,   168,   195,   187,
     145,     5,     6,     2,    84,     7,   124,   187,    89,    23,
      24,    92,     5,     6,     7,     8,    17,    23,    24,    55,
     136,    58,   143,   146,    28,    28,   150,   152,   158,   -70,
     199,   -71,   170,    16,   101,     0,   172,   175,   181,    28,
     176,   198,   182,   186,   200,     0,    28,     0,     0,     0,
       0,     0,     0,   185,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   194
};

static const yytype_int16 yycheck[] =
{
       4,   143,   144,    27,    21,     3,    10,    11,    62,     4,
      47,     5,    16,     4,    15,     3,    51,    18,    53,    19,
       4,     5,    20,   165,    42,    47,    20,    22,    11,     5,
       6,    22,     3,    20,     5,    36,    20,     4,    42,    26,
      44,    45,    14,    43,    98,    28,    50,    23,   102,    20,
      54,    55,    39,    57,    58,    22,    56,    81,    62,    42,
      84,    17,     4,     9,    47,    21,    49,    84,    85,   123,
       4,     4,    55,    77,     4,    58,   111,    95,   113,     4,
      22,    64,    86,   105,     4,     4,   104,     5,    22,    22,
       4,    95,    22,    19,    98,    78,     3,    22,   102,    19,
     104,     8,    11,    22,   108,    19,    12,    94,   112,   126,
     128,    20,    95,   117,   114,   115,    25,   141,   136,   123,
      63,   138,   105,   140,   128,     5,    19,   131,   163,   133,
       4,    40,   136,   137,     4,     5,   158,   124,    47,   176,
      20,   145,   129,    52,    87,    19,    55,   184,   185,    58,
      20,   151,   139,   157,     3,   192,    65,    66,    16,     8,
     103,   161,   162,    55,     3,     3,    58,   110,   155,     8,
      79,    20,     4,     5,    83,   158,     1,    15,    11,    27,
      13,    20,     4,   170,    32,    10,    34,    19,    20,   193,
      99,   134,    21,   176,   198,   199,   105,     3,   107,     5,
      19,   184,   185,     0,     1,    13,    14,   150,   191,   192,
     119,    11,    12,    10,    50,    13,    21,   200,    54,     4,
       5,    57,    11,    12,    13,    14,     3,     4,     5,    32,
      20,    34,    19,    21,   143,   144,     7,    21,    19,    17,
      22,    17,    21,     3,    64,    -1,    21,    21,    21,   158,
      19,   194,    18,    21,    19,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187
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
      30,    48,    31,    30,    21,    20,    28,    43,    42,    27,
      38,    41,    22,    44,    44,    19,    28,    27,    22,    37,
      44,    34,    22,    34,    35,    35,    28,    42,    38,    27,
      39,    28,    43,    22,    21,    17,    21,    40,    20,    28,
      43,    42,    45,    22,    44,    28,    20,    42,    47,    28,
      47,    48,    48,    19,    28,    44,    21,    28,    43,    38,
       7,    35,    21,    39,    38,    28,    28,    42,    19,    39,
      28,    35,    35,    34,    46,    19,    46,    28,    42,    48,
      21,    38,    21,    28,    36,    21,    19,    48,    48,    47,
      46,    21,    18,    38,    19,    44,    21,    27,    36,    36,
      36,    19,    44,    22,    44,    27,    36,    28,    42,    22,
      19,    28,    28
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
      38,    38,    38,    38,    38,    38,    38,    39,    39,    40,
      41,    41,    42,    42,    42,    43,    44,    45,    45,    45,
      45,    45,    46,    46,    46,    46,    46,    47,    47,    48,
      48
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     1,     1,     1,     2,
       2,     4,     6,     4,     6,     6,     8,     8,     4,     4,
       4,     4,     2,     2,     1,     7,     3,     5,     3,     1,
       2,     3,     7,     6,     3,     1,     2,     3,     1,     1,
       1,     1,     5,     7,     7,     7,    10,     8,     6,     6,
       4,     5,     5,     1,     5,     4,     4,     7,     3,     3,
       5,     4,     4,     7,     5,     5,     6,     3,     1,     4,
       3,     3,     1,     1,     1,     1,     1,     5,     3,     3,
       4,     1,     6,     4,     5,     6,     7,     3,     1,     3,
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
  case 6: /* keyword_class: KEYWORD_CLASS  */
#line 49 "owl.y"
                            {
	newClass = true;
	checkingClasses = false;
	canVerifyProp = false;
	inDisjoint = false;
	contClasses = 0;
	
}
#line 1293 "owl.tab.c"
    break;

  case 7: /* prop_name: PROP  */
#line 57 "owl.y"
                {
	canVerifyProp = true;
	strcpy(currentProp,yytext);

}
#line 1303 "owl.tab.c"
    break;

  case 8: /* class_name: CLASS  */
#line 63 "owl.y"
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
			
			if(propsAxioma.count(prop)==0){
				cout << "\nErro de semantica: Propriedade não declarada no axioma de fechamento. Linha "<< kwLine <<"\n";
				semantic_error_count++;
				semanticErrorFound = true;
				checkingClasses = false;
			}
			else{
				classesAxioma = propsAxioma[prop];
				
				bool hasClass = false;
			for(int i = 0; i<classesAxioma.size(); i++){
				if(strcmp(classesAxioma[i].c_str(),yytext)==0){
					contClasses--;
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

		std::string prop1(currentProp);
		if(!inDisjoint){
			if(count(dataPropertys.begin(),dataPropertys.end(),prop1)>0){
				cout << "\nErro Semantico: Tentativa de atribuicao de objeto a DataPropety "<<currentProp<<". Linha "<< yylineno <<"\n";
				currentProp = new char[100];
				semanticErrorFound = true;
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
#line 1397 "owl.tab.c"
    break;

  case 24: /* body_prop_subclassof: props_subclass_of  */
#line 172 "owl.y"
                                         {quant_primitiva++;}
#line 1403 "owl.tab.c"
    break;

  case 25: /* body_prop_subclassof: class_name VIRGULA props_subclass_of keyword_disjoint acept_class keyword_individuals acept_individual  */
#line 173 "owl.y"
                                                                                                                                                 {quant_primitiva++;}
#line 1409 "owl.tab.c"
    break;

  case 26: /* body_prop_subclassof: class_name VIRGULA props_subclass_of  */
#line 174 "owl.y"
                                                                               {quant_primitiva++;}
#line 1415 "owl.tab.c"
    break;

  case 27: /* body_prop_subclassof: class_name VIRGULA props_subclass_of keyword_disjoint acept_class  */
#line 175 "owl.y"
                                                                                                            {quant_primitiva++;}
#line 1421 "owl.tab.c"
    break;

  case 28: /* body_prop_subclassof: class_name VIRGULA fecha  */
#line 176 "owl.y"
                                                                   {quant_axioma_fechamento++;}
#line 1427 "owl.tab.c"
    break;

  case 29: /* body_prop_subclassof: class_name  */
#line 177 "owl.y"
                                                     {quant_aninhada++;}
#line 1433 "owl.tab.c"
    break;

  case 30: /* body_prop_subclassof: class_name aux  */
#line 178 "owl.y"
                                                        {quant_aninhada++;}
#line 1439 "owl.tab.c"
    break;

  case 31: /* body_prop_equivalentto: ABRE_CHAVE acept_individual FECHA_CHAVE  */
#line 182 "owl.y"
                                                                {quant_enumerada++;}
#line 1445 "owl.tab.c"
    break;

  case 32: /* body_prop_equivalentto: class_name keyword ABRE_PARENTESES props_equivalent_to FECHA_PARENTESES keyword_individuals acept_individual  */
#line 183 "owl.y"
                                                                                                                                                         {quant_definida++;}
#line 1451 "owl.tab.c"
    break;

  case 33: /* body_prop_equivalentto: class_name keyword ABRE_PARENTESES props_equivalent_to param FECHA_PARENTESES  */
#line 184 "owl.y"
                                                                                                                          {quant_definida++;}
#line 1457 "owl.tab.c"
    break;

  case 34: /* body_prop_equivalentto: class_name keyword props_equivalent_to  */
#line 185 "owl.y"
                                                                                   {quant_definida++;}
#line 1463 "owl.tab.c"
    break;

  case 35: /* body_prop_equivalentto: class_or_class  */
#line 186 "owl.y"
                                                           {quant_coberta++;}
#line 1469 "owl.tab.c"
    break;

  case 36: /* body_prop_equivalentto: class_name aux  */
#line 187 "owl.y"
                                                           {quant_aninhada++;}
#line 1475 "owl.tab.c"
    break;

  case 37: /* body_prop_equivalentto: class_or_class KEYWORD_SUBCLASSOF class_name  */
#line 188 "owl.y"
                                                                                         {quant_aninhada++;}
#line 1481 "owl.tab.c"
    break;

  case 38: /* keyword_equivalent: KEYWORD_EQUIVALENTTO  */
#line 191 "owl.y"
                                         {
	checkingClasses = false;
	currentProp = new char[100];
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
#line 1508 "owl.tab.c"
    break;

  case 39: /* keyword_subclass: KEYWORD_SUBCLASSOF  */
#line 214 "owl.y"
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
#line 1530 "owl.tab.c"
    break;

  case 40: /* keyword_disjoint: KEYWORD_DISJOINTCLASSES  */
#line 232 "owl.y"
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
#line 1552 "owl.tab.c"
    break;

  case 41: /* keyword_individuals: KEYWORD_INDIVIDUALS  */
#line 250 "owl.y"
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
#line 1568 "owl.tab.c"
    break;

  case 52: /* fecha: prop_name axioma_quantifier ABRE_PARENTESES class_or_class FECHA_PARENTESES  */
#line 274 "owl.y"
                                                                                       {
		if(contClasses>0){
			cout << "\nErro de semantica: Ausencia classes declaradas no axioma de fechamento. Linha "<< kwLine <<"\n";
			semantic_error_count++;
			semanticErrorFound = true;
			checkingClasses = false;
	 }}
#line 1580 "owl.tab.c"
    break;

  case 53: /* axioma_quantifier: QUANTIFIER  */
#line 282 "owl.y"
                              {
	kwLine = yylineno; 
	seekingProps=false;
	checkingClasses=true;

	strcpy(chosenProp,currentProp);
	std::string prop(chosenProp);
	contClasses = propsAxioma[prop].size();	
	}
#line 1594 "owl.tab.c"
    break;

  case 72: /* number: NUM  */
#line 319 "owl.y"
            {
	if(strcmp(currentType,"xsd:float")==0 ){
		cout << "\nErro Semantico: O valor esperado era do tipo xsd:float. Linha "<< yylineno <<"\n";
		semanticErrorFound = true;
		semantic_error_count++;

	}
	}
#line 1607 "owl.tab.c"
    break;

  case 73: /* number: FLOAT  */
#line 327 "owl.y"
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
#line 1626 "owl.tab.c"
    break;

  case 74: /* number: PROP  */
#line 341 "owl.y"
              {
		cout << "\nErro Semantico: O valor esperado era do tipo xsd:integer. Linha "<< yylineno <<"\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
#line 1636 "owl.tab.c"
    break;

  case 75: /* type: TYPE  */
#line 348 "owl.y"
           {
	strcpy(currentType,yytext);
	std::string prop1(currentProp);
	if(!inDisjoint){
		if(count(objPropertys.begin(),objPropertys.end(),prop1)>0){
		cout << "\nErro Semantico: Tentativa de atribuicao de tipo a ObjectPropety "<<currentProp<<". Linha "<< yylineno <<"\n";
		currentProp = new char[100];
		semanticErrorFound = true;
		semantic_error_count++;
	}
	}
	

	std::string prop(currentProp);
		int quant = count(dataPropertys.begin(),dataPropertys.end(),prop);
		int quant_o = count(objPropertys.begin(),objPropertys.end(),prop);
		if(quant==0 && quant_o==0 && !prop.empty()){
			dataPropertys.push_back(prop);
	}
}
#line 1661 "owl.tab.c"
    break;

  case 76: /* keyword: KEYWORD  */
#line 369 "owl.y"
                 {
	strcpy(currentLesserKw,yytext);

}
#line 1670 "owl.tab.c"
    break;


#line 1674 "owl.tab.c"

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

#line 397 "owl.y"


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

	if(error_count<1 && semantic_error_count<1){
		cout << "Compilado com Sucesso\n";
		cout << "Classes Primitivas: \t" << quant_primitiva << "\n";
		cout << "Classes Definidas: \t" << quant_definida << "\n";
		cout << "Classes Enumeradas: \t" << quant_enumerada << "\n";
		cout << "Classes Coberta: \t" << quant_coberta << "\n";
		cout << "Classes com \nAxioma de Fechamento: \t" << quant_axioma_fechamento << "\n";
		cout << "Classes Aninhadas: \t" << quant_aninhada << "\n";
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
