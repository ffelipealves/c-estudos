#include<stdio.h>

int main (){

    unsigned int x=2147483647; // ao usarmos o unsined o falamos para o computador
    int y=2147483647;// que usaremos apenas a parte positiva da variavel
                    // temos entao o dobro do limite


    printf("estouro de memoria %d\n\n",++y);//aqui temos um estouro de memoria

    printf("aqui tiramos a parte negativa %u\n",++x); //aqui isso nao ocorre pois tiramos a parte negativa
                    // e consguimos um limite maior de armazenamento para representar um int

    //podemos misturar o short com o unsined tbm

    unsigned short int z= 55000;//assim podemos representar o maximo de numeros
                                // inteiros positivos com apenas 2 bytes da memoria
    printf("\ntemos a juncao de tirar o sinal e usar um int de 2 bytes %hu\n",z);
}
