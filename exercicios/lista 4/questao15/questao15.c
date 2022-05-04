#include<stdio.h>

/*
12) Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.
*/

int main(){

    int matrizMagica[4][4]={4,14,15,1,9,7,6,12,5,11,10,8,16,2,3,13};
    int i,j,soma[10]={0};

    //PRINTANDO A LISTA
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%3d ", matrizMagica[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");


    //PERCORRENDO A MATRIZ
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            soma[i]=soma[i]+matrizMagica[i][j];//SOMANDO AS LINHAS
            soma[i+4]=soma[i+4]+matrizMagica[j][i];//SOMANDO AS COLUNAS
            soma[8]=soma[8]+matrizMagica[i][i];//SOMA A DIAGONAL PRINCIPAL
            soma[9]=soma[9]+matrizMagica[i][4-1-i];//SOMA A DIAGONAL SECUNDARIA
        }
    }

    if(soma[0] == soma[1]&&soma[1] == soma[2]&&soma[2] == soma[3]&&soma[3] == soma[4]&&soma[4] == soma[5]&&soma[5] == soma[6]&&soma[6] == soma[7]){
        printf("\n\nEH UM QUADRADO MAGICO\n\n");
    }else{
        printf("\n\nNAO EH QUADRADO MAGICO\n\n");
    }





}
