#include<stdio.h>


/*
5) O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC= m/h²). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
com a tabela abaixo:

                                IMC Interpretação
                        Menor que 18,5 Abaixo do peso
                        Entre 18,5 e menor que 25 Peso normal
                        Entre 25 e menor que 30 Sobrepeso
                        Entre 30 e menor que 35 Obesidade grau 1
                        Entre 35 e menor que 40 Obesidade grau 2
                        Maior ou igual a 40 Obesidade grau
*/



int main(){

    float altura,peso,imc;

    printf("\n\t____DESCUBRA SEU IMC____\nDigite sua altura e peso: ");
    scanf("%f%f",&altura,&peso); //pede ao usuario seu peso e altura

    imc=peso/(altura*altura);//atribui ao imc a formula de calculo

    if(imc<18.5){   //testa todas interpretaçoes do imc conforme a tabela
        printf("IMC: %f -> Abaixo do peso",imc);
    }else if(imc>=18.5 && imc<25.0){
        printf("IMC: %f -> Peso normal",imc);
    }else if(imc>=25.0 && imc<30){
        printf("IMC: %f -> Sobrepeso",imc);
    }else if(imc>=30 && imc<35){
        printf("IMC: %f -> Obesidade grau 1",imc);
    }else if(imc>=35 && imc<40){
        printf("IMC: %f -> Obesidade grau 2",imc);
    }else{
        printf("IMC: %f -> Obesidade grau 3",imc);
    }

}
