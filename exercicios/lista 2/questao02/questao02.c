#include<stdio.h>


/*
2) Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos.
*/

int main(){

    //Simplesmente fazemos o pedido do numero 5 vezes e a cada vez pedimos
    // usamos o if para verificar se ele eh positivo ou nao e incrementamos
    // o contador correpondente

    int contador_positivo=0,numero,contador_negativo=0;

    printf("\nDigite um numero: ");
    scanf("%d",&numero);
    if(numero>0){
        contador_positivo++;
    }else if(numero<0){
        contador_negativo++;
    }else{
        printf("\n0 eh um elemento neutro\n");
    }

    printf("\nDigite um numero: ");
    scanf("%d",&numero);
    if(numero>0){
        contador_positivo++;
    }else if(numero<0){
        contador_negativo++;
    }else{
        printf("\n0 eh um elemento neutro\n");
    }

    printf("\nDigite um numero: ");
    scanf("%d",&numero);
    if(numero>0){
        contador_positivo++;
    }else if(numero<0){
        contador_negativo++;
    }else{
        printf("\n0 eh um elemento neutro\n");
    }

    printf("\nDigite um numero: ");
    scanf("%d",&numero);
    if(numero>0){
        contador_positivo++;
    }else if(numero<0){
        contador_negativo++;
    }else{
        printf("\n0 eh um elemento neutro\n");
    }

    printf("\nDigite um numero: ");
    scanf("%d",&numero);
    if(numero>0){
        contador_positivo++;
    }else if(numero<0){
        contador_negativo++;
    }else{
        printf("\n0 eh um elemento neutro\n");
    }

    printf("\nHouveram %d numeros positivos e %d numeros negativos\n",contador_positivo,contador_negativo);

}
