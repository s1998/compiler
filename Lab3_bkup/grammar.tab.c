/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "grammar.y" /* yacc.c:339  */

#include <cstdio>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

extern stack<string> st;
extern stack<int> sp;

int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
void yyerror(char *s);

extern char *yytext;
#define YYDEBUG_LEXER_TEXT yytext

extern void helper();

#line 87 "grammar.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    K_IF = 1,
    K_ELSE = 2,
    K_WHILE = 3,
    K_DO = 4,
    K_ELIF = 5,
    K_FOR = 6,
    K_BEGIN = 7,
    K_END = 8,
    K_PROCESSOR = 9,
    K_ISA = 10,
    K_CLOCK_SPEED = 11,
    K_L1_MEMORY = 12,
    K_L2_MEMORY = 13,
    K_IS_RUNNING = 14,
    K_SUBMIT_JOBS = 15,
    K_GET_CLOCK_SPEED = 16,
    K_RUN = 17,
    K_DISCARD_JOB = 18,
    K_ARM = 19,
    K_AMD = 20,
    K_CDC = 21,
    K_MIPS = 22,
    K_LINK = 23,
    K_START_POINT = 24,
    K_END_POINT = 25,
    K_BANDWIDTH = 26,
    K_CHANNEL_CAPACITY = 27,
    K_MEMORY = 28,
    K_MEMORY_TYPE = 29,
    K_MEM_SIZE = 30,
    K_GET_AVAILABLE_MEMORY = 31,
    K_JOB = 32,
    K_JOB_ID = 33,
    K_FLOPS_REQUIRED = 34,
    K_DEADLINE = 35,
    K_MEM_REQUIRED = 36,
    K_AFFINITY = 37,
    K_GET_MEMORY = 38,
    K_CLUSTER = 39,
    K_PROCESSORS = 40,
    K_TOPOLOGY = 41,
    K_LINK_BANDWIDTH = 42,
    K_LINK_CAPACITY = 43,
    K_NAME = 44,
    ID = 45,
    INT = 46,
    FLOAT = 47,
    LP = 48,
    RP = 49,
    LB = 50,
    RB = 51,
    STRING = 52,
    LS = 53,
    RS = 54,
    PLUS = 55,
    MINUS = 56,
    MULT = 57,
    DIV = 58,
    RELOP = 59,
    COMMA = 60,
    SEMI = 61,
    COLON = 62,
    ASSIGN = 63,
    L_AND = 64,
    L_OR = 65,
    L_NOT = 66,
    DOT = 67,
    EOFILE = 68,
    K_PRIMARY = 69,
    K_SECONDARY = 70,
    K_CACHE = 71,
    SPACE = 72,
    K_PRINT_STATS = 73,
    K_SCHEDULER = 74,
    K_JOBS = 75,
    K_ALGO = 76,
    K_FCFS = 77,
    K_SJN = 78,
    K_SRT = 79,
    K_RRS = 80,
    K_WAIT = 81
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 219 "grammar.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   290

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  310

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   257

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   108,   110,   111,   112,   113,   114,   115,
     116,   118,   119,   120,   121,   122,   123,   124,   126,   127,
     128,   130,   131,   132,   133,   134,   136,   138,   139,   140,
     142,   143,   144,   145,   147,   148,   150,   151,   152,   154,
     155,   156,   158,   160,   161,   162,   163,   164,   165,   167,
     168,   169,   170,   171,   172,   174,   174,   179,   179,   185,
     185,   189,   189,   195,   195,   201,   201,   205,   207,   208,
     209,   210,   212,   214,   215,   217,   218,   219,   221,   222,
     223,   224,   225,   226,   228,   229,   230,   231,   233,   234,
     235,   237,   238,   239,   240,   241,   242,   244,   245,   246,
     247,   248,   249,   251,   252,   253,   255,   256,   257,   258,
     260,   261,   263,   264,   265,   267,   269,   270,   272
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "K_IF", "K_ELSE", "K_WHILE", "K_DO",
  "K_ELIF", "K_FOR", "K_BEGIN", "K_END", "K_PROCESSOR", "K_ISA",
  "K_CLOCK_SPEED", "K_L1_MEMORY", "K_L2_MEMORY", "K_IS_RUNNING",
  "K_SUBMIT_JOBS", "K_GET_CLOCK_SPEED", "K_RUN", "K_DISCARD_JOB", "K_ARM",
  "K_AMD", "K_CDC", "K_MIPS", "K_LINK", "K_START_POINT", "K_END_POINT",
  "K_BANDWIDTH", "K_CHANNEL_CAPACITY", "K_MEMORY", "K_MEMORY_TYPE",
  "K_MEM_SIZE", "K_GET_AVAILABLE_MEMORY", "K_JOB", "K_JOB_ID",
  "K_FLOPS_REQUIRED", "K_DEADLINE", "K_MEM_REQUIRED", "K_AFFINITY",
  "K_GET_MEMORY", "K_CLUSTER", "K_PROCESSORS", "K_TOPOLOGY",
  "K_LINK_BANDWIDTH", "K_LINK_CAPACITY", "K_NAME", "ID", "INT", "FLOAT",
  "LP", "RP", "LB", "RB", "STRING", "LS", "RS", "PLUS", "MINUS", "MULT",
  "DIV", "RELOP", "COMMA", "SEMI", "COLON", "ASSIGN", "L_AND", "L_OR",
  "L_NOT", "DOT", "EOFILE", "K_PRIMARY", "K_SECONDARY", "K_CACHE", "SPACE",
  "K_PRINT_STATS", "K_SCHEDULER", "K_JOBS", "K_ALGO", "K_FCFS", "K_SJN",
  "K_SRT", "K_RRS", "K_WAIT", "$accept", "statements", "statement",
  "function_call_1", "function_call_2", "bool_returning_statements",
  "bool_returning_statement", "assign_statements", "assign_statement",
  "expression", "term_prime", "term", "factor", "factor_prime",
  "constructors", "processor_params", "$@1", "link_params", "$@2",
  "memory_params", "$@3", "job_params", "$@4", "cluster_params", "$@5",
  "scheduler_params", "$@6", "processor_param_isa", "ISA_values",
  "processor_param_clock_speed", "processor_param_l1_memory",
  "processor_param_l2_memory", "link_param_start_point",
  "link_param_end_point", "link_param_bandwidth",
  "link_param_channel_capacity", "link_param_name",
  "memory_param_memory_type", "memory_param_mem_size", "memory_param_name",
  "memory_type_values", "job_param_job_id", "job_param_flops_required",
  "job_param_deadline", "job_param_mem_required", "job_param_affinity",
  "cluster_param_processors", "cluster_param_topology",
  "cluster_param_link_bandwidth", "cluster_param_link_capacity",
  "cluster_param_name", "scheduler_param_jobs",
  "scheduler_param_processors", "scheduler_param_algo", "algo_type_values",
  "array_num", "array_num_items", "array_id", "array_id_items", "epsilon", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81
};
# endif

#define YYPACT_NINF -241

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-241)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,   -45,   -34,   -26,    24,    -9,     4,     9,    47,    24,
    -241,  -241,  -241,    37,    37,    15,    48,   -37,    40,    53,
       1,    -3,  -241,  -241,    35,  -241,  -241,    37,  -241,    37,
    -241,    51,   -28,  -241,    45,    12,    16,  -241,    56,   -19,
      46,    59,  -241,  -241,    71,    63,    72,    74,    73,    76,
      77,    78,    80,    82,    70,    83,  -241,  -241,    85,    86,
      87,    89,    90,    91,  -241,    -3,    92,    93,  -241,    94,
      37,    37,    70,    70,    70,    70,    70,    95,    37,    15,
    -241,    88,  -241,  -241,    84,   130,   119,   117,   116,   110,
      93,    79,   102,    11,   104,   106,   107,   108,  -241,  -241,
    -241,    24,  -241,  -241,  -241,  -241,  -241,  -241,  -241,    24,
      97,  -241,   114,   109,  -241,     1,    98,   111,  -241,    99,
     115,  -241,   103,   118,  -241,   105,   120,  -241,   112,   121,
    -241,   113,   122,  -241,  -241,   123,    70,   125,  -241,  -241,
    -241,  -241,   127,   128,    37,    88,  -241,  -241,  -241,    75,
    -241,   124,   129,  -241,   126,    21,  -241,   131,    70,  -241,
     132,   134,  -241,   133,   134,  -241,   140,  -241,   135,  -241,
     163,  -241,   136,  -241,  -241,  -241,  -241,  -241,  -241,   171,
     137,  -241,   158,   138,  -241,  -241,  -241,  -241,   159,   139,
    -241,   154,   141,  -241,   153,   142,  -241,   143,   144,    70,
     146,  -241,   160,   161,   147,   184,   148,   149,   177,   155,
     150,   173,  -241,  -241,   164,   169,   168,   167,   176,   172,
     134,   174,  -241,   135,  -241,    24,    24,    70,   175,   208,
    -241,  -241,   179,   180,   197,   182,    70,   181,    70,   185,
     198,   187,   183,   186,   193,   190,  -241,    33,  -241,   188,
     189,  -241,    -7,   191,  -241,    70,   192,   201,  -241,  -241,
    -241,   199,  -241,    70,   194,   215,  -241,  -241,    70,   195,
     209,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
     211,  -241,    -2,  -241,    70,   200,  -241,  -241,    70,   202,
    -241,    70,   204,   117,   212,  -241,  -241,   216,  -241,   203,
    -241,   218,   222,   117,  -241,  -241,  -241,  -241,   223,  -241
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     118,     0,     0,     0,   118,     0,     0,     0,     0,   118,
      10,     4,     3,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     1,     2,     0,    45,    46,     0,    47,     0,
      48,     0,    25,    26,    35,    38,    41,    42,     0,     0,
       0,    28,    29,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    32,     0,     0,
       0,     0,     0,     0,     9,     0,     0,    26,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
      18,   118,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    24,
      44,   118,    21,    22,    34,    36,    37,    39,    40,   118,
       0,    27,     0,     0,   117,     0,     0,     0,    55,     0,
       0,    57,     0,     0,    59,     0,     0,    61,     0,     0,
      63,     0,     0,    65,    11,     0,     0,     0,    14,    15,
      16,    17,     0,     0,     0,   118,   115,    31,    33,     0,
      49,     0,     0,    50,     0,     0,    51,     0,     0,    52,
       0,     0,    53,     0,     0,    54,     0,    12,   118,    13,
       0,     6,     0,   116,    68,    69,    70,    71,    67,     0,
       0,    78,     0,     0,    88,    89,    90,    84,     0,   118,
      91,     0,     0,    97,     0,     0,   103,     0,     0,     0,
       0,   114,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,    60,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    66,   118,   110,   118,   118,     0,     0,     0,
      56,    77,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   104,     0,   112,     0,
       0,    72,     0,     0,    79,     0,     0,     0,    58,    83,
      85,     0,    92,     0,     0,     0,    62,    98,     0,     0,
       0,    64,   102,   106,   107,   108,   109,   105,     5,     8,
       0,    73,     0,    80,     0,     0,    86,    93,     0,     0,
      99,     0,     0,     0,     0,    75,    81,     0,    95,     0,
     100,     0,     0,     0,    82,    96,   101,    74,     0,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -241,    -1,  -241,   210,     2,   -10,  -241,   205,    -6,   -20,
       6,     7,  -241,  -241,   151,  -241,  -241,  -241,  -241,  -240,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,   -36,    54,  -139,   145,   -14
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    64,    30,    31,    32,    40,    11,    33,
      34,    35,    36,    37,    57,   117,   151,   120,   154,   123,
     157,   126,   160,   129,   163,   132,   166,   118,   178,   180,
     206,   230,   121,   183,   209,   235,   258,   124,   189,   212,
     187,   127,   192,   216,   241,   266,   130,   195,   219,   245,
     271,   133,   198,   222,   277,   137,   200,    46,   113,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      56,    42,    10,    16,    38,    13,    10,    67,    23,    41,
      44,    10,    49,    58,    59,    60,    14,    66,    45,    68,
       5,     6,   193,   280,    15,   196,    50,     1,   294,     2,
      61,    51,     3,     4,    90,    52,    19,    62,    70,    71,
     281,    17,    53,     5,     6,   295,    20,    22,    24,    25,
      26,    54,   104,   302,    18,    28,     5,     6,    43,   135,
     102,   103,    39,   308,    19,    42,   136,   114,   110,    73,
      74,     7,    63,    41,    20,    75,    76,    55,    21,   105,
     106,   246,   107,   108,    24,    25,    26,    27,    47,     5,
       6,    28,   184,   185,   186,   147,   174,   175,   176,   177,
     142,    48,    69,    10,    65,    29,    72,    77,   143,    78,
      81,    10,   273,   274,   275,   276,   168,    24,    25,    26,
      54,    79,    80,    82,    28,    83,    85,    86,    87,    84,
      88,   114,    89,    91,   172,    92,    93,    94,   190,    95,
      96,    97,   116,    99,   100,   119,   101,   109,   122,   115,
     112,   125,   128,   134,   201,   138,   131,   139,   140,   141,
     144,   145,   150,   149,   152,   146,   153,   202,   155,   156,
     158,   159,   162,   165,   167,   213,   169,   161,   164,   223,
     170,   171,   197,   181,   204,   207,   179,   203,   182,    45,
     214,   210,   231,   188,   191,   194,   217,   199,   228,   205,
     208,   211,   224,   215,   218,   233,   239,   251,   220,   201,
     229,   227,   225,   226,   232,   236,   260,   234,   262,   237,
     243,   259,   221,   253,   249,   250,   256,    10,    10,   238,
     240,   272,   242,   254,   244,   283,   264,   267,   269,   247,
     252,   278,   279,   287,   257,   255,   261,   285,   290,   265,
     263,   268,   270,   286,   289,   292,   282,   284,   136,   288,
     291,   293,   303,   305,   296,   297,   148,   299,   298,   301,
     304,   300,   306,   307,   309,    98,     0,   248,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,     0,     0,
     173
};

static const yytype_int16 yycheck[] =
{
      20,    15,     0,     4,    14,    50,     4,    27,     9,    15,
      47,     9,    11,    16,    17,    18,    50,    27,    55,    29,
      19,    20,   161,    30,    50,   164,    25,     3,    30,     5,
      33,    30,     8,     9,    54,    34,    55,    40,    66,    67,
      47,    50,    41,    19,    20,    47,    65,     0,    47,    48,
      49,    50,    72,   293,    50,    54,    19,    20,    10,    48,
      70,    71,    47,   303,    55,    79,    55,    81,    78,    57,
      58,    47,    75,    79,    65,    59,    60,    76,    69,    73,
      74,   220,    75,    76,    47,    48,    49,    50,    48,    19,
      20,    54,    71,    72,    73,   115,    21,    22,    23,    24,
     101,    48,    51,   101,    69,    68,    61,    51,   109,    63,
      47,   109,    79,    80,    81,    82,   136,    47,    48,    49,
      50,    62,    51,    51,    54,    51,    50,    50,    50,    56,
      50,   145,    50,    50,   144,    50,    50,    50,   158,    50,
      50,    50,    12,    51,    51,    26,    52,    52,    31,    65,
      62,    35,    42,    51,   168,    51,    77,    51,    51,    51,
      63,    47,    51,    65,    65,    56,    51,     4,    65,    51,
      65,    51,    51,    51,    51,   189,    51,    65,    65,   199,
      53,    53,    42,    54,    13,    27,    62,    51,    62,    55,
      36,    32,   206,    62,    62,    62,    43,    62,    14,    62,
      62,    62,    56,    62,    62,    28,    37,   227,    65,   223,
      62,    64,    52,    52,    65,    65,   236,    62,   238,    46,
      44,   235,    78,    15,   225,   226,    29,   225,   226,    65,
      62,   245,    65,    54,    62,   255,    38,    54,    45,    65,
      65,    53,    53,   263,    62,    65,    65,    46,   268,    62,
      65,    65,    62,    54,    39,    46,    65,    65,    55,    65,
      65,    50,    50,   299,   284,    65,   115,    65,   288,    65,
      54,   291,    54,    51,    51,    65,    -1,   223,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
     145
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     8,     9,    19,    20,    47,    85,    86,
      88,    92,   143,    50,    50,    50,    85,    50,    50,    55,
      65,    69,     0,    85,    47,    48,    49,    50,    54,    68,
      88,    89,    90,    93,    94,    95,    96,    97,    89,    47,
      91,    92,   143,    10,    47,    55,   141,    48,    48,    11,
      25,    30,    34,    41,    50,    76,    93,    98,    16,    17,
      18,    33,    40,    75,    87,    69,    89,    93,    89,    51,
      66,    67,    61,    57,    58,    59,    60,    51,    63,    62,
      51,    47,    51,    51,    56,    50,    50,    50,    50,    50,
      93,    50,    50,    50,    50,    50,    50,    50,    87,    51,
      51,    52,    89,    89,    93,    94,    94,    95,    95,    52,
      89,    91,    62,   142,   143,    65,    12,    99,   111,    26,
     101,   116,    31,   103,   121,    35,   105,   125,    42,   107,
     130,    77,   109,   135,    51,    48,    55,   139,    51,    51,
      51,    51,    85,    85,    63,    47,    56,    93,    98,    65,
      51,   100,    65,    51,   102,    65,    51,   104,    65,    51,
     106,    65,    51,   108,    65,    51,   110,    51,    93,    51,
      53,    53,    89,   142,    21,    22,    23,    24,   112,    62,
     113,    54,    62,   117,    71,    72,    73,   124,    62,   122,
      93,    62,   126,   141,    62,   131,   141,    42,   136,    62,
     140,   143,     4,    51,    13,    62,   114,    27,    62,   118,
      32,    62,   123,   143,    36,    62,   127,    43,    62,   132,
      65,    78,   137,    93,    56,    52,    52,    64,    14,    62,
     115,   143,    65,    28,    62,   119,    65,    46,    65,    37,
      62,   128,    65,    44,    62,   133,   141,    65,   140,    85,
      85,    93,    65,    15,    54,    65,    29,    62,   120,   143,
      93,    65,    93,    65,    38,    62,   129,    54,    65,    45,
      62,   134,   143,    79,    80,    81,    82,   138,    53,    53,
      30,    47,    65,    93,    65,    46,    54,    93,    65,    39,
      93,    65,    46,    50,    30,    47,    93,    65,    93,    65,
      93,    65,   103,    50,    54,   139,    54,    51,   103,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    89,    89,    89,    89,    89,    90,    91,    91,    91,
      92,    92,    92,    92,    93,    93,    94,    94,    94,    95,
      95,    95,    96,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,   100,    99,   102,   101,   104,
     103,   106,   105,   108,   107,   110,   109,   111,   112,   112,
     112,   112,   113,   114,   114,   115,   115,   115,   116,   117,
     118,   119,   120,   120,   121,   122,   123,   123,   124,   124,
     124,   125,   126,   127,   127,   128,   129,   130,   131,   132,
     133,   134,   134,   135,   136,   137,   138,   138,   138,   138,
     139,   139,   140,   140,   140,   141,   142,   142,   143
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,    11,     7,     3,    11,     3,
       1,     3,     4,     4,     3,     3,     3,     3,     4,     4,
       4,     3,     3,     2,     3,     1,     1,     3,     1,     1,
       3,     6,     3,     6,     3,     1,     3,     3,     1,     3,
       3,     1,     1,     3,     3,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     0,     5,     0,     6,     0,
       4,     0,     6,     0,     6,     0,     4,     3,     1,     1,
       1,     1,     4,     4,     7,     4,     7,     1,     3,     4,
       4,     4,     4,     1,     3,     4,     4,     1,     1,     1,
       1,     3,     4,     4,     4,     4,     4,     3,     4,     4,
       4,     4,     1,     3,     3,     3,     1,     1,     1,     1,
       4,     4,     3,     3,     1,     4,     3,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 107 "grammar.y" /* yacc.c:1646  */
    {printf("statements->statement statements \n");}
#line 1514 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "grammar.y" /* yacc.c:1646  */
    {printf("statement->assign_statement \n");}
#line 1520 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 118 "grammar.y" /* yacc.c:1646  */
    {printf("function_call_1->K_IS_RUNNING LP RP \n");}
#line 1526 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 126 "grammar.y" /* yacc.c:1646  */
    {printf("function_call_2->K_RUN LP ID RP \n");}
#line 1532 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 130 "grammar.y" /* yacc.c:1646  */
    {printf("bool_returning_statements->bool_returning_statement L_AND bool_returning_statements \n");}
#line 1538 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 136 "grammar.y" /* yacc.c:1646  */
    {printf("bool_returning_statement->expression \n");}
#line 1544 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 138 "grammar.y" /* yacc.c:1646  */
    {printf("assign_statements->assign_statement COMMA assign_statements \n");}
#line 1550 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 142 "grammar.y" /* yacc.c:1646  */
    {printf("assign_statement->ID ASSIGN expression \n");}
#line 1556 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 147 "grammar.y" /* yacc.c:1646  */
    {printf("expression->term_prime RELOP expression \n");}
#line 1562 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 150 "grammar.y" /* yacc.c:1646  */
    {printf("term_prime->term PLUS term_prime \n");}
#line 1568 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 154 "grammar.y" /* yacc.c:1646  */
    {printf("term->factor MULT term \n");}
#line 1574 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 158 "grammar.y" /* yacc.c:1646  */
    {printf("factor->factor_prime \n");}
#line 1580 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 160 "grammar.y" /* yacc.c:1646  */
    {printf("factor_prime->ID DOT function_call_1 \n");}
#line 1586 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 167 "grammar.y" /* yacc.c:1646  */
    {printf("constructors->K_PROCESSOR LP processor_params RP \n");}
#line 1592 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 174 "grammar.y" /* yacc.c:1646  */
    {printf("processor_params->processor_param_isa  \n");}
#line 1598 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 179 "grammar.y" /* yacc.c:1646  */
    {printf("link_params->link_param_start_point  \n");}
#line 1604 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 185 "grammar.y" /* yacc.c:1646  */
    {printf("memory_params->memory_param_memory_type  \n");}
#line 1610 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 189 "grammar.y" /* yacc.c:1646  */
    {printf("job_params->job_param_job_id  \n");}
#line 1616 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 195 "grammar.y" /* yacc.c:1646  */
    {printf("cluster_params->cluster_param_processors  \n");}
#line 1622 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 201 "grammar.y" /* yacc.c:1646  */
    {printf("scheduler_params->scheduler_param_jobs  \n");}
#line 1628 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 205 "grammar.y" /* yacc.c:1646  */
    {printf("processor_param_isa->K_ISA ASSIGN ISA_values \n");}
#line 1634 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 207 "grammar.y" /* yacc.c:1646  */
    {printf("ISA_values->K_ARM \n");}
#line 1640 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 212 "grammar.y" /* yacc.c:1646  */
    {printf("processor_param_clock_speed->COMMA K_CLOCK_SPEED COLON expression \n");}
#line 1646 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 214 "grammar.y" /* yacc.c:1646  */
    {printf("processor_param_l1_memory->COMMA K_L1_MEMORY ASSIGN ID \n");}
#line 1652 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 217 "grammar.y" /* yacc.c:1646  */
    {printf("processor_param_l2_memory->COMMA K_L2_MEMORY ASSIGN ID \n");}
#line 1658 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 221 "grammar.y" /* yacc.c:1646  */
    {printf("link_param_start_point->K_START_POINT ASSIGN STRING  \n");}
#line 1664 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 222 "grammar.y" /* yacc.c:1646  */
    {printf("link_param_end_point->COMMA K_END_POINT ASSIGN STRING \n");}
#line 1670 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 223 "grammar.y" /* yacc.c:1646  */
    {printf("link_param_bandwidth->COMMA K_BANDWIDTH ASSIGN expression \n");}
#line 1676 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 224 "grammar.y" /* yacc.c:1646  */
    {printf("link_param_channel_capacity->COMMA K_CHANNEL_CAPACITY ASSIGN expression \n");}
#line 1682 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 225 "grammar.y" /* yacc.c:1646  */
    {printf("link_param_name->COMMA K_NAME ASSIGN STRING  \n");}
#line 1688 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 228 "grammar.y" /* yacc.c:1646  */
    {printf("memory_param_memory_type->K_MEMORY_TYPE ASSIGN memory_type_values \n");}
#line 1694 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 229 "grammar.y" /* yacc.c:1646  */
    {printf("memory_param_mem_size->COMMA K_MEM_SIZE ASSIGN expression \n");}
#line 1700 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 230 "grammar.y" /* yacc.c:1646  */
    {printf("memory_param_name->COMMA K_NAME ASSIGN STRING \n");}
#line 1706 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 233 "grammar.y" /* yacc.c:1646  */
    {printf("memory_type_values->K_PRIMARY \n");}
#line 1712 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 237 "grammar.y" /* yacc.c:1646  */
    {printf("job_param_job_id->K_JOB_ID ASSIGN expression \n");}
#line 1718 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 238 "grammar.y" /* yacc.c:1646  */
    {printf("job_param_flops_required->COMMA K_FLOPS_REQUIRED ASSIGN expression \n");}
#line 1724 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 239 "grammar.y" /* yacc.c:1646  */
    {printf("job_param_deadline->COMMA K_DEADLINE ASSIGN expression \n");}
#line 1730 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 241 "grammar.y" /* yacc.c:1646  */
    {printf("job_param_mem_required->COMMA K_MEM_REQUIRED ASSIGN expression \n");}
#line 1736 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 242 "grammar.y" /* yacc.c:1646  */
    {printf("job_param_affinity->COMMA K_AFFINITY ASSIGN array_num \n");}
#line 1742 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 244 "grammar.y" /* yacc.c:1646  */
    {printf("cluster_param_processors->K_PROCESSORS ASSIGN array_id \n");}
#line 1748 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 245 "grammar.y" /* yacc.c:1646  */
    {printf("cluster_param_topology->COMMA K_TOPOLOGY ASSIGN STRING \n");}
#line 1754 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 246 "grammar.y" /* yacc.c:1646  */
    {printf("cluster_param_link_bandwidth->COMMA K_LINK_BANDWIDTH ASSIGN expression \n");}
#line 1760 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 247 "grammar.y" /* yacc.c:1646  */
    {printf("cluster_param_link_capacity->COMMA K_LINK_CAPACITY ASSIGN expression \n");}
#line 1766 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 248 "grammar.y" /* yacc.c:1646  */
    {printf("cluster_param_name->COMMA K_NAME ASSIGN STRING \n");}
#line 1772 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 251 "grammar.y" /* yacc.c:1646  */
    {printf("scheduler_param_jobs->K_JOBS ASSIGN array_id \n");}
#line 1778 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 252 "grammar.y" /* yacc.c:1646  */
    {printf("scheduler_param_processors->K_PROCESSORS ASSIGN array_id \n");}
#line 1784 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 253 "grammar.y" /* yacc.c:1646  */
    {printf("scheduler_param_algo->K_ALGO ASSIGN algo_type_values \n");}
#line 1790 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 255 "grammar.y" /* yacc.c:1646  */
    {printf("memory_type_values->K_FCFS \n");}
#line 1796 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 260 "grammar.y" /* yacc.c:1646  */
    {printf("array_num->LS expression array_num_items RS \n");}
#line 1802 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 263 "grammar.y" /* yacc.c:1646  */
    {printf("array_num_items->COMMA expression array_num_items \n");}
#line 1808 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 267 "grammar.y" /* yacc.c:1646  */
    {printf("array_id->LS ID array_id_items RS \n");}
#line 1814 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 269 "grammar.y" /* yacc.c:1646  */
    {printf("array_id_items->COMMA ID array_id_items \n");}
#line 1820 "grammar.tab.c" /* yacc.c:1646  */
    break;


#line 1824 "grammar.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 274 "grammar.y" /* yacc.c:1906  */

stack<string> st;
stack<int> sp;

void helper()
{
    while(!st.empty())
    {
        int temp = sp.top();
        sp.pop();
        while(temp--) cout<<" ";
        cout<<st.top()<<"\n";
        st.pop();
    }
}

int main(int argc, char *argv[]) {
    if (argc!= 2) {
        cout <<"Usage: <command> filename"<<endl;
        return 1;
    }
    FILE *myfile = fopen(argv[1], "r");
    if (!myfile) {
        cout << "I can't open "<<argv[1]<< endl;
        return -1;
    }
    yyin = myfile;
    
    sp.push(0);
    
    
    do {
        yyparse();
        printf("yyprse() completed once\n\n\n\n\n");
    } while (!feof(yyin));
    
}

void yyerror(char *s) {
    cout << "Parse error: " << s << endl;
    exit(-1);
}
