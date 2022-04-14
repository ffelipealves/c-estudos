#include<stdio.h>
#include<stdlib.h>


/*
3) Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
*/

int main(){

   #include <locale.h>


    setlocale(LC_ALL,"");
    int n;
    printf("Digite o número para que se diga se é divisível por 2, 3 ou 5: ");
    scanf("%d", &n);
    if(n%2){
        printf("2 não divide %d \n", n);
    }else{
        printf("2 divide %d \n", n);
    }
    if(n%3){
        printf("3 não divide %d \n", n);
    }else{
        printf("3 divide %d \n", n);
    }
    if(n%5){
        printf("5 não divide %d", n);
    }else{
        printf("5 divide %d", n);
    }

    return 0;
}
