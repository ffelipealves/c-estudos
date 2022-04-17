#include<stdio.h>
#include<stdlib.h>

/*
15) Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
multiplicação entre os dois números sem utilizar a operação de multiplicação.
*/

int main(){

    int valorA,valorB,soma=0,i;

    printf("Digite os valores de a e b: ");
    scanf("%d%d",&valorA,&valorB);

    for(i=valorA;i>0;i--){//iremos fazer a soma do valorB x vezes
        soma=soma+valorB;//sendo x = valorA
    }
    printf("%d",soma);



}


