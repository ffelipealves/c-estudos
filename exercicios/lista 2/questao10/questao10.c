#include<stdio.h>

/*
9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).

a < b + c
b < a + c
c < a + b


*/



int main(){

    float ladoa,ladob,ladoc;

    printf("Digite tres lados para um triangulo\n");
    scanf("%f%f%f",&ladoa,&ladob,&ladoc);

    if(ladoa < (ladob + ladoc) || ladob < (ladoa + ladoc) || ladoc < (ladoa + ladob)){
        if(ladoa==ladob && ladob==ladoc){
            printf("\nTriangulo Equilatero\n");
        }else if(ladoa!=ladob && ladob!=ladoc && ladoc!=ladob && ladoa!=ladoc){
            printf("\nTriangulo Escaleno");
        }else{
            printf("\nTriangulo isosceles");
        }

    }else{
        printf("\nEsse triangulo nao existe\n");
    }

}
