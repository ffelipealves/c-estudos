#include<stdio.h>


/*1. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3.Pi.R3).*/

float calculaVolume(float raio){

    float volume=0;

    return volume=(4*3.14*(raio*raio*raio))/3;

}


int main(){

    float raioEsfera=0;

    printf("Digite um raio para a esfera: ");
    scanf("%f",&raioEsfera);

    printf("O volume da esfera eh %f",calculaVolume(raioEsfera));


    return 0;
}
