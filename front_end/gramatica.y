%{
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
void yyerror(char const *s);
int yyparse();
extern int yylex();
int calcular(char op, int a, int b);
int sym[100];
%}
%token ATRIBUICAO NUMERO OP_ARI OP_LOGI IF ELSE FALSE TRUE ID
%%

PROGRAMA    : PROGRAMA STMT        
	    | 
            ;

STMT        : EXPR		   {printf("%d",$1);}    
	    | ID ATRIBUICAO EXPR   {sym[$1] = $3;}
	    ;
		
EXPR        :  OP EXPR EXPR        {$$ = calcular($1, $2, $3);}
            |  NUMERO   	   {$$=$1;}      
	    |  ID                  {$$ = sym[$1];}
            ;

OP          : OP_ARI               {$$=$1;}
            | OP_LOGI              {$$=$1;}  
            ; 

%%

int calcular(char op, int a, int b){
	int retorno = 0;
	switch(op){
		case '+':
			retorno = a + b;
		break;
		case '-':
			retorno = a - b;
		break;
		case '*':
			retorno = a * b;
		break;
		case '/':
			retorno = a / b;
		break;
		case '^':
			//return pow(a,b);
		break;
	}
	return retorno;
}
int yywrap(){
	return 1;
}
void yyerror(const char *s){
	fprintf(stderr, "%s\n", s);
}
int main(){
	return yyparse();
}
