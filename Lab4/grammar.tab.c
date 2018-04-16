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
#include "utils.c"

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
extern char* lexeme;
extern char* yytext;

int sp = 0;

int print_parse_tree = 1;
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

#line 118 "grammar.tab.c" /* yacc.c:339  */

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
    K_CLUSTERS = 82,
    K_INT = 83,
    K_BOOL = 84,
    K_FLOAT = 85
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 140 "grammar.y" /* yacc.c:355  */

        struct node* NT; //non-terminals

        string* s;

        vector<string>* vs;

        struct terminal{  //terminals
                        char *text;
                        int type;
                        int line;
                        int length;
        } Sval;


#line 259 "grammar.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 276 "grammar.tab.c" /* yacc.c:358  */

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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   401

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  349

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
      82,    83,    84,    85,    86,    87,     2,     2,     2,     2,
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
       0,   167,   167,   176,   184,   192,   199,   205,   211,   217,
     223,   229,   242,   250,   258,   266,   274,   282,   290,   298,
     306,   315,   323,   332,   343,   349,   355,   361,   367,   374,
     380,   386,   392,   399,   405,   411,   417,   424,   431,   437,
     443,   450,   457,   463,   469,   475,   481,   488,   494,   501,
     507,   513,   520,   526,   532,   539,   546,   548,   550,   552,
     554,   556,   558,   561,   567,   573,   579,   585,   591,   598,
     604,   610,   616,   623,   630,   637,   644,   651,   658,   659,
     666,   672,   678,   684,   691,   698,   704,   711,   717,   723,
     731,   737,   743,   749,   755,   761,   767,   773,   779,   785,
     791,   798,   804,   810,   816,   822,   829,   835,   841,   848,
     854,   855,   861,   862,   868,   869,   875,   876,   882,   885,
     891,   892,   898,   904,   905,   911,   912,   918,   925,   931,
     937,   943,   949,   955,   961,   968,   974,   980,   986,   993,
    1000,  1006,  1013,  1020,  1026,  1033
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
  "K_SRT", "K_RRS", "K_WAIT", "K_CLUSTERS", "K_INT", "K_BOOL", "K_FLOAT",
  "$accept", "statements", "statement", "DType", "DList", "IDEXP",
  "function_call_1", "function_call_2", "bool_returning_statements",
  "bool_returning_statement", "assign_statements", "assign_statement",
  "expression", "term_prime", "term", "factor", "factor_prime",
  "constructors", "processor_params", "link_params", "memory_params",
  "job_params", "cluster_params", "scheduler_params",
  "processor_param_isa", "ISA_values", "processor_param_clock_speed",
  "processor_param_l1_memory", "processor_param_l2_memory",
  "processor_param_name", "link_param_start_point", "link_param_end_point",
  "link_param_bandwidth", "link_param_channel_capacity", "link_param_name",
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
      78,    79,    80,    81,    82,    83,    84,    85
};
# endif

#define YYPACT_NINF -292

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-292)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,   -39,   -21,   -19,    14,  -292,   -10,    -1,  -292,  -292,
    -292,  -292,    22,  -292,     4,  -292,  -292,  -292,    26,    14,
      -2,  -292,  -292,  -292,    85,    85,    28,    59,    -5,   259,
      77,    32,    20,   259,  -292,  -292,  -292,  -292,    16,    23,
    -292,  -292,   259,  -292,    85,  -292,    61,    93,  -292,    37,
     109,   116,  -292,    63,    -9,    54,    60,  -292,  -292,    80,
      94,   143,   147,    96,   132,   149,   151,   152,   155,   158,
     160,  -292,  -292,   163,   166,   168,   173,   174,  -292,   156,
      -2,    20,   178,  -292,   183,    85,    85,   259,   259,   259,
     259,   259,   185,    85,    28,  -292,   182,  -292,  -292,   165,
     171,   157,   199,   214,   -25,   205,   172,   197,   200,   202,
     206,   212,  -292,  -292,  -292,  -292,    14,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,    14,   187,  -292,   209,   208,  -292,
      32,    32,   201,  -292,  -292,  -292,  -292,   217,   203,  -292,
     207,   220,   211,   218,   223,   215,   221,   259,   231,   225,
     228,   234,   226,   229,   251,   239,  -292,  -292,  -292,  -292,
    -292,   252,   257,    28,   182,  -292,  -292,  -292,  -292,  -292,
     106,  -292,   290,   249,   -27,  -292,   287,   254,    73,  -292,
     285,   256,   259,  -292,  -292,   100,   260,    12,  -292,   278,
     261,    17,  -292,   282,   264,   323,  -292,   277,  -292,  -292,
     265,   316,   269,  -292,  -292,   267,   123,   272,  -292,  -292,
    -292,  -292,   270,   291,  -292,  -292,  -292,   271,  -292,   137,
     276,  -292,  -292,   274,   184,   279,  -292,  -292,   275,   262,
     281,   292,   293,   259,   283,   -11,    11,   284,  -292,   192,
     288,   259,   286,   259,   289,  -292,   242,   294,   298,   295,
    -292,   250,   296,    29,   297,   299,  -292,    14,    14,  -292,
     -17,   300,   301,   302,  -292,  -292,  -292,   259,   303,  -292,
     307,  -292,  -292,  -292,    56,  -292,   259,   304,  -292,   308,
    -292,  -292,   259,   305,  -292,   309,  -292,  -292,  -292,  -292,
      38,   306,   310,   314,   311,  -292,   -15,   318,   313,  -292,
     259,   315,  -292,  -292,  -292,   259,   317,  -292,   259,   319,
    -292,  -292,    83,  -292,  -292,   214,   324,  -292,  -292,  -292,
    -292,    62,  -292,    47,  -292,   321,  -292,  -292,  -292,  -292,
    -292,   322,   214,  -292,  -292,  -292,   259,  -292,  -292,  -292,
     325,   326,  -292,   259,   327,  -292,   326,  -292,  -292
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     145,     0,     0,     0,   145,    15,     0,     0,    16,    18,
      20,    19,     0,    17,     0,    12,    14,    13,     0,   145,
       0,    10,     4,     3,     0,     0,   145,     0,     0,     0,
       0,     0,     0,     0,     1,     2,    23,    11,    22,    62,
      58,    59,     0,    60,     0,    61,     0,    36,    37,    48,
      51,    54,    55,     0,     0,     0,    39,    40,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    44,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   145,    29,   145,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    21,    56,    57,   145,    33,    34,    47,
      49,    50,    52,    53,   145,     0,    38,     0,     0,   144,
       0,     0,     0,    80,    81,    82,    83,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,    26,    27,
      28,     0,     0,   145,   145,   142,    43,    46,    42,    45,
       0,    63,     0,     0,     0,    64,     0,     0,     0,    65,
       0,   145,     0,   110,    66,     0,     0,     0,    67,     0,
       0,     0,    68,     0,     0,     0,     6,     0,   143,    78,
       0,     0,    69,    91,    90,     0,     0,     0,   106,   107,
     108,   101,     0,     0,    74,   105,   109,     0,   112,     0,
       0,   120,   119,     0,     0,     0,   129,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,     0,
     145,     0,     0,     0,     0,   114,     0,     0,     0,     0,
     123,     0,   145,     0,     0,     0,    77,   145,   145,    84,
       0,     0,     0,    71,    72,    93,    92,     0,     0,    97,
       0,    73,   100,   102,     0,   111,     0,     0,   116,     0,
      75,   121,     0,     0,   125,     0,    76,   127,   131,   130,
       0,     0,     0,     0,     0,    85,     0,     0,     0,    94,
       0,     0,   104,   103,   113,     0,     0,   122,     0,     0,
     133,   132,     0,     5,     8,     0,     0,    87,    89,    70,
      96,     0,   115,     0,   124,     0,   135,   136,   137,   138,
     134,     0,     0,    99,    98,   118,     0,   117,   126,    86,
       0,   145,    88,     0,     0,   141,   145,   139,   140
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -292,    -3,  -292,  -292,   312,  -292,   320,     2,     3,  -292,
     -80,   -23,   -24,   101,   102,  -292,  -292,    66,  -292,  -292,
    -291,  -292,  -292,  -292,  -292,   216,  -292,  -292,  -292,    81,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,    35,  -179,   193,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    37,    38,    78,    45,    46,    47,
      55,    22,    48,    49,    50,    51,    52,    72,   137,   141,
     144,   148,   151,   154,   138,   139,   173,   202,   263,   264,
     142,   177,   207,   240,   271,   145,   181,   214,   211,   149,
     186,   220,   247,   280,   152,   190,   225,   252,   286,   155,
     194,   230,   256,   330,   337,   344,    61,   128,    23
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      57,    27,    21,    56,   261,    62,    21,    71,   222,    79,
     146,    24,   227,   294,   126,   316,    35,     1,    82,     2,
     203,    21,     3,     4,   331,     5,    34,   204,    53,    25,
     295,    26,   317,     6,     7,   262,    73,   147,    74,     8,
      28,   340,    59,    65,     9,    36,    30,    83,    10,    29,
      60,     6,     7,    75,    33,    11,    31,    66,   265,   221,
      76,    12,    67,   119,   226,   266,    68,    60,    57,    58,
     129,    56,    60,    69,   289,    54,   288,    30,    80,    39,
      40,    41,    42,   197,    60,   310,    43,    31,   117,   118,
      13,    32,    81,    60,   335,    77,   125,    14,    87,    15,
      16,    17,   336,   302,     6,     7,   166,   168,    70,   333,
     303,   311,    84,   161,    92,    14,   334,    93,    21,     6,
       7,   162,    94,   183,    63,    64,    21,   133,   134,   135,
     136,    95,    39,    40,    41,    42,   217,    57,   129,    43,
      56,    96,     6,     7,   208,   209,   210,    39,    40,    41,
      42,   237,    99,    44,    43,   215,     6,     7,   216,    85,
      86,   218,   326,   327,   328,   329,    88,    89,    14,   132,
      39,    40,    41,    42,   244,    90,    91,    43,   133,   134,
     135,   136,   238,    14,    39,    40,    41,    42,   100,   120,
     121,    43,   122,   123,    97,   245,   167,   169,    98,   101,
     250,   102,   103,     6,     7,   104,    14,   112,   105,   259,
     106,     6,     7,   107,   272,   269,   108,   273,   109,   275,
      14,   268,   278,   110,   111,   140,   287,   284,   249,   115,
     130,    39,    40,    41,    42,   116,   131,   124,    43,    39,
      40,    41,    42,   299,   127,   143,    43,   150,   156,   153,
     163,   157,   304,   158,   292,   293,   164,   159,   307,    21,
      21,     6,     7,   160,   165,   172,   170,    14,   171,     6,
       7,   175,   174,   176,   179,    14,   320,   180,     6,     7,
     277,   322,   184,   178,   324,   188,   182,   185,   189,    39,
      40,    41,    42,   187,   191,   283,    43,    39,    40,    41,
      42,   193,   192,   200,    43,   195,    39,    40,    41,    42,
     196,   201,   341,    43,   205,   345,   206,   212,   213,   346,
     345,   223,   219,   224,   228,    14,   229,   231,   232,   233,
     234,   235,   236,    14,   239,   241,   243,   242,   246,   248,
     253,   251,    14,   255,   257,   258,   254,   306,   260,   267,
     270,   274,   281,   301,   276,   309,   279,   198,   285,   262,
     282,   315,   290,   313,   298,   296,   297,   314,   300,   305,
     308,   312,   318,   339,   332,   338,   342,   291,     0,   319,
     321,   348,   323,   347,   325,     0,   199,     0,   343,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,   114
};

static const yytype_int16 yycheck[] =
{
      26,     4,     0,    26,    15,    29,     4,    31,   187,    33,
      35,    50,   191,    30,    94,    30,    19,     3,    42,     5,
      47,    19,     8,     9,   315,    11,     0,    54,    25,    50,
      47,    50,    47,    19,    20,    46,    16,    62,    18,    25,
      50,   332,    47,    11,    30,    47,    55,    44,    34,    50,
      55,    19,    20,    33,    50,    41,    65,    25,    47,    47,
      40,    47,    30,    87,    47,    54,    34,    55,    94,    10,
      96,    94,    55,    41,   253,    47,    47,    55,    62,    47,
      48,    49,    50,   163,    55,    47,    54,    65,    85,    86,
      76,    69,    69,    55,    47,    75,    93,    83,    61,    85,
      86,    87,    55,    47,    19,    20,   130,   131,    76,    47,
      54,   290,    51,   116,    51,    83,    54,    63,   116,    19,
      20,   124,    62,   147,    47,    48,   124,    21,    22,    23,
      24,    51,    47,    48,    49,    50,    36,   163,   164,    54,
     163,    47,    19,    20,    71,    72,    73,    47,    48,    49,
      50,    28,    56,    68,    54,   181,    19,    20,   182,    66,
      67,   185,    79,    80,    81,    82,    57,    58,    83,    12,
      47,    48,    49,    50,    37,    59,    60,    54,    21,    22,
      23,    24,   206,    83,    47,    48,    49,    50,    56,    88,
      89,    54,    90,    91,    51,   219,   130,   131,    51,    50,
     224,    50,    50,    19,    20,    50,    83,    51,    50,   233,
      50,    19,    20,    50,   240,   239,    50,   241,    50,   243,
      83,    29,   246,    50,    50,    26,   252,   251,    44,    51,
      65,    47,    48,    49,    50,    52,    65,    52,    54,    47,
      48,    49,    50,   267,    62,    31,    54,    42,    51,    77,
      63,    51,   276,    51,   257,   258,    47,    51,   282,   257,
     258,    19,    20,    51,    56,    62,    65,    83,    51,    19,
      20,    51,    65,    62,    51,    83,   300,    62,    19,    20,
      38,   305,    51,    65,   308,    51,    65,    62,    62,    47,
      48,    49,    50,    65,    65,    45,    54,    47,    48,    49,
      50,    62,    51,    13,    54,    53,    47,    48,    49,    50,
      53,    62,   336,    54,    27,   341,    62,    32,    62,   343,
     346,    43,    62,    62,    42,    83,    62,     4,    51,    64,
      14,    62,    65,    83,    62,    65,    65,    46,    62,    65,
      65,    62,    83,    62,    52,    52,    84,    39,    65,    65,
      62,    65,    54,    46,    65,    46,    62,   164,    62,    46,
      65,    50,    65,    53,    62,    65,    65,    53,    65,    65,
      65,    65,    54,    51,    50,    54,    51,    78,    -1,   298,
      65,   346,    65,    56,    65,    -1,   170,    -1,    62,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     8,     9,    11,    19,    20,    25,    30,
      34,    41,    47,    76,    83,    85,    86,    87,    89,    90,
      91,    95,    99,   146,    50,    50,    50,    89,    50,    50,
      55,    65,    69,    50,     0,    89,    47,    92,    93,    47,
      48,    49,    50,    54,    68,    95,    96,    97,   100,   101,
     102,   103,   104,    96,    47,    98,    99,   146,    10,    47,
      55,   144,   100,    47,    48,    11,    25,    30,    34,    41,
      76,   100,   105,    16,    18,    33,    40,    75,    94,   100,
      62,    69,   100,    96,    51,    66,    67,    61,    57,    58,
      59,    60,    51,    63,    62,    51,    47,    51,    51,    56,
      56,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    51,    92,    94,    51,    52,    96,    96,   100,
     101,   101,   102,   102,    52,    96,    98,    62,   145,   146,
      65,    65,    12,    21,    22,    23,    24,   106,   112,   113,
      26,   107,   118,    31,   108,   123,    35,    62,   109,   127,
      42,   110,   132,    77,   111,   137,    51,    51,    51,    51,
      51,    89,    89,    63,    47,    56,   100,   105,   100,   105,
      65,    51,    62,   114,    65,    51,    62,   119,    65,    51,
      62,   124,    65,   100,    51,    62,   128,    65,    51,    62,
     133,    65,    51,    62,   138,    53,    53,    98,   145,   113,
      13,    62,   115,    47,    54,    27,    62,   120,    71,    72,
      73,   126,    32,    62,   125,   146,   100,    36,   100,    62,
     129,    47,   144,    43,    62,   134,    47,   144,    42,    62,
     139,     4,    51,    64,    14,    62,    65,    28,   100,    62,
     121,    65,    46,    65,    37,   100,    62,   130,    65,    44,
     100,    62,   135,    65,    84,    62,   140,    52,    52,   100,
      65,    15,    46,   116,   117,    47,    54,    65,    29,   100,
      62,   122,   146,   100,    65,   100,    65,    38,   100,    62,
     131,    54,    65,    45,   100,    62,   136,   146,    47,   144,
      65,    78,    89,    89,    30,    47,    65,    65,    62,   100,
      65,    46,    47,    54,   100,    65,    39,   100,    65,    46,
      47,   144,    65,    53,    53,    50,    30,    47,    54,   117,
     100,    65,   100,    65,   100,    65,    79,    80,    81,    82,
     141,   108,    50,    47,    54,    47,    55,   142,    54,    51,
     108,   100,    51,    62,   143,   146,   100,    56,   143
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    90,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    92,    93,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    96,    96,    96,    96,    97,    98,    98,
      98,    99,    99,    99,    99,    99,    99,   100,   100,   101,
     101,   101,   102,   102,   102,   103,   104,   104,   104,   104,
     104,   104,   104,   105,   105,   105,   105,   105,   105,   106,
     106,   106,   106,   107,   108,   109,   110,   111,   112,   112,
     113,   113,   113,   113,   114,   115,   115,   116,   116,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   123,   124,   125,   125,   125,   126,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   134,   134,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   141,   141,   141,   141,   142,
     143,   143,   144,   145,   145,   146
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,    11,     7,     3,    11,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     3,     3,     3,     3,     3,     4,
       4,     4,     4,     3,     3,     2,     1,     1,     3,     1,
       1,     3,     6,     6,     3,     6,     6,     3,     1,     3,
       3,     1,     3,     3,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     3,
       7,     5,     5,     5,     3,     5,     5,     4,     3,     1,
       1,     1,     1,     1,     4,     4,     7,     3,     6,     3,
       3,     3,     4,     4,     4,     2,     4,     2,     4,     4,
       1,     3,     4,     4,     4,     1,     1,     1,     1,     3,
       2,     4,     2,     4,     2,     4,     2,     4,     4,     3,
       3,     4,     4,     2,     4,     2,     4,     1,     3,     3,
       4,     4,     4,     4,     4,     1,     1,     1,     1,     4,
       3,     1,     4,     3,     1,     0
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
#line 168 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statements: statement statements\n\n"); 
    sp += 2;
    (yyval.NT) = createnode();
    (yyval.NT)->children.push_back((yyvsp[-1].NT));
    (yyval.NT)->children.push_back((yyvsp[0].NT));
  }
#line 1622 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 177 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statements:  epsilon\n\n"); 
    sp += 2; 
    (yyval.NT) = createnode();
  }
#line 1633 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 185 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement: assign_statement\n\n"); 
    sp = 0; 
    (yyval.NT) = createnode();
    (yyval.NT)->children.push_back((yyvsp[0].NT));
    }
#line 1645 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 193 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  K_IF LP bool_returning_statements RP LB statements RB K_ELSE LB statements RB\n\n"); 
    sp = 0; 

  }
#line 1656 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 200 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  K_WHILE LP bool_returning_statements RP LB statements RB\n\n"); 
    sp = 0; 
  }
#line 1666 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 206 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  K_BEGIN statements K_END\n\n"); 
    sp = 0; 
  }
#line 1676 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 212 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  K_FOR LP assign_statements SEMI bool_returning_statements SEMI assign_statements RP LB statements RB\n\n"); 
    sp = 0; 
  }
#line 1686 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 218 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  ID DOT function_call_1\n\n"); 
    sp = 0; 
  }
#line 1696 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 224 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  function_call_2\n\n"); 
    sp = 0; 
  }
#line 1706 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 230 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  TYPE DList\n\n"); 
    sp += 2; 
    //auto x = *($2);
    vector<string>& x = *(yyvsp[0].vs);
    for(int i = 0; i < x.size(); i++)
    {
      cout<<x[i]<<"----";
    }
  }
#line 1722 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 243 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_INT\n\n"); 
    sp = 0; 
    string temp = "INT";
    (yyval.s) = &temp;
  }
#line 1734 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 251 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_FLOAT\n\n"); 
    sp = 0; 
    string temp = "FLOAT";
    (yyval.s) = &temp;
  }
#line 1746 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 259 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_BOOL\n\n"); 
    sp = 0; 
    string temp = "BOOL";
    (yyval.s) = &temp;
  }
#line 1758 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 267 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_PROCESSOR\n\n"); 
    sp = 0; 
    string temp = "PROCESSOR";
    (yyval.s) = &temp;
  }
#line 1770 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 275 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_LINK\n\n"); 
    sp = 0; 
    string temp = "LINK";
    (yyval.s) = &temp;
  }
#line 1782 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 283 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_SCHEDULER\n\n"); 
    sp = 0; 
    string temp = "SCHEDULER";
    (yyval.s) = &temp;
  }
#line 1794 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 291 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_MEMORY\n\n"); 
    sp = 0; 
    string temp = "MEMORY";
    (yyval.s) = &temp;
  }
#line 1806 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 299 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_CLUSTER\n\n"); 
    sp = 0; 
    string temp = "CLUSTER";
    (yyval.s) = &temp;
  }
#line 1818 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 307 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_JOB\n\n"); 
    sp = 0; 
    string temp = "JOB";
    (yyval.s) = &temp;
  }
#line 1830 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 316 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DList : ID K_COMMA DList\n\n"); 
    sp += 2; 
    (yyvsp[0].vs)->push_back((yyvsp[-2].Sval).text);
    (yyval.vs) = (yyvsp[0].vs);
    }
#line 1842 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 324 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DList : ID \n\n"); 
    sp += 2; 
    (yyval.vs) = new vector<string>;
    (yyval.vs)->push_back((yyvsp[0].Sval).text);
    }
#line 1854 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 333 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DList : ID \n\n"); 
    sp += 2; 
    (yyval.Sval).text = (char*)malloc(sizeof(lexeme));
    strcpy((yyval.Sval).text, lexeme);
    (yyval.Sval).length = 1;
    }
#line 1867 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 344 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_1: K_IS_RUNNING LP RP\n\n"); 
    sp += 2; 
  }
#line 1877 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 350 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_1:  K_GET_CLOCK_SPEED LP RP\n\n"); 
    sp += 2; 
  }
#line 1887 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 356 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_1:  K_GET_AVAILABLE_MEMORY LP RP\n\n"); 
    sp += 2; 
  }
#line 1897 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 362 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_1:  K_GET_MEMORY LP RP\n\n"); 
    sp += 2; 
  }
#line 1907 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 368 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_1:  K_PRINT_STATS LP RP\n\n"); 
    sp += 2; 
  }
#line 1917 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 375 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_2: K_RUN LP ID RP\n\n"); 
    sp += 2; 
  }
#line 1927 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 381 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_2:  K_RUN LP array_id RP\n\n"); 
    sp += 2; 
  }
#line 1937 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 387 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_2:  K_DISCARD_JOB LP expression RP\n\n"); 
    sp += 2; 
  }
#line 1947 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 393 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_2:  K_WAIT LP expression RP\n\n"); 
    sp += 2; 
  }
#line 1957 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 400 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("bool_returning_statements: bool_returning_statement L_AND bool_returning_statements\n\n"); 
    sp += 2; 
  }
#line 1967 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 406 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("bool_returning_statements:  bool_returning_statement  L_OR bool_returning_statements\n\n"); 
    sp += 2; 
  }
#line 1977 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 412 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("bool_returning_statements:  L_NOT bool_returning_statements\n\n"); 
    sp += 2; 
  }
#line 1987 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 418 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("bool_returning_statements:  bool_returning_statement\n\n"); 
    sp += 2; 
  }
#line 1997 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 425 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("bool_returning_statement: expression\n\n"); 
    sp += 2; 
  }
#line 2007 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 432 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statements: assign_statement COMMA assign_statements\n\n"); 
    sp += 2; 
  }
#line 2017 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 438 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statements:  assign_statement\n\n"); 
    sp += 2; 
  }
#line 2027 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 444 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statements:  epsilon\n\n"); 
    sp += 2; 
  }
#line 2037 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 451 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statement: ID ASSIGN expression\n\n"); 
    sp += 2; 

  }
#line 2048 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 458 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statement:  ID LS INT RS ASSIGN expression\n\n"); 
    sp += 2; 
  }
#line 2058 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 464 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statement:  ID LS ID RS ASSIGN expression\n\n"); 
    sp += 2; 
  }
#line 2068 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 470 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statement:  ID ASSIGN constructors\n\n"); 
    sp += 2; 
  }
#line 2078 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 476 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statement:  ID LS INT RS ASSIGN constructors\n\n"); 
    sp += 2; 
  }
#line 2088 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 482 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statement:  ID LS ID RS ASSIGN constructors\n\n"); 
    sp += 2; 
  }
#line 2098 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 489 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("expression: term_prime RELOP expression\n\n"); 
    sp += 2; 
  }
#line 2108 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 495 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("expression:  term_prime\n\n"); 
    sp += 2; 
  }
#line 2118 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 502 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("term_prime: term PLUS term_prime\n\n"); 
    sp += 2; 
  }
#line 2128 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 508 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("term_prime:  term MINUS term_prime\n\n"); 
    sp += 2; 
  }
#line 2138 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 514 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("term_prime:  term\n\n"); 
    sp += 2; 
  }
#line 2148 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 521 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("term: factor MULT term\n\n"); 
    sp += 2; 
  }
#line 2158 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 527 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("term:  factor DIV term\n\n"); 
    sp += 2; 
  }
#line 2168 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 533 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("term:  factor\n\n"); 
    sp += 2; 
  }
#line 2178 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 540 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("factor: factor_prime\n\n"); 
    sp += 2; 
  }
#line 2188 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 547 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime: ID DOT function_call_1\n\n");  }
#line 2194 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 549 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime:  LP expression RP\n\n");  }
#line 2200 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 551 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime:  INT\n\n");  }
#line 2206 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 553 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime:  FLOAT\n\n");  }
#line 2212 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 555 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime: STRING\n\n"); }
#line 2218 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 557 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime: function_call/_2\n\n"); }
#line 2224 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 559 "grammar.y" /* yacc.c:1646  */
    {sp = 0; helper(); sp += 2; print_parse("factor_prime: ID\n\n"); }
#line 2230 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 562 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("constructors: K_PROCESSOR LP processor_params RP\n\n"); 
    sp += 2; 
  }
#line 2240 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 568 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("constructors: K_LINK LP link_params RP\n\n"); 
    sp += 2; 
  }
#line 2250 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 574 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("constructors: K_MEMORY LP memory_params RP\n\n"); 
    sp += 2; 
  }
#line 2260 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 580 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("constructors: K_JOB LP job_params RP\n\n"); 
    sp += 2; 
  }
#line 2270 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 586 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("constructors: K_CLUSTER LP cluster_params RP\n\n"); 
    sp += 2; 
  }
#line 2280 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 592 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("constructors: K_SCHEDULER LP scheduler_params RP\n\n"); 
    sp += 2; 
  }
#line 2290 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 599 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("processor_params : processor_param_isa processor_param_clock_speed processor_param_l1_memory \n\n"); 
    sp += 2; 
  }
#line 2300 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 605 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("processor_params : processor_param_isa processor_param_clock_speed  processor_param_l1_memory COMMA processor_param_l2_memory COMMA processor_param_name\n\n"); 
    sp += 2; 
  }
#line 2310 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 611 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("processor_params : processor_param_isa processor_param_clock_speed  processor_param_l1_memory COMMA processor_param_l2_memory \n\n"); 
    sp += 2; 
  }
#line 2320 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 617 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("processor_params : processor_param_isa processor_param_clock_speed processor_param_l1_memory COMMA processor_param_name \n\n"); 
    sp += 2; 
  }
#line 2330 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 624 "grammar.y" /* yacc.c:1646  */
    {
  helper(); 
  print_parse("link_params : link_param_start_point  link_param_end_point  link_param_bandwidth  link_param_channel_capacity  link_param_name \n\n"); 
  sp += 2; 
}
#line 2340 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 631 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("memory_params : memory_param_memory_type  memory_param_mem_size  memory_param_name\n\n"); 
    sp += 2; 
  }
#line 2350 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 638 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("job_params : job_param_job_id  job_param_flops_required  job_param_deadline  job_param_mem_required  job_param_affinity\n\n"); 
    sp += 2; 
  }
#line 2360 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 645 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("cluster_params :  cluster_param_processors  cluster_param_topology  cluster_param_link_bandwidth  cluster_param_link_capacity  cluster_param_name\n\n"); 
    sp += 2; 
  }
#line 2370 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 652 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("scheduler_params :  scheduler_param_jobs  scheduler_param_processors scheduler_param_clusters scheduler_param_algo \n\n"); 
    sp += 2; 
  }
#line 2380 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 660 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("processor_param_isa : K_ISA ASSIGN ISA_values\n\n"); 
    sp += 2; 
  }
#line 2390 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 667 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("ISA_values : K_ARM\n\n"); 
    sp += 2; 
  }
#line 2400 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 673 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("ISA_values : K_AMD\n\n"); 
     sp += 2; 
    }
#line 2410 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 679 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("ISA_values : K_CDC\n\n"); 
    sp += 2; 
  }
#line 2420 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 685 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("ISA_values : K_MIPS\n\n"); 
    sp += 2; 
  }
#line 2430 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 692 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("processor_param_clock_speed :  COMMA K_CLOCK_SPEED COLON expression\n\n"); 
    sp += 2; 
  }
#line 2440 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 699 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("processor_param_l1_memory : COMMA K_L1_MEMORY ASSIGN ID\n\n"); 
    sp += 2; 
  }
#line 2450 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 705 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("processor_param_l1_memory : COMMA K_L1_MEMORY ASSIGN K_MEMORY LP memory_params RP\n\n"); 
    sp += 2; 
  }
#line 2460 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 712 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("processor_param_l2_memory :  K_L2_MEMORY ASSIGN ID\n\n"); 
    sp += 2; 
  }
#line 2470 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 718 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("processor_param_l2_memory :  K_L2_MEMORY ASSIGN K_MEMORY LP memory_params RP\n\n"); 
    sp += 2; 
  }
#line 2480 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 724 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("processor_param_name : K_NAME ASSIGN STRING \n\n"); 
    sp += 2; 
  }
#line 2490 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 732 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("link_param_start_point : K_START_POINT ASSIGN STRING \n\n"); 
    sp += 2; 
  }
#line 2500 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 738 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("link_param_start_point :K_START_POINT ASSIGN ID \n\n"); 
     sp += 2;}
#line 2509 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 744 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("link_param_end_point : COMMA K_END_POINT ASSIGN STRING\n\n"); 
    sp += 2; 
  }
#line 2519 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 750 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("link_param_end_point :COMMA K_END_POINT ASSIGN ID\n\n"); 
    sp += 2;}
#line 2528 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 756 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("link_param_bandwidth : COMMA K_BANDWIDTH ASSIGN expression\n\n"); 
    sp += 2; 
  }
#line 2538 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 762 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("link_param_bandwidth: COMMA expression\n\n"); 
    sp += 2;}
#line 2547 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 768 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("link_param_channel_capacity : COMMA K_CHANNEL_CAPACITY ASSIGN expression\n\n"); 
    sp += 2; 
  }
#line 2557 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 774 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("link_param_channel_capacity : COMMA expression\n\n"); 
    sp += 2;}
#line 2566 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 780 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("link_param_name : COMMA K_NAME ASSIGN STRING \n\n"); 
    sp += 2; 
  }
#line 2576 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 786 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("link_param_name : COMMA K_NAME ASSIGN ID \n\n"); 
    sp += 2; 
  }
#line 2586 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 792 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("link_param_name :epsilon\n\n"); 
    sp += 2;}
#line 2595 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 799 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("memory_param_memory_type : K_MEMORY_TYPE ASSIGN memory_type_values\n\n"); 
    sp += 2; 
  }
#line 2605 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 805 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("memory_param_mem_size : COMMA K_MEM_SIZE ASSIGN expression\n\n"); 
    sp += 2; 
  }
#line 2615 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 811 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("memory_param_name : COMMA K_NAME ASSIGN STRING\n\n"); 
    sp += 2; 
  }
#line 2625 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 817 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("memory_param_name : COMMA K_NAME ASSIGN ID\n\n"); 
    sp += 2; 
  }
#line 2635 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 823 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("memory_param_name :epsilon\n\n"); 
    sp += 2;}
#line 2644 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 830 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("memory_type_values : K_PRIMARY\n\n"); 
    sp += 2; 
  }
#line 2654 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 836 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("memory_type_values :K_SECONDARY\n\n"); 
    sp += 2; 
  }
#line 2664 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 842 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("memory_type_values :K_SECONDARYK_CACHE\n\n"); 
    sp += 2; 
  }
#line 2674 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 849 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("job_param_job_id : K_JOB_ID ASSIGN expression\n\n"); 
    sp += 2; 
  }
#line 2684 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 856 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("job_param_flops_required : COMMA K_FLOPS_REQUIRED ASSIGN expression\n\n"); 
    sp += 2; 
  }
#line 2694 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 863 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("job_param_deadline : COMMA K_DEADLINE ASSIGN expression\n\n"); 
    sp += 2; 
  }
#line 2704 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 870 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("job_param_mem_required : COMMA K_MEM_REQUIRED ASSIGN expression\n\n"); 
    sp += 2; 
  }
#line 2714 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 877 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("job_param_affinity : COMMA K_AFFINITY ASSIGN array_num\n\n"); 
    sp += 2; 
  }
#line 2724 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 886 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("cluster_param_processors : K_PROCESSORS ASSIGN array_id\n\n"); 
    sp += 2; 
  }
#line 2734 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 893 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("cluster_param_topology : COMMA K_TOPOLOGY ASSIGN STRING\n\n"); 
    sp += 2; 
  }
#line 2744 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 899 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("cluster_param_link_bandwidth : COMMA K_LINK_BANDWIDTH ASSIGN expression\n\n"); 
    sp += 2; 
  }
#line 2754 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 906 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("cluster_param_link_capacity : COMMA K_LINK_CAPACITY ASSIGN expression\n\n"); 
    sp += 2; 
  }
#line 2764 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 913 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("cluster_param_name : COMMA K_NAME ASSIGN STRING\n\n"); 
    sp += 2; 
  }
#line 2774 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 919 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("cluster_param_name :  epsilon\n\n"); 
    sp += 2; 
  }
#line 2784 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 926 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("scheduler_param_jobs : K_JOBS ASSIGN array_id\n\n"); 
    sp += 2; 
  }
#line 2794 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 932 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("scheduler_param_jobs :  K_JOBS ASSIGN ID\n\n"); 
    sp += 2; 
  }
#line 2804 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 938 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("scheduler_param_processors : COMMA K_PROCESSORS ASSIGN array_id\n\n"); 
    sp += 2; 
  }
#line 2814 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 944 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("scheduler_param_processors :  COMMA K_PROCESSORS ASSIGN ID\n\n"); 
    sp += 2; 
  }
#line 2824 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 950 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("scheduler_param_clusters : COMMA K_CLUSTERS ASSIGN array_id\n\n"); 
    sp += 2; 
  }
#line 2834 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 956 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("scheduler_param_clusters :  COMMA K_CLUSTERS ASSIGN ID\n\n"); 
    sp += 2; 
  }
#line 2844 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 962 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("scheduler_param_algo : COMMA K_ALGO ASSIGN algo_type_values\n\n"); 
    sp += 2; 
  }
#line 2854 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 969 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("algo_type_values : K_FCFS\n\n"); 
    sp += 2; 
  }
#line 2864 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 975 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("algo_type_values :  K_SJN\n\n"); 
    sp += 2; 
  }
#line 2874 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 981 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("algo_type_values :  K_SRT\n\n"); 
    sp += 2; 
  }
#line 2884 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 987 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("algo_type_values :  K_RRS\n\n"); 
    sp += 2; 
  }
#line 2894 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 994 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("array_num : LS expression array_num_items RS\n\n"); 
    sp += 2; 
  }
#line 2904 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1001 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("array_num_items : COMMA expression array_num_items\n\n"); 
    sp += 2; 
  }
#line 2914 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1007 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("array_num_items :  epsilon\n\n"); 
    sp += 2; 
  }
#line 2924 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1014 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("array_id : LS ID array_id_items RS\n\n"); 
    sp += 2; 
  }
#line 2934 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1021 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("array_id_items : COMMA ID array_id_items\n\n"); 
    sp += 2; 
  }
#line 2944 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1027 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("array_id_items :  epsilon\n\n"); 
    sp += 2; 
  }
#line 2954 "grammar.tab.c" /* yacc.c:1646  */
    break;


#line 2958 "grammar.tab.c" /* yacc.c:1646  */
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
#line 1035 "grammar.y" /* yacc.c:1906  */

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
