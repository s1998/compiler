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
#include <vector>
#include <stdarg.h>

using namespace std;

extern stack<string> st;
int yylex();

typedef struct yy_buffer_state* YY_BUFFER_STATE;
extern int yyparse();
extern YY_BUFFER_STATE yy_scan_string(const char * str);
extern void yy_delete_buffer(YY_BUFFER_STATE buffer);
extern FILE *yyin;
void yyerror(const char *s);
char temp[1024];
vector<string> errors;

int sp = 0;

int print_parse_tree = 0;
int print_parse_error = 0;
void print_parse(char* c, ...){

if(print_parse_tree)
 { va_list arg;
   int done;
   va_start (arg, c);
   done = vfprintf (stdout, c, arg);
   va_end (arg);
   }
 }

void helper()
{
  int temp = sp;
  while(temp-- && print_parse_tree) printf("  ");
}

char* expected;
extern char *yytext;
extern int yylineno;
extern void helper();

#line 115 "grammar.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
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
    K_WAIT = 81,
    K_CLUSTERS = 82
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

#line 248 "grammar.tab.c" /* yacc.c:358  */

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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   377

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

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
      82,    83,    84,     2,     2,     2,     2,     2,     2,     2,
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
       0,   136,   136,   138,   141,   143,   145,   147,   149,   151,
     153,   156,   158,   160,   162,   164,   167,   169,   171,   173,
     176,   178,   180,   182,   185,   188,   190,   192,   195,   197,
     199,   201,   203,   205,   208,   210,   213,   215,   217,   220,
     222,   224,   227,   230,   232,   234,   236,   238,   240,   242,
     245,   247,   249,   251,   253,   255,   258,   260,   262,   264,
     267,   270,   273,   276,   279,   282,   283,   286,   288,   290,
     292,   295,   298,   300,   303,   305,   307,   311,   313,   315,
     317,   319,   321,   323,   325,   327,   329,   331,   334,   336,
     338,   340,   342,   345,   347,   349,   352,   354,   355,   357,
     358,   360,   361,   363,   364,   366,   369,   371,   372,   374,
     376,   377,   379,   380,   382,   385,   387,   389,   391,   393,
     395,   397,   400,   402,   404,   406,   409,   412,   414,   417,
     420,   422,   425
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
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
  "K_SRT", "K_RRS", "K_WAIT", "K_CLUSTERS", "$accept", "statements",
  "statement", "function_call_1", "function_call_2",
  "bool_returning_statements", "bool_returning_statement",
  "assign_statements", "assign_statement", "expression", "term_prime",
  "term", "factor", "factor_prime", "constructors", "processor_params",
  "link_params", "memory_params", "job_params", "cluster_params",
  "scheduler_params", "processor_param_isa", "ISA_values",
  "processor_param_clock_speed", "processor_param_l1_memory",
  "processor_param_l2_memory", "processor_param_name",
  "link_param_start_point", "link_param_end_point", "link_param_bandwidth",
  "link_param_channel_capacity", "link_param_name",
  "memory_param_memory_type", "memory_param_mem_size", "memory_param_name",
  "memory_type_values", "job_param_job_id", "job_param_flops_required",
  "job_param_deadline", "job_param_mem_required", "job_param_affinity",
  "cluster_param_processors", "cluster_param_topology",
  "cluster_param_link_bandwidth", "cluster_param_link_capacity",
  "cluster_param_name", "scheduler_param_jobs",
  "scheduler_param_processors", "scheduler_param_clusters",
  "scheduler_param_algo", "algo_type_values", "array_num",
  "array_num_items", "array_id", "array_id_items", "epsilon", YY_NULLPTR
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
      78,    79,    80,    81,    82
};
# endif

#define YYPACT_NINF -272

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-272)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,   -39,   -36,   -17,    15,    26,    30,    19,    35,    40,
      15,  -272,  -272,  -272,     7,     7,    16,    43,     3,   254,
     101,    89,    12,   254,  -272,  -272,    -4,  -272,  -272,   254,
    -272,     7,  -272,    54,    88,  -272,    60,   100,   102,  -272,
      91,   -33,    96,    78,  -272,  -272,   117,   131,   134,   136,
     133,   140,   147,   149,   150,   153,   155,   156,  -272,  -272,
     157,   158,   163,   166,   168,  -272,   169,    12,   172,  -272,
     167,     7,     7,   254,   254,   254,   254,   254,   173,     7,
      16,  -272,   162,  -272,  -272,   161,   170,    71,   202,   206,
     -31,   197,   164,   189,   191,   192,   195,   199,  -272,  -272,
    -272,    15,  -272,  -272,  -272,  -272,  -272,  -272,  -272,    15,
     188,  -272,   209,   201,  -272,    89,    89,   193,  -272,  -272,
    -272,  -272,   208,   198,  -272,   204,   215,   205,   207,   219,
     213,   212,   254,   227,   224,   216,   236,   226,   225,   240,
     230,  -272,  -272,  -272,  -272,  -272,   241,   242,    16,   162,
    -272,  -272,  -272,  -272,  -272,   123,  -272,   280,   234,   -10,
    -272,   271,   237,   -24,  -272,   268,   243,   254,  -272,  -272,
      77,   244,    13,  -272,   266,   249,    31,  -272,   270,   251,
     312,  -272,   269,  -272,  -272,   253,   305,   259,  -272,  -272,
     257,    23,   261,  -272,  -272,  -272,  -272,   260,   278,  -272,
    -272,  -272,   262,  -272,   132,   264,  -272,  -272,   263,   144,
     267,  -272,  -272,   265,   247,   272,   281,   283,   254,   273,
      -7,    63,   274,  -272,   182,   279,   254,   275,   254,   277,
    -272,   214,   282,   289,   284,  -272,   235,   285,    44,   286,
     258,  -272,    15,    15,  -272,   -11,   287,   288,   292,  -272,
    -272,  -272,   254,   290,  -272,   299,  -272,  -272,  -272,    75,
    -272,   254,   291,  -272,   293,  -272,  -272,   254,   294,  -272,
     300,  -272,  -272,  -272,  -272,    57,   295,   297,   304,   298,
    -272,    -9,   307,   316,  -272,   254,   301,  -272,  -272,  -272,
     254,   302,  -272,   254,   303,  -272,  -272,    94,  -272,  -272,
     206,   308,  -272,  -272,  -272,  -272,    87,  -272,    73,  -272,
     309,  -272,  -272,  -272,  -272,  -272,   313,   206,  -272,  -272,
    -272,   254,  -272,  -272,  -272,   314,   310,  -272,   254,   315,
    -272,   310,  -272,  -272
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     132,     0,     0,     0,   132,     0,     0,     0,     0,     0,
     132,    10,     4,     3,     0,     0,   132,     0,     0,     0,
       0,     0,     0,     0,     1,     2,    49,    45,    46,     0,
      47,     0,    48,     0,    23,    24,    35,    38,    41,    42,
       0,     0,     0,    26,    27,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    31,
       0,     0,     0,     0,     0,     9,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,    16,   132,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,    43,
      44,   132,    20,    21,    34,    36,    37,    39,    40,   132,
       0,    25,     0,     0,   131,     0,     0,     0,    67,    68,
      69,    70,     0,     0,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,    14,    15,     0,     0,   132,   132,
     129,    30,    33,    29,    32,     0,    50,     0,     0,     0,
      51,     0,     0,     0,    52,     0,   132,     0,    97,    53,
       0,     0,     0,    54,     0,     0,     0,    55,     0,     0,
       0,     6,     0,   130,    65,     0,     0,    56,    78,    77,
       0,     0,     0,    93,    94,    95,    88,     0,     0,    61,
      92,    96,     0,    99,     0,     0,   107,   106,     0,     0,
       0,   116,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,   132,     0,     0,     0,     0,
     101,     0,     0,     0,     0,   110,     0,   132,     0,     0,
       0,    64,   132,   132,    71,     0,     0,     0,    58,    59,
      80,    79,     0,     0,    84,     0,    60,    87,    89,     0,
      98,     0,     0,   103,     0,    62,   108,     0,     0,   112,
       0,    63,   114,   118,   117,     0,     0,     0,     0,     0,
      72,     0,     0,     0,    81,     0,     0,    91,    90,   100,
       0,     0,   109,     0,     0,   120,   119,     0,     5,     8,
       0,     0,    74,    76,    57,    83,     0,   102,     0,   111,
       0,   122,   123,   124,   125,   121,     0,     0,    86,    85,
     105,     0,   104,   113,    73,     0,   132,    75,     0,     0,
     128,   132,   126,   127
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,     6,  -272,   306,     2,    10,  -272,   -79,   -13,   -14,
      92,   107,  -272,  -272,    55,  -272,  -272,  -271,  -272,  -272,
    -272,  -272,   220,  -272,  -272,  -272,    86,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,    39,  -159,   228,   -16
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    65,    32,    33,    34,    42,    12,    35,
      36,    37,    38,    39,    59,   122,   126,   129,   133,   136,
     139,   123,   124,   158,   187,   248,   249,   127,   162,   192,
     225,   256,   130,   166,   199,   196,   134,   171,   205,   232,
     265,   137,   175,   210,   237,   271,   140,   179,   215,   241,
     315,   322,   329,    48,   113,    13
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      44,   111,    11,    43,   131,    49,    11,    58,   246,    66,
      17,    14,    11,   207,    15,    68,    25,   212,     1,   279,
       2,   301,    20,     3,     4,    40,     5,     6,    60,   316,
      61,   132,    21,    16,     5,     6,   280,   188,   302,   247,
      24,    69,     5,     6,   189,    62,   325,   193,   194,   195,
      46,   222,    63,    45,    26,    27,    28,    29,    47,   104,
     206,    30,     7,    41,    44,    67,   114,    43,    47,   182,
      26,    27,    28,    29,    20,    31,    18,    30,   211,   274,
      19,   102,   103,   117,    21,    23,    47,    64,    22,   110,
       8,   273,   118,   119,   120,   121,     5,     6,     8,    47,
      52,   151,   153,    11,   295,    70,     8,   146,     5,     6,
     250,    11,    47,   202,    53,   147,   296,   251,   168,    54,
     320,    73,   287,    55,    26,    27,    28,    29,   321,   288,
      56,    30,    44,   114,   318,    43,    26,    27,    28,    29,
      80,   319,    78,    30,   118,   119,   120,   121,    50,    51,
     200,     5,     6,   201,    71,    72,   203,    74,    75,    79,
       8,    76,    77,     5,     6,    57,   105,   106,    81,   229,
     152,   154,     8,   311,   312,   313,   314,   223,    82,    26,
      27,    28,    29,   107,   108,    83,    30,    84,   234,    85,
     230,    26,    27,    28,    29,   235,    86,    87,    30,    88,
      89,     5,     6,    90,   244,    91,    92,    93,    94,   257,
     254,   253,   258,    95,   260,     8,    96,   263,    97,   101,
      98,   272,   269,   100,   112,   109,   115,     8,   125,    26,
      27,    28,    29,     5,     6,   116,    30,   128,   284,   135,
     141,   138,   142,   143,    11,    11,   144,   289,   277,   278,
     145,   148,   262,   292,     5,     6,   149,   150,   155,   156,
     157,    26,    27,    28,    29,     8,   160,   161,    30,   159,
     164,   305,   163,     5,     6,   165,   307,   167,   169,   309,
     268,   172,    26,    27,    28,    29,   170,   173,   174,    30,
     176,   177,   178,   185,   180,   181,   186,     8,   190,   191,
     197,    26,    27,    28,    29,   198,   204,   326,    30,   208,
     330,   209,   213,   214,   331,   330,   216,   218,     8,   219,
     217,   220,   221,   224,   227,   226,   231,   228,   233,   236,
     238,   239,   291,   242,   240,   243,   276,     8,   245,   252,
     259,   255,   261,   266,   264,   286,   294,   270,   300,   267,
     298,   275,   281,   282,   283,   285,   290,   299,   317,   293,
     297,   303,   247,   323,   324,   327,   306,   308,   310,   304,
     333,   332,   328,    99,     0,   184,     0,   183
};

static const yytype_int16 yycheck[] =
{
      16,    80,     0,    16,    35,    19,     4,    21,    15,    23,
       4,    50,    10,   172,    50,    29,    10,   176,     3,    30,
       5,    30,    55,     8,     9,    15,    19,    20,    16,   300,
      18,    62,    65,    50,    19,    20,    47,    47,    47,    46,
       0,    31,    19,    20,    54,    33,   317,    71,    72,    73,
      47,    28,    40,    10,    47,    48,    49,    50,    55,    73,
      47,    54,    47,    47,    80,    69,    82,    80,    55,   148,
      47,    48,    49,    50,    55,    68,    50,    54,    47,   238,
      50,    71,    72,    12,    65,    50,    55,    75,    69,    79,
      83,    47,    21,    22,    23,    24,    19,    20,    83,    55,
      11,   115,   116,   101,    47,    51,    83,   101,    19,    20,
      47,   109,    55,    36,    25,   109,   275,    54,   132,    30,
      47,    61,    47,    34,    47,    48,    49,    50,    55,    54,
      41,    54,   148,   149,    47,   148,    47,    48,    49,    50,
      62,    54,    51,    54,    21,    22,    23,    24,    47,    48,
     166,    19,    20,   167,    66,    67,   170,    57,    58,    63,
      83,    59,    60,    19,    20,    76,    74,    75,    51,    37,
     115,   116,    83,    79,    80,    81,    82,   191,    47,    47,
      48,    49,    50,    76,    77,    51,    54,    51,    44,    56,
     204,    47,    48,    49,    50,   209,    56,    50,    54,    50,
      50,    19,    20,    50,   218,    50,    50,    50,    50,   225,
     224,    29,   226,    50,   228,    83,    50,   231,    50,    52,
      51,   237,   236,    51,    62,    52,    65,    83,    26,    47,
      48,    49,    50,    19,    20,    65,    54,    31,   252,    42,
      51,    77,    51,    51,   242,   243,    51,   261,   242,   243,
      51,    63,    38,   267,    19,    20,    47,    56,    65,    51,
      62,    47,    48,    49,    50,    83,    51,    62,    54,    65,
      51,   285,    65,    19,    20,    62,   290,    65,    51,   293,
      45,    65,    47,    48,    49,    50,    62,    51,    62,    54,
      65,    51,    62,    13,    53,    53,    62,    83,    27,    62,
      32,    47,    48,    49,    50,    62,    62,   321,    54,    43,
     326,    62,    42,    62,   328,   331,     4,    64,    83,    14,
      51,    62,    65,    62,    46,    65,    62,    65,    65,    62,
      65,    84,    39,    52,    62,    52,    78,    83,    65,    65,
      65,    62,    65,    54,    62,    46,    46,    62,    50,    65,
      53,    65,    65,    65,    62,    65,    65,    53,    50,    65,
      65,    54,    46,    54,    51,    51,    65,    65,    65,   283,
     331,    56,    62,    67,    -1,   155,    -1,   149
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     8,     9,    19,    20,    47,    83,    86,
      87,    89,    93,   140,    50,    50,    50,    86,    50,    50,
      55,    65,    69,    50,     0,    86,    47,    48,    49,    50,
      54,    68,    89,    90,    91,    94,    95,    96,    97,    98,
      90,    47,    92,    93,   140,    10,    47,    55,   138,    94,
      47,    48,    11,    25,    30,    34,    41,    76,    94,    99,
      16,    18,    33,    40,    75,    88,    94,    69,    94,    90,
      51,    66,    67,    61,    57,    58,    59,    60,    51,    63,
      62,    51,    47,    51,    51,    56,    56,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    88,
      51,    52,    90,    90,    94,    95,    95,    96,    96,    52,
      90,    92,    62,   139,   140,    65,    65,    12,    21,    22,
      23,    24,   100,   106,   107,    26,   101,   112,    31,   102,
     117,    35,    62,   103,   121,    42,   104,   126,    77,   105,
     131,    51,    51,    51,    51,    51,    86,    86,    63,    47,
      56,    94,    99,    94,    99,    65,    51,    62,   108,    65,
      51,    62,   113,    65,    51,    62,   118,    65,    94,    51,
      62,   122,    65,    51,    62,   127,    65,    51,    62,   132,
      53,    53,    92,   139,   107,    13,    62,   109,    47,    54,
      27,    62,   114,    71,    72,    73,   120,    32,    62,   119,
     140,    94,    36,    94,    62,   123,    47,   138,    43,    62,
     128,    47,   138,    42,    62,   133,     4,    51,    64,    14,
      62,    65,    28,    94,    62,   115,    65,    46,    65,    37,
      94,    62,   124,    65,    44,    94,    62,   129,    65,    84,
      62,   134,    52,    52,    94,    65,    15,    46,   110,   111,
      47,    54,    65,    29,    94,    62,   116,   140,    94,    65,
      94,    65,    38,    94,    62,   125,    54,    65,    45,    94,
      62,   130,   140,    47,   138,    65,    78,    86,    86,    30,
      47,    65,    65,    62,    94,    65,    46,    47,    54,    94,
      65,    39,    94,    65,    46,    47,   138,    65,    53,    53,
      50,    30,    47,    54,   111,    94,    65,    94,    65,    94,
      65,    79,    80,    81,    82,   135,   102,    50,    47,    54,
      47,    55,   136,    54,    51,   102,    94,    51,    62,   137,
     140,    94,    56,   137
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    88,    88,    88,    89,    89,    89,    89,
      90,    90,    90,    90,    91,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    94,    94,    95,    95,    95,    96,
      96,    96,    97,    98,    98,    98,    98,    98,    98,    98,
      99,    99,    99,    99,    99,    99,   100,   100,   100,   100,
     101,   102,   103,   104,   105,   106,   106,   107,   107,   107,
     107,   108,   109,   109,   110,   110,   111,   112,   112,   113,
     113,   114,   114,   115,   115,   116,   116,   116,   117,   118,
     119,   119,   119,   120,   120,   120,   121,   121,   122,   122,
     123,   123,   124,   124,   125,   125,   126,   126,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   132,   132,   133,
     133,   134,   135,   135,   135,   135,   136,   137,   137,   138,
     139,   139,   140
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,    11,     7,     3,    11,     3,
       1,     3,     3,     3,     3,     3,     4,     4,     4,     4,
       3,     3,     2,     1,     1,     3,     1,     1,     3,     6,
       6,     3,     6,     6,     3,     1,     3,     3,     1,     3,
       3,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     3,     7,     5,     5,
       5,     3,     5,     5,     4,     3,     1,     1,     1,     1,
       1,     4,     4,     7,     3,     6,     3,     3,     3,     4,
       4,     4,     2,     4,     2,     4,     4,     1,     3,     4,
       4,     4,     1,     1,     1,     1,     3,     2,     4,     2,
       4,     2,     4,     2,     4,     4,     3,     3,     4,     4,
       2,     4,     2,     4,     1,     3,     3,     4,     4,     4,
       4,     4,     1,     1,     1,     1,     4,     3,     1,     4,
       3,     1,     0
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
#line 137 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("statements: statement statements\n\n"); sp += 2; }
#line 1575 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 139 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("statements:  epsilon\n\n"); sp += 2; }
#line 1581 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 142 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("statement: assign_statement\n\n"); sp = 0; }
#line 1587 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 144 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("statement:  K_IF LP bool_returning_statements RP LB statements RB K_ELSE LB statements RB\n\n"); sp = 0; }
#line 1593 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 146 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("statement:  K_WHILE LP bool_returning_statements RP LB statements RB\n\n"); sp = 0; }
#line 1599 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 148 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("statement:  K_BEGIN statements K_END\n\n"); sp = 0; }
#line 1605 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 150 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("statement:  K_FOR LP assign_statements SEMI bool_returning_statements SEMI assign_statements RP LB statements RB\n\n"); sp = 0; }
#line 1611 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 152 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("statement:  ID DOT function_call_1\n\n"); sp = 0; }
#line 1617 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 154 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("statement:  function_call_2\n\n"); sp = 0; }
#line 1623 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 157 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("function_call_1: K_IS_RUNNING LP RP\n\n"); sp += 2; }
#line 1629 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 159 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("function_call_1:  K_GET_CLOCK_SPEED LP RP\n\n"); sp += 2; }
#line 1635 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 161 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("function_call_1:  K_GET_AVAILABLE_MEMORY LP RP\n\n"); sp += 2; }
#line 1641 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 163 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("function_call_1:  K_GET_MEMORY LP RP\n\n"); sp += 2; }
#line 1647 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 165 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("function_call_1:  K_PRINT_STATS LP RP\n\n"); sp += 2; }
#line 1653 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 168 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("function_call_2: K_RUN LP ID RP\n\n"); sp += 2; }
#line 1659 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 170 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("function_call_2:  K_RUN LP array_id RP\n\n"); sp += 2; }
#line 1665 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 172 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("function_call_2:  K_DISCARD_JOB LP expression RP\n\n"); sp += 2; }
#line 1671 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 174 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("function_call_2:  K_WAIT LP expression RP\n\n"); sp += 2; }
#line 1677 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 177 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("bool_returning_statements: bool_returning_statement L_AND bool_returning_statements\n\n"); sp += 2; }
#line 1683 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 179 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("bool_returning_statements:  bool_returning_statement  L_OR bool_returning_statements\n\n"); sp += 2; }
#line 1689 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 181 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("bool_returning_statements:  L_NOT bool_returning_statements\n\n"); sp += 2; }
#line 1695 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 183 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("bool_returning_statements:  bool_returning_statement\n\n"); sp += 2; }
#line 1701 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 186 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("bool_returning_statement: expression\n\n"); sp += 2; }
#line 1707 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 189 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("assign_statements: assign_statement COMMA assign_statements\n\n"); sp += 2; }
#line 1713 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 191 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("assign_statements:  assign_statement\n\n"); sp += 2; }
#line 1719 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 193 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("assign_statements:  epsilon\n\n"); sp += 2; }
#line 1725 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 196 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("assign_statement: ID ASSIGN expression\n\n"); sp += 2; }
#line 1731 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 198 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("assign_statement:  ID LS INT RS ASSIGN expression\n\n"); sp += 2; }
#line 1737 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 200 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("assign_statement:  ID LS ID RS ASSIGN expression\n\n"); sp += 2; }
#line 1743 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 202 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("assign_statement:  ID ASSIGN constructors\n\n"); sp += 2; }
#line 1749 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 204 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("assign_statement:  ID LS INT RS ASSIGN constructors\n\n"); sp += 2; }
#line 1755 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 206 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("assign_statement:  ID LS ID RS ASSIGN constructors\n\n"); sp += 2; }
#line 1761 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 209 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("expression: term_prime RELOP expression\n\n"); sp += 2; }
#line 1767 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 211 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("expression:  term_prime\n\n"); sp += 2; }
#line 1773 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 214 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("term_prime: term PLUS term_prime\n\n"); sp += 2; }
#line 1779 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 216 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("term_prime:  term MINUS term_prime\n\n"); sp += 2; }
#line 1785 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 218 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("term_prime:  term\n\n"); sp += 2; }
#line 1791 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 221 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("term: factor MULT term\n\n"); sp += 2; }
#line 1797 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 223 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("term:  factor DIV term\n\n"); sp += 2; }
#line 1803 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 225 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("term:  factor\n\n"); sp += 2; }
#line 1809 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 228 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("factor: factor_prime\n\n"); sp += 2; }
#line 1815 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 231 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime: ID DOT function_call_1\n\n");  }
#line 1821 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 233 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime:  LP expression RP\n\n");  }
#line 1827 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 235 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime:  INT\n\n");  }
#line 1833 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 237 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime:  FLOAT\n\n");  }
#line 1839 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 239 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime: STRING\n\n"); }
#line 1845 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 241 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime: function_call/_2\n\n"); }
#line 1851 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 243 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime: ID\n\n"); }
#line 1857 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 246 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("constructors: K_PROCESSOR LP processor_params RP\n\n"); sp += 2; }
#line 1863 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 248 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("constructors: K_LINK LP link_params RP\n\n"); sp += 2; }
#line 1869 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 250 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("constructors: K_MEMORY LP memory_params RP\n\n"); sp += 2; }
#line 1875 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 252 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("constructors: K_JOB LP job_params RP\n\n"); sp += 2; }
#line 1881 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 254 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("constructors: K_CLUSTER LP cluster_params RP\n\n"); sp += 2; }
#line 1887 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 256 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("constructors: K_SCHEDULER LP scheduler_params RP\n\n"); sp += 2; }
#line 1893 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 259 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("processor_params : processor_param_isa processor_param_clock_speed processor_param_l1_memory \n\n"); sp += 2; }
#line 1899 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 261 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("processor_params : processor_param_isa processor_param_clock_speed  processor_param_l1_memory COMMA processor_param_l2_memory COMMA processor_param_name\n\n"); sp += 2; }
#line 1905 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 263 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("processor_params : processor_param_isa processor_param_clock_speed  processor_param_l1_memory COMMA processor_param_l2_memory \n\n"); sp += 2; }
#line 1911 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 265 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("processor_params : processor_param_isa processor_param_clock_speed processor_param_l1_memory COMMA processor_param_name \n\n"); sp += 2; }
#line 1917 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 268 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("link_params : link_param_start_point  link_param_end_point  link_param_bandwidth  link_param_channel_capacity  link_param_name \n\n"); sp += 2; }
#line 1923 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 271 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("memory_params : memory_param_memory_type  memory_param_mem_size  memory_param_name\n\n"); sp += 2; }
#line 1929 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 274 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("job_params : job_param_job_id  job_param_flops_required  job_param_deadline  job_param_mem_required  job_param_affinity\n\n"); sp += 2; }
#line 1935 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 277 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("cluster_params :  cluster_param_processors  cluster_param_topology  cluster_param_link_bandwidth  cluster_param_link_capacity  cluster_param_name\n\n"); sp += 2; }
#line 1941 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 280 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("scheduler_params :  scheduler_param_jobs  scheduler_param_processors scheduler_param_clusters scheduler_param_algo \n\n"); sp += 2; }
#line 1947 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 284 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("processor_param_isa : K_ISA ASSIGN ISA_values\n\n"); sp += 2; }
#line 1953 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 287 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("ISA_values : K_ARM\n\n"); sp += 2; }
#line 1959 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 289 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("ISA_values : K_AMD\n\n");  sp += 2; }
#line 1965 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 291 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("ISA_values : K_CDC\n\n"); sp += 2; }
#line 1971 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 293 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("ISA_values : K_MIPS\n\n"); sp += 2; }
#line 1977 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 296 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("processor_param_clock_speed :  COMMA K_CLOCK_SPEED COLON expression\n\n"); sp += 2; }
#line 1983 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 299 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("processor_param_l1_memory : COMMA K_L1_MEMORY ASSIGN ID\n\n"); sp += 2; }
#line 1989 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 301 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("processor_param_l1_memory : COMMA K_L1_MEMORY ASSIGN K_MEMORY LP memory_params RP\n\n"); sp += 2; }
#line 1995 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 304 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("processor_param_l2_memory :  K_L2_MEMORY ASSIGN ID\n\n"); sp += 2; }
#line 2001 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 306 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("processor_param_l2_memory :  K_L2_MEMORY ASSIGN K_MEMORY LP memory_params RP\n\n"); sp += 2; }
#line 2007 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 308 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("processor_param_name : K_NAME ASSIGN STRING \n\n"); sp += 2; }
#line 2013 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 312 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("link_param_start_point : K_START_POINT ASSIGN STRING \n\n"); sp += 2; }
#line 2019 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 314 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("link_param_start_point :K_START_POINT ASSIGN ID \n\n");  sp += 2;}
#line 2025 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 316 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("link_param_end_point : COMMA K_END_POINT ASSIGN STRING\n\n"); sp += 2; }
#line 2031 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 318 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("link_param_end_point :COMMA K_END_POINT ASSIGN ID\n\n"); sp += 2;}
#line 2037 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 320 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("link_param_bandwidth : COMMA K_BANDWIDTH ASSIGN expression\n\n"); sp += 2; }
#line 2043 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 322 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("link_param_bandwidth: COMMA expression\n\n"); sp += 2;}
#line 2049 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 324 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("link_param_channel_capacity : COMMA K_CHANNEL_CAPACITY ASSIGN expression\n\n"); sp += 2; }
#line 2055 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 326 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("link_param_channel_capacity : COMMA expression\n\n"); sp += 2;}
#line 2061 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 328 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("link_param_name : COMMA K_NAME ASSIGN STRING \n\n"); sp += 2; }
#line 2067 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 330 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("link_param_name : COMMA K_NAME ASSIGN ID \n\n"); sp += 2; }
#line 2073 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 332 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("link_param_name :epsilon\n\n"); sp += 2;}
#line 2079 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 335 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("memory_param_memory_type : K_MEMORY_TYPE ASSIGN memory_type_values\n\n"); sp += 2; }
#line 2085 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 337 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("memory_param_mem_size : COMMA K_MEM_SIZE ASSIGN expression\n\n"); sp += 2; }
#line 2091 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 339 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("memory_param_name : COMMA K_NAME ASSIGN STRING\n\n"); sp += 2; }
#line 2097 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 341 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("memory_param_name : COMMA K_NAME ASSIGN ID\n\n"); sp += 2; }
#line 2103 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 343 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("memory_param_name :epsilon\n\n"); sp += 2;}
#line 2109 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 346 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("memory_type_values : K_PRIMARY\n\n"); sp += 2; }
#line 2115 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 348 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("memory_type_values :K_SECONDARY\n\n"); sp += 2; }
#line 2121 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 350 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("memory_type_values :K_SECONDARYK_CACHE\n\n"); sp += 2; }
#line 2127 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 353 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("job_param_job_id : K_JOB_ID ASSIGN expression\n\n"); sp += 2; }
#line 2133 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 356 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("job_param_flops_required : COMMA K_FLOPS_REQUIRED ASSIGN expression\n\n"); sp += 2; }
#line 2139 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 359 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("job_param_deadline : COMMA K_DEADLINE ASSIGN expression\n\n"); sp += 2; }
#line 2145 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 362 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("job_param_mem_required : COMMA K_MEM_REQUIRED ASSIGN expression\n\n"); sp += 2; }
#line 2151 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 365 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("job_param_affinity : COMMA K_AFFINITY ASSIGN array_num\n\n"); sp += 2; }
#line 2157 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 370 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("cluster_param_processors : K_PROCESSORS ASSIGN array_id\n\n"); sp += 2; }
#line 2163 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 373 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("cluster_param_topology : COMMA K_TOPOLOGY ASSIGN STRING\n\n"); sp += 2; }
#line 2169 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 375 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("cluster_param_link_bandwidth : COMMA K_LINK_BANDWIDTH ASSIGN expression\n\n"); sp += 2; }
#line 2175 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 378 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("cluster_param_link_capacity : COMMA K_LINK_CAPACITY ASSIGN expression\n\n"); sp += 2; }
#line 2181 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 381 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("cluster_param_name : COMMA K_NAME ASSIGN STRING\n\n"); sp += 2; }
#line 2187 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 383 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("cluster_param_name :  epsilon\n\n"); sp += 2; }
#line 2193 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 386 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("scheduler_param_jobs : K_JOBS ASSIGN array_id\n\n"); sp += 2; }
#line 2199 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 388 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("scheduler_param_jobs :  K_JOBS ASSIGN ID\n\n"); sp += 2; }
#line 2205 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 390 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("scheduler_param_processors : COMMA K_PROCESSORS ASSIGN array_id\n\n"); sp += 2; }
#line 2211 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 392 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("scheduler_param_processors :  COMMA K_PROCESSORS ASSIGN ID\n\n"); sp += 2; }
#line 2217 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 394 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("scheduler_param_clusters : COMMA K_CLUSTERS ASSIGN array_id\n\n"); sp += 2; }
#line 2223 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 396 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("scheduler_param_clusters :  COMMA K_CLUSTERS ASSIGN ID\n\n"); sp += 2; }
#line 2229 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 398 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("scheduler_param_algo : COMMA K_ALGO ASSIGN algo_type_values\n\n"); sp += 2; }
#line 2235 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 401 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("algo_type_values : K_FCFS\n\n"); sp += 2; }
#line 2241 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 403 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("algo_type_values :  K_SJN\n\n"); sp += 2; }
#line 2247 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 405 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("algo_type_values :  K_SRT\n\n"); sp += 2; }
#line 2253 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 407 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("algo_type_values :  K_RRS\n\n"); sp += 2; }
#line 2259 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 410 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("array_num : LS expression array_num_items RS\n\n"); sp += 2; }
#line 2265 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 413 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("array_num_items : COMMA expression array_num_items\n\n"); sp += 2; }
#line 2271 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 415 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("array_num_items :  epsilon\n\n"); sp += 2; }
#line 2277 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 418 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("array_id : LS ID array_id_items RS\n\n"); sp += 2; }
#line 2283 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 421 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("array_id_items : COMMA ID array_id_items\n\n"); sp += 2; }
#line 2289 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 423 "grammar.y" /* yacc.c:1646  */
    {helper(); print_parse("array_id_items :  epsilon\n\n"); sp += 2; }
#line 2295 "grammar.tab.c" /* yacc.c:1646  */
    break;


#line 2299 "grammar.tab.c" /* yacc.c:1646  */
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
#line 427 "grammar.y" /* yacc.c:1906  */

stack<string> st;
int error_count = 0;



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
    //yyin = myfile;

    do {
        fgets(temp, 1024, myfile);
        YY_BUFFER_STATE buffer =  yy_scan_string(temp);
        yyparse();
        yy_delete_buffer(buffer);
        //cout<<endl<<endl<<endl<<temp<<endl<<endl<<endl<<endl<<endl;
    }while (!feof(myfile));

    if(error_count == 0)
      print_parse("yyparse() completed once\n\n\n\n\n\n");
    else
      cout<<"\n Errors found : "<<error_count<<endl<<endl;
    
}

void yyerror(const char *s) {

  if(print_parse_error)
    {
      cout << "\033[1;31m Parse error( " << s << " ) at line : "<< yylineno<<" found \""<<yytext<<"\"\033[0m"<<endl;
        //cout <<"Error found at line : "<<temp<<endl;    
        error_count++;
    }
    //exit(-1);
}
