#include<stdio.h>
#include<stdlib.h>

/*
1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.
*/


int main(){

    int numeros[10],quadrado[10],i;

    for(i=0;i<10;i++){//recebos o input do usuario
        printf("Digite o valor para posicao [%d]: ",i);
        scanf("%d",&numeros[i]);
    }
    for(i=0;i<10;i++){//percorremos o vetor quadrado preenchendo com o quadrado dos valores do vetor numeros
        quadrado[i]=numeros[i]*numeros[i];
    }
    printf("\nVetor numeros:\n");

    for(i=0;i<10;i++){//pritar o vetor numeros
        printf("%d ",numeros[i]);
    }
    printf("\nVetor numeros ao quadrados:\n");

    for(i=0;i<10;i++){//printar o vetor quadrado
        printf("%d ",quadrado[i]);
    }



}
