#include<stdio.h>
#include<stdlib.h>


//estrutura de dados homogenea
//matriz eh um conjunto de elemesntos do mesmo tipo
//essa sendo bidimensional, para acessar um elemento
//precisamos de dois indices sendo o local do elemento
//a intersecao desses indices


int main(){

    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    //como sera preenchido ?
    /*      c0  c1 c2
    linha0  1   2   3
    linha1  4   5   6
    linha2  7   8   9
    */

    int mat2[][3] = {1,2,3,4,5,6,7};//sera criado 3 linhas
    int mat3[3][3] = {0};//sera preenchida com 0

    float mat4[4][5];
    char mat5[3][4] = {'a','b','c','d','e','f','g','h','i','j','k','l'};

    //como imprimir o conteudo de uma matriz ?

    int i , j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",mat1[i][j]);//fazemos 00,01,02
        }                            //        10,11,12
        printf("\n");                //        20,21,22
    }

    //iremos inserir valores na matriz
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor de [%d][%d]",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }

    //somando duas matrizes e armazenando numa terceira
    int matrizA[3][3] = {1,8,7,4,5,2,1,9,0};
    int matrizB[3][3] = {9,8,7,6,10,4,3,2,1};
    int matrizSoma[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matrizSoma[i][j]=matrizA[i][j]*matrizB[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",matrizSoma[i][j]);
        }
        printf("\n");
    }
    //preenchendo matriz randomicamente
    //matrizSoma[i][j] = rand();
}
