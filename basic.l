%{
#include <stdio.h>
%}

%%

if|else|for|while|do {printf("%s is a keyword",yytext);}
stdio|conio|math|string {printf("%s is a header file",yytext);}
[0-9]+ {printf("%s is a number",yytext);}
[a-zA-Z]+ {printf("%s is a word",yytext);}
[+-/*]+ {printf("%s is a operator",yytext);}
[{}()]+ {printf("%s is a parenthesis",yytext);}
.|\n {ECHO;}

%%

int main(){
    printf("Enter the string:");
    yylex();
}

int yywrap(){
    return 1;
}