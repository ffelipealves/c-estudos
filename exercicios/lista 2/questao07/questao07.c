#include<stdio.h>


/*
7) Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/



int main(){

    char letra;

    printf("Digite uma letra para descobrir se ela eh vogal: ");
    scanf("%c",&letra);

    switch(letra){

    case 'A':
    case 'E':
    case 'O':
    case 'a':
    case 'e':
    case 'o':
        printf("Essa letra eh vogal");
        break;
    default:
        printf("Essa letra nao eh vogal");


    }

}
