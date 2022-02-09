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
#line 5 "mini_l.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *msg);
extern int Line;
extern int Position;
extern char* currStr;
FILE * yyin;

#line 77 "y.tab.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    FUNCTION = 258,
    BEGINPARAMS = 259,
    ENDPARAMS = 260,
    BEGINLOCALS = 261,
    ENDLOCALS = 262,
    BEGINBODY = 263,
    ENDBODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ENDIF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    BEGINLOOP = 274,
    ENDLOOP = 275,
    CONTINUE = 276,
    READ = 277,
    WRITE = 278,
    AND = 279,
    OR = 280,
    NOT = 281,
    TRUE = 282,
    FALSE = 283,
    RETURN = 284,
    ADD = 285,
    SUB = 286,
    MULT = 287,
    DIV = 288,
    MOD = 289,
    EQ = 290,
    NEQ = 291,
    LT = 292,
    GT = 293,
    LTE = 294,
    GTE = 295,
    SEMICOLON = 296,
    COLON = 297,
    COMMA = 298,
    L_PAREN = 299,
    R_PAREN = 300,
    L_SQUARE_BRACKET = 301,
    R_SQUARE_BRACKET = 302,
    ASSIGN = 303,
    IDENTIFIER = 304,
    NUMBER = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "mini_l.y" /* yacc.c:355  */

    double dval;
    int ival;
    char* strval;

#line 174 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   204

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  127

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    39,    42,    52,    53,    56,    57,    60,
      61,    64,    65,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    79,    80,    83,    84,    87,    88,    91,    92,
      93,    94,    95,    96,    97,   100,   101,   102,   103,   104,
     105,   108,   109,   110,   113,   114,   117,   118,   119,   122,
     123,   124,   125,   126,   127,   128,   129,   132,   133,   136,
     137
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGINPARAMS", "ENDPARAMS",
  "BEGINLOCALS", "ENDLOCALS", "BEGINBODY", "ENDBODY", "INTEGER", "ARRAY",
  "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "BEGINLOOP",
  "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT", "TRUE",
  "FALSE", "RETURN", "ADD", "SUB", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT",
  "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA", "L_PAREN", "R_PAREN",
  "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN", "IDENTIFIER", "NUMBER",
  "$accept", "program", "function", "declaration_loop", "statement_loop",
  "declaration", "id_loop", "statement", "var_loop", "bool_expr",
  "relation_and_expr", "relation_expr", "comp", "expression", "mult_expr",
  "mulop", "term", "expression_loop", "var", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -48

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-48)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -48,    51,   -48,   -37,   -48,   -25,    36,   -48,    -3,    39,
     -48,    18,    53,   -48,   -48,   106,    13,     4,   -48,    32,
     -48,    77,    37,   149,    44,    21,    21,   116,   -48,    72,
      72,    59,    97,    14,   105,   104,   144,    33,   -48,   -48,
     -29,    21,    11,   -48,     8,   133,   -48,   164,    42,   -48,
     -48,   -11,   149,   115,   -48,   115,    59,    96,    59,   -48,
     118,   -48,    59,   150,   -48,   -48,   164,    59,   -48,   -48,
      -7,   152,    49,   149,    21,    21,    59,    59,   -48,   -48,
     -48,   -48,   -48,   -48,    59,   -48,   -48,   -48,    59,   149,
     102,    72,    83,    -6,   -48,    96,   -48,    59,    99,   -48,
     -48,   -48,    96,    41,    89,   133,   -48,    42,    42,    96,
     -48,   119,   146,   -48,   -48,    96,   -48,    59,   -48,   -48,
     149,   -48,    21,    96,   132,   139,   -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     3,     0,     0,     5,     0,     0,
      11,     0,     0,     5,     6,     0,     0,     0,     9,     0,
      12,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    59,     0,     0,     0,     0,     0,    30,    32,
       0,     0,    59,    51,     0,    24,    26,     0,    41,    44,
      49,     0,     0,    18,    22,    19,     0,    21,     0,     4,
       0,     7,     0,     0,    31,    33,     0,     0,    52,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    36,
      37,    38,    39,    40,     0,    46,    47,    48,     0,     0,
       0,     0,     0,     0,     8,    13,    10,     0,     0,    34,
      53,    55,    57,     0,     0,    25,    27,    42,    43,    28,
      45,     0,     0,    23,    60,    29,    54,     0,    56,    14,
       0,    16,     0,    58,     0,    17,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   -48,   -48,   156,   -47,   -48,   -48,   -32,   135,   -22,
     100,    98,   109,   -28,    57,   -48,    88,   -48,   -23
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     4,     8,    33,    11,    12,    34,    53,    44,
      45,    46,    84,    47,    48,    88,    49,   103,    50
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      35,    60,     9,    57,    51,    90,    54,    54,    89,    66,
      35,    21,     5,    71,    74,    67,     6,    69,    74,    70,
      32,    68,    73,    59,    76,    77,   104,    25,    92,    35,
      93,    26,    27,    74,    95,    28,    29,    30,    99,    98,
       7,   114,   111,    31,   102,    13,    10,    37,    38,    39,
      35,     2,    40,    10,     3,    72,   109,    58,    60,    14,
      64,    65,    20,    32,    40,    41,    35,    35,   113,   115,
      42,    43,    60,   124,    85,    86,    87,    56,    22,    60,
      40,    35,    42,    43,   117,    23,   118,    24,    35,   123,
      40,    36,    60,    56,   101,    15,    16,    35,    42,    43,
     125,    35,    25,    56,   119,   120,    26,    27,    42,    43,
      28,    29,    30,    76,    77,    25,    18,    19,    31,    26,
      27,    32,   112,    28,    29,    30,    76,    77,   100,    76,
      77,    31,    25,   107,   108,    52,    26,    27,    32,   121,
      28,    29,    30,    58,   116,    25,    61,   126,    31,    26,
      27,    32,    62,    28,    29,    30,    63,    75,    91,    94,
      96,    31,    25,   122,    74,    55,    26,    27,    32,    17,
      28,    29,    30,   106,   105,    97,   110,     0,    31,     0,
       0,    32,    76,    77,     0,     0,     0,    78,    79,    80,
      81,    82,    83,     0,    76,    77,     0,   100,    32,    78,
      79,    80,    81,    82,    83
};

static const yytype_int8 yycheck[] =
{
      23,    33,     5,    31,    26,    52,    29,    30,    19,    37,
      33,     7,    49,    41,    25,    44,    41,    40,    25,    41,
      49,    50,    14,     9,    30,    31,    73,    13,    56,    52,
      58,    17,    18,    25,    62,    21,    22,    23,    45,    67,
       4,    47,    89,    29,    72,     6,    49,    26,    27,    28,
      73,     0,    31,    49,     3,    44,    84,    46,    90,    41,
      27,    28,    49,    49,    31,    44,    89,    90,    91,    97,
      49,    50,   104,   120,    32,    33,    34,    44,    46,   111,
      31,   104,    49,    50,    43,     8,    45,    50,   111,   117,
      31,    47,   124,    44,    45,    42,    43,   120,    49,    50,
     122,   124,    13,    44,    15,    16,    17,    18,    49,    50,
      21,    22,    23,    30,    31,    13,    10,    11,    29,    17,
      18,    49,    20,    21,    22,    23,    30,    31,    45,    30,
      31,    29,    13,    76,    77,    19,    17,    18,    49,    20,
      21,    22,    23,    46,    45,    13,    41,    15,    29,    17,
      18,    49,    48,    21,    22,    23,    12,    24,    43,    41,
      10,    29,    13,    17,    25,    30,    17,    18,    49,    13,
      21,    22,    23,    75,    74,    66,    88,    -1,    29,    -1,
      -1,    49,    30,    31,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    30,    31,    -1,    45,    49,    35,
      36,    37,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,     0,     3,    53,    49,    41,     4,    54,     5,
      49,    56,    57,     6,    41,    42,    43,    54,    10,    11,
      49,     7,    46,     8,    50,    13,    17,    18,    21,    22,
      23,    29,    49,    55,    58,    69,    47,    26,    27,    28,
      31,    44,    49,    50,    60,    61,    62,    64,    65,    67,
      69,    60,    19,    59,    69,    59,    44,    64,    46,     9,
      58,    41,    48,    12,    27,    28,    64,    44,    50,    69,
      60,    64,    44,    14,    25,    24,    30,    31,    35,    36,
      37,    38,    39,    40,    63,    32,    33,    34,    66,    19,
      55,    43,    64,    64,    41,    64,    10,    63,    64,    45,
      45,    45,    64,    68,    55,    61,    62,    65,    65,    64,
      67,    55,    20,    69,    47,    64,    45,    43,    45,    15,
      16,    20,    17,    64,    55,    60,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    63,    63,    63,    63,    63,
      63,    64,    64,    64,    65,    65,    66,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    69,
      69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,    12,     0,     3,     2,     3,     3,
       8,     1,     3,     3,     5,     7,     5,     6,     2,     2,
       1,     2,     1,     3,     1,     3,     1,     3,     3,     4,
       1,     2,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     2,     3,     4,     3,     4,     1,     3,     1,
       4
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
#line 38 "mini_l.y" /* yacc.c:1646  */
    { printf("program -> epsilon\n"); }
#line 1371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 39 "mini_l.y" /* yacc.c:1646  */
    { printf("program -> program function\n"); }
#line 1377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "mini_l.y" /* yacc.c:1646  */
    { printf("function -> FUNCTION IDENTIFIER %s SEMICOLON ", (yyvsp[-10].strval));
            printf("BEGINPARAMS declaration_loop ENDPARAMS ");
            printf("BEGINLOCALS declaration_loop ENDLOCALS ");
            printf("BEGINBODY statement_loop ENDBODY\n"); }
#line 1386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 52 "mini_l.y" /* yacc.c:1646  */
    { printf("declaration_loop -> epsilon\n"); }
#line 1392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 53 "mini_l.y" /* yacc.c:1646  */
    { printf("declaration_loop -> declaration_loop declaration SEMICOLON\n"); }
#line 1398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 56 "mini_l.y" /* yacc.c:1646  */
    { printf("statement_loop -> statement SEMICOLON\n"); }
#line 1404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "mini_l.y" /* yacc.c:1646  */
    { printf("statement_loop -> statement_loop statement SEMICOLON\n"); }
#line 1410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 60 "mini_l.y" /* yacc.c:1646  */
    { printf("declaration -> id_loop COLON INTEGER\n"); }
#line 1416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 61 "mini_l.y" /* yacc.c:1646  */
    { printf("declaration -> id_loop COLON ARRAY L_SQUARE_BRACKET NUMBER %d R_SQUARE_BRACKET OF INTEGER\n", (yyvsp[-3].ival)); }
#line 1422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 64 "mini_l.y" /* yacc.c:1646  */
    { printf("id_loop -> IDENTIFIER"); }
#line 1428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "mini_l.y" /* yacc.c:1646  */
    { printf("id_loop -> id_loop COMMA IDENTIFIER"); }
#line 1434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 68 "mini_l.y" /* yacc.c:1646  */
    { printf("statement -> var ASSIGN expression\n"); }
#line 1440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 69 "mini_l.y" /* yacc.c:1646  */
    { printf("statement -> IF bool_expr THEN statement_loop ENDIF\n"); }
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 70 "mini_l.y" /* yacc.c:1646  */
    { printf("statement -> IF bool_expr THEN statement_loop ELSE statement_loop ENDIF\n"); }
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 71 "mini_l.y" /* yacc.c:1646  */
    { printf("statement -> WHILE bool_expr BEGINLOOP statement_loop ENDLOOP\n"); }
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 72 "mini_l.y" /* yacc.c:1646  */
    { printf("statement -> DO BEGINLOOP statement_loop ENDLOOP WHILE bool_expr\n"); }
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 73 "mini_l.y" /* yacc.c:1646  */
    { printf("statement -> READ var_loop\n"); }
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 74 "mini_l.y" /* yacc.c:1646  */
    { printf("statement -> WRITE var_loop\n"); }
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "mini_l.y" /* yacc.c:1646  */
    { printf("statement -> CONTINUE\n"); }
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "mini_l.y" /* yacc.c:1646  */
    { printf("statement -> RETURN expression\n"); }
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 79 "mini_l.y" /* yacc.c:1646  */
    { printf("var_loop -> var\n"); }
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 80 "mini_l.y" /* yacc.c:1646  */
    { printf("var_loop -> var_loop COMMA var\n"); }
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 83 "mini_l.y" /* yacc.c:1646  */
    { printf("bool_expr -> relation_and_expr\n"); }
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 84 "mini_l.y" /* yacc.c:1646  */
    { printf("bool_expr -> bool_expr OR relation_and_expr\n"); }
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 87 "mini_l.y" /* yacc.c:1646  */
    { printf("relation_and_expr -> relation_expr\n"); }
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 88 "mini_l.y" /* yacc.c:1646  */
    { printf("relation_and_expr -> relation_and_expr AND relation_expr\n"); }
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 91 "mini_l.y" /* yacc.c:1646  */
    { printf("relation_expr -> expression comp expression\n"); }
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 92 "mini_l.y" /* yacc.c:1646  */
    { printf("relation_expr -> NOT expression comp expression\n"); }
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 93 "mini_l.y" /* yacc.c:1646  */
    { printf("relation_expr -> TRUE\n"); }
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 94 "mini_l.y" /* yacc.c:1646  */
    { printf("relation_expr -> NOT TRUE\n"); }
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 95 "mini_l.y" /* yacc.c:1646  */
    { printf("relation_expr -> FALSE\n"); }
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 96 "mini_l.y" /* yacc.c:1646  */
    { printf("relation_expr -> NOT FALSE\n"); }
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 97 "mini_l.y" /* yacc.c:1646  */
    { printf("relation_expr -> L_PAREN bool_expr R_PAREN\n"); }
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 100 "mini_l.y" /* yacc.c:1646  */
    { printf("comp -> EQ\n"); }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 101 "mini_l.y" /* yacc.c:1646  */
    { printf("comp -> NEQ\n"); }
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 102 "mini_l.y" /* yacc.c:1646  */
    { printf("comp -> LT\n"); }
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 103 "mini_l.y" /* yacc.c:1646  */
    { printf("comp -> GT\n"); }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 104 "mini_l.y" /* yacc.c:1646  */
    { printf("comp -> LTE\n"); }
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 105 "mini_l.y" /* yacc.c:1646  */
    { printf("comp -> GTE\n"); }
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 108 "mini_l.y" /* yacc.c:1646  */
    { printf("expression -> mult_expr\n"); }
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 109 "mini_l.y" /* yacc.c:1646  */
    { printf("expression -> expression ADD mult_expr\n"); }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 110 "mini_l.y" /* yacc.c:1646  */
    { printf("expression -> expression SUB mult_expr\n"); }
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 113 "mini_l.y" /* yacc.c:1646  */
    { printf("mult_expr -> term\n"); }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 114 "mini_l.y" /* yacc.c:1646  */
    { printf("mult_expr -> mult_expr %s term\n", (yyvsp[-1].strval)); }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 117 "mini_l.y" /* yacc.c:1646  */
    { (yyval.strval) = "MULT"; }
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 118 "mini_l.y" /* yacc.c:1646  */
    { (yyval.strval) = "DIV"; }
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 119 "mini_l.y" /* yacc.c:1646  */
    { (yyval.strval) = "MOD"; }
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 122 "mini_l.y" /* yacc.c:1646  */
    { printf("term -> var\n"); }
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 123 "mini_l.y" /* yacc.c:1646  */
    { printf("term -> SUB var\n"); }
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 124 "mini_l.y" /* yacc.c:1646  */
    { printf("term -> NUMBER %d\n", (yyvsp[0].ival)); }
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 125 "mini_l.y" /* yacc.c:1646  */
    { printf("term -> SUB NUMBER %d\n", (yyvsp[0].ival)); }
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 126 "mini_l.y" /* yacc.c:1646  */
    { printf("term -> L_PAREN expression R_PAREN\n"); }
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 127 "mini_l.y" /* yacc.c:1646  */
    { printf("term -> SUB L_PAREN expression R_PAREN\n"); }
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 128 "mini_l.y" /* yacc.c:1646  */
    { printf("term -> IDENTIFIER %s L_PAREN R_PAREN\n", (yyvsp[-2].strval)); }
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 129 "mini_l.y" /* yacc.c:1646  */
    { printf("term -> IDENTIFIER %s L_PAREN expression_loop R_PAREN\n", (yyvsp[-3].strval)); }
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 132 "mini_l.y" /* yacc.c:1646  */
    { printf("expression_loop -> expression"); }
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 133 "mini_l.y" /* yacc.c:1646  */
    { printf("expression_loop -> expression_loop COMMA expression"); }
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 136 "mini_l.y" /* yacc.c:1646  */
    { printf("var -> IDENTIFIER %s\n", (yyvsp[0].strval)); }
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 137 "mini_l.y" /* yacc.c:1646  */
    { printf("var -> IDENTIFIER %s L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n", (yyvsp[-3].strval)); }
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1726 "y.tab.c" /* yacc.c:1646  */
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
#line 140 "mini_l.y" /* yacc.c:1906  */


int main(int argc, char ** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (yyin == NULL) {
            printf("syntax: %s filename", argv[0]);
        }
    }
    yyparse(); // more magical stuff
    return 0;
}

void yyerror(const char *msg) {
    printf("** ----- Line %d, position %d: %s \n", Line, Position, msg);
}
