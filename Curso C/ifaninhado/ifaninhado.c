#include<stdio.h>




int main(){

    int a;

    printf("\ndigite um valor inteiro: ");
    scanf("%d",&a);
    //estrutura de decisao SE(IF) aninhada//
    //basicamente podemos usar a estrutura se dentro de outra
    //possibilitando mais opçoes de decisão
    if(a>=10){
        printf("Valor maior ou igual a 10\n");
    }else{
        if(a<0){
            printf("Numero Negativo\n");
        }
        printf("Numero Menor que 10\n");
    }



}

