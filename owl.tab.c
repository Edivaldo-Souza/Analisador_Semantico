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
bool classHasSortError = false;
int kwLine;
extern char* yytext;
extern int yylineno;


#line 98 "owl.tab.c"

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
  YYSYMBOL_YYACCEPT = 23,                  /* $accept  */
  YYSYMBOL_class = 24,                     /* class  */
  YYSYMBOL_class_name = 25,                /* class_name  */
  YYSYMBOL_body = 26,                      /* body  */
  YYSYMBOL_body_prop_subclassof = 27,      /* body_prop_subclassof  */
  YYSYMBOL_body_prop_equivalentto = 28,    /* body_prop_equivalentto  */
  YYSYMBOL_keyword_equivalent = 29,        /* keyword_equivalent  */
  YYSYMBOL_keyword_subclass = 30,          /* keyword_subclass  */
  YYSYMBOL_keyword_disjoint = 31,          /* keyword_disjoint  */
  YYSYMBOL_keyword_individuals = 32,       /* keyword_individuals  */
  YYSYMBOL_fecha = 33,                     /* fecha  */
  YYSYMBOL_aux = 34,                       /* aux  */
  YYSYMBOL_class_or_class = 35,            /* class_or_class  */
  YYSYMBOL_param = 36,                     /* param  */
  YYSYMBOL_props_equivalent_to = 37,       /* props_equivalent_to  */
  YYSYMBOL_props_subclass_of = 38,         /* props_subclass_of  */
  YYSYMBOL_key_prop = 39,                  /* key_prop  */
  YYSYMBOL_acept_class = 40,               /* acept_class  */
  YYSYMBOL_acept_individual = 41           /* acept_individual  */
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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    34,    35,    36,    40,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    69,    70,    71,    72,    73,    74,    77,    78,
      79,    80,    81,    82,    83,    86,   101,   114,   126,   136,
     137,   138,   139,   140,   142,   143,   144,   145,   146,   147,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   171,   172,   175,   178,   179,   182,   183,   184,   185,
     186,   189,   190,   191,   192,   193,   196,   197,   200,   201
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
  "QUANTIFIER", "$accept", "class", "class_name", "body",
  "body_prop_subclassof", "body_prop_equivalentto", "keyword_equivalent",
  "keyword_subclass", "keyword_disjoint", "keyword_individuals", "fecha",
  "aux", "class_or_class", "param", "props_equivalent_to",
  "props_subclass_of", "key_prop", "acept_class", "acept_individual", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-65)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     108,   124,    36,   111,  -120,  -120,  -120,  -120,  -120,   105,
     147,    42,     8,  -120,   124,  -120,   124,    36,    68,     8,
      11,    46,   138,   109,     5,   134,   128,  -120,   139,    92,
     140,    92,  -120,  -120,   124,    29,    14,    72,  -120,   144,
       8,   158,    76,    16,   156,   122,   105,    42,    42,    42,
     105,   147,     8,   105,   147,  -120,   159,    18,    82,  -120,
    -120,   160,    10,    50,   143,  -120,  -120,  -120,    19,   162,
    -120,   128,   163,   165,   167,   146,  -120,   119,    11,    11,
    -120,  -120,  -120,  -120,  -120,  -120,   168,   166,    45,    20,
     152,   110,   171,  -120,   150,    22,    72,    72,   169,    48,
      24,    42,   173,   161,  -120,    79,    42,     8,     8,     8,
     174,    72,  -120,   168,    49,    72,   172,    11,   157,  -120,
     177,   164,    30,  -120,   179,   170,   168,   178,   180,    11,
      70,   182,  -120,    11,   128,  -120,  -120,    72,  -120,   175,
     176,  -120,   181,     8,  -120,   185,  -120,    72,   183,    76,
     184,   187,   186,     8,   182,  -120,  -120,     8,    42,  -120,
      72,   188,  -120,   189,    85,  -120,  -120,   190,    87,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,    25,  -120,    91,    85,
      85,   191,    34,    85,   193,  -120,  -120,   192,   194,  -120,
     195,   183,    85,   196,  -120
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    35,    36,    37,    38,     5,     0,
       0,     0,     0,     6,     0,     1,     0,     0,    62,     0,
       8,    32,    27,     0,     0,     7,     0,    70,    77,    21,
      79,    20,     3,     4,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    62,     0,     0,    61,
      31,     0,     0,     0,     0,    28,     9,    34,     0,     0,
      26,    24,     0,     0,     0,    67,    68,    11,     0,     0,
      76,    19,    17,    78,    18,    16,     0,     0,     0,     0,
       0,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    69,     0,     0,     0,     0,     0,
       0,    64,    65,     0,     0,    51,     0,     0,     0,    56,
       0,     0,     0,    52,     0,    67,     0,     0,     0,    25,
      73,     0,    66,    13,    12,    10,    22,    59,    58,     0,
      54,    50,     0,     0,    30,     0,    55,     0,    47,     0,
       0,     0,     0,     0,     0,    74,    71,     0,     0,    60,
       0,     0,    29,     0,     0,    48,    49,     0,    39,    23,
      75,    14,    15,    57,    63,    53,     0,    46,    45,     0,
       0,     0,     0,     0,    42,    40,    41,     0,     0,    44,
       0,    47,     0,     0,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,   197,   -13,    95,    32,    97,   125,   -11,   -16,
     -40,   -18,   -19,  -120,   133,   -34,  -119,   -42,    -9
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,    14,     8,    25,    20,     9,    10,    11,    12,
     165,    90,    21,   118,    60,    26,    27,    29,    31
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    32,    70,    33,    40,    78,    79,    80,    71,    44,
      39,   155,   156,    93,    47,    48,    59,    30,    61,    64,
      72,    55,    87,    98,    61,     7,    87,    45,   127,   181,
      94,    66,    56,   147,    57,   170,    62,   188,    73,    13,
      88,    99,   114,    83,   122,    28,   128,   182,   111,    58,
     113,   125,   140,   112,   126,    95,    76,   112,    41,   129,
     101,   107,   108,   109,   133,   113,   106,    59,   126,    94,
      96,   132,    35,    36,    23,   121,    63,    36,    77,   123,
      23,    68,    81,    23,    24,    84,    63,    89,    37,   154,
     176,   179,    37,   138,   139,   183,    69,   141,   134,   135,
     136,   143,    37,     4,     5,    69,   180,   150,    18,     1,
     184,    15,    16,   153,    43,   132,   172,   157,     2,   159,
      19,    17,    46,   158,   177,    75,    50,   116,    53,   138,
      76,   117,     6,     7,   162,     4,     5,     6,     7,   185,
     186,     6,   173,   189,   169,     4,    82,     6,   171,    85,
      22,    23,    24,    56,    51,   120,    54,    42,    49,    52,
      65,    67,    74,    86,    97,   105,    92,   100,   103,   102,
     104,    56,   110,   115,   119,   124,   130,   137,   144,   142,
     131,   145,   148,   152,   151,   146,    23,   161,   163,   149,
     167,    91,     0,   -64,     0,   191,   160,   187,   190,   194,
       0,     0,   164,     0,     0,   166,   174,   168,     0,     0,
     175,   178,     0,   192,    34,     0,     0,   193
};

static const yytype_int16 yycheck[] =
{
      18,    14,    42,    16,    20,    47,    48,    49,    42,     4,
      19,   130,   131,     3,    25,    26,    35,     9,     4,    37,
       4,    34,     4,     4,     4,    14,     4,    22,     4,     4,
      20,    40,     3,     3,     5,   154,    22,     3,    22,     3,
      22,    22,    22,    52,    22,     3,    22,    22,     3,    20,
      20,     3,     3,     8,    20,     5,     8,     8,    12,   101,
      71,    77,    78,    79,   106,    20,    77,    86,    20,    20,
      20,   105,     4,     5,     4,    94,     4,     5,    46,    97,
       4,     5,    50,     4,     5,    53,     4,     5,    20,    19,
       5,     4,    20,   111,   113,     4,    20,   115,   107,   108,
     109,   117,    20,    11,    12,    20,    19,   126,     3,     1,
      19,     0,     1,   129,     5,   149,   158,   133,    10,   137,
      15,    10,    25,   134,   164,     3,    29,    17,    31,   147,
       8,    21,    13,    14,   143,    11,    12,    13,    14,   179,
     180,    13,   160,   183,   153,    11,    51,    13,   157,    54,
       3,     4,     5,     3,    29,     5,    31,    19,    19,    19,
      16,     3,     6,     4,    21,    19,     6,     5,     3,     6,
       3,     3,     6,    21,     3,     6,     3,     3,    21,     7,
      19,     4,     3,     3,     6,    21,     4,     6,     3,    19,
       3,    58,    -1,    17,    -1,     3,    21,     6,     5,     3,
      -1,    -1,    19,    -1,    -1,    21,    18,    21,    -1,    -1,
      21,    21,    -1,    19,    17,    -1,    -1,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    10,    24,    11,    12,    13,    14,    26,    29,
      30,    31,    32,     3,    25,     0,     1,    10,     3,    15,
      28,    35,     3,     4,     5,    27,    38,    39,     3,    40,
       9,    41,    26,    26,    25,     4,     5,    20,    34,    41,
      32,    12,    19,     5,     4,    22,    29,    31,    31,    19,
      29,    30,    19,    29,    30,    26,     3,     5,    20,    35,
      37,     4,    22,     4,    34,    16,    41,     3,     5,    20,
      33,    38,     4,    22,     6,     3,     8,    28,    40,    40,
      40,    28,    27,    41,    28,    27,     4,     4,    22,     5,
      34,    37,     6,     3,    20,     5,    20,    21,     4,    22,
       5,    31,     6,     3,     3,    19,    31,    32,    32,    32,
       6,     3,     8,    20,    22,    21,    17,    21,    36,     3,
       5,    35,    22,    34,     6,     3,    20,     4,    22,    40,
       3,    19,    38,    40,    41,    41,    41,     3,    34,    35,
       3,    34,     7,    32,    21,     4,    21,     3,     3,    19,
      35,     6,     3,    32,    19,    39,    39,    32,    31,    34,
      21,     6,    41,     3,    19,    33,    21,     3,    21,    41,
      39,    41,    40,    34,    18,    21,     5,    33,    21,     4,
      19,     4,    22,     4,    19,    33,    33,     6,     3,    33,
       5,     3,    19,    22,     3
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    23,    24,    24,    24,    24,    25,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    27,    27,    27,    27,    27,    27,    28,    28,
      28,    28,    28,    28,    28,    29,    30,    31,    32,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    35,    35,    36,    37,    37,    38,    38,    38,    38,
      38,    39,    39,    39,    39,    39,    40,    40,    41,    41
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     1,     2,     2,     4,
       6,     4,     6,     6,     8,     8,     4,     4,     4,     4,
       2,     2,     5,     7,     3,     5,     3,     1,     3,     7,
       6,     3,     1,     2,     3,     1,     1,     1,     1,     5,
       7,     7,     7,    10,     8,     6,     6,     4,     5,     5,
       5,     4,     4,     7,     3,     5,     4,     7,     5,     5,
       6,     3,     1,     4,     3,     3,     5,     3,     3,     4,
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
  case 6: /* class_name: CLASS  */
#line 40 "owl.y"
                  {
		currentKw = new char[100];
		currentProp = new char[100];
		currentClass = new char[strlen(yytext)+1]; 
		strcpy(currentClass,yytext);
		strcpy(currentKw,"Class:");
		kwLine = yylineno;
		cout << "\nClass Atual: "<< currentClass << "\n";
	}
#line 1252 "owl.tab.c"
    break;

  case 22: /* body_prop_subclassof: props_subclass_of keyword_disjoint acept_class keyword_individuals acept_individual  */
#line 69 "owl.y"
                                                                                                          {quant_primitiva++;}
#line 1258 "owl.tab.c"
    break;

  case 23: /* body_prop_subclassof: CLASS VIRGULA props_subclass_of keyword_disjoint acept_class keyword_individuals acept_individual  */
#line 70 "owl.y"
                                                                                                                                            {quant_primitiva++;}
#line 1264 "owl.tab.c"
    break;

  case 24: /* body_prop_subclassof: CLASS VIRGULA props_subclass_of  */
#line 71 "owl.y"
                                                                          {quant_primitiva++;}
#line 1270 "owl.tab.c"
    break;

  case 25: /* body_prop_subclassof: CLASS VIRGULA props_subclass_of keyword_disjoint acept_class  */
#line 72 "owl.y"
                                                                                                       {quant_primitiva++;}
#line 1276 "owl.tab.c"
    break;

  case 26: /* body_prop_subclassof: CLASS VIRGULA fecha  */
#line 73 "owl.y"
                                                              {quant_axioma_fechamento++;}
#line 1282 "owl.tab.c"
    break;

  case 27: /* body_prop_subclassof: CLASS  */
#line 74 "owl.y"
                                                {quant_aninhada++;}
#line 1288 "owl.tab.c"
    break;

  case 28: /* body_prop_equivalentto: ABRE_CHAVE acept_individual FECHA_CHAVE  */
#line 77 "owl.y"
                                                                {quant_enumerada++;}
#line 1294 "owl.tab.c"
    break;

  case 29: /* body_prop_equivalentto: CLASS KEYWORD ABRE_PARENTESES props_equivalent_to FECHA_PARENTESES keyword_individuals acept_individual  */
#line 78 "owl.y"
                                                                                                                                                    {quant_definida++;}
#line 1300 "owl.tab.c"
    break;

  case 30: /* body_prop_equivalentto: CLASS KEYWORD ABRE_PARENTESES props_equivalent_to param FECHA_PARENTESES  */
#line 79 "owl.y"
                                                                                                                     {quant_definida++;}
#line 1306 "owl.tab.c"
    break;

  case 31: /* body_prop_equivalentto: CLASS KEYWORD props_equivalent_to  */
#line 80 "owl.y"
                                                                              {quant_definida++;}
#line 1312 "owl.tab.c"
    break;

  case 32: /* body_prop_equivalentto: class_or_class  */
#line 81 "owl.y"
                                                           {quant_coberta++;}
#line 1318 "owl.tab.c"
    break;

  case 33: /* body_prop_equivalentto: CLASS aux  */
#line 82 "owl.y"
                                                      {quant_aninhada++;}
#line 1324 "owl.tab.c"
    break;

  case 34: /* body_prop_equivalentto: class_or_class KEYWORD_SUBCLASSOF CLASS  */
#line 83 "owl.y"
                                                                                    {quant_aninhada++;}
#line 1330 "owl.tab.c"
    break;

  case 35: /* keyword_equivalent: KEYWORD_EQUIVALENTTO  */
#line 86 "owl.y"
                                         {
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
#line 1349 "owl.tab.c"
    break;

  case 36: /* keyword_subclass: KEYWORD_SUBCLASSOF  */
#line 101 "owl.y"
                                     {
	if(strcmp("DisjointClasses:",currentKw)==0){
		cout << "\nErro de semantica: DisjointClasses antes de SubClassOf. Linha "<< kwLine <<".\n";
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de SubClassOf. Linha "<< kwLine <<".\n";
	}

	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
#line 1366 "owl.tab.c"
    break;

  case 37: /* keyword_disjoint: KEYWORD_DISJOINTCLASSES  */
#line 114 "owl.y"
                                          {
	if(strcmp("Class:",currentKw)==0){
		cout << "\nErro de semantica: Ausencia dos termos obrigatorios SubClassOf/EquivalentTo . Linha "<< kwLine <<".\n";
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de DisjointClasses. Linha "<< kwLine <<".\n";
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
#line 1382 "owl.tab.c"
    break;

  case 38: /* keyword_individuals: KEYWORD_INDIVIDUALS  */
#line 126 "owl.y"
                                         {
	if(strcmp("Class:",currentKw)==0){
		cout << "\nErro de semantica: Ausencia dos termos obrigatorios SubClassOf/EquivalentTo no escopo da Classe. Linha "<< kwLine <<".\n";
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
#line 1395 "owl.tab.c"
    break;


#line 1399 "owl.tab.c"

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

#line 204 "owl.y"


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

	error_count++;
	cout << "\n";
    cout << "Erro de Sintaxe: *"<< yytext <<"*, linha " << yylineno << "\n";
	
}
