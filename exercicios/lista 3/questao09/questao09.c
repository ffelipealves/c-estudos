#include<stdio.h>
#include<stdlib.h>

/*
9) Faça um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.
*/

int main(){

    int A=0,n,contador;//inicializamos 3 variaveis A = soma de 1 ate n, n= Limite da Soma, Contador

    do{
        printf("Digite um valor para n: ");
        scanf("%d",&n);//pegamos n do usuario
    }while(n<1);


    for(contador=1;contador<=n;contador++){//utilizamos o contador para contar de 1 ate n;
        A=A+contador;//atribuimos a soma de 1 ate n em A
    }
    printf("A soma de 1 ate %d eh = %d",n,A);//printamos A





}
