#include<stdio.h>

/*
10 - Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.
*/

float pesoIdeal(float alt, char sex){
    float pesoideal=0;
    if(sex=='m' || sex=='M'){
        pesoideal=72.7*alt-58;
    }else{
        pesoideal=62.1*alt-44.7;
    }
    return pesoideal;
}

int main(){

    float altura;
    char genero;

    printf("Digite sua altura ");
    scanf("%f",&altura);
    while (genero!='f' && genero!='F' && genero!='m' && genero!='M' )
    {
        printf("Digite seu sexo (m ou f): ");
        scanf(" %c",&genero);
    }

    printf("Seu peso ideal eh %2.f kg",pesoIdeal(altura,genero));

}