
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 60 "sem2.y"

  int integer;
  double real;
  char * text;



/* Line 1676 of yacc.c  */
#line 117 "sem2.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


