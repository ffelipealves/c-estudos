#include<stdio.h>


/*
21) Escreva um programa que gere a saída abaixo (10 linhas, 20 * por linha).
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 1 vez.
********************
********************
********************
********************
********************
********************
********************
********************
********************
********************

*/

int main(){

    int i,j;

    for(i=0;i<10;i++){//usado para pular linha
        for(j=0;j<20;j++){//ira printar * 20 vezes
            printf("*");
        }
        printf("\n");//ira pular a linha para printar mais 20 *
    }



}
