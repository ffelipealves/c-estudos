#include<stdio.h>

/*
8) Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.
*/

int main(){

    int matriz[5][7]={41, 23, 39, 8, 29, 12, 28, 6, 33, 23, 43, 50, 40, 1, 46, 41, 11, 25, 14, 24, 44, 28, 48, 22, 43, 14, 31, 31, 35, 30, 48, 21, 12, 37, 31};
    int soma=0,i,j;

    for(i=0;i<5;i++){           //percorre o vetor somando cada valor de cada posicao
        for(j=0;j<7;j++){
            soma=soma+matriz[i][j];
        }
    }

    printf("\nSoma: %d",soma);
}
