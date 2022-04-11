#include<stdio.h>

int main (){

    //operadores//

    printf("\nSoma: %d\n", 745+123);
    printf("\nSubtracao: %d\n",745-123);
    printf("\nMultiplicacao: %d\n", 75*12);
    printf("\nDivisao %d\n", 75/12); // so da o numero inteiro pois dois operando
                                    // sao inteiro
    printf("\nDivisao exata: %f\n\n", 75.0/12);


    //////operadores com variaveis//////

    int a=75,b=12;

    printf("\nSoma: %d\n", a+b);
    printf("\nSubtracao: %d\n",a-b);
    printf("\nMultiplicacao: %d\n", a*b);
    printf("\nDivisao %d\n", a/b);
    printf("\nDivisao exata: %f\n\n", (float)a/b);// aqui convertemos o a em float
                                                // para conseguirmos dividir exatamente

    //cuidado se convertermos float para int perdemos a parte decimal
    // RESTO DA DIVISAO
    printf("O resto da divisao inteira de %d por %d eh %d",a,b,a%b);
    // para conseguirmos o resto precisamos dividir numeros inteiros
}
