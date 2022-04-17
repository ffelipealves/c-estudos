#include<stdio.h>
#include<stdlib.h>

/*
3) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
4) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes.
*/

int main(){

    int impar,soma=0;

    for(impar=1;impar<1000;impar=impar+2){
        soma=soma+impar;
    }
    printf("soma de todos impares de 1 a 999 = %d\n",soma);

}
