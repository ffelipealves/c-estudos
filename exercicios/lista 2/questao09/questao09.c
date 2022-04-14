#include<stdio.h>

/*
9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).

*/



int main(){

    float n1,n2,n3;
    int opcao;

    printf("Digite as 3 notas: ");
    scanf("%f%f%f",&n1,&n2,&n3);

    printf("\nDigite 1 - para média aritmetica\nDigite 2 - para media ponderada (pesos: 3,3,4)\n");
    scanf("%d",&opcao);

    switch(opcao){

    case 1:
        printf("Media = %f",(n1+n2+n3)/3);
        break;

    case 2:
        printf("Media = %f",(n1*3+n2*3+n3*4)/11);
        break;
    default:
        printf("Opcao invalida");


    }


}
