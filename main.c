/*
 * main.c
 *
 *  Created on: 28 de set de 2018
 *      Author: Ismael
 */
#include <stdio.h>
#include <stdlib.h>

//Outros diretórios
#include "maquina_ks/maquina_ks.h"
#include "maquina_turner/maquina_turner.h"

int main(){
	int retorno = 0;
	//retorno  = maquina_ks();
	retorno = maquina_turner();
	return retorno;
}

