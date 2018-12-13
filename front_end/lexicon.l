%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
extern int yylval;
//extern int yywrap();
%}
%%
[a-zA-Z][0-9a-zA-Z]* {yylval=*yytext - 'a';return ID;}
[0-9]+               {yylval=atoi(yytext);return NUMERO;}
:=                   {return ATRIBUICAO;}
[-,+,*,^,/]          {yylval=yytext[0];return OP_ARI;}
[<,=,>,|,&]          {yylval=yytext[0];return OP_LOGI;}
%%
//int yywrap(){return -1;}

