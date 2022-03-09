digit [0-9]
intiger {digit}+

%{
int nint;
int min;
int plu;
int mult;
int divi;
int eq;
int L_Per;
int R_per;
int err;
%}


%%
{intiger} {printf("int\n"); nint++;}
"-" {printf("minus\n"); min++;}
"+" {printf("plus\n"); plu++;}
"*" {printf("multiply\n"); mult++;}
"/" {printf("divide\n"); divi++;}
"=" {printf("equal\n"); eq++;}
"(" {printf("L_Peren\n"); L_Per++;}
")" {printf("R_Peren\n"); R_per++;}
"\n" {return 0;}
%%

int yywrap(){}
int main(int argc, char **argv) {
    ++argv, --argc;
    yyin = fopen(argv[0], "r");
    yylex();
    fclose(yyin);
    if(!err){
        printf("Number of integers = %d\n", nint);
        printf("Number of operators = %d\n", min + plu + mult + divi);
        printf("Number of equals = %d\n", eq);
        printf("Number of parentheses = %d\n", L_Per + R_per);
    }
    return 0;
}