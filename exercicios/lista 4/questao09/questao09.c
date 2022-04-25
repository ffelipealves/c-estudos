#include<stdio.h>

/*
9) Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.
*/

int main(){

    int matriz[3][5]={7, 46, 12, 43, 3, 39, 29, 5, 35, 41, 17, 4, 35, 10, 19};
    int somaLinha[3]={0};
    int somaColuna[5]={0},i,j;

    //PRINTANDO MATRIZ
    printf("Matriz Inicial:\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //SOMANDO AS LINHAS
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            somaLinha[i]=somaLinha[i]+matriz[i][j];
        }

    }

    //SOMANDO AS COLUNAS
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            somaColuna[i]=somaColuna[i]+matriz[j][i];
        }

    }

    //PRINTANDO VETOR LINHAS
    printf("\nSoma das linhas da Matriz: ");
    for(i=0;i<3;i++){
        printf("%d ",somaLinha[i]);
    }

    //PRINTANDO VETOR COLUNAS
    printf("\nSoma das colunas da Matriz: ");
    for(i=0;i<5;i++){
        printf("%d ",somaColuna[i]);
    }



}
