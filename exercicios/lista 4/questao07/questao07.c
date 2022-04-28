#include<stdio.h>


/*
7) Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e
após a ordenação.
*/


int main()
{
    int vetorDesordem[100]={6, 10, 95, 37, 62, 84, 71, 73, 34, 61, 98, 51, 57, 82, 64, 55, 41, 62, 73, 80, 60, 18, 33, 2, 49, 34, 59, 10, 98, 15, 81, 43, 58, 5, 21, 61, 20, 37, 5, 37, 97, 33, 71, 39, 99, 71, 29, 58, 76, 58, 10, 13, 97, 36, 42, 77, 12, 54, 4, 75, 62, 7, 16, 88, 79, 41, 1, 81, 37, 33, 0, 48, 89, 44, 24, 0, 36, 39, 50, 69, 51, 44, 61, 29, 7, 82, 34, 45, 1, 53, 22, 98, 24, 43, 52, 4, 13, 18, 65, 79},i,aux[100],maior,j,posicao;

    //PRINTANDO VETOR DESESORDEM
    printf("VETOR SEM ORDEM: ");
    for(i=0;i<100;i++){
        printf("%d ",vetorDesordem[i]);
    }


    for(i=0;i<100;i++){
        aux[i]=vetorDesordem[i];//ARMAZENA O VETORDESORDEM NO VETOR AUX
    }

    for(i=0;i<100;i++){
        maior=0;
        for(j=0;j<100;j++){
            if(aux[j]>maior){//VAI PEGAR O MAIOR VALOR DO VETORDESORDEM
                posicao=j;
                maior=aux[j];
            }
        }
        aux[posicao]=0; //VAI ZERAR A POSICAO DO MAIOR VALOR EM AUX
        vetorDesordem[99-i]=maior;// VAI ARMAZENAR O MAIOR VALOR DE AUX NA ULTIMA POSICAO DE VETOR DESORDEM - i
    }

    //PRINTANDO VETOR EM ORDEM
    printf("\n\n\n\nORDENADO: ");
    for(i=0;i<100;i++){
        printf("%d ",vetorDesordem[i]);
    }
    printf("\n\n");
}
