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
        printf("Essa letra eh vogal");
        break;
    case 'E':
        printf("Essa letra eh vogal");
        break;
    case 'O':
        printf("Essa letra eh vogal");
        break;
    case 'a':
        printf("Essa letra eh vogal");
        break;
    case 'e':
        printf("Essa letra eh vogal");
        break;
    case 'o':
        printf("Essa letra eh vogal");
        break;
    default:
        printf("Essa letra nao eh vogal");


    }

}
