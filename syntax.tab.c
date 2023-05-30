/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     token_import = 258,
     token_numpy = 259,
     token_matplotlib = 260,
     token_if = 261,
     token_else = 262,
     token_while = 263,
     token_for = 264,
     token_in = 265,
     token_range = 266,
     token_as = 267,
     token_int = 268,
     token_float = 269,
     token_char = 270,
     token_bool = 271,
     token_and = 272,
     token_or = 273,
     token_not = 274,
     token_constEntiere = 275,
     token_constFlottante = 276,
     token_constChar = 277,
     token_constBool = 278,
     token_constString = 279,
     token_idf = 280,
     token_ParOuvrante = 281,
     token_ParFermante = 282,
     token_CrochOuvrante = 283,
     token_CrochFermante = 284,
     token_virgule = 285,
     token_Deux_Points = 286,
     token_plus = 287,
     token_moins = 288,
     token_fois = 289,
     token_divise = 290,
     token_Pourcentage = 291,
     token_superieurEgal = 292,
     token_superieur = 293,
     token_inferieurEgal = 294,
     token_inferieur = 295,
     token_egal = 296,
     token_different = 297,
     token_affectation = 298,
     token_Point = 299,
     token_indentation = 300,
     token_newline = 301,
     token_shape = 302,
     token_show = 303,
     token_axis = 304,
     token_array = 305,
     token_imshow = 306
   };
#endif
/* Tokens.  */
#define token_import 258
#define token_numpy 259
#define token_matplotlib 260
#define token_if 261
#define token_else 262
#define token_while 263
#define token_for 264
#define token_in 265
#define token_range 266
#define token_as 267
#define token_int 268
#define token_float 269
#define token_char 270
#define token_bool 271
#define token_and 272
#define token_or 273
#define token_not 274
#define token_constEntiere 275
#define token_constFlottante 276
#define token_constChar 277
#define token_constBool 278
#define token_constString 279
#define token_idf 280
#define token_ParOuvrante 281
#define token_ParFermante 282
#define token_CrochOuvrante 283
#define token_CrochFermante 284
#define token_virgule 285
#define token_Deux_Points 286
#define token_plus 287
#define token_moins 288
#define token_fois 289
#define token_divise 290
#define token_Pourcentage 291
#define token_superieurEgal 292
#define token_superieur 293
#define token_inferieurEgal 294
#define token_inferieur 295
#define token_egal 296
#define token_different 297
#define token_affectation 298
#define token_Point 299
#define token_indentation 300
#define token_newline 301
#define token_shape 302
#define token_show 303
#define token_axis 304
#define token_array 305
#define token_imshow 306




/* Copy the first part of user declarations.  */
#line 1 "syntax.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Quad.h"

int nb_ligne=1,nb_colonne=1;
int QC=0,cpt=1,First=0 ;
Quad* Qdr=NULL;
char *T;
char Valeur[254] = { } ;
void initialization();
void afficher();
void insererTYPE();
char *GetType();
void InsertValChaine();
char *GetValChaine();
int Declaration();
int yylex(void);
void yyerror (const char *str) {fprintf (stderr, "error: %s\n", str);}
int yywrap(void);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 23 "syntax.y"
{
  int integer; 
  char* charactere;
  float flottant;
  char* str;
}
/* Line 193 of yacc.c.  */
#line 228 "syntax.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 241 "syntax.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   332

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNRULES -- Number of states.  */
#define YYNSTATES  226

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    12,    13,    17,    23,    29,
      31,    33,    36,    37,    44,    50,    57,    69,    71,    75,
      81,    85,    88,    92,    93,    95,    97,    99,   101,   103,
     105,   107,   113,   124,   128,   132,   136,   138,   142,   146,
     150,   152,   156,   158,   160,   173,   184,   192,   200,   203,
     211,   219,   224,   225,   230,   231,   233,   235,   237,   239,
     241,   243,   245,   247,   249,   251,   255,   259,   265,   271,
     275,   279,   283,   287,   291,   295,   299,   303,   307,   313,
     317,   321,   325,   331,   341,   344,   349,   352,   355,   357,
     359,   363,   367,   371,   375,   379,   383,   385,   387,   389,
     391,   393,   395,   397,   399,   401,   403
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    -1,    55,    58,    62,    -1,    55,
      56,    -1,    -1,     3,    57,    85,    -1,     3,     4,    12,
      25,    85,    -1,     3,     5,    12,    25,    85,    -1,     4,
      -1,     5,    -1,    58,    59,    -1,    -1,    25,    43,    28,
      60,    29,    85,    -1,    25,    43,    28,    29,    85,    -1,
      25,    43,    28,    61,    29,    85,    -1,    25,    43,    25,
      44,    50,    26,    28,    61,    29,    27,    85,    -1,    77,
      -1,    77,    30,    60,    -1,    28,    60,    29,    30,    61,
      -1,    28,    60,    29,    -1,    63,    62,    -1,    63,    85,
      62,    -1,    -1,    66,    -1,    70,    -1,    71,    -1,    72,
      -1,    73,    -1,    64,    -1,    65,    -1,    25,    44,    48,
      26,    27,    -1,    25,    44,    51,    26,    25,    30,    25,
      43,    24,    27,    -1,    25,    43,    67,    -1,    67,    32,
      68,    -1,    67,    33,    68,    -1,    68,    -1,    68,    34,
      69,    -1,    68,    35,    69,    -1,    68,    36,    69,    -1,
      69,    -1,    26,    67,    27,    -1,    25,    -1,    20,    -1,
       9,    25,    10,    11,    26,    77,    30,    77,    27,    31,
      46,    76,    -1,     9,    25,    10,    11,    26,    77,    27,
      31,    46,    76,    -1,     9,    25,    10,    25,    31,    46,
      76,    -1,     8,    26,    84,    27,    31,    46,    76,    -1,
      74,    75,    -1,     6,    26,    84,    27,    31,    46,    76,
      -1,     6,    26,    84,    27,    31,    63,    46,    -1,     7,
      31,    46,    76,    -1,    -1,    45,    63,    46,    76,    -1,
      -1,    25,    -1,    23,    -1,    22,    -1,    20,    -1,    21,
      -1,    35,    -1,    34,    -1,    33,    -1,    32,    -1,    36,
      -1,    77,    78,    79,    -1,    77,    78,    77,    -1,    26,
      77,    78,    77,    27,    -1,    26,    77,    78,    79,    27,
      -1,    77,    81,    77,    -1,    77,    81,    82,    -1,    77,
      81,    79,    -1,    82,    81,    82,    -1,    82,    81,    77,
      -1,    82,    81,    79,    -1,    79,    81,    82,    -1,    79,
      81,    77,    -1,    79,    81,    79,    -1,    80,    81,    26,
      80,    27,    -1,    80,    81,    77,    -1,    80,    81,    79,
      -1,    80,    81,    82,    -1,    26,    80,    27,    81,    80,
      -1,    26,    80,    27,    81,    26,    80,    27,    19,    77,
      -1,    19,    80,    -1,    19,    26,    80,    27,    -1,    19,
      82,    -1,    19,    79,    -1,    17,    -1,    18,    -1,    77,
      83,    77,    -1,    77,    83,    82,    -1,    79,    83,    82,
      -1,    79,    83,    77,    -1,    79,    83,    79,    -1,    26,
      82,    27,    -1,    40,    -1,    39,    -1,    38,    -1,    37,
      -1,    41,    -1,    42,    -1,    82,    -1,    80,    -1,    79,
      -1,    46,    -1,    85,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    65,    65,    67,    69,    69,    71,    72,    77,    83,
      83,    85,    85,    87,    88,    89,    90,    99,    99,   101,
     102,   104,   104,   104,   106,   106,   106,   106,   106,   106,
     106,   108,   116,   146,   150,   156,   160,   161,   165,   169,
     173,   175,   176,   177,   185,   186,   188,   190,   192,   194,
     194,   196,   196,   198,   198,   201,   202,   203,   204,   205,
     208,   208,   208,   208,   208,   210,   211,   212,   213,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   233,   234,   235,   236,   238,   238,
     240,   241,   242,   243,   244,   245,   247,   247,   247,   247,
     247,   247,   248,   248,   248,   251,   251
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "token_import", "token_numpy",
  "token_matplotlib", "token_if", "token_else", "token_while", "token_for",
  "token_in", "token_range", "token_as", "token_int", "token_float",
  "token_char", "token_bool", "token_and", "token_or", "token_not",
  "token_constEntiere", "token_constFlottante", "token_constChar",
  "token_constBool", "token_constString", "token_idf", "token_ParOuvrante",
  "token_ParFermante", "token_CrochOuvrante", "token_CrochFermante",
  "token_virgule", "token_Deux_Points", "token_plus", "token_moins",
  "token_fois", "token_divise", "token_Pourcentage", "token_superieurEgal",
  "token_superieur", "token_inferieurEgal", "token_inferieur",
  "token_egal", "token_different", "token_affectation", "token_Point",
  "token_indentation", "token_newline", "token_shape", "token_show",
  "token_axis", "token_array", "token_imshow", "$accept", "S", "PROGRAM",
  "LISTE_IMPORT", "IMPORT", "module_name", "LIST_DECLARATION",
  "DECLARATION_TABLEAU", "LIST_EXPRESSION", "LIST_TABLEAU", "LIST_INST",
  "INSTRUCTION", "PLTSHOW", "PLTIMSHOW", "AFFECTATION", "E", "T", "F",
  "BOUCLE_FOR1", "BOUCLE_FOR2", "BOUCLE_WHILE", "IF_ELSE_STATEMENT",
  "IF_CONDITION", "ELSE_CONDITION", "LISTE_INSTRUCTION_BOUCLE",
  "EXPRESSION", "OPERATEURSARITHMETIQUE", "EXPRESSIONARITHMETIQUE",
  "EXPRESSIONLOGIQUE", "OPERATEURLOGIQUE", "EXPRESSIONCOMPARAISON",
  "OPERATEURCOMPARAISON", "CONDITION", "NEWLINES", 0
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
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    55,    55,    56,    56,    56,    57,
      57,    58,    58,    59,    59,    59,    59,    60,    60,    61,
      61,    62,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    64,    65,    66,    67,    67,    67,    68,    68,    68,
      68,    69,    69,    69,    70,    70,    71,    72,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    81,    81,
      82,    82,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    84,    84,    84,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     0,     3,     5,     5,     1,
       1,     2,     0,     6,     5,     6,    11,     1,     3,     5,
       3,     2,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     5,    10,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     1,     1,    12,    10,     7,     7,     2,     7,
       7,     4,     0,     4,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     5,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     3,
       3,     3,     5,     9,     2,     4,     2,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     2,    12,     1,     0,     4,    23,     9,    10,
       0,     0,     0,     0,     0,    11,     3,    23,    29,    30,
      24,    25,    26,    27,    28,    52,     0,     0,   105,     6,
       0,     0,     0,     0,     0,     0,    21,    23,     0,    48,
       0,     0,   106,     0,    58,    59,    57,    56,    55,     0,
       0,   104,   103,   102,     0,     0,     0,    43,    42,     0,
       0,    33,    36,    40,     0,     0,     0,    22,     0,     7,
       8,     0,    87,    84,    86,     0,     0,     0,     0,    88,
      89,    63,    62,    61,    60,    64,    99,    98,    97,    96,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,     0,    95,     0,    66,    65,     0,    69,    71,    70,
      90,     0,    91,    76,    77,    75,    93,    94,    92,     0,
      79,    80,    81,    73,    74,    72,     0,     0,     0,     0,
       0,    41,     0,    14,     0,     0,     0,    34,    35,    37,
      38,    39,    31,     0,     0,    51,    85,    66,    65,     0,
       0,     0,     0,     0,    54,     0,    54,     0,    54,     0,
      20,    13,    15,    18,     0,     0,    67,    68,     0,    82,
       0,     0,    78,    49,    50,    47,     0,     0,    46,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     0,    19,
       0,    53,     0,    54,     0,     0,     0,     0,    45,     0,
       0,    32,    83,    54,    16,    44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     6,    10,     7,    15,   108,   109,
      16,    17,    18,    19,    20,    61,    62,    63,    21,    22,
      23,    24,    25,    39,   165,    50,    92,    76,    52,    97,
      78,    94,    54,    29
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -149
static const yytype_int16 yypact[] =
{
    -149,    19,  -149,    52,  -149,     7,  -149,    32,    50,    69,
      37,    73,    83,    78,    48,  -149,  -149,    36,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,   119,    88,   111,  -149,   102,
     210,   210,   151,   200,    28,    77,  -149,   106,   128,  -149,
      37,    37,  -149,   218,  -149,  -149,  -149,  -149,  -149,   210,
     140,   146,   204,   204,   143,   187,     2,  -149,   190,    33,
     184,   191,    98,  -149,   201,   216,    33,  -149,   211,   102,
     102,   210,   146,   204,   204,   140,   146,    46,    89,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,   233,   240,   240,   240,   240,   247,   240,   219,
     253,   238,   264,   221,  -149,   123,   260,    37,   267,   268,
     269,    33,    33,    33,    33,    33,   271,   275,   256,   101,
     233,   204,  -149,   260,   254,  -149,   240,   157,   237,  -149,
     157,   237,  -149,   157,   237,  -149,   157,   237,  -149,   210,
     157,   237,  -149,   157,   237,  -149,   116,   257,   260,   258,
     276,  -149,   277,   102,    37,    37,   260,    98,    98,  -149,
    -149,  -149,  -149,   278,   121,  -149,  -149,   183,   280,   226,
     254,   157,   282,   122,   256,   259,   256,   181,   256,   283,
     284,   102,   102,  -149,   285,   266,  -149,  -149,   210,  -149,
     204,   233,  -149,  -149,  -149,  -149,   286,   260,  -149,   287,
     287,   270,   256,   126,   183,   280,   272,   289,   290,  -149,
     296,  -149,   149,   256,   291,   294,   297,   260,  -149,   279,
      37,  -149,  -149,   256,   102,  -149
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -100,    92,
      -1,  -144,  -149,  -149,  -149,   273,   182,    87,  -149,  -149,
    -149,  -149,  -149,  -149,  -148,   -46,   -74,   -26,   -34,   -43,
      -9,   -33,   292,   -17
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      37,   120,   175,    75,    51,    51,   152,    93,    95,    73,
      98,     8,     9,   101,   110,    77,    36,    72,    96,     4,
     185,    53,    53,    69,    70,    75,   193,   102,   195,    95,
     198,    98,    93,    95,    74,    98,    67,   119,    11,    96,
      12,    13,    11,    96,    12,    13,   124,   127,   130,   133,
     136,   140,   143,    57,   211,     5,   183,    14,   104,    59,
     110,    35,    26,    79,    80,   218,   125,   128,   131,   134,
     137,   141,   144,   121,   167,   225,    64,   170,   169,    65,
     171,    27,    28,    28,   129,   132,   135,   138,   142,   145,
     153,    33,    34,    75,   168,    96,   191,   120,    96,    30,
     131,    96,   177,    32,    96,   173,    79,    80,    96,    31,
     110,    96,    11,    40,    12,    13,   122,   172,    79,    80,
      66,    34,    11,   169,    12,    13,    38,    11,   166,    12,
      13,    35,   113,   114,   115,   189,    41,   181,   182,    79,
      80,    35,    75,    79,    80,   204,    35,    98,    42,   192,
     151,   207,    42,   212,   203,   111,   112,    79,    80,    68,
     190,    56,   174,    79,    80,   205,    79,    80,   217,   169,
      99,   222,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    86,    87,    88,    89,    90,    91,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
     159,   160,   161,   224,    44,    45,    46,    47,   196,    48,
     186,   197,   106,   107,   100,    81,    82,    83,    84,    85,
      57,    79,    80,   111,   112,    58,    59,   116,    60,    43,
      44,    45,    46,    47,   103,    48,    49,    43,    44,    45,
      46,    47,   117,    48,    71,    43,    44,    45,    46,    47,
     146,    48,   188,    44,    45,    46,    47,   118,    48,   123,
      44,    45,    46,    47,   148,    48,   126,    44,    45,    46,
      47,   150,    48,   139,    86,    87,    88,    89,    90,    91,
      44,    45,    46,    47,   147,    48,    81,    82,    83,    84,
      85,   208,   209,   157,   158,   149,   154,   155,   162,   156,
     163,   164,   179,   176,   178,   194,   180,   187,   184,   122,
     201,   199,   202,   210,   200,   106,   214,   206,   213,   215,
     216,   220,   219,    55,   221,   223,     0,     0,     0,     0,
       0,     0,   105
};

static const yytype_int16 yycheck[] =
{
      17,    75,   146,    49,    30,    31,   106,    50,    51,    43,
      53,     4,     5,    11,    60,    49,    17,    43,    51,     0,
     164,    30,    31,    40,    41,    71,   174,    25,   176,    72,
     178,    74,    75,    76,    43,    78,    37,    71,     6,    72,
       8,     9,     6,    76,     8,     9,    92,    93,    94,    95,
      96,    97,    98,    20,   202,     3,   156,    25,    25,    26,
     106,    25,    12,    17,    18,   213,    92,    93,    94,    95,
      96,    97,    98,    27,   120,   223,    48,   123,   121,    51,
     126,    12,    46,    46,    93,    94,    95,    96,    97,    98,
     107,    43,    44,   139,   120,   128,   170,   171,   131,    26,
     126,   134,   148,    25,   137,   139,    17,    18,   141,    26,
     156,   144,     6,    25,     8,     9,    27,   126,    17,    18,
      43,    44,     6,   166,     8,     9,     7,     6,    27,     8,
       9,    25,    34,    35,    36,   169,    25,   154,   155,    17,
      18,    25,   188,    17,    18,   191,    25,   190,    46,    27,
      27,   197,    46,    27,   188,    32,    33,    17,    18,    31,
     169,    10,    46,    17,    18,   191,    17,    18,    19,   212,
      27,   217,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    37,    38,    39,    40,    41,    42,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     113,   114,   115,   220,    20,    21,    22,    23,    27,    25,
      27,    30,    28,    29,    27,    32,    33,    34,    35,    36,
      20,    17,    18,    32,    33,    25,    26,    26,    28,    19,
      20,    21,    22,    23,    44,    25,    26,    19,    20,    21,
      22,    23,    26,    25,    26,    19,    20,    21,    22,    23,
      31,    25,    26,    20,    21,    22,    23,    46,    25,    26,
      20,    21,    22,    23,    26,    25,    26,    20,    21,    22,
      23,    50,    25,    26,    37,    38,    39,    40,    41,    42,
      20,    21,    22,    23,    31,    25,    32,    33,    34,    35,
      36,   199,   200,   111,   112,    31,    29,    29,    27,    30,
      25,    45,    26,    46,    46,    46,    29,    27,    30,    27,
      25,    28,    46,    43,    30,    28,    27,    31,    46,    29,
      24,    27,    31,    31,    27,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    54,    55,     0,     3,    56,    58,     4,     5,
      57,     6,     8,     9,    25,    59,    62,    63,    64,    65,
      66,    70,    71,    72,    73,    74,    12,    12,    46,    85,
      26,    26,    25,    43,    44,    25,    62,    85,     7,    75,
      25,    25,    46,    19,    20,    21,    22,    23,    25,    26,
      77,    79,    80,    82,    84,    84,    10,    20,    25,    26,
      28,    67,    68,    69,    48,    51,    43,    62,    31,    85,
      85,    26,    79,    80,    82,    77,    79,    80,    82,    17,
      18,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    78,    81,    83,    81,    83,    81,    81,    27,
      27,    11,    25,    44,    25,    67,    28,    29,    60,    61,
      77,    32,    33,    34,    35,    36,    26,    26,    46,    80,
      78,    27,    27,    26,    77,    79,    26,    77,    79,    82,
      77,    79,    82,    77,    79,    82,    77,    79,    82,    26,
      77,    79,    82,    77,    79,    82,    31,    31,    26,    31,
      50,    27,    60,    85,    29,    29,    30,    68,    68,    69,
      69,    69,    27,    25,    45,    76,    27,    77,    79,    81,
      77,    77,    82,    80,    46,    63,    46,    77,    46,    26,
      29,    85,    85,    60,    30,    63,    27,    27,    26,    80,
      82,    78,    27,    76,    46,    76,    27,    30,    76,    28,
      30,    25,    46,    80,    77,    79,    31,    77,    61,    61,
      43,    76,    27,    46,    27,    29,    24,    19,    76,    31,
      27,    27,    77,    46,    85,    76
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 65 "syntax.y"
    {printf("The program is syntactically correct\n");YYACCEPT;;}
    break;

  case 7:
#line 73 "syntax.y"
    {
InsertValChaine((yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str));
insererTYPE((yyvsp[(4) - (5)].str),"STRING");
;}
    break;

  case 8:
#line 78 "syntax.y"
    {
InsertValChaine((yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str));
insererTYPE((yyvsp[(4) - (5)].str),"STRING");
;}
    break;

  case 16:
#line 91 "syntax.y"
    {// vérifier si idf est déclaré comme ça import numpy as idf
if(strcmp(GetValChaine((yyvsp[(3) - (11)].str)),"numpy")!=0){
//printf("la valeur de idf :%s \n",GetValChaine($1));  
printf("ERREUR SÉMANTIQUE: ERROR IN NUMPY ARRAY DECLARATION\n");
exit(0);
}
;}
    break;

  case 31:
#line 109 "syntax.y"
    {// vérifier si idf est déclaré comme ça import matplotlib.pyplot as idf
if(strcmp(GetValChaine((yyvsp[(1) - (5)].str)),"matplotlib.pyplot")!=0){
//printf("la valeur de idf :%s \n",GetValChaine($1));  
printf("ERREUR SÉMANTIQUE: ERROR IN FUNCTION WRITING\n");
exit(0);
};}
    break;

  case 32:
#line 117 "syntax.y"
    {// vérifier si idf est déclaré comme ça import matplotlib.pyplot as $1
if(strcmp(GetValChaine((yyvsp[(1) - (10)].str)),"matplotlib.pyplot")!=0){
//printf("ERREUR SÉMANTIQUE:la valeur de idf :%s \n",GetValChaine($1));  
printf("ERREUR SÉMANTIQUE: ERROR IN FUNCTION WRITING\n");
exit(0);
}
else{
// Variable Usage: The compiler should verify that the variable img is declared
// to say that the variable is declared or not i have to check if the variable is in the table of symbol have a type wla value
// lsl to fix later ..

// like pour les élement ta3 np array lzm nvérifier ila de meme type apres rah ydi hadak le type l np array

// i have to fix this lzm ndir un type l np array 
// to fix later..  
// vérifier si $5 est déclaré
  //printf("la fonction est correct\n");
  //printf(" $7 = %s $9 = %s \n",$7, $9);
  // vérifier si $7 est cmap
  if(strcmp((yyvsp[(7) - (10)].str),"cmap")!=0){
    printf("ERREUR SÉMANTIQUE: ERROR IN FUNCTION PARAMETERS\n");
    exit(0);
  }
  InsertValChaine((yyvsp[(7) - (10)].str), (yyvsp[(9) - (10)].str));
  insererTYPE((yyvsp[(7) - (10)].str),"STRING");
}
;}
    break;

  case 33:
#line 146 "syntax.y"
    { T=strdup((yyvsp[(1) - (3)].str)); 
      	       			InsertQuad(&Qdr,"=",(yyvsp[(3) - (3)].str)," ",T,QC);	
      	     		    QC++; ;}
    break;

  case 34:
#line 151 "syntax.y"
    {
						sprintf(Valeur,"T%d",cpt); T = strdup(Valeur); 
						InsertQuad(&Qdr,"+",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str),T,QC); (yyval.str) = strdup(T);
						cpt++; QC++;     
					;}
    break;

  case 35:
#line 157 "syntax.y"
    { sprintf(Valeur,"T%d",cpt); T = strdup(Valeur); 
			     InsertQuad(&Qdr,"-",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str),T,QC);(yyval.str) = strdup(T);
			     cpt++; QC++;;}
    break;

  case 36:
#line 160 "syntax.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));;}
    break;

  case 37:
#line 162 "syntax.y"
    {sprintf(Valeur,"T%d",cpt); T = strdup(Valeur); 
			     InsertQuad(&Qdr,"*",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str),T,QC);(yyval.str) = strdup(T);
			     cpt++; QC++;;}
    break;

  case 38:
#line 166 "syntax.y"
    {sprintf(Valeur,"T%d",cpt); T = strdup(Valeur); 
						InsertQuad(&Qdr,"/",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str),T,QC); (yyval.str) = strdup(T);
						cpt++; QC++;    ;}
    break;

  case 39:
#line 170 "syntax.y"
    {sprintf(Valeur,"T%d",cpt); T = strdup(Valeur); 
						InsertQuad(&Qdr,"%",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str),T,QC); (yyval.str) = strdup(T);
						cpt++; QC++;    ;}
    break;

  case 40:
#line 173 "syntax.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));;}
    break;

  case 41:
#line 175 "syntax.y"
    {(yyval.str)=strdup((yyvsp[(2) - (3)].str));;}
    break;

  case 42:
#line 176 "syntax.y"
    { (yyval.str)=strdup((yyvsp[(1) - (1)].str)); ;}
    break;

  case 43:
#line 177 "syntax.y"
    { 
  printf("la valeur de token_constEntiere :%d \n",(yyvsp[(1) - (1)].integer));
  sprintf(Valeur, "%d", (yyvsp[(1) - (1)].integer)); 
  T = strdup(Valeur); 
  (yyval.str) = strdup(T);;}
    break;

  case 52:
#line 196 "syntax.y"
    {printf("else\n");;}
    break;


/* Line 1267 of yacc.c.  */
#line 1818 "syntax.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 252 "syntax.y"


int main(){
    initialization();
    yyparse(); // analyseur lexical
    yywrap(); // analyseur syntaxique
    afficher();
    AffichageQuad(Qdr);
    return 0;}





