#include<stdio.h>

/*
10) Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar
em uma matriz C. Imprima as três matrizes
*/

int main(){

    int matrizA[3][3]={15, 17, 5, 15, 50, 20, 31, 20, 9, 39, 22, 20, 7, 27, 1};
    int matrizB[3][3]={29, 9, 19, 47, 35, 18, 47, 23, 30, 4, 4, 40, 35, 2, 15};
    int matrizC[3][3]={0},i,j;//VETOR USADO PARA RESULTADO DA SOMA

    printf("Matriz A: \n");//PRINTANDO MATRIZ A
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d ",matrizA[i][j]);
        }
        printf("\n");
    }
    printf("Matriz B: \n");//PRINTANDO MATRIZ B
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d ",matrizB[i][j]);
        }
        printf("\n");
    }

    //SOMANDO AS MATRIZES E ARMAZENANDO EM MATRIZC
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matrizC[i][j]=matrizA[i][j]+matrizB[i][j];
        }
    }

    printf("\nRESULTADO DA SOMA DE A E B: \n");//PRINTANDO MATRIZ C
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d ",matrizC[i][j]);
        }
        printf("\n");
    }

}
