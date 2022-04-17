#include<stdio.h>


/*
22) Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3
centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico.
*/

int main(){

    float alturaChico=1.5, alturaZe=1.1;
    int contadorAnos=0;

    while(alturaChico>alturaZe){//enquanto a altura de chico for maior vamos somando as alturas e contabilizando os anos
        alturaChico=alturaChico+0.2;
        alturaZe=alturaZe+0.3;
        contadorAnos++;
    }
    printf("Levara %d anos para Ze ser maior que Chico",contadorAnos);//Dizemos o anos que levaram pro while parar


}
