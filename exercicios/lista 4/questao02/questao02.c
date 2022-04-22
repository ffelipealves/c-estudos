#include<stdio.h>
#include<stdlib.h>

/*
2) Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.

*/


int main(){

    int vetorA[25]={29, 59, 35, 58, 67, 44, 46, 81, 82, 21, 52, 74, 48, 29, 94, 10, 26, 81, 93, 40, 50, 21, 30, 19, 41};
    int vetorB[25]={80, 51, 27, 48, 34, 56, 10, 0, 56, 27, 83, 16, 17, 36, 25, 0, 59, 58, 78, 73, 96, 21, 32, 72, 68};
    int vetorSoma[25],i;

    //somando vetor A e B e armazenando no vetor Soma
    for(i=0;i<25;i++){
        vetorSoma[i]=vetorA[i]+vetorB[i];
    }
    //printando cada vetor
    printf("\nVetor A: ");
    for(i=0;i<25;i++){
        printf("%d ",vetorA[i]);
    }
    printf("\nVetor B: ");
    for(i=0;i<25;i++){
        printf("%d ",vetorB[i]);
    }
    printf("\nVetor Soma: ");
    for(i=0;i<25;i++){
        printf("%d ",vetorSoma[i]);
    }



}
