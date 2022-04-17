#include<stdio.h>
#include<stdlib.h>

/*
11) Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
se torne menor que 0,05 gramas.
*/

int main(){

    float massa;//massa com input do usuario
    int contador=0;//contador para multiplicar pelos segundos

    printf("Digite a massa do material radioativo: ");
    scanf("%f",&massa);

    while(massa>=0.05){//enquanto a massa for maior de 0.05 iremos
        massa=massa/2; //dividir a massa pela metade
        contador++;//somaremos mais um no contador como se tivessem passado 50 segundos
    }
    printf("Seu material demorou %d segundos para ficar com menos que 0.05 gramas",contador*50);


}
