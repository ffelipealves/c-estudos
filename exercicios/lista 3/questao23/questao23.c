#include<stdio.h>


/*
23) Escreva um programa que gere a saída abaixo.
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 2 vezes.
*
**
***
****
*****
******
*******
********

*/

int main(){

    int i,j,x=1;

    for(i=1;i<=82;i++){//usado para pular linha
        for(j=0;j<i;j++){//ira printar '*' X vezes
            printf("*");
        }
        printf("\n");//ira pular a linha para printar mais x '*'
        //x++;//aumentara a quantidade de prints de '*'
    }



}
