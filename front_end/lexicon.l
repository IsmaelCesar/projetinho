%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "gramatica.tab.h"
    extern int yywrap();
    extern int yylval;
%}
%%
[a-zA-Z][0-9a-zA-Z]* {yylval.str=*yytext - 'a';return ID;}
[0-9]+               {yylval.val=atoi(yytext);return NUMERO;}
:=                   {return ATRIBUICAO;}
[-,+,*,^,/]          {yylval.str=yytext[0];return OP_ARI;}
[<,=,>,|,&]          {yylval.str=yytext[0];return OP_LOGI;}
[\n]                 { ; }
%%
int yywrap(){return -1;}

