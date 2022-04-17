#include<stdio.h>
#include<stdlib.h>

/*
5) Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/

int main(){

    float nota1,nota2,mediaSemestre;

    do{//fazemos o primeiro chamado de input independente
        printf("\nDigite valor de n1: ");
        scanf("%f",&nota1);
        if(nota1<0 || nota1>10){
            printf("\nNota invalida!\n");
        }
    }while(nota1<0 || nota1>10);//verificamos a validade do input
                                //e repetimos o codigo caso nao cumpra
                                //nossos requisitos

    do{//fazemos o mesmo a nota2
        printf("\nDigite valor de n2: ");
        scanf("%f",&nota2);
        if(nota2<0 || nota2>10){
            printf("\nNota invalida!\n");//perceba que printamos nota invalida
                                         //caso a nota nao atenda nosso requisito
        }
    }while(nota2<0 || nota2>10);

    printf("\nSua nota semestral eh %.2f",(nota1+nota2)/2);





}
