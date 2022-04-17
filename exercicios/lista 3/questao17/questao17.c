#include<stdio.h>
#include<stdlib.h>

/*
Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o
programa deve imprimir na tela quantos números positivos e negativos foram digitados.
*/

int main(){

    int numero=1,contadorPositivo=0,contadorNegativo=0;

    while(numero!=0){//iremos pedir valore para o usuario ate ele digitar 0
        printf("Digite um valor: ");
        scanf("%d",&numero);
        //se o numero for <0 sera incrementado 1 nos negativos
        //e se for >0 sera incrementado nos positovos
        if(numero>0){
            contadorPositivo++;
        }else if(numero<0){
            contadorNegativo++;
        }
    }
    printf("Positovos: %d\nNegativos: %d",contadorPositivo,contadorNegativo);

    return 0;

}


