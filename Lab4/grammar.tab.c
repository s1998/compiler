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
extern int yydebug;

int sp = 0;

int print_parse_tree = 1;
int print_parse_error = 1;
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
struct symbolTable sym_tab;
int current_scope;

#line 122 "grammar.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 1
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
    K_FLOAT = 85,
    K_PRINT = 86,
    K_INPUT = 87
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 145 "grammar.y" /* yacc.c:355  */

        struct node* NT; //non-terminals

        string* s;

        vector<string>* vs;

        vector<int>* dim;


        struct terminal Sval;

        int integer;

#line 264 "grammar.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 281 "grammar.tab.c" /* yacc.c:358  */

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   126

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

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
      82,    83,    84,    85,    86,    87,    88,    89,     2,     2,
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
       0,   187,   187,   198,   206,   214,   224,   230,   236,   242,
     248,   254,   269,   276,   281,   287,   299,   314,   331,   340,
     354,   364,   371,   382,   390,   408,   415,   422,   429,   436,
     443,   450,   457,   464,   472,   478,   484,   490,   496,   503,
     523,   531,   541,   551,   562,   573,   589,   595,   601,   608,
     656,   676,   689,   695,   761,   787,   796,   850,   910,   919,
     928,   934,   946,   957,   968,   979,   985,  1005
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
  "K_PRINT", "K_INPUT", "$accept", "statements", "statement",
  "K_WHILE_EXP", "K_IF_EXP", "K_FOR_EXP", "BLOCK_BODY", "DList", "IDEXP",
  "IDEXP0", "BR_DIMLIST", "DIM1", "DType", "function_call_1",
  "function_call_2", "bool_returning_statements",
  "bool_returning_statement", "assign_statements", "assign_statement",
  "expression", "RELOPEXP", "term_prime", "term", "factor", "factor_prime",
  "epsilon", YY_NULLPTR
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
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87
};
# endif

#define YYPACT_NINF -79

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-79)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       2,   -44,   -42,   -38,     2,   -79,   -79,   -79,   -79,   -79,
     -49,   -79,   -79,   -79,   -79,   -24,    16,    23,     2,    -5,
      -5,    -5,   -15,    17,    12,   -79,   -79,   -79,    -8,    -8,
      12,    61,    -2,     4,    30,   -79,   -79,     2,   -79,    75,
     -79,     4,   -26,   -79,    17,   -79,   -79,    21,    15,   -79,
     -79,     4,   -79,    -8,   -79,   -79,    35,   -22,   -79,    34,
       5,    -4,   -79,    45,    39,    41,   -79,   -79,    54,    55,
      56,    58,    59,   -79,    60,    62,    63,    -5,   -79,    51,
      64,   -79,    12,    -2,    66,   -79,   -79,    -8,    -8,   -79,
       4,     4,     4,     4,     4,   -79,    -8,    12,    67,    68,
      70,    71,    72,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,    47,
     -79,   -79,   -79,   -79,   -79,   -79,    12,    73,   -79
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      67,     0,     0,     0,    67,    28,    29,    31,    33,    32,
      20,    30,    25,    27,    26,     0,     0,     0,    67,     0,
       0,     0,     0,    18,     0,    10,     4,     3,     0,     0,
      67,     0,     0,     0,     0,     1,     2,    67,     6,     0,
       8,     0,     0,    19,    21,    20,    11,    17,    20,    62,
      63,     0,    64,     0,    66,    65,     0,    44,    45,    51,
      55,    58,    59,     0,     0,    47,    48,     7,     0,     0,
       0,     0,     0,     9,     0,     0,     0,     0,    49,     0,
       0,    22,     0,     0,     0,    43,    13,     0,     0,    52,
       0,     0,     0,     0,     0,    12,     0,    67,     0,     0,
       0,     0,     0,    39,    40,    15,     5,    24,    23,    16,
      60,    61,    41,    42,    50,    53,    54,    56,    57,     0,
      46,    34,    35,    36,    37,    38,    67,     0,    14
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -79,    -3,   -79,   -79,   -79,   -79,     8,    32,     0,   -79,
      81,   -79,   -79,    29,    57,   -20,   -79,   -78,   -28,   -16,
     -79,     9,   -29,   -79,   -79,   -27
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    17,    18,    19,    20,    21,    38,    46,    54,    23,
      43,    44,    24,    73,    55,    56,    57,    64,    26,    58,
      90,    59,    60,    61,    62,    27
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      22,    31,    65,    66,    22,     1,    28,     2,    29,    63,
       3,     4,    30,     5,    68,    36,    69,    74,    22,   120,
      32,    79,    80,    35,    47,    78,    33,     6,    39,    40,
      22,    70,     7,    85,    76,    84,     8,    22,    71,    48,
      49,    50,    51,     9,    87,    88,    52,    37,   127,    10,
      41,    48,    49,    50,    51,    93,    94,    25,    52,    45,
      53,    25,    91,    92,   117,   118,    34,   112,   113,    65,
      66,    67,    42,    72,   114,    25,   119,    75,    11,    77,
      15,    16,    47,    82,    83,   106,    86,    12,    13,    14,
      15,    16,    15,    16,    25,    89,    95,    22,    65,    66,
     115,   116,    96,    97,    98,    99,   100,   107,   101,   102,
     126,   103,   110,   104,   109,     0,   105,   111,   121,   122,
     108,   123,   124,   125,   128,    81,    22
};

static const yytype_int8 yycheck[] =
{
       0,     4,    30,    30,     4,     3,    50,     5,    50,    29,
       8,     9,    50,    11,    16,    18,    18,    33,    18,    97,
      69,    47,    48,     0,    24,    41,    50,    25,    20,    21,
      30,    33,    30,    53,    37,    51,    34,    37,    40,    47,
      48,    49,    50,    41,    66,    67,    54,    52,   126,    47,
      65,    47,    48,    49,    50,    59,    60,     0,    54,    47,
      68,     4,    57,    58,    93,    94,    50,    87,    88,    97,
      97,    10,    55,    75,    90,    18,    96,    47,    76,     4,
      88,    89,    82,    62,    69,    77,    51,    85,    86,    87,
      88,    89,    88,    89,    37,    61,    51,    97,   126,   126,
      91,    92,    63,    62,    50,    50,    50,    56,    50,    50,
      63,    51,    83,    51,    82,    -1,    53,    51,    51,    51,
      56,    51,    51,    51,    51,    44,   126
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     8,     9,    11,    25,    30,    34,    41,
      47,    76,    85,    86,    87,    88,    89,    91,    92,    93,
      94,    95,    98,    99,   102,   104,   108,   115,    50,    50,
      50,    91,    69,    50,    50,     0,    91,    52,    96,    96,
      96,    65,    55,   100,   101,    47,    97,    98,    47,    48,
      49,    50,    54,    68,    98,   104,   105,   106,   109,   111,
     112,   113,   114,   105,   107,   108,   115,    10,    16,    18,
      33,    40,    75,   103,   109,    47,    91,     4,   109,    47,
      48,   100,    62,    69,   109,   105,    51,    66,    67,    61,
     110,    57,    58,    59,    60,    51,    63,    62,    50,    50,
      50,    50,    50,    51,    51,    53,    96,    56,    56,    97,
     103,    51,   105,   105,   109,   111,   111,   112,   112,   105,
     107,    51,    51,    51,    51,    51,    63,   107,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    93,    94,    95,    96,    97,    97,    98,    98,
      99,   100,   100,   101,   101,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   103,   103,   103,   104,
     104,   105,   105,   105,   105,   106,   107,   107,   107,   108,
     109,   109,   110,   111,   111,   111,   112,   112,   112,   113,
     114,   114,   114,   114,   114,   114,   114,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     4,     2,     3,     2,     3,
       1,     2,     4,     4,     8,     3,     3,     1,     1,     2,
       1,     1,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     4,
       4,     3,     3,     2,     1,     1,     3,     1,     1,     3,
       3,     1,     1,     3,     3,     1,     3,     3,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     0
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
#line 188 "grammar.y" /* yacc.c:1646  */
    {

    print_st(sym_tab);
    helper(); 
    print_parse("statements: statement statements\n\n"); 
    sp += 2;
    (yyval.NT) = createnode();
    (yyval.NT)->children.push_back((yyvsp[-1].NT));
    (yyval.NT)->children.push_back((yyvsp[0].NT));
  }
#line 1465 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 199 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statements:  epsilon\n\n"); 
    sp += 2; 
    (yyval.NT) = createnode();
  }
#line 1476 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 207 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement: assign_statement\n\n"); 
    sp = 0; 
    (yyval.NT) = createnode();
    (yyval.NT)->children.push_back((yyvsp[0].NT));
    }
#line 1488 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 215 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  K_IF LP bool_returning_statements RP LB statements RB K_ELSE LB statements RB\n\n"); 
    sp = 0; 
    current_scope++;



  }
#line 1502 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 225 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  K_WHILE LP bool_returning_statements RP LB statements RB\n\n"); 
    sp = 0; 
  }
#line 1512 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 231 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  K_BEGIN statements K_END\n\n"); 
    sp = 0; 
  }
#line 1522 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 237 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  K_FOR LP assign_statements SEMI bool_returning_statements SEMI assign_statements RP LB statements RB\n\n"); 
    sp = 0; 
  }
#line 1532 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 243 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  ID DOT function_call_1\n\n"); 
    sp = 0; 
  }
#line 1542 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 249 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  function_call_2\n\n"); 
    sp = 0; 
  }
#line 1552 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 255 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("statement:  TYPE DList\n\n"); 
    sp += 2; 
    //auto x = *($2);
    vector<string>& x = *(yyvsp[0].vs);
    for(int i = 0; i < x.size(); i++)
    {
      //cout<<x[i]<<"----";
      sym_tab.symbols[sym_tab.symbols.size() - i -1].type = (yyvsp[-1].integer);
    }

  }
#line 1570 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 270 "grammar.y" /* yacc.c:1646  */
    {
  current_scope++;
  cout<<"dasddsasdsdasd";
  
}
#line 1580 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 276 "grammar.y" /* yacc.c:1646  */
    {

  current_scope++;
}
#line 1589 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 282 "grammar.y" /* yacc.c:1646  */
    {
  current_scope++;
  
}
#line 1598 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 288 "grammar.y" /* yacc.c:1646  */
    {
  helper(); 
  print_parse("BLOCK_BODY : LB statements RB"); 
  sp += 2;
  cout<<"dawd";
  pop_from_st(sym_tab,current_scope); 
  
  current_scope--;

}
#line 1613 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 300 "grammar.y" /* yacc.c:1646  */
    {
    

    helper(); 
    print_parse("DList : ID K_COMMA DList\n\n"); 
    sp += 2; 
    (yyvsp[0].vs)->push_back((yyvsp[-2].Sval).text);
    (yyval.vs) = (yyvsp[0].vs);
    bool temp = insert_in_st(sym_tab, (yyvsp[-2].Sval).text, false, current_scope, (yyvsp[-2].Sval).dim, (yyvsp[-2].Sval).length);
    if(debug_on)
      std::cout<<"Insetd "<<temp<<" "<<(yyvsp[-2].Sval).length<<" "<<endl;
    if(!temp)
      cout<<"Could not insert symbol "<<(yyvsp[-2].Sval).text<<" in symbol table.";
    }
#line 1632 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 315 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DList : IDEXP \n\n"); 
    sp += 2; 
    (yyval.vs) = new vector<string>;
    (yyval.vs)->push_back((yyvsp[0].Sval).text);
    bool temp = insert_in_st(sym_tab, (yyvsp[0].Sval).text, false, current_scope, (yyvsp[0].Sval).dim, (yyvsp[0].Sval).length);


    if(debug_on)
      std::cout<<"Inserted "<<temp<<" "<<(yyvsp[0].Sval).length<<" "<<endl;
    if(!temp)
      cout<<"Could not insert symbol "<<(yyvsp[0].Sval).text<<" in symbol table.";
    
  }
#line 1652 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 332 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DList : ID \n\n"); 
    sp += 2; 
    (yyval.Sval) = (yyvsp[0].Sval);
    (yyval.Sval).length = 1;
    (yyval.Sval).dim = NULL;
  }
#line 1665 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 341 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DList : ID BR_DIMLIST\n\n"); 
    sp += 2; 
    (yyval.Sval) = (yyvsp[-1].Sval);
    (yyval.Sval).length = 1;
    (yyval.Sval).dim = (yyvsp[0].dim);
    for(int i = 0; i < (yyvsp[0].dim)->size(); i++)
      (yyval.Sval).length *= (*((yyvsp[0].dim)))[i];
    if(debug_on)
      cout<<"\n---- length : "<<(yyvsp[-1].Sval).text<<" "<<(yyval.Sval).length<<endl;
  }
#line 1682 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 355 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DList : ID \n\n"); 
    sp += 2; 
    (yyval.Sval).text = (char*)malloc(sizeof(lexeme));
    strcpy((yyval.Sval).text, lexeme);
    (yyval.Sval).length = 1;
  }
#line 1695 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 365 "grammar.y" /* yacc.c:1646  */
    {
        helper(); 
        print_parse("DList : LS K_INT RS\n\n"); 
        sp += 2;
        (yyval.dim) = (yyvsp[0].dim);
      }
#line 1706 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 372 "grammar.y" /* yacc.c:1646  */
    {
        helper(); 
        print_parse("DList : LS K_INT RS\n\n"); 
        sp += 2;
        (yyvsp[0].dim)->push_back((*(yyvsp[-1].dim))[0]);
        (yyval.dim) = (yyvsp[0].dim);
      }
#line 1718 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 382 "grammar.y" /* yacc.c:1646  */
    {

        helper(); 
        print_parse("DList : LS K_INT RS\n\n"); 
        sp += 2;
        (yyval.dim) = new vector<int>;
        (*(yyval.dim)).push_back(atoi(lexeme));
      }
#line 1731 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 391 "grammar.y" /* yacc.c:1646  */
    {
        helper(); 
        print_parse("DList : LS K_INT RS\n\n"); 
        sp += 2;
        bool temp;
        terminal t;
        temp = look_value(sym_tab, (yyvsp[-1].Sval).text, (yyvsp[-1].Sval).type, (yyvsp[-1].Sval).value, &t);
        if(t.type == type_int){
          (yyval.dim) = new vector<int>;
          (yyval.dim)->push_back(*(int *)((yyvsp[-1].Sval).value));
        }else{
            cout << "Dimension of array is not integer type";
        }
      }
#line 1750 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 409 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_INT\n\n"); 
    sp = 0; 
    (yyval.integer) = type_int;
  }
#line 1761 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 416 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_FLOAT\n\n"); 
    sp = 0; 
    (yyval.integer) = type_float;
  }
#line 1772 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 423 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_BOOL\n\n"); 
    sp = 0; 
    (yyval.integer) = type_bool;
  }
#line 1783 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 430 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_PROCESSOR\n\n"); 
    sp = 0; 
    (yyval.integer) = type_processor;
  }
#line 1794 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 437 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_LINK\n\n"); 
    sp = 0; 
    (yyval.integer) = type_link;
  }
#line 1805 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 444 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_SCHEDULER\n\n"); 
    sp = 0; 
    (yyval.integer) = type_scheduler;
  }
#line 1816 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 451 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_MEMORY\n\n"); 
    sp = 0; 
    (yyval.integer) = type_memory;
  }
#line 1827 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 458 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_CLUSTER\n\n"); 
    sp = 0; 
    (yyval.integer) = type_cluster;
  }
#line 1838 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 465 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("DType : K_JOB\n\n"); 
    sp = 0; 
    (yyval.integer) = type_job;
  }
#line 1849 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 473 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_1: K_IS_RUNNING LP RP\n\n"); 
    sp += 2; 
  }
#line 1859 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 479 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_1:  K_GET_CLOCK_SPEED LP RP\n\n"); 
    sp += 2; 
  }
#line 1869 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 485 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_1:  K_GET_AVAILABLE_MEMORY LP RP\n\n"); 
    sp += 2; 
  }
#line 1879 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 491 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_1:  K_GET_MEMORY LP RP\n\n"); 
    sp += 2; 
  }
#line 1889 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 497 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_1:  K_PRINT_STATS LP RP\n\n"); 
    sp += 2; 
  }
#line 1899 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 504 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_2:  K_PRINT LP expression RP\n\n"); 
    
    cout<<"\n\n********print called\n";
    //cout<<"dasd";


    if((yyvsp[-1].NT)->type == 4)
      cout<<*(char *)(yyvsp[-1].NT)->value;
    else if((yyvsp[-1].NT)->type == 2)
      cout<<*(float *)(yyvsp[-1].NT)->value;
    else if((yyvsp[-1].NT)->type == 1)
      cout<<*(int *)(yyvsp[-1].NT)->value;
    else if((yyvsp[-1].NT)->type == 3)
      cout<<*(bool *)(yyvsp[-1].NT)->value; 
     
    sp += 2; 
  }
#line 1923 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 524 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("function_call_2:  K_INPUT LP RP\n\n"); 
    sp += 2;

  }
#line 1934 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 532 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("bool_returning_statements: bool_returning_statement L_AND bool_returning_statements\n\n"); 
    sp += 2; 
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[-2].NT));
    bool bt = *(bool *)((yyvsp[-2].NT)->value) && *(bool *)((yyvsp[0].NT)->value);
    *(bool*)((yyval.NT)->value) = bt;
  }
#line 1948 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 542 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("bool_returning_statements:  bool_returning_statement  L_OR bool_returning_statements\n\n"); 
    sp += 2; 
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[-2].NT));
    bool bt = *(bool *)((yyvsp[-2].NT)->value) || *(bool *)((yyvsp[0].NT)->value);
    *(bool*)((yyval.NT)->value) = bt;
  }
#line 1962 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 552 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("bool_returning_statements:  L_NOT bool_returning_statements\n\n"); 
    sp += 2; 
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[0].NT));
    bool bt = !*(bool *)((yyval.NT)->value);
    *(bool*)((yyval.NT)->value) = bt;
    
  }
#line 1977 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 563 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("bool_returning_statements:  bool_returning_statement\n\n"); 
    sp += 2;

    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[0].NT));
     
  }
#line 1991 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 574 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("bool_returning_statement: expression\n\n"); 
    sp += 2;
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[0].NT));
    bool bt = *(bool *)(yyval.NT)->value;
    if(bt) {bt=true;(yyval.NT)->value=&bt;}
    else {bt=false;(yyval.NT)->value=&bt;}
    
    (yyval.NT)->type = type_bool;


  }
#line 2010 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 590 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statements: assign_statement COMMA assign_statements\n\n"); 
    sp += 2; 
  }
#line 2020 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 596 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statements:  assign_statement\n\n"); 
    sp += 2; 
  }
#line 2030 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 602 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statements:  epsilon\n\n"); 
    sp += 2; 
  }
#line 2040 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 609 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("assign_statement: IDEXP ASSIGN expression\n\n"); 
    sp += 2; 
    bool temp;
    terminal t;
    temp = look_value(sym_tab, (yyvsp[-2].Sval).text, (yyvsp[-2].Sval).type, (yyvsp[-2].Sval).value, &t);
    if(!temp){  
      cout<<"Variable "<<(yyvsp[-2].Sval).text<<" not already declared. Missing from symbol  table."<<endl;
    }
    else if(type_coercion((yyvsp[-2].Sval).type, (yyvsp[0].NT)->type, 0) == -1){
      cout<<"Type mismatch at lineno : "<<yylineno<<".\nOperands of type : "<<(yyvsp[-2].Sval).type<<" "<<(yyvsp[0].NT)->type<<(yyvsp[-2].Sval).text<<endl;
    }
    else{

          if(t.dim != NULL){

            if((yyvsp[-2].Sval).dim != NULL && (yyvsp[-2].Sval).dim->size() == t.dim->size()){
              int offset=0;
              int temp =1, s = t.dim->size();
              for(int i = 0;i < t.dim->size();i++){
                offset += temp* (*(yyvsp[-2].Sval).dim)[s-i-1];
                temp *= (*t.dim)[s-i-1];
              }
              cout << "Array offset : " << offset << endl;
              update_value(sym_tab,(yyvsp[-2].Sval).text,(yyvsp[0].NT)->type,(yyvsp[0].NT)->value, offset);
            }else{

              cout << " Dimensions don't match with declared dimensions." << endl;
              
            }

          }else{

          cout<<"\n11111 :::    ";
          print_on_type((yyvsp[0].NT)->type,(yyvsp[0].NT)->value);
          update_value(sym_tab,(yyvsp[-2].Sval).text,(yyvsp[0].NT)->type,(yyvsp[0].NT)->value);
          // print_on_type(t.type,t.value);
          // set_value(t.value, $3->value, t.type, $3->type);
          // cout<<"dasds : "<<t.text;
          //print_on_type(t.type,t.value);

        }
    }
  }
#line 2090 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 657 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("expression: term_prime RELOPEXP expression\n\n"); 
    sp += 2; 
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[-2].NT));
    if(((yyval.NT)->type = type_coercion((yyval.NT)->type, (yyvsp[0].NT)->type)) == -1)
      cout<<"Types mimatched : "<<(yyval.NT)->type<<" "<<(yyvsp[0].NT)->type<<" at lineno : "<<yylineno;
    (yyval.NT)->type = type_bool;
    if(!strcmp((char *)(yyvsp[-1].NT)->value, "<="))
      {
        int a = *(int *)(yyvsp[-2].NT)->value;
        int b = *(int *)(yyvsp[0].NT)->value;
        cout<<a<<" "<<b;
        *(bool*)((yyval.NT)->value) = ( a <= b );}
    else if(!strcmp((char *)(yyvsp[-1].NT)->value, "=="));
      //*(bool*)($$->value) = ($1->value == $3->value);

  }
#line 2114 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 677 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("expression:  term_prime\n\n"); 
    sp += 2; 
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[0].NT));

        // cout<<"dwadawdwd";
        // print_on_type($$->type,$$->value);

  }
#line 2130 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 690 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.NT) = new node;
    (yyval.NT)->value = malloc(sizeof(lexeme));
    strcpy((char *)(yyval.NT)->value, lexeme);
  }
#line 2140 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 696 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("term_prime: term PLUS term_prime\n\n"); 
    sp += 2; 
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[-2].NT));
    //cout<<"Daddasd :"<<$1->type<<"  "<<$3->type;
    //cout<<"$$->type "<<$$->type;

    if(((yyval.NT)->type = type_coercion((yyvsp[-2].NT)->type, (yyvsp[0].NT)->type, 0)) > 4)
      cout<<"Types mimatched : "<<(yyval.NT)->type<<" "<<(yyvsp[0].NT)->type<<" at lineno : "<<yylineno;

    if(debug_on)
     cout<<"line 658 : "<<(yyval.NT)->type<<" "<<(yyvsp[-2].NT)->type<<" "<<(yyvsp[0].NT)->type<<"\n";

    if((yyval.NT)->type == 4)
      (yyval.NT)->value = new string(strcat((char*)(yyvsp[-2].NT)->value, (char*)(yyvsp[0].NT)->value));
    else 
    {
    if((yyval.NT)->type == 2)
      {
        float ft = 0 ;
        if((yyvsp[-2].NT)->type == type_int )
          ft += *(int *)(yyvsp[-2].NT)->value;

        else if((yyvsp[-2].NT)->type == type_bool )
          ft += *(bool *)(yyvsp[-2].NT)->value;

        else if((yyvsp[-2].NT)->type == type_float )
          ft += *(float *)(yyvsp[-2].NT)->value;


        if((yyvsp[0].NT)->type == type_int )
          ft += *(int *)(yyvsp[0].NT)->value;

        else if((yyvsp[0].NT)->type == type_bool )
          ft += *(bool *)(yyvsp[0].NT)->value;

        else if((yyvsp[0].NT)->type == type_float )
          ft += *(float *)(yyvsp[0].NT)->value;

        *(float *)(yyval.NT)->value = ft;
      }
    else if((yyval.NT)->type == 1)
     {
       int it = *(int *)(yyvsp[-2].NT)->value + *(int*)(yyvsp[0].NT)->value;
       *(int *)(yyval.NT)->value = it;
     }
    else if((yyval.NT)->type == 3)
      {

        bool bt = *(bool*)(yyvsp[-2].NT)->value + *(bool*)(yyvsp[0].NT)->value;
        *(bool*)(yyval.NT)->value = bt;
      }
    }
    if(debug_on)
      {
        cout<<"Doing addition, type : "<<(yyval.NT)->type;
        print_on_type((yyvsp[-2].NT)->type, (yyvsp[-2].NT)->value); cout<<" ";
        print_on_type((yyvsp[0].NT)->type, (yyvsp[0].NT)->value); cout<<" ";
        print_on_type((yyval.NT)->type, (yyval.NT)->value); cout<<" ";
        cout<<endl;
      }

  }
#line 2210 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 762 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("term_prime:  term MINUS term_prime\n\n"); 
    sp += 2; 
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[-2].NT));
    if(((yyval.NT)->type = type_coercion((yyval.NT)->type, (yyvsp[0].NT)->type)) == -1)
      cout<<"Types mimatched : "<<(yyval.NT)->type<<" "<<(yyvsp[0].NT)->type<<" at lineno : "<<yylineno;
   
    if((yyval.NT)->type == 2)
      {
        float ft = *(float *)(yyvsp[-2].NT)->value - *(float *)(yyvsp[0].NT)->value;
        *(float *)(yyval.NT)->value = ft;
      }
    else if((yyval.NT)->type == 1)
     {
       int it = *(int *)(yyvsp[-2].NT)->value - *(int*)(yyvsp[0].NT)->value;
       *(int *)(yyval.NT)->value = it;
     }
    else if((yyval.NT)->type == 3)
      {
        bool bt = *(bool*)(yyvsp[-2].NT)->value - *(bool*)(yyvsp[0].NT)->value;
        *(bool*)(yyval.NT)->value = bt;
      }
  }
#line 2240 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 788 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("term_prime:  term\n\n"); 
    sp += 2; 
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[0].NT));
  }
#line 2252 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 797 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("term: factor MULT term\n\n"); 
    sp += 2; 
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[-2].NT));
    if(((yyval.NT)->type = type_coercion((yyval.NT)->type, (yyvsp[0].NT)->type)) == -1)
      cout<<"Types mimatched : "<<(yyval.NT)->type<<" "<<(yyvsp[0].NT)->type<<" at lineno : "<<yylineno;

    if((yyval.NT)->type == 2)
      {
        float ft = 1;
        if((yyvsp[-2].NT)->type == type_int )
          ft *= *(int *)(yyvsp[-2].NT)->value;

        else if((yyvsp[-2].NT)->type == type_bool )
          ft *= *(bool *)(yyvsp[-2].NT)->value;

        else if((yyvsp[-2].NT)->type == type_float )
          ft *= *(float *)(yyvsp[-2].NT)->value;


        if((yyvsp[0].NT)->type == type_int )
          ft *= *(int *)(yyvsp[0].NT)->value;

        else if((yyvsp[0].NT)->type == type_bool )
          ft *= *(bool *)(yyvsp[0].NT)->value;

        else if((yyvsp[0].NT)->type == type_float )
          ft *= *(float *)(yyvsp[0].NT)->value;

        *(float *)(yyval.NT)->value = ft;
      }
    else if((yyval.NT)->type == 1)
     {
       int it = *(int *)(yyvsp[-2].NT)->value * *(int*)(yyvsp[0].NT)->value;
       *(int *)(yyval.NT)->value = it;
     }
    else if((yyval.NT)->type == 3)
      {

        bool bt = *(bool*)(yyvsp[-2].NT)->value * *(bool*)(yyvsp[0].NT)->value;
        *(bool*)(yyval.NT)->value = bt;
      }
      if(debug_on)
      {
        cout<<"Doing multiplication, type : "<<(yyval.NT)->type;
        print_on_type((yyvsp[-2].NT)->type, (yyvsp[-2].NT)->value); cout<<" ";
        print_on_type((yyvsp[0].NT)->type, (yyvsp[0].NT)->value); cout<<" ";
        print_on_type((yyval.NT)->type, (yyval.NT)->value); cout<<" ";
        cout<<endl;
      }
  }
#line 2310 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 851 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("term:  factor DIV term\n\n"); 
    sp += 2; 
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[-2].NT));
    if(((yyval.NT)->type = type_coercion((yyval.NT)->type, (yyvsp[0].NT)->type)) == -1)
      cout<<"Types mimatched : "<<(yyval.NT)->type<<" "<<(yyvsp[0].NT)->type<<" at lineno : "<<yylineno;
    if((yyval.NT)->type == 2)
      {
        float ft = 1 ;

        cout<<" wdsdas :: "<<*(int *)(yyvsp[-2].NT)->value;
        if((yyvsp[-2].NT)->type == type_int )
          ft *= *(int *)(yyvsp[-2].NT)->value;

        else if((yyvsp[-2].NT)->type == type_bool )
          ft *= *(bool *)(yyvsp[-2].NT)->value;

        else if((yyvsp[-2].NT)->type == type_float )
          ft *= *(float *)(yyvsp[-2].NT)->value;

        cout<<"\n1: "<<ft;

        if((yyvsp[0].NT)->type == type_int )
          ft /= *(int *)(yyvsp[0].NT)->value;

        else if((yyvsp[0].NT)->type == type_bool )
          ft /= *(bool *)(yyvsp[0].NT)->value;

        else if((yyvsp[0].NT)->type == type_float )
          ft /= *(float *)(yyvsp[0].NT)->value;

        cout<<"\n2: "<<ft;

        *(float *)(yyval.NT)->value = ft;
      }
    else if((yyval.NT)->type == 1)
     {
       int it = *(int *)(yyvsp[-2].NT)->value / *(int*)(yyvsp[0].NT)->value;
       *(int *)(yyval.NT)->value = it;
     }
    else if((yyval.NT)->type == 3)
      {

        bool bt = *(bool*)(yyvsp[-2].NT)->value / *(bool*)(yyvsp[0].NT)->value;
        *(bool*)(yyval.NT)->value = bt;
      }

      if(debug_on)
      {
        cout<<"Doing division, type : "<<(yyval.NT)->type<<" "<<(yyvsp[-2].NT)->type<<" "<<(yyvsp[0].NT)->type;
        // cout<<" "<<*(int *)$1->value<<" ";
        print_on_type((yyvsp[-2].NT)->type, (yyvsp[-2].NT)->value); cout<<" ";
        print_on_type((yyvsp[0].NT)->type, (yyvsp[0].NT)->value); cout<<" ";
        print_on_type((yyval.NT)->type, (yyval.NT)->value); cout<<" ";
        cout<<endl;
      }
  }
#line 2374 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 911 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("term:  factor\n\n"); 
    sp += 2; 
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[0].NT));
  }
#line 2386 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 920 "grammar.y" /* yacc.c:1646  */
    {
    helper(); 
    print_parse("factor: factor_prime\n\n"); 
    sp += 2; 
    (yyval.NT) = new node;
    copy_node((yyval.NT), (yyvsp[0].NT));
  }
#line 2398 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 929 "grammar.y" /* yacc.c:1646  */
    {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime: ID DOT function_call_1\n\n");  
  }
#line 2408 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 935 "grammar.y" /* yacc.c:1646  */
    {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime:  LP expression RP\n\n");  
    (yyval.NT) = new node;
    (yyval.NT)->type = (yyvsp[-1].NT)->type;
    if(debug_on)
      cout<<endl<<(yyvsp[-1].NT)->value<<endl;
    (yyval.NT)->value = malloc(sizeof((yyvsp[-1].NT)->value));
    (yyval.NT)->value = (yyvsp[-1].NT)->value;
  }
#line 2424 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 947 "grammar.y" /* yacc.c:1646  */
    {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime:  INT\n\n");  
    (yyval.NT) = new node;
    (yyval.NT)->type = type_int;
    if(debug_on)
      cout<<lexeme<<endl;
    (yyval.NT)->value = new int(atoi(lexeme));
  }
#line 2439 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 958 "grammar.y" /* yacc.c:1646  */
    {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime:  FLOAT\n\n");  
    (yyval.NT) = new node;
    (yyval.NT)->type = type_float;
    if(debug_on)
      cout<<lexeme<<endl;
    (yyval.NT)->value = new float(atof(lexeme));
  }
#line 2454 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 969 "grammar.y" /* yacc.c:1646  */
    {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime: STRING\n\n"); 
    (yyval.NT) = new node;
    (yyval.NT)->type = type_string;
    if(debug_on)
      cout<<lexeme<<endl;
    (yyval.NT)->value = new string(lexeme);
  }
#line 2469 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 980 "grammar.y" /* yacc.c:1646  */
    {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime: function_call/_2\n\n"); }
#line 2478 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 986 "grammar.y" /* yacc.c:1646  */
    {
    sp = 0; 
    helper(); 
    sp += 2; print_parse("factor_prime: ID\n\n"); 
    (yyval.NT) = new node;
    bool temp;
    //cout<<$1.text<<endl;
    terminal t;
    temp = look_value(sym_tab, (yyvsp[0].Sval).text, (yyval.NT)->type, (yyval.NT)->value, &t);
    //cout<<t.value;
    if(!temp)
      cout<<"Use of non-declared variable : "<<(yyvsp[0].Sval).text<<"."<<endl;
    else
      (yyval.NT)->value = t.value;
    if(debug_on)
      cout<<"Found value : "<<*(int *)t.value<<" for "<<lexeme<<".\n";
      //return -1;
  }
#line 2501 "grammar.tab.c" /* yacc.c:1646  */
    break;


#line 2505 "grammar.tab.c" /* yacc.c:1646  */
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
#line 1007 "grammar.y" /* yacc.c:1906  */

stack<string> st;
int error_count = 0;



int main(int argc, char *argv[]) {
    sym_tab.scope = 0;
    current_scope = 0;
    yydebug = 0;

    if (argc < 2) {
        cout <<"Usage: <command> filename"<<endl;
        return 1;
    }
    if (argc == 3)
      debug_on = atoi(argv[2]);
      
    FILE *myfile = fopen(argv[1], "r");
    if (!myfile) {
        cout << "I can't open "<<argv[1]<< endl;
        return -1;
    }
    yyin = myfile;
    yyparse();
/*
    do {
        fgets(temp, 1024, myfile);
        YY_BUFFER_STATE buffer =  yy_scan_string(temp);
        yyparse();
        yy_delete_buffer(buffer);
        //cout<<endl<<endl<<endl<<temp<<endl<<endl<<endl<<endl<<endl;
    }while (!feof(myfile));
    */

    print_st(sym_tab);
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
