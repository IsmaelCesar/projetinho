/*
 * maquina_ks.h
 *
 *  Created on: 28 de set de 2018
 *      Author: Ismael
 */

#ifndef MAQUINA_KS_MAQUINA_KS_H_
#define MAQUINA_KS_MAQUINA_KS_H_

typedef struct Celula{
	char tipo;
	char mark;
	struct Celula *fesq;
	struct Celula *fdir;
}Celula;


/*Estrutura que contém um ponteiro que aponta para a raiz da freelist*/
typedef struct Freelist{
	struct Celula *fl_pointer;
}Freelist;

/*Estrutura que contém um ponteiro que aponta para a raiz do grafo*/
typedef struct List{
	struct Celula *l_pointer;
}List;

/*Estrutura auxiliar para empilhar os nós
 * */
typedef struct NodePilha{
	struct Celula *dado;
	struct NodePilha *prox;
}NodePilha;

void push(Celula *c);

void pop();

Celula *cria_combinador(char *entrada);

void casa_parenteses(char* array1, int* p);

Celula *cria_aplicacao();

Celula* cria_grafo(char *entrada);

Celula* aloca_freelist(Celula *heap, Celula *raiz);

void aloca_grafo(Celula *heap,Celula *cel,int *idx,Freelist *fl,List*l);

void imprime_grafo_para_string(Celula *cel);

void imprime_grafo(Celula *cel);

void reduz_K(Celula *grafo);

void reduz_S(Celula *grafo);

void empilha_grafo(Celula *grafo);

int maquina_ks();


#endif /* MAQUINA_KS_MAQUINA_KS_H_ */
