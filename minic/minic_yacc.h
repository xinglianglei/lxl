/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_D_COMPILERTOOLS_CODE_MINIC_MINIC_YACC_H_INCLUDED
# define YY_YY_D_COMPILERTOOLS_CODE_MINIC_MINIC_YACC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "D:/CompilerTools/code/minic/minic.y"

  #include <memory>
  #include <string>
  #include "ast_minic.h"

#line 55 "D:/CompilerTools/code/minic/minic_yacc.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    IDENT = 259,                   /* IDENT  */
    IF = 260,                      /* IF  */
    ELSE = 261,                    /* ELSE  */
    WHILE = 262,                   /* WHILE  */
    FOR = 263,                     /* FOR  */
    BREAK = 264,                   /* BREAK  */
    CONT = 265,                    /* CONT  */
    RET = 266,                     /* RET  */
    T_INT = 267,                   /* T_INT  */
    T_VOID = 268,                  /* T_VOID  */
    INCR = 269,                    /* INCR  */
    DECR = 270,                    /* DECR  */
    GE = 271,                      /* GE  */
    LE = 272,                      /* LE  */
    EQ = 273,                      /* EQ  */
    NE = 274,                      /* NE  */
    AND = 275,                     /* AND  */
    OR = 276                       /* OR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "D:/CompilerTools/code/minic/minic.y"

    digit_int_attr int_val; // 整型字面量
    var_id_attr id_val;     // 标识符（变量名）
    AST_Base *ast_baseVal;
    AST_Vec *ast_vecVal;
    AST_Exp *ast_expVal;
    enum ast_op_type ast_op_type;
    string *str_val;
    int val;

#line 104 "D:/CompilerTools/code/minic/minic_yacc.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (std::unique_ptr<AST_Base> &root);


#endif /* !YY_YY_D_COMPILERTOOLS_CODE_MINIC_MINIC_YACC_H_INCLUDED  */
