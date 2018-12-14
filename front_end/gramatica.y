%{
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
void yyerror(char const *s);
int yyparse();
extern int yylex();

struct symfunc{
	char *nome; //
	char *args;//texto para argumentos
	//int type; // para diferenciar se é um var ou um simbolo
	char *expr;
	struct symfunc *prox;
};

struct valforsym{//declarando valor para symbolo
	char *sym;
	int  val;
	struct valforsym *next;
}

typedef struct symfunc *symtable;
typedef struct valforsym *valList;
//Definicao de fucao
int  retornaValorVariavel(char *sym);
int  adicionaFuncao(char *id,char *args,char *expr);
char *retornaFuncoesPorId(char *id)
int  calcular(char op, int a, int b);

//extern symrec *symtable;
%}
%union{
	char *str;
	int val;
}
%token ATRIBUICAO <val>NUMERO <str>OP_ARI <str>OP_LOGI <str>ID <val>EXPR <str>DEF_FUNC
%%

PROGRAMA    : PROGRAMA STMT        
	    	| 
            ;

STMT    	: EXPR		             
	    	| ID ATRIBUICAO EXPR     {adicionaVariavel($<str>1,$<val>3)}
			| DEF_FUNC FUNCAO
	    	;			

EXPR        :  OP EXPR EXPR          {$<val>$ = calcular($<str>1, $<str>2, $<str>3);printf("%d",$$);}
            |  NUMERO		   	     {$<val>$=$<val>1;}      
	    	|  ID                    {$<str>$ = retornaValorVariavel($<str>1)}
			;

FUNCAO 		: ID					  {$<str>$ = retornaFuncoesPorId($1); printf("%s",$$);}
			| ID ARGS				  {}	
			| ID ARGS ATRIBUICAO EXPR   {adicionaFuncao($1,$2,$4);}
			;

ARGS        : ID
			| ID ARGS
			|
			;	

OP          : OP_ARI               {$<str>$=$<str>1;}
            | OP_LOGI              {$<str>$=$<str>1;}           
			; 

%%

int calcular(char op, char a, char b){
	int retorno = 0;
	int auxA = retornaValorVariavel(a);
	int auxB = retornaValorVariavel(b);
	if(auxA==-1 && auxB==-1){
		auxA = atoi(a);	
		auxB = atoi(b);	
	}
	switch(op){
		case '+':
			retorno = auxA + auxB;
		break;
		case '-':
			retorno = auxA - auxB;
		break;
		case '*':
			retorno = auxA * auxB;
		break;
		case '/':
			retorno = auxA / auxB;
		break;
		case '^':
			retorno= pow(auxA,auxB);
		break;
	}
	return retorno;
}
void yyerror(const char *s){
	fprintf(stderr, "%s\n", s);
}

void adicionaVariavel(char *sym,int val){
	struct valforsym aux = valList;
	if(aux){//se a lista nao estiver vazia
		int isNotFound =1 ; //Se uma variavel nao foi achada
		while(aux->next){
			if(strcmp(aux->sym,sym)){//se o simbolo gerado ja existir substitui o valor
				aux->val = val;
				aux = NULL;//forçando saida do loop
				isNotFound =0;//foi achada uma variavel
			}
			else
				aux = aux->next;
		}
		if(isNotFound){ // se não for achado cria-se uma nova variavel
			aux->next=malloc(1*(struct valforsym));
			aux = aux->next;
			aux->sym = sym;
			aux->val = val;
			aux->next= NULL;
		}
	}
	else{
		valList = malloc(1*sizeof(struct valforsym));
		valList->sym  = sym;
		valList->val  = val;
		valList->next = NULL;
	}
}

int retornaValorVariavel(char *sym){ //Busca uma variavel e retorna o valor
	//retorna -1 se a variavel digitada nao existir
	int retorno = -1;
	if(valList){// se a lista não for vazia
		struct valforsym aux = valList;
		while(aux){
			if(strcmp(aux->sym,sym)){//se o simbolo gerado ja existir substitui o valor
				retorno = aux->val;
				aux = NULL;//forçando saida do loop
			}
			else
				aux = aux->next;
		}
	}
	return retorno;
}


void adicionaFuncao(char *id,char *args,char *expr){
	/*Fazendo busca por fucao*/
	int retorno= 0;
	struct symfunc aux = symtable;
	if(aux){//Se a tabela de simbolos não estiver vazia
		int isNotFound =1; //Se uma variavel nao foi achada
		while(aux->next){
			if(strcmp(aux->nome,id)){//se o simbolo gerado ja existir substitui o valor
				aux->args = args;
				aux->expr = expr;
				isNotFound =0;//foi achada uma variavel
			}
			else
				aux = aux->next;
		}
		if(isNotFound){ // se não 
			aux->next=malloc(1*(struct symfunc));
			aux = aux->next;
			aux->sym = sym;
			aux->val = val;
			aux->next= NULL;
		}
	}	
	else{
		symtable = malloc(1*sizeof(struct symfunc));
		symtable->id = id;
		symtable->args = id;
		symtable->expr = expr;
		symtable->next = NULL;
		//Adicionando argumentos a o conjunto de variaveis		
	}
	retorno;
}	

char * retornaFuncoesPorId(char *id){
	struct symfunc aux = symtable;
	struct symfunc retorno = aux;
	char str[50];
	if(aux){
		while(aux){
			if(strcmp(aux->nome,id)){//se o simbolo gerado ja existir substitui o valor
				retorno = aux;
				aux = NULL;
			}
			else
				aux = aux->next;
		}
		if(!retorno){//se algum elemento foi achado
			strcat(str,aux->nome);
			strcat(str," ");
			strcat(str,aux->args);
			strcat(str,":=");
			strcat(str,aux->expr);
			strcat(str,"\n");
		}
		else{
			return "\n";
		}
	}
	else{
		return "\n";
	}
	return str;
}

int main(){
	return yyparse();
}
