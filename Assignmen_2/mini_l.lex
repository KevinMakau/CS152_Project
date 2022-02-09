
/* cs152-miniL phase1 */

   
%{   
   #include "y.tab.h"
   int Position = 1;
   int Line = 1;
%}

digit [0-9]

/* some common rules */

%%
"<=" {Position += yyleng; return LTE; }
">=" {Position += yyleng; return GTE; }
">"  {Position += yyleng; return GT; }
":=" {Position += yyleng; return ASSIGN; }
"<"  {Position += yyleng; return LT; }
"="  {Position += yyleng; return EQ; }
"+" {Position += yyleng; return ADD; }
"," {Position += yyleng; return COMMA; }
":"  {Position += yyleng; return COLON; }
"["  {Position += yyleng; return L_SQUARE_BRACKET; }
"]"  {Position += yyleng; return R_SQUARE_BRACKET; }
"==" {Position += yyleng; return EQ; }
"("  {Position += yyleng; return L_PAREN; }
")"  {Position += yyleng; return R_PAREN; }
"<>" {Position += yyleng; return NEQ; }
";" {Position += yyleng; return SEMICOLON; }
"%" {Position += yyleng; return MOD; }
"-" {Position += yyleng; return SUB; }
"*" {Position += yyleng; return MULT; }
"/" {Position += yyleng; return DIV; }

beginparams {Position += yyleng; return BEGINPARAMS; }
integer {Position += yyleng; return INTEGER; }
beginbody {Position += yyleng; return BEGINBODY; }
write  {Position += yyleng; return WRITE; }
then  {Position += yyleng; return THEN; }
endif  {Position += yyleng; return ENDIF; }
beginlocals {Position += yyleng; return BEGINLOCALS; }
endparams  {Position += yyleng; return ENDPARAMS; }
endbody  {Position += yyleng; return ENDBODY; return 0; }
endlocals  {Position += yyleng; return ENDLOCALS; }
not {Position += yyleng; return NOT; }
or {Position += yyleng; return OR; }
read {Position += yyleng; return READ; }
if {Position += yyleng; return IF; }
false {Position += yyleng; return FALSE; }
continue {Position += yyleng; return CONTINUE; }
function  {Position += yyleng; return FUNCTION; } 
of {Position += yyleng; return OF; }
break {Position += yyleng; return 0; }
endloop {Position += yyleng; return ENDLOOP; }
while {Position += yyleng; return WHILE; }
beginloop {Position += yyleng; return BEGINLOOP; }
do {Position += yyleng; return DO; }
array {Position += yyleng; return ARRAY; }
else {Position += yyleng; return ELSE; }
for {Position += yyleng; return 0; }
true {Position += yyleng; return TRUE; }
return {Position += yyleng; return RETURN; }

(\.{digit}+)|({digit}+(\.{digit}*)?([eE][+-}?[0-9]+)?) { Position += yyleng; yylval.ival = atoi(yytext); return NUMBER; }
[0-9_][a-zA-Z0-9_]*[a-zA-Z0-9_] {printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", Position, Line, yytext); exit(0);}
[a-zA-Z0-9_]*[_] {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n", Position, Line, yytext); exit(0);}
[a-zA-Z0-9_]*[a-zA-Z0-9]* { Position += yyleng; yylval.strval = strdup(yytext); return IDENTIFIER; }

[ ] {Position += yyleng;}
[\t] {Position += yyleng;}
"\n" {Line++; Position = 1;}
[##].* {Line++; Position = 1;}
. {printf("Error at line %d. column %d: unrecognized symbol \"%s\"\n", Line, Position, yytext); exit(0);}
%%

	/* C functions used in lexer 

int main(int argc, char ** argv)
{
  if (argc < 3 && yyin == NULL) {
    yyin = stdin;
  }
  else{
    yyin - stdin;
  }
   yylex();
  return 0;
}*/