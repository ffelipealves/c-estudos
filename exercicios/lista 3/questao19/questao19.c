#include<stdio.h>


/*
19) Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de
pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo
será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
Exemplo de entrada:
2 2
3 -2
-8 -1
-7 1
0 2
Exemplo de saída:
primeiro
quarto
terceiro
segundo

*/


int main(){

 int x,y,stop;

 while(stop==0){

    printf("Digite um valor para X e um para Y: ");
    scanf("%d%d",&x,&y);

    if(x==0 || y==0){
        stop++;//variavel de parada do while
    }
    //fazemos o teste para cada quadrante do plano cartesiano
    if(x>0 && y>0){
    printf("Primeiro\n");
    }else if(x<0 && y>0){
    printf("Segundo\n");
    }else if(x<0 && y<0){
    printf("Terceiro\n");
    }else if(x>0 && y<0){
    printf("Quarto\n");
    }
 }



}
