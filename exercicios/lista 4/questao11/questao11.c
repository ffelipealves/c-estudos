#include<stdio.h>

/*
11) Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.
*/

int main(){

    int matriz[5][5]={34, 31, 25, 36, 19, 29, 28, 24, 14, 11, 26, 30, 15, 42, 17, 37, 20, 49, 21, 39, 0, 49, 1, 35, 44};
    int i,j;


    for(i=0;i<5;i++){//Quando os dois indices forem iguais teremos a diagonal
        for(j=0;j<5;j++){
            printf ("%3d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("DIAGONAL PRINCIPAL: ");//PRINTANDO DIAGONAL PRINCIPAL DA MATRIZ
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                printf("%d ",matriz[i][j]);
            }
        }
    }

}
