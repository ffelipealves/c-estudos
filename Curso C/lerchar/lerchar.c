#include<stdio.h>

int main(){

    char a,b,c,d;

    printf("digite dois caracteres: ");
    scanf("%c %c",&a,&b);
    // erro buffer: temos q dar um espaço entre %c %c
    // pois quando digitamos e pressionamos enter
    // o compilador entende uma quebra de linha: %c\n%c

    printf("Primeira Letra: %c\nSegunda Letra: %c\n", a,b);

    printf("digite mais dois caracteres: ");
    scanf(" %c %c",&c,&d);
    printf("Terceira Letra: %c\nQuarta Letra: %c\n", c,d);

}
