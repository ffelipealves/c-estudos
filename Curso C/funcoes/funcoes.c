#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// FUNCOES E PROCEDIMENTOS


int main(){

    int tam,num1,num2;
    tam = printf("Hello World!");
        //nomeDaFuncao(parametros);
    printf("\ntamanho : %d",tam);

    tam=strlen("OI!"); //podemos atribuir o retorno de uma funcao a uma variavel
    printf("\ntamanho : %d",tam);
    printf("\ntamanho : %d",strlen("Januario"));//ou podemos imprimir o retorno dessa funcao
    tam=scanf("%d%d",&num1,&num2);//funcao -> retorna quantos valores foram lidos
    printf("\ntamanho : %d",tam);



    return 0;
}
