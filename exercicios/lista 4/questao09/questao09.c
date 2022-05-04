#include<stdio.h>

/*
9) Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.
*/

int main(){

    int matriz[5][10]={38, 33, 28, 9, 78, 1, 99, 20, 50, 64, 18, 72, 13, 70, 75, 34, 60, 82, 67, 63, 77, 49, 76, 36, 16, 10, 99, 58, 48, 41, 13, 51, 27, 52, 53, 34, 94, 66, 87, 78, 71, 99, 89, 23, 69, 47, 83, 25, 91, 82};
    int somaLinha[5]={0};
    int somaColuna[10]={0},i,j;

    //PRINTANDO MATRIZ
    printf("Matriz Inicial:\n");
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //SOMANDO AS LINHAS
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            somaLinha[i]=somaLinha[i]+matriz[i][j];
        }

    }

    //SOMANDO AS COLUNAS
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            somaColuna[i]=somaColuna[i]+matriz[j][i];
        }

    }

    //PRINTANDO VETOR LINHAS
    printf("\nSoma das linhas da Matriz: ");
    for(i=0;i<5;i++){
        printf("%d ",somaLinha[i]);
    }

    //PRINTANDO VETOR COLUNAS
    printf("\nSoma das colunas da Matriz: ");
    for(i=0;i<10;i++){
        printf("%d ",somaColuna[i]);
    }



}
