#include<stdio.h>

int main(){

    //estruturas de repetição
    //while = enquanto certa regra nao for comprida execute um pedaço de codigo
    //usada para quando nao sabemos quantos vezes vamos repetir um codigo

    int valor,valor2;

    printf("\nDigite um valor maior que zero: ");
    scanf("%d",&valor);

    while(valor<=0){
        printf("\nValor invalido! Digite um valor maior q zero: ");
        scanf("%d",&valor);
    }

    printf("\nValor lido com sucesso\n");


    //do while basicamento a mesma coisa do while com a diferença que
    //o que esta no do ira se repetir pelo menos uma vez, depois teremos
    //a condiçao de repetição
    do{
        printf("Digite um valor menor que 0: ");
        scanf("%d",&valor2);
    }while(valor2 >= 0);
 //podemos substituir um for por um while
 //mas nem sempre podemos substituir um while por um for

}
