#include <stdio.h>
#include <stdlib.h>

typedef struct Celula{
	char tipo;
	char mark;
	struct Celula *fesq;
	struct Celula *fdir;
}Celula;

char string[20] ="KSK(KKK)K\0";

//Procedimento que recebe duas variáveis, uma que aponta para
//um array e outra que aponta para um inteiro com a posição do
//array a ser usada. O procedimento termina quando atinge a
//primeira posição depois dos parênteses.
void casa_parenteses(char* array1, int* p) {
    int paren = 1;
    int c = *p;
    while (paren != 0) {
        switch (array1[c]) {
            case '(':
                paren++;
                c++;
                break;
            case ')':
                paren--;
                c++;
                break;
            default:
                c++;
        }
    }
    *p = c;
}

Celula *cria_combinador(char *entrada){
	Celula *combinador;
	combinador = malloc( sizeof(Celula) );
	combinador->tipo = entrada[0];
	combinador->fdir = NULL;
	combinador->fesq = NULL;
	entrada++;
	return combinador;
}

Celula *cria_aplicacao(){
	Celula *aplicacao;
	aplicacao = malloc(sizeof(Celula));
	aplicacao->tipo = '@';
	aplicacao->fdir = NULL;
	aplicacao->fesq = NULL;
	return aplicacao;
}


/*Procedimento pega a string de entrada e a partir da mesma cria o grafo
 * fazendo uma busca em ordem de baixo para cima
 * */
Celula* cria_grafo(char *entrada){

	Celula *raiz = cria_aplicacao();

	while(entrada[0] != '\0'){

			if(entrada[0] == ')'){
					return raiz->fesq;
			}
			else if(entrada[0] == '('){

				raiz->fdir = cria_grafo(entrada + 1);
				int end   = 1;
				casa_parenteses(entrada,&end);
				for(int i = 0; i < end-1; i++){
					entrada++;
				}
			}
			else{
				if(raiz->fesq != NULL){
					Celula *ap = cria_aplicacao();
					Celula *comb = cria_combinador(entrada);
					Celula *aux  = raiz;
					aux->fdir = comb;
					ap->fesq  = aux;
					raiz  = ap;
				}
				else{
					Celula *comb = cria_combinador(entrada);
					raiz->fesq = comb;
				}
				entrada++;
			}
	}

	return raiz;
}


int main(){

	cria_grafo(string);


	return 0;
}
