#include<stdio.h>


/*
4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/



int main(){

    int opcao;
    float real, dolar;

    printf("\nDigite 1 para Conversao Real->Dolar\nDigite 2 para Conversao Dolar->Real\n");
    scanf("%d",&opcao);

    switch(opcao){

        case 1:
            printf("Digite o valor em real: ");
            scanf("%f",&real);
            dolar=real/5.3;
            printf("R$ %.2f -> U$ %.2f\n",real,dolar);
            break;
        case 2:
            printf("Digite o valor em dolar: ");
            scanf("%f",&dolar);
            real=dolar*5.3;
            printf("U$ %.2f -> R$ %.2f\n",dolar,real);
            break;
        default:
            printf("Opcao Invalida");


    }

}
