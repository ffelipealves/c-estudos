#include<stdio.h>
#include<stdlib.h>

/*
16) Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
números inteiros entre 1 e 10.
*/

int main(){
    int x=0,variavelDeParada=0;

    //iremos roda um while incrementando 1 em x
   while(variavelDeParada==0){
    x++; // quando o numero(x) incrementado atender a exigencias de ser divisivel por 1 a 10
         //incrementamos 1 na nossa variavel de parada
    if((x%2)==0 && (x%3)==0 && (x%4)==0 && (x%5)==0 && (x%6)==0 && (x%7)==0 && (x%8)==0 && (x%9)==0 && (x%10)==0){
        variavelDeParada++;
    }
   }
    printf("%d",x);


    return 0;

}


