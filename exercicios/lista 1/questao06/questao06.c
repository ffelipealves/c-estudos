#include<stdio.h>

/*
6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.

*/


int main(){

    float real,dolar;

    printf("\nDigite um valor em real: ");
    scanf("%f",&real);
    dolar=real/5.3; // simplesmente fazemos a conversao dividindo o real por 5,30

    printf("\nR$ %.2f reais equivale a US$ %.2f dolares",real,dolar);


}
