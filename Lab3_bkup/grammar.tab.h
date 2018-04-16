/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
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

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
