#include<stdio.h>

/*
14) Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma
matriz 4 x 4.
*/

int main(){

    int matriz[4][4]={44, 26, 29, 29, 38, 47, 9, 35, 25, 29, 7, 23, 24, 50, 30, 20};
    int i,j;


    for(i=0;i<4;i++){//PRINTANDO A MATRIZ
        for(j=0;j<4;j++){
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("DIAGONAL PRINCIPAL: ");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j){
                printf("%d ",matriz[i][j]);
            }
        }

    }
    printf("\nNUMEROS ABAIXO DA DIAGONAL PRINCIPAL: ");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j && i!=3){
                printf("%d ",matriz[i+1][j]);
            }
        }

    }
}
