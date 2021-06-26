
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "sem2.y"


# include<stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <math.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdint.h>


int yylex(void);

char var[500][16];

int sym_int[500];
double sym_real[500];
char * sym_text[500];

int arr_int[10000];
double arr_real[10000];

int in_use[500];
/*
bool in_use_int[500];
bool in_use_real[500];
bool in_use_char[500];
*/

int tos = 0, ail=0, arl=0 ;

int i,k=0,l,r;

int check_var(char* v)
{
  for(i=0; i<tos; i++)
  {
    if( strcmp(v,var[i]) == 0 ){
      return i;
    }
  }
  return -1;
}

int elif[11] ;
int el = 0, d = 0 ;

int swt[11] ;
int op, cs = 0, n = 0;



/* Line 189 of yacc.c  */
#line 127 "sem2.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     DOUBLE = 259,
     TEXT = 260,
     ARR = 261,
     LP = 262,
     RP = 263,
     LB = 264,
     RB = 265,
     SM = 266,
     CLN = 267,
     CM = 268,
     ASGN = 269,
     ADD = 270,
     SUB = 271,
     MUL = 272,
     DIV = 273,
     MOD = 274,
     POWER = 275,
     ABS = 276,
     FACT = 277,
     INC = 278,
     DEC = 279,
     EQU = 280,
     GRT = 281,
     LES = 282,
     GRT_EQU = 283,
     LES_EQU = 284,
     NOT_EQU = 285,
     OR = 286,
     AND = 287,
     NOT = 288,
     STRT = 289,
     END = 290,
     PRINT = 291,
     IF = 292,
     ELIF = 293,
     ELSE = 294,
     SWITCH = 295,
     CASE = 296,
     BRK = 297,
     DEFAULT = 298,
     WHILE = 299,
     DO = 300,
     FROM = 301,
     TO = 302,
     SKIP = 303,
     VAR = 304,
     INT_NUM = 305,
     REA_NUM = 306,
     STRING = 307,
     LI = 308,
     RI = 309,
     SLC = 310,
     MLC = 311,
     NL = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 60 "sem2.y"

  int integer;
  double real;
  char * text;



/* Line 214 of yacc.c  */
#line 228 "sem2.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 240 "sem2.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   775

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNRULES -- Number of states.  */
#define YYNSTATES  340

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    12,    14,    16,    18,    20,
      23,    26,    29,    32,    35,    38,    41,    44,    46,    48,
      52,    58,    60,    64,    71,    75,    81,    83,    87,    94,
      98,   104,   106,   110,   114,   116,   120,   124,   126,   128,
     130,   132,   134,   139,   144,   149,   151,   153,   155,   166,
     177,   188,   208,   228,   248,   260,   262,   264,   267,   278,
     298,   313,   328,   341,   354,   368,   383,   400,   415,   430,
     445,   460,   467,   474,   481,   483,   486,   489,   500,   511,
     524,   537,   547,   557,   559,   561,   563,   565,   570,   575,
     578,   581,   585,   589,   593,   597,   601,   605,   608,   611,
     614,   617,   620,   624,   628,   632,   636,   640,   644,   648,
     652
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    34,    60,    35,    -1,    61,    -1,    60,
      61,    -1,    11,    -1,    55,    -1,    56,    -1,    57,    -1,
      62,    11,    -1,    68,    11,    -1,    86,    11,    -1,    70,
      11,    -1,    80,    11,    -1,     3,    63,    -1,     4,    65,
      -1,     5,    67,    -1,    64,    -1,    66,    -1,    63,    13,
      49,    -1,    63,    13,    49,    14,    86,    -1,    49,    -1,
      49,    14,    86,    -1,     6,     3,    49,    53,    50,    54,
      -1,    65,    13,    49,    -1,    65,    13,    49,    14,    86,
      -1,    49,    -1,    49,    14,    86,    -1,     6,     4,    49,
      53,    50,    54,    -1,    67,    13,    49,    -1,    67,    13,
      49,    14,    52,    -1,    49,    -1,    49,    14,    52,    -1,
      68,    13,    69,    -1,    69,    -1,    49,    14,    86,    -1,
      49,    14,    52,    -1,    80,    -1,    71,    -1,    78,    -1,
      79,    -1,    81,    -1,    36,     7,    52,     8,    -1,    36,
       7,    86,     8,    -1,    36,     7,    49,     8,    -1,    72,
      -1,    73,    -1,    74,    -1,    37,    86,    12,     9,    36,
       7,    52,     8,    11,    10,    -1,    37,    86,    12,     9,
      36,     7,    86,     8,    11,    10,    -1,    37,    86,    12,
       9,    36,     7,    49,     8,    11,    10,    -1,    37,    86,
      12,     9,    36,     7,    52,     8,    11,    10,    39,    12,
       9,    36,     7,    52,     8,    11,    10,    -1,    37,    86,
      12,     9,    36,     7,    86,     8,    11,    10,    39,    12,
       9,    36,     7,    86,     8,    11,    10,    -1,    37,    86,
      12,     9,    36,     7,    49,     8,    11,    10,    39,    12,
       9,    36,     7,    49,     8,    11,    10,    -1,    37,    86,
      12,     9,    36,     7,    86,     8,    11,    10,    75,    -1,
      76,    -1,    77,    -1,    76,    75,    -1,    38,    86,    12,
       9,    36,     7,    86,     8,    11,    10,    -1,    38,    86,
      12,     9,    36,     7,    86,     8,    11,    10,    39,    12,
       9,    36,     7,    86,     8,    11,    10,    -1,    46,    50,
      47,    50,    48,    50,    12,     9,    36,     7,    86,     8,
      11,    10,    -1,    46,    50,    47,    50,    48,    50,    12,
       9,    36,     7,    52,     8,    11,    10,    -1,    46,    50,
      47,    50,    12,     9,    36,     7,    86,     8,    11,    10,
      -1,    46,    50,    47,    50,    12,     9,    36,     7,    52,
       8,    11,    10,    -1,    46,    50,    47,    50,    12,     9,
      49,    53,    54,    14,    86,    11,    10,    -1,    46,    50,
      47,    50,    12,     9,    36,     7,    49,    53,    54,     8,
      11,    10,    -1,    46,    50,    47,    50,    48,    50,    12,
       9,    36,     7,    49,    53,    54,     8,    11,    10,    -1,
      44,    49,    45,    12,     9,    36,     7,    52,     8,    11,
      49,    24,    11,    10,    -1,    44,    49,    45,    12,     9,
      36,     7,    52,     8,    11,    24,    49,    11,    10,    -1,
      44,    49,    45,    12,     9,    36,     7,    86,     8,    11,
      49,    24,    11,    10,    -1,    44,    49,    45,    12,     9,
      36,     7,    86,     8,    11,    24,    49,    11,    10,    -1,
      49,    53,    50,    54,    14,    86,    -1,    49,    53,    49,
      54,    14,    86,    -1,    40,    85,    12,     9,    82,    10,
      -1,    83,    -1,    83,    84,    -1,    83,    82,    -1,    41,
      50,    12,     9,    36,     7,    86,     8,    11,    10,    -1,
      41,    50,    12,     9,    36,     7,    52,     8,    11,    10,
      -1,    41,    50,    12,     9,    36,     7,    86,     8,    11,
      42,    11,    10,    -1,    41,    50,    12,     9,    36,     7,
      52,     8,    11,    42,    11,    10,    -1,    43,    12,     9,
      36,     7,    52,     8,    11,    10,    -1,    43,    12,     9,
      36,     7,    86,     8,    11,    10,    -1,    86,    -1,    50,
      -1,    51,    -1,    49,    -1,    49,    53,    50,    54,    -1,
      49,    53,    49,    54,    -1,    21,    86,    -1,    22,    86,
      -1,    86,    15,    86,    -1,    86,    16,    86,    -1,    86,
      17,    86,    -1,    86,    18,    86,    -1,    86,    19,    86,
      -1,    86,    20,    86,    -1,    23,    49,    -1,    24,    49,
      -1,    49,    23,    -1,    49,    24,    -1,    33,    86,    -1,
      86,    27,    86,    -1,    86,    26,    86,    -1,    86,    29,
      86,    -1,    86,    28,    86,    -1,    86,    25,    86,    -1,
      86,    30,    86,    -1,    86,    31,    86,    -1,    86,    32,
      86,    -1,     7,    86,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   111,   112,   115,   116,   119,   122,   123,
     124,   125,   126,   127,   131,   132,   133,   134,   135,   142,
     162,   183,   199,   225,   252,   272,   294,   311,   337,   362,
     380,   405,   422,   453,   454,   456,   478,   492,   499,   500,
     501,   502,   503,   512,   517,   547,   548,   549,   554,   565,
     572,   604,   624,   634,   687,   705,   706,   707,   711,   729,
     752,   763,   774,   784,   794,   837,   869,   908,   929,   950,
     971,   997,  1023,  1076,  1081,  1082,  1083,  1086,  1099,  1112,
    1126,  1143,  1155,  1170,  1182,  1183,  1184,  1197,  1225,  1270,
    1271,  1287,  1288,  1289,  1290,  1301,  1302,  1306,  1325,  1347,
    1366,  1385,  1391,  1398,  1405,  1412,  1419,  1426,  1433,  1440,
    1447
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "DOUBLE", "TEXT", "ARR", "LP",
  "RP", "LB", "RB", "SM", "CLN", "CM", "ASGN", "ADD", "SUB", "MUL", "DIV",
  "MOD", "POWER", "ABS", "FACT", "INC", "DEC", "EQU", "GRT", "LES",
  "GRT_EQU", "LES_EQU", "NOT_EQU", "OR", "AND", "NOT", "STRT", "END",
  "PRINT", "IF", "ELIF", "ELSE", "SWITCH", "CASE", "BRK", "DEFAULT",
  "WHILE", "DO", "FROM", "TO", "SKIP", "VAR", "INT_NUM", "REA_NUM",
  "STRING", "LI", "RI", "SLC", "MLC", "NL", "$accept", "program", "stmts",
  "stmt", "declaration", "int_ids", "array_int", "real_ids", "array_real",
  "text_ids", "assignment", "asgn_stmt", "special", "cond_stmts",
  "if_stmt", "if_else_stmt", "if_elif_stmt", "elif_stmts", "elif_stmt",
  "elifel_stmt", "for_loop", "while_loop", "assign_array", "switch_stmts",
  "case_stmts", "case_stmt", "def_stmt", "sw_expr", "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    64,    65,    65,    65,    65,    66,    67,
      67,    67,    67,    68,    68,    69,    69,    69,    70,    70,
      70,    70,    70,    70,    70,    71,    71,    71,    72,    72,
      72,    73,    73,    73,    74,    75,    75,    75,    76,    77,
      78,    78,    78,    78,    78,    78,    78,    79,    79,    79,
      79,    80,    80,    81,    82,    82,    82,    83,    83,    83,
      83,    84,    84,    85,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     3,
       5,     1,     3,     6,     3,     5,     1,     3,     6,     3,
       5,     1,     3,     3,     1,     3,     3,     1,     1,     1,
       1,     1,     4,     4,     4,     1,     1,     1,    10,    10,
      10,    19,    19,    19,    11,     1,     1,     2,    10,    19,
      14,    14,    12,    12,    13,    14,    16,    14,    14,    14,
      14,     6,     6,     6,     1,     2,     2,    10,    10,    12,
      12,     9,     9,     1,     1,     1,     1,     4,     4,     2,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      84,    85,     6,     7,     8,     0,     3,     0,    17,    18,
       0,    34,     0,    38,    45,    46,    47,    39,    40,    37,
      41,     0,     1,    21,    14,    26,    15,    31,    16,     0,
       0,    86,     0,    89,    90,    97,    98,   101,     0,     0,
       0,    83,     0,     0,     0,    99,   100,     0,     2,     4,
       9,    10,     0,    12,    13,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
      86,     0,     0,     0,     0,     0,     0,    36,    35,     0,
       0,     0,    33,    37,    91,    92,    93,    94,    95,    96,
     106,   103,   102,   105,   104,   107,   108,   109,    22,    19,
      27,    24,    32,    29,     0,     0,     0,     0,    44,    42,
      43,     0,     0,     0,     0,    88,    87,     0,     0,     0,
       0,     0,     0,    88,    87,     0,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,    20,    25,    30,    23,
      28,     0,     0,    73,     0,    76,    75,     0,     0,     0,
      72,    71,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,    50,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,     0,     0,     0,     0,     0,     0,     0,
      78,     0,    77,     0,    81,    82,    68,    67,    70,    69,
      65,     0,    61,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    79,    66,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    51,     0,    52,
      58,     0,     0,     0,     0,     0,     0,     0,     0,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    25,    26,    27,    44,    28,    46,    29,    48,
      30,    31,    32,    33,    34,    35,    36,   231,   232,   233,
      37,    38,    39,    40,   157,   158,   176,    60,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -30
static const yytype_int16 yypact[] =
{
     -29,    83,    24,    35,    42,    48,    44,   269,   -30,   269,
     269,    62,    69,   269,    36,   269,   269,    77,    18,    14,
     -30,   -30,   -30,   -30,   -30,     9,   -30,    82,   -30,   -30,
      28,   -30,   113,   -30,   -30,   -30,   -30,   -30,   -30,   119,
     -30,   578,   -30,   156,   159,   167,   170,   175,   179,   141,
     145,    39,   306,   660,   660,   -30,   -30,   252,   124,   621,
     183,   660,   151,   155,   128,   -30,   -30,    65,   -30,   -30,
     -30,   -30,   154,   -30,   -30,   -30,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   160,   269,   171,   152,   172,   178,   188,    87,   -30,
      -1,   217,   331,   215,   233,   220,   198,   -30,   660,   196,
     197,   -13,   -30,   -30,   677,   693,   708,   722,   735,   252,
      70,   279,   137,    78,   743,    90,   221,   -30,   660,   238,
     660,   240,   -30,   241,   211,   212,   209,   210,   -30,   -30,
     -30,   234,   230,   280,     6,   281,   282,    94,   269,   269,
     242,   243,   244,   -30,   -30,   292,   251,   293,   -24,   276,
     296,   263,   269,   269,   261,   262,   660,   660,   -30,   -30,
     -30,   164,   305,   -30,   315,   -30,   -30,   322,   -15,   318,
     660,   660,   281,   282,     3,   332,   356,   333,   334,   177,
     337,   288,   336,   341,   342,   343,   319,   329,   358,   381,
     184,   313,   344,   359,   360,   367,   361,   371,   368,   379,
      72,   383,   406,   378,   386,   355,   363,   121,   216,   223,
     -14,     1,    63,   384,   392,   269,   236,   393,   403,   269,
     404,   -30,   366,   -30,   409,   431,   410,   456,   370,   396,
     380,   416,   419,   418,   420,   600,    75,   433,   481,   434,
     435,   642,   436,   -30,   441,   442,   443,   444,   454,   455,
     457,   458,   459,   -30,   -30,   432,   104,   466,   467,   468,
     469,   470,   479,    -6,    19,   480,   482,   483,   484,   485,
     492,   493,   -30,   472,   507,   508,   460,   509,   491,   512,
     -30,   517,   -30,   518,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   519,   -30,   -30,   471,   439,   533,   269,   532,   534,
     535,   544,   545,   269,   506,   -30,   -30,   -30,   530,   543,
     531,   554,   557,   558,   555,   559,   -30,   -30,   560,   -30,
     504,   565,   546,   542,   572,   269,   556,   569,   580,   -30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -30,   -30,   -30,   566,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   520,   -30,   -30,   -30,   -30,   -30,   369,   -30,   -30,
     -30,   -30,   527,   -30,   463,   -30,   -30,   -30,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      52,    64,    53,    54,   290,     1,    57,   138,    59,    61,
     238,   193,     3,     4,     5,     6,     7,   156,   160,   174,
       8,   190,    65,    66,    42,   240,    65,    66,    64,   292,
       9,    10,    11,    12,   191,   239,   291,    65,    66,    71,
     147,    72,    13,    58,    68,    14,    15,    49,    50,    16,
     241,   102,    98,    17,   161,    18,    98,   108,    19,    20,
      21,   293,    65,    66,    22,    23,    24,    67,    63,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    43,   130,     3,     4,     5,     6,
       7,    45,    98,    70,     8,    65,    66,    47,    65,    66,
      87,    88,    89,    82,     9,    10,    11,    12,    87,    88,
      89,    55,   136,   137,   109,   110,    13,   242,    56,    14,
      15,    88,    89,    16,    73,   222,    62,    17,   266,    18,
      74,     7,    19,    20,    21,     7,   136,   137,    22,    23,
      24,   166,   167,   164,   165,     9,    10,    11,    12,     9,
      10,    11,    12,   136,   137,   180,   181,    13,   283,   229,
     230,    13,    82,    83,   186,    85,    86,    87,    88,    89,
      90,     7,    91,   100,    20,    21,   101,    51,    20,    21,
     107,    92,   199,    93,     7,     9,    10,    11,    12,    94,
      96,     7,    95,   212,    97,   104,   105,    13,     9,    10,
      11,    12,   106,   111,   132,     9,    10,    11,    12,   129,
      13,   235,   237,   184,    20,    21,   185,    13,   245,   248,
     131,   133,   251,     7,   141,   139,    51,    20,    21,   198,
       7,   134,   143,   210,    20,    21,   211,     9,    10,    11,
      12,   135,   142,     7,     9,    10,    11,    12,   144,    13,
     145,   146,   148,    89,   149,   150,    13,     9,    10,    11,
      12,   151,   152,   153,   154,    51,    20,    21,   234,    13,
     155,   156,    51,    20,    21,   236,     7,    82,    83,    84,
      85,    86,    87,    88,    89,   246,    20,    21,   247,   159,
       9,    10,    11,    12,   168,   162,   163,   169,   170,   171,
     314,   172,    13,   173,    82,   178,   320,    85,    86,    87,
      88,    89,   177,   179,    99,   182,   183,   187,    51,    20,
      21,    76,    77,    78,    79,    80,    81,   188,   336,   189,
     192,    82,    83,    84,    85,    86,    87,    88,    89,   140,
     194,   201,   196,   197,   200,   202,    76,    77,    78,    79,
      80,    81,   203,   204,   205,   206,    82,    83,    84,    85,
      86,    87,    88,    89,   195,   207,   208,   213,   218,   215,
     216,    76,    77,    78,    79,    80,    81,   217,   219,   220,
     214,    82,    83,    84,    85,    86,    87,    88,    89,   209,
     221,   223,   225,   226,   227,   243,    76,    77,    78,    79,
      80,    81,   228,   244,   229,   249,    82,    83,    84,    85,
      86,    87,    88,    89,   224,   250,   252,   254,   256,   258,
     259,    76,    77,    78,    79,    80,    81,   262,   263,   260,
     264,    82,    83,    84,    85,    86,    87,    88,    89,   255,
     261,   267,   282,   269,   270,   272,    76,    77,    78,    79,
      80,    81,   273,   274,   275,   276,    82,    83,    84,    85,
      86,    87,    88,    89,   257,   277,   278,   304,   279,   280,
     281,    76,    77,    78,    79,    80,    81,   284,   285,   288,
     301,    82,    83,    84,    85,    86,    87,    88,    89,   268,
     294,   312,   295,   296,   297,   298,    76,    77,    78,    79,
      80,    81,   299,   300,   286,   287,    82,    83,    84,    85,
      86,    87,    88,    89,   321,   289,   305,   302,   303,   307,
     311,    76,    77,    78,    79,    80,    81,   306,   308,   309,
     310,    82,    83,    84,    85,    86,    87,    88,    89,   324,
     313,   322,   315,   331,   316,   317,    76,    77,    78,    79,
      80,    81,   318,   319,   323,   333,    82,    83,    84,    85,
      86,    87,    88,    89,   337,   325,   328,   326,   327,   329,
     330,    76,    77,    78,    79,    80,    81,   332,   334,   335,
     338,    82,    83,    84,    85,    86,    87,    88,    89,    75,
     339,    69,   112,    76,    77,    78,    79,    80,    81,   113,
       0,   253,     0,    82,    83,    84,    85,    86,    87,    88,
      89,   265,     0,     0,     0,    76,    77,    78,    79,    80,
      81,   175,     0,     0,     0,    82,    83,    84,    85,    86,
      87,    88,    89,   103,     0,     0,    76,    77,    78,    79,
      80,    81,     0,     0,     0,     0,    82,    83,    84,    85,
      86,    87,    88,    89,   271,     0,     0,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,    82,    83,    84,
      85,    86,    87,    88,    89,    76,    77,    78,    79,    80,
      81,     0,     0,     0,     0,    82,    83,    84,    85,    86,
      87,    88,    89,    77,    78,    79,    80,    81,     0,     0,
       0,     0,    82,    83,    84,    85,    86,    87,    88,    89,
      78,    79,    80,    81,     0,     0,     0,     0,    82,    83,
      84,    85,    86,    87,    88,    89,    79,    80,    81,     0,
       0,     0,     0,    82,    83,    84,    85,    86,    87,    88,
      89,    80,    81,     0,     0,     0,     0,    82,    83,    84,
      85,    86,    87,    88,    89,    81,     0,     0,     0,     0,
      82,    83,    84,    85,    86,    87,    88,    89,    82,     0,
       0,    85,     0,    87,    88,    89
};

static const yytype_int16 yycheck[] =
{
       7,    14,     9,    10,    10,    34,    13,     8,    15,    16,
      24,     8,     3,     4,     5,     6,     7,    41,    12,    43,
      11,    36,    23,    24,     0,    24,    23,    24,    14,    10,
      21,    22,    23,    24,    49,    49,    42,    23,    24,    11,
      53,    13,    33,     7,    35,    36,    37,     3,     4,    40,
      49,    58,    53,    44,    48,    46,    53,    64,    49,    50,
      51,    42,    23,    24,    55,    56,    57,    53,    50,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    49,    92,     3,     4,     5,     6,
       7,    49,    53,    11,    11,    23,    24,    49,    23,    24,
      30,    31,    32,    25,    21,    22,    23,    24,    30,    31,
      32,    49,    49,    50,    49,    50,    33,    54,    49,    36,
      37,    31,    32,    40,    11,    53,    49,    44,    53,    46,
      11,     7,    49,    50,    51,     7,    49,    50,    55,    56,
      57,   148,   149,    49,    50,    21,    22,    23,    24,    21,
      22,    23,    24,    49,    50,   162,   163,    33,    54,    38,
      39,    33,    25,    26,   171,    28,    29,    30,    31,    32,
      14,     7,    13,    49,    50,    51,    52,    49,    50,    51,
      52,    14,   189,    13,     7,    21,    22,    23,    24,    14,
      49,     7,    13,   200,    49,    12,    45,    33,    21,    22,
      23,    24,    47,    49,    52,    21,    22,    23,    24,    49,
      33,   218,   219,    49,    50,    51,    52,    33,   225,   226,
      49,    49,   229,     7,     9,     8,    49,    50,    51,    52,
       7,    53,    12,    49,    50,    51,    52,    21,    22,    23,
      24,    53,     9,     7,    21,    22,    23,    24,    50,    33,
      54,    54,    14,    32,    14,    14,    33,    21,    22,    23,
      24,    50,    50,    54,    54,    49,    50,    51,    52,    33,
      36,    41,    49,    50,    51,    52,     7,    25,    26,    27,
      28,    29,    30,    31,    32,    49,    50,    51,    52,     9,
      21,    22,    23,    24,    52,    14,    14,    54,    54,     7,
     307,    50,    33,    10,    25,     9,   313,    28,    29,    30,
      31,    32,    36,    50,     8,    54,    54,    12,    49,    50,
      51,    15,    16,    17,    18,    19,    20,    12,   335,     7,
      12,    25,    26,    27,    28,    29,    30,    31,    32,     8,
       8,    53,     9,     9,     7,     9,    15,    16,    17,    18,
      19,    20,    11,    11,    11,    36,    25,    26,    27,    28,
      29,    30,    31,    32,     8,    36,     8,    54,     7,    10,
      10,    15,    16,    17,    18,    19,    20,    10,     7,    11,
      36,    25,    26,    27,    28,    29,    30,    31,    32,     8,
      11,     8,    14,     7,    39,    11,    15,    16,    17,    18,
      19,    20,    39,    11,    38,    12,    25,    26,    27,    28,
      29,    30,    31,    32,     8,    12,    12,     8,     8,    49,
      24,    15,    16,    17,    18,    19,    20,     8,    10,    49,
      10,    25,    26,    27,    28,    29,    30,    31,    32,     8,
      24,     8,    10,     9,     9,     9,    15,    16,    17,    18,
      19,    20,    11,    11,    11,    11,    25,    26,    27,    28,
      29,    30,    31,    32,     8,    11,    11,     7,    11,    11,
      11,    15,    16,    17,    18,    19,    20,    11,    11,     9,
       8,    25,    26,    27,    28,    29,    30,    31,    32,     8,
      10,    52,    10,    10,    10,    10,    15,    16,    17,    18,
      19,    20,    10,    10,    36,    36,    25,    26,    27,    28,
      29,    30,    31,    32,     8,    36,     7,    10,    10,     7,
      49,    15,    16,    17,    18,    19,    20,    36,    11,    11,
      11,    25,    26,    27,    28,    29,    30,    31,    32,     8,
       7,    11,    10,    39,    10,    10,    15,    16,    17,    18,
      19,    20,     8,     8,    11,     9,    25,    26,    27,    28,
      29,    30,    31,    32,     8,    11,    11,    10,    10,    10,
      10,    15,    16,    17,    18,    19,    20,    12,    36,     7,
      11,    25,    26,    27,    28,    29,    30,    31,    32,    11,
      10,    25,    72,    15,    16,    17,    18,    19,    20,    72,
      -1,   232,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,   158,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    12,    -1,    -1,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    19,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    25,    -1,
      -1,    28,    -1,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    59,     3,     4,     5,     6,     7,    11,    21,
      22,    23,    24,    33,    36,    37,    40,    44,    46,    49,
      50,    51,    55,    56,    57,    60,    61,    62,    64,    66,
      68,    69,    70,    71,    72,    73,    74,    78,    79,    80,
      81,    86,     0,    49,    63,    49,    65,    49,    67,     3,
       4,    49,    86,    86,    86,    49,    49,    86,     7,    86,
      85,    86,    49,    50,    14,    23,    24,    53,    35,    61,
      11,    11,    13,    11,    11,    11,    15,    16,    17,    18,
      19,    20,    25,    26,    27,    28,    29,    30,    31,    32,
      14,    13,    14,    13,    14,    13,    49,    49,    53,     8,
      49,    52,    86,    12,    12,    45,    47,    52,    86,    49,
      50,    49,    69,    80,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    49,
      86,    49,    52,    49,    53,    53,    49,    50,     8,     8,
       8,     9,     9,    12,    50,    54,    54,    53,    14,    14,
      14,    50,    50,    54,    54,    36,    41,    82,    83,     9,
      12,    48,    14,    14,    49,    50,    86,    86,    52,    54,
      54,     7,    50,    10,    43,    82,    84,    36,     9,    50,
      86,    86,    54,    54,    49,    52,    86,    12,    12,     7,
      36,    49,    12,     8,     8,     8,     9,     9,    52,    86,
       7,    53,     9,    11,    11,    11,    36,    36,     8,     8,
      49,    52,    86,    54,    36,    10,    10,    10,     7,     7,
      11,    11,    53,     8,     8,    14,     7,    39,    39,    38,
      39,    75,    76,    77,    52,    86,    52,    86,    24,    49,
      24,    49,    54,    11,    11,    86,    49,    52,    86,    12,
      12,    86,    12,    75,     8,     8,     8,     8,    49,    24,
      49,    24,     8,    10,    10,    11,    53,     8,     8,     9,
       9,    12,     9,    11,    11,    11,    11,    11,    11,    11,
      11,    11,    10,    54,    11,    11,    36,    36,     9,    36,
      10,    42,    10,    42,    10,    10,    10,    10,    10,    10,
      10,     8,    10,    10,     7,     7,    36,     7,    11,    11,
      11,    49,    52,     7,    86,    10,    10,    10,     8,     8,
      86,     8,    11,    11,     8,    11,    10,    10,    11,    10,
      10,    39,    12,     9,    36,     7,    86,     8,    11,    10
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 109 "sem2.y"
    { printf("\nCompiled Successfully.\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 116 "sem2.y"
    {
  printf("\nSingle Line Comment: %s\n\n", (yyvsp[(1) - (1)].text));
;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 119 "sem2.y"
    {
  printf("\nMulti Line Comment: %s\n\n" , (yyvsp[(1) - (1)].text));
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 122 "sem2.y"
    {printf("\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 131 "sem2.y"
    { printf("Successful Integer Declaration.\n"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 132 "sem2.y"
    { printf("Successful Real Number Declaration.\n"); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 133 "sem2.y"
    { printf("Successful Text Declaration.\n"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 134 "sem2.y"
    { printf("Successful Integer Array Declaration.\n"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 135 "sem2.y"
    { printf("Successful Real Array Declaration.\n"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 142 "sem2.y"
    {
	
  int idx = check_var((yyvsp[(3) - (3)].text));

  /*printf("idx = %d\n", idx);*/
	
	if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (3)].text));
  }
  else{

    strcpy( var[tos] , (yyvsp[(3) - (3)].text)) ;
    in_use[tos]=1;

    /*printf("%dth variable %s is being declared!\n" ,tos, $3);*/

    tos++;
   }
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 162 "sem2.y"
    {

	int idx = check_var((yyvsp[(3) - (5)].text));

	if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (5)].text));
  }
  else{

    int x = (int)(yyvsp[(5) - (5)].real) ;
    strcpy( var[tos] , (yyvsp[(3) - (5)].text) );
    in_use[tos] = 1;
    sym_int[tos] = x ;
    /*printf("%dth variable %s = %d\n" ,tos, $3 , x);*/
    tos++;

   }

	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 183 "sem2.y"
    {

	int idx = check_var((yyvsp[(1) - (1)].text));
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(1) - (1)].text));
  }
  else{

    strcpy( var[tos] , (yyvsp[(1) - (1)].text)) ;
    in_use[tos]=1;
    /*printf("%dth variable %s is being declared!\n" ,tos, $1);*/
    tos++;
   }
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 199 "sem2.y"
    {

	int idx = check_var((yyvsp[(1) - (3)].text));
  /*printf("idx = %d\n", idx);*/

  if(idx!=-1)
  {
   printf("%s is already declared!\n", (yyvsp[(1) - (3)].text));
  }
  else{

    int x = (int)(yyvsp[(3) - (3)].real) ;
    strcpy( var[tos] , (yyvsp[(1) - (3)].text)) ;
    in_use[tos] = 1;
    sym_int[tos] = x ;

    /*printf("%dth variable %s = %d\n" ,tos, $1 , x);*/
    tos++;

   }

	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 225 "sem2.y"
    {
  
  int idx = check_var((yyvsp[(3) - (6)].text));
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (6)].text));
  }
  else{

    strcpy( var[tos] , (yyvsp[(3) - (6)].text)) ;
    in_use[tos]=11;

    sym_int[tos]= ail;
    ail+=(yyvsp[(5) - (6)].integer);

    /*printf("%dth variable %s is being declared!\n" ,tos, $1);*/
    tos++;
   }
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 252 "sem2.y"
    {
  
  int idx = check_var((yyvsp[(3) - (3)].text));

  /*printf("idx = %d\n", idx);*/
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (3)].text));
  }
  else{

    strcpy( var[tos] , (yyvsp[(3) - (3)].text)) ;
    in_use[tos]=2;

    /*printf("%dth variable %s is being declared!\n" ,tos, $3);*/

    tos++;
   }
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 272 "sem2.y"
    {

  int idx = check_var((yyvsp[(3) - (5)].text));
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (5)].text));
  }
  else{

    double x = (yyvsp[(5) - (5)].real) ;
    strcpy( var[tos] , (yyvsp[(3) - (5)].text) );
    in_use[tos] = 2;
    sym_real[tos] = x ;
    /*printf("%dth variable %s = %lf\n" ,tos, $3 , x);*/ 
    tos++;

   }

  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 294 "sem2.y"
    {

  int idx = check_var((yyvsp[(1) - (1)].text));
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(1) - (1)].text));
  }
  else{

    strcpy( var[tos] , (yyvsp[(1) - (1)].text)) ;
    in_use[tos]=2;
    /*printf("%dth variable %s is being declared!\n" ,tos, $1);*/
    tos++;
   }
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 311 "sem2.y"
    {

  int idx = check_var((yyvsp[(1) - (3)].text));
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n", (yyvsp[(1) - (3)].text));
  }
  else{

    double x = (yyvsp[(3) - (3)].real) ;
    strcpy( var[tos] , (yyvsp[(1) - (3)].text)) ;
    in_use[tos] = 2;
    sym_real[tos] = x ;

    /*printf("%dth variable %s = %lf\n" ,tos, $1 , x);*/
    tos++;

   }

  ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 337 "sem2.y"
    {
  
  int idx = check_var((yyvsp[(3) - (6)].text));
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (6)].text));
  }
  else{

    strcpy( var[tos] , (yyvsp[(3) - (6)].text)) ;
    in_use[tos]=22;

    sym_int[tos]= arl;
    arl+=(yyvsp[(5) - (6)].integer);

    /*printf("%dth variable %s is being declared!\n" ,tos, $1);*/
    tos++;
   }
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 362 "sem2.y"
    {
  
  int idx = check_var((yyvsp[(3) - (3)].text));
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (3)].text));
  }
  else{

    strcpy( var[tos] , (yyvsp[(3) - (3)].text)) ;
    in_use[tos]=3;

    /*printf("%dth VARiable %s is being declared!\n" ,tos, $3);*/

    tos++;
   }
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 380 "sem2.y"
    {

  int idx = check_var((yyvsp[(3) - (5)].text));
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(3) - (5)].text));
  }
  else{

    strcpy( var[tos] , (yyvsp[(3) - (5)].text) );
    in_use[tos] = 3;

    sym_text[tos] = (char *) malloc ( sizeof(char)*(strlen((yyvsp[(5) - (5)].text)) + 1) );

    strcpy(sym_text[tos] , (yyvsp[(5) - (5)].text));

    /*printf("%dth VARiable %s = %s\n" ,tos, $3 , sym_text[tos]);*/
    tos++;

   }

  ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 405 "sem2.y"
    {

  int idx = check_var((yyvsp[(1) - (1)].text));
 

  if(idx!=-1)
  {
   printf("%s is already declared!\n" , (yyvsp[(1) - (1)].text));
  }
  else{

    strcpy( var[tos] , (yyvsp[(1) - (1)].text)) ;
    in_use[tos]=3;
    /*printf("%dth VARiable %s is being declared!\n" ,tos, $1);*/
    tos++;
   }
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 422 "sem2.y"
    {

  int idx = check_var((yyvsp[(1) - (3)].text));
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n", (yyvsp[(1) - (3)].text));
  }
  else{

    
    strcpy( var[tos] , (yyvsp[(1) - (3)].text)) ;
    in_use[tos] = 3;

    sym_text[tos] = (char*) malloc ( sizeof(char)*(strlen((yyvsp[(3) - (3)].text)) + 1) );

    strcpy(sym_text[tos] , (yyvsp[(3) - (3)].text));

    /* printf("%dth VARiable %s = %s\n" ,tos, $1 , sym_text[tos]); */
    tos++;

   }

  ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 456 "sem2.y"
    {
  
  int idx = check_var((yyvsp[(1) - (3)].text));

  if(idx==-1){
    printf("Variable %s has not been Declared Yet\n", (yyvsp[(1) - (3)].text));
  }
  else {
    if(in_use[idx]==1){

        int x = (int) (yyvsp[(3) - (3)].real) ;
        sym_int[idx] = x ;
        /*printf("%s = %d\n", $1, x);*/
    }
    else if(in_use[idx]==2){

        double x = (yyvsp[(3) - (3)].real) ;
        sym_real[idx] = x ;
        /*printf("%s = %lf\n", $1, x);*/
    }
  }
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 478 "sem2.y"
    {
  
  int idx = check_var((yyvsp[(1) - (3)].text));

  if(idx==-1){
    printf("Variable %s has not been Declared Yet\n", (yyvsp[(1) - (3)].text));
  }
  else {
    sym_text[idx] = (char*) malloc ( sizeof(char)*(strlen((yyvsp[(3) - (3)].text)) + 1) );

    strcpy(sym_text[idx] , (yyvsp[(3) - (3)].text));
    /*printf("%s = %s\n", $1, $3);*/
    }
;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 503 "sem2.y"
    {
  
    int length = strlen((yyvsp[(3) - (4)].text));
    char* str = malloc( length + 1 );
    strcpy(str, (yyvsp[(3) - (4)].text));

    printf("%s\n",str);
    free(str);
;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 512 "sem2.y"
    {
  
    printf("%lf\n",(yyvsp[(3) - (4)].real));

;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 517 "sem2.y"
    {
  
  int idx = check_var((yyvsp[(3) - (4)].text));
  
  if(in_use[idx] == 0) { printf("\nVaribale not Declared Before.\n");}

  else if(in_use[idx] == 1)  { 

    printf("Integer Variable, %s = %d\n", (yyvsp[(3) - (4)].text), sym_int[idx]);
  }
  else if(in_use[idx] == 2)  { 

    printf("Real Variable, %s = %lf\n",(yyvsp[(3) - (4)].text), sym_real[idx]);
}
  else if(in_use[idx] == 3)  { 

    int length = strlen(sym_text[idx]);
    char* str = malloc( length + 1 );
    strcpy(str, sym_text[idx]);

    printf("Text Variable, %s = %s\n", (yyvsp[(3) - (4)].text),str);
    free(str);
}

;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 554 "sem2.y"
    {
  
  if( (int)(yyvsp[(2) - (10)].real) ){
    int length = strlen((yyvsp[(7) - (10)].text));
    char* str = malloc( length + 1 );
    strcpy(str, (yyvsp[(7) - (10)].text));

    printf("Inside If Block: %s\n",str);
    free(str);
  }
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 565 "sem2.y"
    {
  
  if( (int)(yyvsp[(2) - (10)].real) ){

    printf("Inside If Block: %lf\n",(yyvsp[(7) - (10)].real));
  }
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 572 "sem2.y"
    {
  
  if( (int)(yyvsp[(2) - (10)].real) ){

  int idx = check_var((yyvsp[(7) - (10)].text));
  
  if(in_use[idx] == 0) { printf("\nVaribale not Declared Before.\n");}

  else if(in_use[idx] == 1)  { 

    printf("Inside If Block: %d\n", sym_int[idx]);
  }
  else if(in_use[idx] == 2)  { 

    printf("Inside If Block: %lf\n", sym_real[idx]);
}
  else if(in_use[idx] == 3)  { 

    int length = strlen(sym_text[idx]);
    char* str = malloc( length + 1 );
    strcpy(str, sym_text[idx]);

    printf("Inside If Block: %s\n",str);
    free(str);
  }
}
;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 604 "sem2.y"
    {
    
    int x = (int)(yyvsp[(2) - (19)].real) ;
    if( x!=0 ){

    int length = strlen((yyvsp[(7) - (19)].text));
    char* str = malloc( length + 1 );
    strcpy(str, (yyvsp[(7) - (19)].text));

    printf("Inside If Block: %s\n",str);
    free(str);
  }else{
    int length = strlen((yyvsp[(16) - (19)].text));
    char* str = malloc( length + 1 );
    strcpy(str, (yyvsp[(16) - (19)].text));

    printf("Inside Else Block: %s\n",str);
    free(str);
  }
;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 624 "sem2.y"
    {

  if( (int)(yyvsp[(2) - (19)].real) ){

    printf("Inside If Block: %lf\n",(yyvsp[(7) - (19)].real));
  }else {
    printf("Inside Else Block: %lf\n",(yyvsp[(16) - (19)].real));
  }
  
;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 634 "sem2.y"
    {
    
  if( (int)(yyvsp[(2) - (19)].real) ){

  int idx = check_var((yyvsp[(16) - (19)].text));
  
  if(in_use[idx] == 0) { printf("\nVaribale not Declared Before.\n");}

  else if(in_use[idx] == 1)  { 

    printf("Inside If Block: %d\n", sym_int[idx]);
  }
  else if(in_use[idx] == 2)  { 

    printf("Inside If Block: %lf\n", sym_real[idx]);
}
  else if(in_use[idx] == 3)  { 

    int length = strlen(sym_text[idx]);
    char* str = malloc( length + 1 );
    strcpy(str, sym_text[idx]);

    printf("Inside If Block: %s\n",str);
    free(str);
  }
}else {
  int idx = check_var((yyvsp[(16) - (19)].text));
  
  if(in_use[idx] == 0) { printf("\nVaribale not Declared Before.\n");}

  else if(in_use[idx] == 1)  { 

    printf("Inside Else Block: %d\n", sym_int[idx]);
  }
  else if(in_use[idx] == 2)  { 

    printf("Inside Else Block: %lf\n", sym_real[idx]);
}
  else if(in_use[idx] == 3)  { 

    int length = strlen(sym_text[idx]);
    char* str = malloc( length + 1 );
    strcpy(str, sym_text[idx]);

    printf("Inside Else Block: %s\n",str);
    free(str);
  }
}
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 687 "sem2.y"
    {
  el = 0;
  for(i=0 ; i<11 ; i++)
  {
    elif[i] = 0;
  }

  if ((int)(yyvsp[(2) - (11)].real)){

    elif[el]++;

    printf("Inside If Block: %lf\n",(yyvsp[(7) - (11)].real));
  }
  el++;
;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 711 "sem2.y"
    {

  for(i=0 ; i<el ; i++)
  {
    if(elif[i]==1){d = 1; break;}
  }
  
  if( ((int)(yyvsp[(2) - (10)].real)==1) && (d==0) ){
    
    elif[el]++;

    printf("Inside Or-If Block No.%d : %lf\n",el+1 ,(yyvsp[(7) - (10)].real));
  }
  el++;
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 729 "sem2.y"
    {
  
  for(i=0 ; i<el ; i++)
  {
    if(elif[i]==1){d = 1; break;}
  }
  
  if( ((int)(yyvsp[(2) - (19)].real)==1) && (d==0) ){
    
    elif[el]++;

    printf("Inside Or-If Block No.%d : %lf\n",el+1 ,(yyvsp[(7) - (19)].real));
  }
  else if( ((int)(yyvsp[(2) - (19)].real)==0) && (d==0) ){

    printf("Inside Else Block : %lf\n", (yyvsp[(16) - (19)].real));
  }
  el++;
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 752 "sem2.y"
    {
  
    int sk = (yyvsp[(6) - (14)].integer) + 1 ;
    int it = 1;
    if((yyvsp[(4) - (14)].integer) < (yyvsp[(2) - (14)].integer)) printf("Range Given Improperly.\n");
    else{
    for(i= (yyvsp[(2) - (14)].integer) ; i<= (yyvsp[(4) - (14)].integer) ; i=i+sk){
      printf("iteration %d (%d) : %lf\n", it,i, (yyvsp[(11) - (14)].real)) ;
      it++;
    }}
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 763 "sem2.y"
    {
  
    int sk = (yyvsp[(6) - (14)].integer) + 1 ;
    int it=1;
    if((yyvsp[(4) - (14)].integer) < (yyvsp[(2) - (14)].integer)) printf("Range Given Improperly.\n");
    else{
    for(i= (yyvsp[(2) - (14)].integer) ; i<= (yyvsp[(4) - (14)].integer) ; i=i+sk){
      printf("iteration %d (%d) : %s\n", it,i, (yyvsp[(11) - (14)].text)) ;
      it++;
    }}
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 774 "sem2.y"
    {
  
    int it = 1;
    if((yyvsp[(4) - (12)].integer) < (yyvsp[(2) - (12)].integer)) printf("Range Given Improperly.\n");
    else{
    for(i= (yyvsp[(2) - (12)].integer) ; i<= (yyvsp[(4) - (12)].integer) ; i++){
      printf("iteration %d (%d) : %lf\n", it,i, (yyvsp[(9) - (12)].real)) ;
      it++;
    }}
;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 784 "sem2.y"
    {
  
    int it = 1;
    if((yyvsp[(4) - (12)].integer) < (yyvsp[(2) - (12)].integer)) printf("Range Given Improperly.\n");
    else{
    for(i= (yyvsp[(2) - (12)].integer) ; i<= (yyvsp[(4) - (12)].integer) ; i++){
      printf("iteration %d (%d) : %s\n", it,i, (yyvsp[(9) - (12)].text)) ;
      it++;
    }}
;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 794 "sem2.y"
    {
  
    int it = 1;
    if((yyvsp[(4) - (13)].integer) < (yyvsp[(2) - (13)].integer)) printf("Range Given Improperly.\n");
    else{

  int idx = check_var((yyvsp[(7) - (13)].text));

  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , (yyvsp[(7) - (13)].text));
  }
  else{

  for(i= (yyvsp[(2) - (13)].integer) ; i<= (yyvsp[(4) - (13)].integer) ; i++){

  if(in_use[idx]==11){
      int x = sym_int[idx];
      x=x+i;
        
      int y = (int)(yyvsp[(11) - (13)].real) ;
      arr_int[x] = y;
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      x=x+i;

      double y = (yyvsp[(11) - (13)].real) ;
      arr_real[x] = y;
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }

  printf("iteration %d : %s[%d] = %lf\n", it, (yyvsp[(7) - (13)].text), i, (yyvsp[(11) - (13)].real)) ;
  it++;
  }
  
  }

    
    }
;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 837 "sem2.y"
    {
  
    if((yyvsp[(4) - (14)].integer) < (yyvsp[(2) - (14)].integer)) printf("Range Given Improperly.\n");
    else{
    
  int idx = check_var((yyvsp[(9) - (14)].text));
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , (yyvsp[(9) - (14)].text));
  }
  else{
  for(i= (yyvsp[(2) - (14)].integer) ; i<= (yyvsp[(4) - (14)].integer) ; i++){

  if(in_use[idx]==11){
      int x = sym_int[idx];
      x+=i;
        
      printf("%s[%d] = %d\n",(yyvsp[(9) - (14)].text), i, arr_int[x]) ;
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      x+=i;

      printf("%s[%d] = %lf\n",(yyvsp[(9) - (14)].text), i, arr_real[x]) ;
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }
  }
  }}
;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 869 "sem2.y"
    {
  
    if((yyvsp[(4) - (16)].integer) < (yyvsp[(2) - (16)].integer)) printf("Range Given Improperly.\n");
    else{

  int sk = (yyvsp[(6) - (16)].integer) + 1 ; 
  int idx = check_var((yyvsp[(11) - (16)].text));
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , (yyvsp[(11) - (16)].text));
  }
  else{
  for(i= (yyvsp[(2) - (16)].integer) ; i<= (yyvsp[(4) - (16)].integer) ; i=i+sk){

  if(in_use[idx]==11){
      int x = sym_int[idx];
      x+=i;
        
      printf("%s[%d] = %d\n",(yyvsp[(11) - (16)].text), i, arr_int[x]) ;
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      x+=i;

      printf("%s[%d] = %lf\n",(yyvsp[(11) - (16)].text), i, arr_real[x]) ;
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }
  }
  }}
;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 908 "sem2.y"
    {
  
    int idx = check_var((yyvsp[(2) - (14)].text)) , x;

    if(idx==-1)printf("Variable not Declared Yet.\n");
    else{
      if(in_use[idx]==1){
          x = sym_int[idx];
          int it=1;

          for(i=x;i>0;i--)
          {
            printf("Inside While Loop iteration %d :%s\n",it,(yyvsp[(8) - (14)].text));
            it++;
          }
      }
      else {
            printf("Improper Data Type for Iterator.\n");
      }
    }
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 929 "sem2.y"
    {
  
    int idx = check_var((yyvsp[(2) - (14)].text)) , x;

    if(idx==-1)printf("Variable not Declared Yet.\n");
    else{
      if(in_use[idx]==1){
          x = sym_int[idx];
          int it=1;

          for(i=x;i>0;i--)
          {
            printf("Inside While Loop iteration %d :%s\n",it,(yyvsp[(8) - (14)].text));
            it++;
          }
      }
      else {
            printf("Improper Data Type for Iterator.\n");
      }
    }
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 950 "sem2.y"
    {
  
    int idx = check_var((yyvsp[(2) - (14)].text)) , x;

    if(idx==-1)printf("Variable not Declared Yet.\n");
    else{
      if(in_use[idx]==1){
          x = sym_int[idx];
          int it=1;

          for(i=x;i>0;i--)
          {
            printf("Inside While Loop iteration %d :%lf\n",it,(yyvsp[(8) - (14)].real));
            it++;
          }
      }
      else {
            printf("Improper Data Type for Iterator.\n");
      }
    }
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 971 "sem2.y"
    {
  
    int idx = check_var((yyvsp[(2) - (14)].text)) , x;

    if(idx==-1)printf("Variable not Declared Yet.\n");
    else{
      if(in_use[idx]==1){
          x = sym_int[idx];
          int it=1;

          for(i=x;i>0;i--)
          {
            printf("Inside While Loop iteration %d :%lf\n",it,(yyvsp[(8) - (14)].real));
            it++;
          }
      }
      else {
            printf("Improper Data Type for Iterator.\n");
      }
    }
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 997 "sem2.y"
    {
  
  int idx = check_var((yyvsp[(1) - (6)].text));
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , (yyvsp[(1) - (6)].text));
  }
  else{
  if(in_use[idx]==11){
      int x = sym_int[idx];
      x+=(yyvsp[(3) - (6)].integer);
      int y = (int)(yyvsp[(6) - (6)].real) ;
      arr_int[x] = y;
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      x+=(yyvsp[(3) - (6)].integer);
      double y = (yyvsp[(6) - (6)].real) ;
      arr_real[x] = y;
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }
  }
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1023 "sem2.y"
    {
  
  int idx = check_var((yyvsp[(1) - (6)].text));
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , (yyvsp[(1) - (6)].text));
  }
  else{
  if(in_use[idx]==11){
      int x = sym_int[idx];

      int idx1 = check_var((yyvsp[(3) - (6)].text));
      if(idx1=-1)
      {
        printf("%s is not declared yet!\n" , (yyvsp[(3) - (6)].text));
      }
      else {
        if(in_use[idx1]==1){
          x+=sym_int[idx1];
        }
      }

      int y = (int)(yyvsp[(6) - (6)].real) ;
      arr_int[x] = y;
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      
      int idx1 = check_var((yyvsp[(3) - (6)].text));
      if(idx1=-1)
      {
        printf("%s is not declared yet!\n" , (yyvsp[(3) - (6)].text));
      }
      else {
        if(in_use[idx1]==1){
          x+=sym_int[idx1];
        }
      }

      double y = (yyvsp[(6) - (6)].real) ;
      arr_real[x] = y;
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }
  }
;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1076 "sem2.y"
    {
  
;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1086 "sem2.y"
    {
  
  cs++;
  for(i=0 ; i<cs ; i++)
  {
    if(swt[i]==1){n = 1; break;}
  }
  
  if( ((yyvsp[(2) - (10)].integer) == op) && (n==0) ){

    printf("Inside Case No.%d : %lf\n",cs ,(yyvsp[(7) - (10)].real));
  }
;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1099 "sem2.y"
    {
  
  cs++;
  for(i=0 ; i<cs ; i++)
  {
    if(swt[i]==1){n = 1; break;}
  }
  
  if( ((yyvsp[(2) - (10)].integer) == op) && (n==0) ){

    printf("Inside Case No.%d : %s\n",cs ,(yyvsp[(7) - (10)].text));
  }
;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1112 "sem2.y"
    {
  
  cs++;
  for(i=0 ; i<cs ; i++)
  {
    if(swt[i]==1){n = 1; break;}
  }
  
  if( ((yyvsp[(2) - (12)].integer) == op) && (n==0) ){

    swt[cs]++;
    printf("Inside Case No.%d : %lf\n",cs ,(yyvsp[(7) - (12)].real));
  }
;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1126 "sem2.y"
    {

  cs++;  
  for(i=0 ; i<cs ; i++)
  {
    if(swt[i]==1){n = 1; break;}
  }
  
  if( ((yyvsp[(2) - (12)].integer) == op) && (n==0) ){

    swt[cs]++;
    printf("Inside Case No.%d : %s\n",cs ,(yyvsp[(7) - (12)].text));
  }
;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1143 "sem2.y"
    {
  
  for(i=0 ; i<cs ; i++)
  {
    if(swt[i]==1){n = 1; break;}
  }
  
  if(n==0){

    printf("Inside Default Case : %s\n",(yyvsp[(6) - (9)].text));
  }
;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1155 "sem2.y"
    {
  
  for(i=0 ; i<cs ; i++)
  {
    if(swt[i]==1){n = 1; break;}
  }
  
  if(n==0){

    printf("Inside Default Case : %lf\n",(yyvsp[(6) - (9)].real));
  }
;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1170 "sem2.y"
    { 
    op = (int)(yyvsp[(1) - (1)].real) ; 
    cs = 0 ,n=0;
    for(i=0;i<11;i++)swt[i]=0;
    (yyval.integer) = (yyvsp[(1) - (1)].real) ; 
;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1182 "sem2.y"
    { (yyval.real) = (yyvsp[(1) - (1)].integer)*1.0; ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1183 "sem2.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real)*1.0; ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1184 "sem2.y"
    { 

  int idx = check_var((yyvsp[(1) - (1)].text));
  
  if(in_use[idx] == 0) {printf("\nVaribale not Declared Before.\n");
  }

  else if(in_use[idx] == 1)  { (yyval.real) = sym_int[idx]*1.00; }
  else if(in_use[idx] == 2)  { (yyval.real) = sym_real[idx]*1.00 ; }

  /*printf("%s = %lf\n",$1, $$);*/

 ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1197 "sem2.y"
    {

  int idx = check_var((yyvsp[(1) - (4)].text));
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , (yyvsp[(1) - (4)].text));
  }
  else{
  if(in_use[idx]==11){
      int x = sym_int[idx];
      x+=(yyvsp[(3) - (4)].integer);
      (yyval.real) = arr_int[x]*1.0 ;

      /*printf("%s[%d] = %lf\n",$1, $3, $$);*/
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      x+=(yyvsp[(3) - (4)].integer);
      (yyval.real) = arr_real[x];

      /*printf("%s[%d] = %lf\n",$1, $3, $$);*/
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }
  }
;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1225 "sem2.y"
    {

  int idx = check_var((yyvsp[(1) - (4)].text));
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , (yyvsp[(1) - (4)].text));
  }
  else{
  if(in_use[idx]==11){
      int x = sym_int[idx];
      int idx1 = check_var((yyvsp[(3) - (4)].text));
      if(idx1=-1)
      {
        printf("%s is not declared yet!\n" , (yyvsp[(3) - (4)].text));
      }
      else {
        if(in_use[idx1]==1){
          x+=sym_int[idx1];
        }
      }
      (yyval.real) = arr_int[x]*1.0 ;

      /*printf("%s[%s] = %lf\n",$1, $3, $$);*/
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      int idx1 = check_var((yyvsp[(3) - (4)].text));
      if(idx1=-1)
      {
        printf("%s is not declared yet!\n" , (yyvsp[(3) - (4)].text));
      }
      else {
        if(in_use[idx1]==1){
          x+=sym_int[idx1];
        }
      }
      (yyval.real) = arr_real[x]*1.0 ;
      /*printf("%s[%s] = %lf\n",$1, $3, $$);*/
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }
  }
;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1270 "sem2.y"
    { (yyval.real) = fabs((yyvsp[(2) - (2)].real))*1.0 ; ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1271 "sem2.y"
    {
  
  int x = (int)(yyvsp[(2) - (2)].real) ;

  if(!x){ (yyval.real) = 1.0 ; }
  else if(x<0){ printf("Factrorial of Negative is not Defined.\t"); (yyval.real) = 0.0 ; }
  else if(x>20){ printf("Factrorial is too Large for Data Type.\t"); (yyval.real) = 0.0 ; }
  else{
  long long int factor = 1;
  for(i=2; i<=x; i++)
  {
    factor*=i;
  }
  (yyval.real) = factor*1.0;
  }
 ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1287 "sem2.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) + (yyvsp[(3) - (3)].real); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1288 "sem2.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) - (yyvsp[(3) - (3)].real); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1289 "sem2.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) * (yyvsp[(3) - (3)].real); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1290 "sem2.y"
    {
  if((yyvsp[(3) - (3)].real))
    {
     (yyval.real) = ((yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real))*1.0 ;
    }
  else
    {
     (yyval.real) = 0;
     printf("\n Division by 0 is not Allowed.\n");
    }
 ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1301 "sem2.y"
    { (yyval.real) = ((int)(yyvsp[(1) - (3)].real) % (int)(yyvsp[(3) - (3)].real))*1.0 ; ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1302 "sem2.y"
    { (yyval.real) = pow( (int)(yyvsp[(1) - (3)].real) , (int)(yyvsp[(3) - (3)].real) )*1.0 ; ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1306 "sem2.y"
    {
  
  int idx = check_var((yyvsp[(2) - (2)].text));
  
  if(in_use[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(in_use[idx] == 1) {

    sym_int[idx] = sym_int[idx] + 1 ;
    (yyval.real) = sym_int[idx]*1.0;
     }
  else if(in_use[idx] == 2) { 

    sym_real[idx] = sym_real[idx] + 1 ;
    (yyval.real) = sym_real[idx];
   }
  else if(in_use[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1325 "sem2.y"
    {

  int idx = check_var((yyvsp[(2) - (2)].text));
  
  if(in_use[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(in_use[idx] == 1) {

    sym_int[idx] = sym_int[idx] - 1 ;
    (yyval.real) = sym_int[idx]*1.0;
     }
  else if(in_use[idx] == 2) { 

    sym_real[idx] = sym_real[idx] - 1 ;
    (yyval.real) = sym_real[idx];
   }
  else if(in_use[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1347 "sem2.y"
    {

  int idx = check_var((yyvsp[(1) - (2)].text));
  
  if(in_use[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(in_use[idx] == 1) {

    (yyval.real) = sym_int[idx]*1.0;
    sym_int[idx] = sym_int[idx] + 1 ;
     }
  else if(in_use[idx] == 2) { 

    (yyval.real) = sym_real[idx];
    sym_real[idx] = sym_real[idx] + 1 ;
   }
  else if(in_use[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1366 "sem2.y"
    {

  int idx = check_var((yyvsp[(1) - (2)].text));
  
  if(in_use[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(in_use[idx] == 1) {

    (yyval.real) = sym_int[idx]*1.0;
    sym_int[idx] = sym_int[idx] - 1 ;
     }
  else if(in_use[idx] == 2) { 

    (yyval.real) = sym_real[idx];
    sym_real[idx] = sym_real[idx] - 1 ;
   }
  else if(in_use[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1385 "sem2.y"
    {
  
  //if(!$2)$$ = 1;
  //else $$ = 0;
  (yyval.real) = (!((yyvsp[(2) - (2)].real)))*1.0 ;
;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1391 "sem2.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x < y)*1.0 ; 
;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1398 "sem2.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x > y)*1.0 ; 
;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1405 "sem2.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x <= y)*1.0 ; 
;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1412 "sem2.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x >= y)*1.0 ; 
;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1419 "sem2.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x == y)*1.0 ; 
;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1426 "sem2.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x != y)*1.0 ; 
;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1433 "sem2.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x || y)*1.0 ; 
;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1440 "sem2.y"
    { 
    
    int x = (int)(yyvsp[(1) - (3)].real) ;
    int y = (int)(yyvsp[(3) - (3)].real) ;

    (yyval.real) = (x && y)*1.0 ; 
;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1447 "sem2.y"
    { (yyval.real) = (yyvsp[(2) - (3)].real); ;}
    break;



/* Line 1455 of yacc.c  */
#line 3512 "sem2.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1451 "sem2.y"


int yywrap()
{
	return 1;
}
int yyerror(char *s)
{
	fprintf(stderr,"%s\n",s);
}
int main()
{
	freopen("lalain.txt","r",stdin);
	freopen("lalaoutput.txt","w",stdout);
	yyparse();
    
	return 0;
}
