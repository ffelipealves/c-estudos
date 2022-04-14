#include<stdio.h>


/*2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.*/

int main(){

    int a,b,aux;

    printf("Digite um valor inteiro para a variavel a: ");
    scanf("%d",&a);
    printf("Digite um valor inteiro para a variavel b: ");
    scanf("%d",&b);
    printf("\nValor digitado para a: %d\nValor digitado para b: %d\n",a,b);

    aux=a; // usamos a variavel para armazenar o valor de a
    a=b;    //depois fazer a receber o valor de b
    b=aux;  //e depois fazer b receber o valor de a que estava armazenado em aux

    printf("\nTrocamos os valores\nAgora variavel a vale: %d\nE a variavel b vale:%d\n",a,b);
}
