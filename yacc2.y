%{
#include <stdio.h>
#include <stdlib.h>
%}
%token DIGIT LETTER NL UND
%%
stmt : variable NL { printf("Valid Identifiers\n"); exit(0);}
;
variable : LETTER alphanumeric
;
alphanumeric: LETTER alphanumeric
| DIGIT alphanumeric
| UND alphanumeric
| LETTER
| DIGIT
| UND
;
%%
int yyerror(char *msg)
{
printf("Invalid Expression\n");
exit(0);
}
main ()
{
printf("Enter the variable name\n");
yyparse();
}
int yywrap()
{
return 1; // Indicates that there's no more input
}
LEX CODE:
%{
#include "y.tab.h"
%}
%%
[a-zA-Z] { return LETTER ;}
[0-9] { return DIGIT ; }
[\n] { return NL ;} 
[_] { return UND; } 
. { return yytext[0]; }
%%
