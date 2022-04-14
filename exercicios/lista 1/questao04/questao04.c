#include<stdio.h>


/*4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente..*/

int main(){

    float despesa,gorjeta,conta; // aqui temos as variaveis q usaremos para
    int npessoas;               // armazenar os valores dados pelo usuario

    printf("Digite o valor da despesa: ")/
    scanf("%f",&despesa);
    printf("\nDigite o valor da gorjeta(em porcentagem): ");
    scanf("%f",&gorjeta);
    printf("\nDigite o n de pessoas que irao dividir a conta: ");
    scanf("%d",&npessoas);

    conta=0;                                // fazemos despesa*gorjeta%, assim temos o valor q sera dado
    conta=despesa+(despesa*(gorjeta/100));  // para gorjeta e somamos a despesa total na conta

    printf("\nO valor que cada um devera pagar sera %.2f",conta/npessoas); //dividimos o valor da conta pelo numero de pessoas


}
