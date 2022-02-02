/* cs152-miniL phase1 */

   
%{   
   int Position = 1;
   int Line = 1;
%}

digit [0-9]

/* some common rules */

%%
"<=" {printf("LTE\n"); Position += yyleng;}
">=" {printf("GTE\n"); Position += yyleng;}
">"  {printf("GREATER_THAN\n"); Position += yyleng;}
":=" {printf("ASSIGN\n"); Position += yyleng;}
"<"  {printf("LESS_THAN\n"); Position += yyleng;}
"="  {printf("EQUALS\n"); Position += yyleng;}
"+" {printf("ADD\n"); Position += yyleng;}
"," {printf("COMMA\n"); Position += yyleng;}
":"  {printf("COLON\n"); Position += yyleng;}
"["  {printf("L_SQUARE_BRACKET\n"); Position += yyleng;}
"]"  {printf("R_SQUARE_BRACKET\n"); Position += yyleng;}
"==" {printf("EQ\n"); Position += yyleng;}
"("  {printf("L_PAREN\n"); Position += yyleng;}
")"  {printf("R_PAREN\n"); Position += yyleng;}
"<>" {printf("NEQ\n"); Position += yyleng;}
";" {printf("SEMICOLON\n"); Position += yyleng;}
"%" {printf("MOD\n"); Position += yyleng;}
"-" {printf("SUB\n"); Position += yyleng;}
"*" {printf("MULT\n"); Position += yyleng;}
"/" {printf("DIV\n"); Position += yyleng;}

beginparams {printf("BEGIN_PARAMS\n"); Position += yyleng;}
integer {printf("INTEGER\n"); Position += yyleng;}
beginbody {printf("BEGIN_BODY\n"); Position += yyleng;}
write  {printf("WRITE\n"); Position += yyleng;}
then  {printf("THEN\n"); Position += yyleng;}
endif  {printf("ENDIF\n"); Position += yyleng;}
beginlocals {printf("BEGIN_LOCALS\n"); Position += yyleng;}
endparams  {printf("END_PARAMS\n"); Position += yyleng;}
endbody  {printf("END_BODY\n"); return 0; Position += yyleng;}
endlocals  {printf("END_LOCALS\n"); Position += yyleng;}
not {printf("NOT\n"); Position += yyleng;}
or {printf("OR\n"); Position += yyleng;}
read {printf("READ\n"); Position += yyleng;}
if {printf("IF\n"); Position += yyleng;}
false {printf("FALSE\n"); Position += yyleng;}
continue {printf("CONTINUE\n"); Position += yyleng;}
function  {printf("FUNCTION\n"); Position += yyleng;} 
of {printf("OF\n"); Position += yyleng;}
break {printf("BREAK\n"); Position += yyleng;}
endloop {printf("ENDLOOP\n"); Position += yyleng;}
while {printf("WHILE\n"); Position += yyleng;}
beginloop {printf("BEGINLOOP\n"); Position += yyleng;}
do {printf("DO\n"); Position += yyleng;}
array {printf("ARRAY\n"); Position += yyleng;}
else {printf("ELSE\n"); Position += yyleng;}
for {printf("FOR\n"); Position += yyleng;}
true {printf("TRUE\n"); Position += yyleng;}
return {printf("RETURN\n"); Position += yyleng;}

(\.{digit}+)|({digit}+(\.{digit}*)?([eE][+-}?[0-9]+)?) {printf("NUMBER %s\n", yytext); Position += yyleng;}
[0-9_][a-zA-Z0-9_]*[a-zA-Z0-9_] {printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", Position, Line, yytext); exit(0);}
[a-zA-Z0-9_]*[_] {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n", Position, Line, yytext); exit(0);}
[a-zA-Z0-9_]*[a-zA-Z0-9]* {printf("IDENT %s\n", yytext); Position += yyleng;}

[ ] {Position += yyleng;}
[\t] {Position += yyleng;}
"\n" {Line++; Position = 1;}
[##].* {Line++; Position = 1;}
. {printf("Error at line %d. column %d: unrecognized symbol \"%s\"\n", Line, Position, yytext); exit(0);}
%%

	/* C functions used in lexer */

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
}
