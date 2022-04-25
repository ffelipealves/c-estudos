#include<stdio.h>

/*
5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro …). Desconsidere empates.
*/

int main()
{

    float tempMeses[12]= {0},maiorTemp=0,menorTemp=99999;
    int i,maiorTempMes,menorTempMes;

    for(i=0; i<12; i++)
    {
        printf("Digite a temperatura media do mes %d: ",i);
        scanf("%f",&tempMeses[i]);
    }
    for(i=0; i<12; i++)             //percorre o vetor armazenando o menor e maior temperatura
    {
        if(tempMeses[i]>maiorTemp)
        {
            maiorTemp=tempMeses[i];
            maiorTempMes=i;
        }
        if(tempMeses[i]<menorTemp)
        {
            menorTemp=tempMeses[i];
            menorTempMes=i;
        }
    }
    printf("\nMaior temp mes: ");
    switch(maiorTempMes)            //switch case da maior temperatura
    {
    case 0:
        printf("Janeiro");
        break;
    case 1:
        printf("Fevereiro");
        break;
    case 2:
        printf("Marco");
        break;
    case 3:
        printf("Abril");
        break;
    case 4:
        printf("Maio");
        break;
    case 5:
        printf("Junho");
        break;
    case 6:
        printf("Julho");
        break;
    case 7:
        printf("Agosto");
        break;
    case 8:
        printf("Setembro");
        break;
    case 9:
        printf("Outubro");
        break;
    case 10:
        printf("Novembro");
        break;
    case 11:
        printf("Dezembro");
        break;

    }
    printf("\nMenor temp mes: ");
    switch(menorTempMes)            //switch case da menor temperatura
    {
    case 0:
        printf("Janeiro");
        break;
    case 1:
        printf("Fevereiro");
        break;
    case 2:
        printf("Marco");
        break;
    case 3:
        printf("Abril");
        break;
    case 4:
        printf("Maio");
        break;
    case 5:
        printf("Junho");
        break;
    case 6:
        printf("Julho");
        break;
    case 7:
        printf("Agosto");
        break;
    case 8:
        printf("Setembro");
        break;
    case 9:
        printf("Outubro");
        break;
    case 10:
        printf("Novembro");
        break;
    case 11:
        printf("Dezembro");
        break;

    }






}
