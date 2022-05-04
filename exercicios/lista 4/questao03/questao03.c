#include<stdio.h>
#include<stdlib.h>

/*
3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1º elemento com o último, o 2ª com o penúltimo, ... até o 10ª com o 11º. Imprima o vetor N
modificado.
*/


int main(){

    int vetorN[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int vetorAux[20],i,aux;


    printf("\nVetor N: ");
    for(i=0;i<20;i++){
        printf("%d ",vetorN[i]);
    }
    //MANEIRA MELHOR
    for(i=0;i<10;i++){
        aux=vetorN[i];
        vetorN[i]=vetorN[19-i];
        vetorN[19-i]=aux;
    }

    /*for(i=0;i<10;i++){
        vetorAux[i]=vetorN[19-i];  //pegamos o ultima valor de N e armazenamos no primeiro de Aux
        vetorAux[19-i]=vetorN[i];   //e pegamos o primeiro de N e colocamos em aux, depois, atribuimos
        vetorN[i]=vetorAux[i];      //o primeiro de aux ao primeiro de N e o ultimo de aux ao ultimo de N
        vetorN[19-i]=vetorAux[19-i];
    }*/

    printf("\nVetor N alterado:");
    for(i=0;i<20;i++){
        printf("%d ",vetorN[i]);
    }

}

