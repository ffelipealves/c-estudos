#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
12) Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.
*/

int main(){
    //UMA MANEIRA MELHOR

    int tam=14;
    int linha,coluna,matriz[tam][tam];

    srand(time(NULL));

    //PREENCHENDO MATRIZ
    for(linha=0;linha<tam;linha++){
        for(coluna=0;coluna<tam;coluna++){
            matriz[linha][coluna]=rand() % 100;
        }
    }

    //PRINTANDO MATRIZ
    for(linha=0;linha<tam;linha++){
        for(coluna=0;coluna<tam;coluna++){
            printf("%3d ",matriz[linha][coluna]);
        }
        printf("\n");
    }

    //DIAGONAL PRINCIPAL(maneira mais simples)
    printf("\nDiagonal Secundaria: ");
    for(linha=0;linha<tam;linha++){
        printf("%d ",matriz[linha][linha]);
    }

    //DIAGONAL SECUNDARIA
    printf("\nDiagonal Secundaria: ");

    for(linha=0;linha<tam;linha++){
        printf("%d ",matriz[linha][tam-1-linha]);
    }



}

/*
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
    */
