%{
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "reducao_grafo_copia.c"
//struct FuncaoUnaria variaveis[256];
//struct FuncaoExpr funcoes[256];
int qntVariaveis;
int qntFuncoes;
char* compilar(char *s);
char* parentesear(char *s);
char* compilar(char* entrada);
char* salvar_numero(char *s);
char* salvar_expr(char op, char *a, char *b);
void yyerror(const char* s);
int yylex(void);
%}

%nonassoc IFX
%nonassoc ELSE
%union{ char *str; int valor;}
%start programa
%token numero
%token operador
%token atribuidor
%token alphanumerico
%token argumento
%token logico
%token ask
%token quebra_linha
%token blank
%type <str> alphanumerico
%%

programa	:	programa expr quebra_linha	{compilar($<str>2);}
		|	programa func			{;}
		|	%empty	
		;

expr		:	operador expr expr			{$<str>$ = salvar_expr($<valor>1, $<str>2,$<str>3);}
		|	numero					{$<str>$ = salvar_numero($<str>1);}
		;

func		:	alphanumerico atribuidor expr			{;}
		|	alphanumerico argumento atribuidor expr		{;}
		| 	alphanumerico ask				{;}
		;
%%

//void iniciar(char* entrada){
	//entr = 	entrada;
	//alocar_memoria();
	//raiz = transforma_entrada_grafo();
	//execucao();
	//imprime_arvore(raiz);
	//free(heap);
//}

char* compilar(char* s){
	printf("%s\n",s);
	string = s; //Array de string e definido no header do backend
	inicializar(string);    //Chama a funcao que inicia o backend
	free(s);
	return s;
}
char* salvar_expr(char op, char *a, char *b){
	int tam1 = strlen(a);
	int tam2 = strlen(b);
	char *aux = malloc(tam1+tam2+7);
	aux[0] = op;
	aux[1] = '(';
	strcpy(aux+2, a);
	aux[tam1+2] = ')';
	aux[tam1+3] = '(';
	strcat(aux, b);
	aux[tam1+tam2+4] = ')';
	aux[tam1+tam2+5] = '\0';
	free(a);
	free(b);
	int i= 0, j = 0;
	while(aux[j]){
		if(aux[j] == ' '){
			j++;
		}else{
			aux[i] = aux[j];
			i++;
			j++;
		}
	}
	aux[i] = '\0';
	return aux;
}
char* salvar_numero(char *s){
	int tam = strlen(yylval.str);
	char *aux = malloc(tam+1);
	strcpy(aux, s);
	aux[tam] = '\0';
	return aux;
}

int main(void){
	qntVariaveis = 0;
	qntFuncoes = 0;
	return yyparse();
}

void yyerror(const char* s){
	fprintf(stderr, "%s\n", s);
}
