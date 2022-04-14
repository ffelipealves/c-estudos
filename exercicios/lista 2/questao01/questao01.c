#include<stdio.h>


/*
1) Escreva um programa em C que leia três valores
    e apresente qual é o maior e qual é o menor.
*/

int main(){

    double a,b,c,menor,maior;

    printf("Digite tres valores: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    //usaremos o if aninhado para atribuir as variaveis
    //maior e menor os maiores e menores valores digitados

    if(a>b && a>c){
        maior=a;
    }else if(b>c && b>a){
        maior=b;
    }else{
        maior=c;
    }

    if(a<b && a<c){
        menor=a;
    }else if(b<c && b<a){
        menor=b;
    }else{
        menor=c;
    }

    printf("\nO maior valor eh %lf\nO menor valor eh %lf",maior,menor);


}
