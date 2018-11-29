#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#define  N 100
char bracket_string [N] = "[x][y]yx\0";
//char bracket_string [N] = "[x]y\0";


//Procedimento que recebe duas variaveis, uma que aponta para
//um array e outra que aponta para um inteiro com a posiao do
//array a ser usada. O procedimento termina quando atinge a
//primeira posiao depois dos parenteses.
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

/*Procedimento faz uma varredura na string de entrada no final ate o
 * comeco buscando o ultimo bracket da string e retornando-o
 * */
int busca_ultimo_bracket(char *string,int tam){
    int i = 0;
    int bracket = 0;
    for (int i = tam-1 ; i > -1;i--){
        if(string[i] == ']'){
            bracket = i;
            i = -1;//força saida do loop
        }
    }
    return bracket;
}

/*Apos achado o ultimo bracket procedimento faz uma varredura
 * da string contando os argumentos restantes do ultimo bracket
 * e retornando-os
 */
int contar_argumentos(char *string,int tamanho_string,int ultimo_bracket){
    //int bracket = ultimo_bracket +1;
    int args = 0;
    for(int i = 0,k = ultimo_bracket+1; i < 3;i++,k++){
        if(string[k] == ')' || string[k] == '\0'){
            i= 3;
        }
        else{
            if(string[k] == '('){
                casa_parenteses(string,&k);
            }
            args++;
        }
    }
    return args;
}

int verifica_constante(char *string,char bracket_value,int arg,int nArg){
    int retorno = 0;
    for(int i = arg; i <= nArg;i++){
        if(string[i] == bracket_value){
            retorno = 1;
        }
    }
    return retorno;
}

/*Procedimento efetua a varredura da string buscando pelos brackets
 * de uma string de lambda calculo trandos formada numa stirng com brackets
 * para que a mesma seja transformada e de lambda calculo para logica combinatorial.
 * */
char *bracket_abstraction(char string[]){
    int tamanho = strlen(string);
    int ultimo_bracket = busca_ultimo_bracket(string,tamanho);
    int A = ultimo_bracket+1, nA = ultimo_bracket+1;
    int B = ultimo_bracket+2, nB = ultimo_bracket+2;
    int C = ultimo_bracket+3, nC = ultimo_bracket+3;

    while(ultimo_bracket != 0){
        int num_args = contar_argumentos(string,tamanho,ultimo_bracket);
        char current_b = string[ultimo_bracket-1];//Pega o caractere entre brackets atualmente avaliado;
        switch(num_args){
            case 1:{// K ou Identidade
                int aux_sum = 3; //Somador auxiliar para a atualizacao da string
                if(string[ultimo_bracket+1] == '('){
                    casa_parenteses(string,&nA);
                }
                if(verifica_constante(string,current_b,A,nA)){
                    string[ultimo_bracket-2]='I';

                }else{
                    string[ultimo_bracket-2]='K';
                    aux_sum = 2;
                }
                //substitui os outros valores do bracket pelo combinador
                for(int j = ultimo_bracket-1; j < tamanho;j++){
                    string[j] = string[j+aux_sum];
                }
            }
            break;
        }
        ultimo_bracket = busca_ultimo_bracket(string,tamanho);
    }

}

int main(){

    bracket_abstraction(bracket_string);

    printf("%s",bracket_string);

    return 0;
}
