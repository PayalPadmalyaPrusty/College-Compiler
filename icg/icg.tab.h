
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
     HASH = 258,
     INCLUDE = 259,
     CSTDIO = 260,
     STDLIB = 261,
     MATH = 262,
     STRING = 263,
     TIME = 264,
     IOSTREAM = 265,
     CONIO = 266,
     NAMESPACE = 267,
     COUT = 268,
     ENDL = 269,
     STRING_LITERAL = 270,
     HEADER_LITERAL = 271,
     PRINT = 272,
     RETURN = 273,
     UMINUS = 274,
     INTEGER_LITERAL = 275,
     CHARACTER_LITERAL = 276,
     FLOAT_LITERAL = 277,
     IDENTIFIER = 278,
     FOR = 279,
     WHILE = 280,
     INC_OP = 281,
     DEC_OP = 282,
     LE_OP = 283,
     GE_OP = 284,
     EQ_OP = 285,
     NE_OP = 286,
     MUL_ASSIGN = 287,
     DIV_ASSIGN = 288,
     MOD_ASSIGN = 289,
     ADD_ASSIGN = 290,
     SUB_ASSIGN = 291,
     CHAR = 292,
     INT = 293,
     FLOAT = 294,
     VOID = 295,
     IF = 296,
     ELSE = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 42 "icg.y"
	
	char sval[300];



/* Line 1676 of yacc.c  */
#line 100 "icg.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


