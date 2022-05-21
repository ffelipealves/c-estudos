#include<stdio.h>
#include<stdlib.h>

int tam=5;

void imprimirMatriz(int array[][5]){
    int i,j;

    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("%2d ",array[i][j]);
        }
        printf("\n");
    }


}

int somaLinha(int array[][5], int linha){
    int soma=0,c=0;
    for(c=0;c<tam;c++){
        soma=soma+array[linha][c];
    }
    return soma;
}
int somaColuna(int array[5][5], int coluna){
    int soma=0,l=0;
    for(l=0;l<tam;l++){
        soma=soma+array[l][coluna];
    }
    return soma;
}

int main(){

    int i,matriz[5][5]={29, 36, 94, 87, 43, 12, 45, 42, 80, 10, 0, 80, 94, 57, 33, 73, 42, 96, 98, 99, 32, 50, 99, 51, 98};

    imprimirMatriz(matriz);

    for(i=0;i<tam;i++){
        printf("Soma da linha %d: %d\n",i,somaLinha(matriz,i));
    }
    for(i=0;i<tam;i++){
        printf("Soma da Coluna %d: %d\n",i,somaColuna(matriz,i));
    }


    return 0;
}
