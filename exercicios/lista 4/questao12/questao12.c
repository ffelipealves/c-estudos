#include<stdio.h>

/*
12) Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.
*/

int main(){

    int matriz[7][7]={29, 4, 14, 43, 5, 32, 28, 2, 35, 4, 39, 26, 4, 22, 21, 46, 40, 21, 48, 10, 14, 7, 9, 5, 2, 38, 19, 3, 42, 29, 13, 18, 8, 8, 32, 49, 47, 23, 21, 22, 30, 16, 30, 35, 38, 25, 12, 8, 28};
    int i,j;


    for(i=0;i<7;i++){//PRINTANDO A MATRIZ
        for(j=0;j<7;j++){
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("DIAGONAL SECUNDARIA: ");
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if(i+j==6){
                printf("%d ",matriz[i][j]);
            }
        }

    }
}
