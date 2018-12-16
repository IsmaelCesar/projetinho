#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#define  N 100
char bracket_string [N] = "[x][y]xy\0";
//char bracket_string [N] = "[y]yy\0";
//char bracket_string [N]   = "[x](xw)(az)\0";
//char bracket_string [N]   = "[x](aw)(xz)(xy)\0";//Teste F
//char bracket_string [N]   = "[x](aw)(hz)(xy)\0";//Teste D
//char bracket_string [N]   = "[x](aw)(xz)(hy)\0";//Teste E
//char bracket_string [N]   = "S((B)C(C)(K)(K)(I))((K)(K)D(K)(I))\0";//Teste Remover parenteses Redundantes
//char bracket_string[N]       = "[x]((gf)(ab))([w](w)(zc)(d))";


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
                k++;
                casa_parenteses(string,&k);
                k--;//Recuando para o parenteses
            }
            args++;
        }
    }
    return args;
}

/*Procedimento pega o valor do bracket atual, exemplo
 *[x], o valor eh x everifica se o mesmo ocorre dentro de um
 * dos argumentos
 */
int verifica_constante(char *string,char bracket_value,int arg,int nArg){
    int retorno = 0;
    for(int i = arg; i <= nArg;i++){
        if(string[i] == bracket_value){
            retorno = 1;
        }
    }
    return retorno;
}

/*Procedimento auxiliar para substituir os caracteres da string
 * que está sendo transformada em bracket abstraction
 */
void substitui_valores(char *string,int ultimo_bracket,int tamanho,int aux_sum){
    for(int j = ultimo_bracket-1; j < tamanho;j++){
        string[j] = string[j+aux_sum];
    }
}

/*Cria uma string auxiliar a partir dos indices do argumento;
 * */
char *cria_string_auxiliar(char *string,int arg,int nArg){
    int tam_arg = nArg - arg + 1;
    char *retorno = malloc(tam_arg * sizeof(char));
    for(int  i = 0; i < tam_arg; i++){
        retorno[i] = string[arg+i];
    }
    return retorno;
}

//      INCLUINDO COMBINADORES

void inclui_I(char *string,int ultimo_bracket,int tamanho){
    string[ultimo_bracket-2]='I';
    int aux_sum = 3;
    substitui_valores(string,ultimo_bracket,tamanho,aux_sum);
}

void inclui_K(char *string,int ultimo_bracket,int tamanho){
    string[ultimo_bracket-2]='K';
    int aux_sum = 2;
    substitui_valores(string,ultimo_bracket,tamanho,aux_sum);
}

void inclui_B(char *string,int ultimo_bracket,char current_b,int nA,int B,int nB){
    string[ultimo_bracket-2] = 'B';
    int aux_sum = 2;
    char * string_aux = cria_string_auxiliar(string,B,nB);//da um "shift left" nos caracteres
    substitui_valores(string,ultimo_bracket,nA,aux_sum);
    nA -= 2; //nA foi atualizado pois o argumento a foi deslocado duas casas para tras
    string[nA+1] = '(';
    string[nA+2] = '[';
    string[nA+3] = current_b;
    string[nA+4] = ']';
    int k = -1;
    for(int j=0;j<=(nB-B);j++,k++){
        string[nA+5+j] = string_aux[j];
    }
    string[nA+5+k+1] = ')';
    string[nA+5+k+2] = '\0';
}


void inclui_C(char *string,int ultimo_bracket,char current_b,int A,int nA,int B, int nB){
    string[ultimo_bracket-2] = 'C';
    int aux_sum = 2;
    char * string_aux_A = cria_string_auxiliar(string,A,nA);
    char * string_aux_B = cria_string_auxiliar(string,B,nB);

    int offset = 1;
    ultimo_bracket -=2;
    //[x] a b  =   C ([x] a) b
    string[ultimo_bracket+(offset++)] = '(';
    string[ultimo_bracket+(offset++)] = '[';
    string[ultimo_bracket+(offset++)] = current_b;
    string[ultimo_bracket+(offset++)] = ']';
    for(int i = 0;  i<=(nA-A); i++,offset++){
        string[ultimo_bracket+offset] = string_aux_A[i];
    }
    string[ultimo_bracket+(offset++)] = ')';
    for(int i = 0;  i<=(nB-B); i++,offset++){
        string[ultimo_bracket+offset] = string_aux_B[i];
    }
}

void inclui_D(char *string,int ultimo_bracket,char current_b,int A, int nA, int B, int nB,int C,int nC){
    string[ultimo_bracket-2] = 'D';

    char * string_aux_A = cria_string_auxiliar(string,A,nA);
    char * string_aux_B = cria_string_auxiliar(string,B,nB);
    char * string_aux_C = cria_string_auxiliar(string,C,nC);
    ultimo_bracket -= 2;
    int offset = 1;
    //[x] a b c = D a b ([x] c)
    for(int i =0; i<=(nA - A); i++,offset++){
        string[ultimo_bracket+offset] = string_aux_A[i];
    }
    for(int i =0; i<=(nB - B); i++,offset++){
        string[ultimo_bracket+offset] = string_aux_B[i];
    }
    string[ultimo_bracket+(offset++)] = '(';
    string[ultimo_bracket+(offset++)] = '[';
    string[ultimo_bracket+(offset++)] = current_b;
    string[ultimo_bracket+(offset++)] = ']';
    for(int i =0; i<=(nC - C); i++,offset++){
        string[ultimo_bracket+offset] = string_aux_C[i];
    }
    string[ultimo_bracket+offset] = ')';
}

void inclui_E(char *string,int ultimo_bracket,char current_b,int A, int nA, int B, int nB,int C,int nC){
    string[ultimo_bracket-2] = 'E';

    char * string_aux_A = cria_string_auxiliar(string,A,nA);
    char * string_aux_B = cria_string_auxiliar(string,B,nB);
    char * string_aux_C = cria_string_auxiliar(string,C,nC);
    ultimo_bracket -= 2;
    int offset = 1;
    //[x] a b c = E a ([x] b) c
    for(int i =0; i<=(nA - A); i++,offset++){
        string[ultimo_bracket+offset] = string_aux_A[i];
    }
    string[ultimo_bracket+(offset++)] = '(';
    string[ultimo_bracket+(offset++)] = '[';
    string[ultimo_bracket+(offset++)] = current_b;
    string[ultimo_bracket+(offset++)] = ']';
    for(int i =0; i<=(nB - B); i++,offset++){
        string[ultimo_bracket+offset] = string_aux_B[i];
    }
    string[ultimo_bracket+(offset++)] = ')';

    for(int i =0; i<=(nC - C); i++,offset++){
        string[ultimo_bracket+offset] = string_aux_C[i];
    }

}

void inclui_F(char *string,int ultimo_bracket,char current_b,int A, int nA, int B, int nB,int C,int nC){
    string[ultimo_bracket-2] = 'F';

    char * string_aux_A = cria_string_auxiliar(string,A,nA);
    char * string_aux_B = cria_string_auxiliar(string,B,nB);
    char * string_aux_C = cria_string_auxiliar(string,C,nC);
    ultimo_bracket -= 2;
    int offset = 1;
    //[x] a b c = E a ([x] b) ([x] c)
    for(int i =0; i<=(nA - A); i++,offset++){
        string[ultimo_bracket+offset] = string_aux_A[i];
    }
    string[ultimo_bracket+(offset++)] = '(';
    string[ultimo_bracket+(offset++)] = '[';
    string[ultimo_bracket+(offset++)] = current_b;
    string[ultimo_bracket+(offset++)] = ']';
    for(int i =0; i<=(nB - B); i++,offset++){
        string[ultimo_bracket+offset] = string_aux_B[i];
    }
    string[ultimo_bracket+offset] = ')';

    string[ultimo_bracket+(offset++)] = '(';
    string[ultimo_bracket+(offset++)] = '[';
    string[ultimo_bracket+(offset++)] = current_b;
    string[ultimo_bracket+(offset++)] = ']';
    for(int i =0; i<=(nC - C); i++,offset++){
        string[ultimo_bracket+offset] = string_aux_C[i];
    }
    string[ultimo_bracket+offset] = ')';

}

void inclui_S(char *string,int ultimo_bracket,char current_b,int A,int nA,int B,int nB){

    string[ultimo_bracket-2] = 'S';
    int aux_sum = 2;
    char * string_aux_A = cria_string_auxiliar(string,A,nA);
    char * string_aux_B = cria_string_auxiliar(string,B,nB);
    //As novas strings sao adicionadas segundo a posicao do ultimo bracket encontrado
    int offset = 1;
    ultimo_bracket = ultimo_bracket -2;
    string[ultimo_bracket+(offset++)] = '(';
    string[ultimo_bracket+(offset++)] = '[';
    string[ultimo_bracket+(offset++)] = current_b;
    string[ultimo_bracket+(offset++)] = ']';
    //Copia primeira string
    for(int i =0; i <=(nA - A);i++,offset++){
        string[ultimo_bracket+offset] = string_aux_A[i];
    }
    string[ultimo_bracket+(offset++)] = ')';
    string[ultimo_bracket+(offset++)] = '(';
    string[ultimo_bracket+(offset++)] = '[';
    string[ultimo_bracket+(offset++)] = current_b;
    string[ultimo_bracket+(offset++)] = ']';
    for(int i =0; i <=(nB - B);i++,offset++){
        string[ultimo_bracket+offset] = string_aux_A[i];
    }
    string[ultimo_bracket+(offset++)] = ')';
    string[ultimo_bracket+offset]     = '\0';
}

//      REAJUSTE DE STRING E ASSOCIATIVIDADE A ESQUERDA
//Procedimento auxiliar para ajuste de uma string
//Caso seja encontrado um caso em que (OP)
//Os parenteses sao removidos a string inteira e copiada novamente
void remove_parenteses_redundantes(char *string){
    int tamanho_string = strlen(string);
    for(int i =1; i < tamanho_string-1; i++){
        if(string[i-1] == '(' && string[i+1] == ')'){
            //Reajusta string
            int j=i-1;
            string[j] = string[i];;//substitui o parenteses que vem antes pelo operador
            for(j += 1; j< tamanho_string; j++){
                string[j] = string[j+2];//Substitui pelos caracteres que vem depois dos parenteses
            }
            tamanho_string = strlen(string);
        }
    }
}

/*Procedimento faz uma varredura na stirng do final até o começo
 * procurando por um fecha bracket ], caso ache algum, aplica a associatividade a
 * esquerda na string
 * */
void associatividade_esquerda(char *string){
    int tamanho_string = strlen(string);
    for(int i = tamanho_string-2; i >= 2; i--){
        if(string[i] == ']' && string[i+1] == '('){
            //verifica a necessidade de aplicar associatividade a esquerda
            int P = i+1;//parenteses
            int nP = P+1;//depois dos parenteses
            casa_parenteses(string,&nP);
            nP -= 1; //retorna nP para o indice na posicao do ultimo parenteses;
            //remove os primeiros parenteses
            int j = P+1;
            for(; j < nP; j++){
                string[j-1] = string[j];
            }
            //copia o resto da string
            for(int  k = j-1; k < tamanho_string-1; k++){
                string[k] = string[k+2];
            }
            tamanho_string = strlen(string);
        }
    }

}


/*Procedimento efetua a varredura da string buscando pelos brackets
 * de uma string de lambda calculo trandos formada numa stirng com brackets
 * para que a mesma seja transformada e de lambda calculo para logica combinatorial.
 * */
char *bracket_abstraction(char string[]){
    //TODO:Asociatividade a esquerda
    int tamanho = strlen(string);
    int ultimo_bracket = busca_ultimo_bracket(string,tamanho);
    int A,nA,B,nB,C,nC;

    do{
        A = ultimo_bracket+1, nA = A;
        B = 0, nB = 0;
        C = 0, nC = 0;
        int parenteses_aux = 0;
        if(string[A] == '('){
            nA = A+1;
            casa_parenteses(string,&nA);
            nA = nA-1;
        }

        B = nA+1;
        nB= B;
        if(B < tamanho && string[B] == '('){
            nB = B+1;
            casa_parenteses(string, &nB);
            nB = nB-1;
        }

        C = nB+1;
        nC= C;
        if(C < tamanho && string[C] == '('){
            nC = C+1;
            casa_parenteses(string, &nC);
            nC = nC-1;
        }

        int num_args = contar_argumentos(string,tamanho,ultimo_bracket);
        char current_b = string[ultimo_bracket-1];//Pega o caractere entre brackets atualmente avaliado;
        if(num_args == 1){// K ou Identidade

                if(!verifica_constante(string,current_b,A,nA)){
                    //string[ultimo_bracket-2]='I';
                    inclui_K(string,ultimo_bracket,tamanho);
                }else{
                    //string[ultimo_bracket-2]='K';
                    //aux_sum = 2;
                    inclui_I(string,ultimo_bracket,tamanho);
                }
                //substitui os outros valores do bracket pelo combinador
                //substitui_valores(string,ultimo_bracket,tamanho,aux_sum);
            }
        else{//num_args > 1
            if(num_args == 3){
                //Verifica os de turner
                if(verifica_constante(string, current_b, B, nB) && verifica_constante(string, current_b, C, nC) ){
                   //inclui f
                   inclui_F(string,ultimo_bracket,current_b,A,nA,B,nB,C,nC);
                }
                else if(!verifica_constante(string, current_b, B, nB)){
                    //Se B nao tem constante mas A tem
                    if(verifica_constante(string, current_b, A, nA)){
                        //B vira A tambem
                        nA = nB;
                        B  = C;
                        nB = nC;
                        if (verifica_constante(string, current_b, A, nA) &&
                            verifica_constante(string, current_b, B, nB)) { //S ( [x] a ) ( [x] b )
                            inclui_S(string, ultimo_bracket, current_b, A, nA, B, nB);
                        }
                        else{
                            inclui_B(string, ultimo_bracket, current_b, nA, B, nB);
                        }
                    }
                    else if(verifica_constante(string, current_b, B, nB)){
                        //inclui e
                        inclui_E(string,ultimo_bracket,current_b,A,nA,B,nB,C,nC);
                    }
                    else if(verifica_constante(string, current_b, C, nC)){
                        //inclui d
                        inclui_D(string,ultimo_bracket,current_b,A,nA,B,nB,C,nC);
                    }
                }
                else if(verifica_constante(string, current_b, B, nB)){
                    //inclui e
                    inclui_E(string,ultimo_bracket,current_b,A,nA,B,nB,C,nC);
                }
                else if(verifica_constante(string, current_b, C, nC)){
                    //inclui d
                    inclui_D(string,ultimo_bracket,current_b,A,nA,B,nB,C,nC);
                }
            }
            else {
                if (verifica_constante(string, current_b, A, nA)) {
                    inclui_C(string, ultimo_bracket, current_b, A, nA, B, nB);
                } else if (verifica_constante(string, current_b, B, nB)) {
                    inclui_B(string, ultimo_bracket, current_b, nA, B, nB);
                } else if (verifica_constante(string, current_b, A, nA) &&
                           verifica_constante(string, current_b, B, nB)) { //S ( [x] a ) ( [x] b )
                    inclui_S(string, ultimo_bracket, current_b, A, nA, B, nB);
                }
            }
        }
        associatividade_esquerda(string);
        remove_parenteses_redundantes(string);
        tamanho  = strlen(string);
        ultimo_bracket = busca_ultimo_bracket(string,tamanho);
    }while(ultimo_bracket != 0);

}

int main(){
    printf("%s\n",bracket_string);
    bracket_abstraction(bracket_string);
    //remove_parenteses_redundantes(bracket_string);
    //associatividade_esquerda(bracket_string);
    printf("%s",bracket_string);

    return 0;
}
