#include<stdio.h>


/*
24) Você deve fazer um programa que apresente a sequência conforme o exemplo abaixo.
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
I=5 J=11
I=5 J=10
I=5 J=9
...
I=9 J=15
I=9 J=14
I=9 J=13


*/

int main(){

    int i,I=1,J=7;

    for(i=0;i<15;i++){//iremos copiar a saida exemplo
        printf("I=%d J=%d\n",I,J);
        J--;

        if(i==2 || i==5 || i==8 || i==11 || i==14){//usado para alterar nossa variavel
            I+=2;
            J+=5;
        }

    }



}
