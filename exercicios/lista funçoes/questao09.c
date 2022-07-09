#include<stdio.h>
#include<stdbool.h>

/*
9. Faça uma função que recebe um valor inteiro e
verifica se o valor é positivo ou negativo.
A função deve retornar um valor booleano.
*/


bool positivoOuNegativo(int num){

    if(num<0){
        return false;
    }else{
        return true;
    }


}

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);
    printf("\n0-Seu valor eh negativo\n1-Seu valor eh positivo\n");
    printf("Resposta: %d",positivoOuNegativo(numero));



    return 0;
}
