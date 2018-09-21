#include <stdio.h>
#include <stdlib.h>

typedef struct Celula{
	char tipo;
	char mark;
	struct Celula *fesq;
	struct Celula *fdir;
}Celula;

char string[20] ="KSK(KKK)K\0";

Celula *criaCombinador(char *entrada){
	Celula *combinador;
	combinador = malloc( sizeof(Celula) );
	combinador->tipo = entrada[0];
	combinador->fdir = NULL;
	combinador->fesq = NULL;
	entrada++;
	return combinador;
}

Celula *criaAplicacao(){
	Celula *aplicacao;
	aplicacao = malloc(sizeof(Celula));
	aplicacao->tipo = '@';
	aplicacao->fdir = NULL;
	aplicacao->fesq = NULL;
	return aplicacao;
}

void criagrafo(char *entrada){

	Celula *raiz = criaAplicacao();

	while(entrada[0] != '\0'){

		if(entrada[0] == '('){
			//Verificar subarvore
		}
		else{
			if(raiz->fesq != NULL){
				Celula *ap = criaAplicacao();
				Celula *comb = criaCombinador(entrada);
				Celula *aux  = raiz;
				aux->fdir = comb;
				ap->fesq  = aux;
				raiz  = ap;
			}
			else{
				Celula *comb = criaCombinador(entrada);
				raiz->fesq = comb;
			}
			entrada++;
		}
	}

}


int main(){

	criagrafo(string);


	return 0;
}
