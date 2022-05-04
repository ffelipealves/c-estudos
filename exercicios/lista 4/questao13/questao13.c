#include<stdio.h>

/*
13) Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na
tela
*/

int main(){

    int matriz[5][4]={32, 39, 50, 5, 22, 14, 29, 24, 5, 8, 27, 27, 16, 48, 16, 22, 28, 16, 6, 37};
    int matrizTransposta[4][5]={0},i,j;

    //INVERTEMOS OS INDICES DA MATRIZ TRANSPOSTA PARA PREENCHELA
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            matrizTransposta[j][i]=matriz[i][j];

        }
    }
    //PRINTANDO MATRIZ ORIGIGNAL
    printf("MATRIZ ORIGINAL: \n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }

    //PRINTANDO MATRIZ TRANSPOSTA
    printf("MATRIZ TRANSPOSTA: \n");
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%3d ",matrizTransposta[i][j]);
        }
        printf("\n");
    }
}
