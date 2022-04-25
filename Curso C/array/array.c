#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

    //estrutura de dados homogenea
    //vetores eh uma variavel que armazena um conjunto de elementos

    int num1[10]; //criamos um vetor com 10 posicoes
    int num2[] = {1,5,9,15,43};//criamos um vetor com os elementos e por consequencia 5 posicoes
    int num3[5] = {4,7,5};// = {4,7,5,0,0} preenche os faltantes com 0
    int num4[5] = {1,2,3,4,5,6};//o 6 sera perdido
    int num5[5] ={0};//nosso vetor sera preenchido com zero

    char letra[100];
    char vogais[5] = {'a','e','i','o','u'};

    float notas[3] = {7.6,8.5,9.8};

    //os indices (onde estao armazenados nossos valores) do vetor vai de 0 ate o tamanho do vetor -1

    //printando vetores
    printf("%f ",notas[0]);
    printf("%f \n\n",notas[1]);

    //podemos melhorar isso usando for
    int i;//usamo o contador i para percorrer os indices do vetor com o for
    for(i=0;i<5;i++){
        printf("%d ",num4[i]);
    }

    printf("\n\n");

    for(i=0;i<5;i++){
        printf("%c ",vogais[i]);
    }
    printf("\n\n");

    //como preenchemos o vetor com o input do usuario ?
    int numeros[10];

    for(i=0;i<10;i++){//tambem usaresmo o for percorrendo o vetor e o preenchendo
        printf("Digite o elemento da posicao %d: ",i);
        scanf("%d",&numeros[i]);
    }
    printf("\n\n");

    for(i=0;i<10;i++){
        printf("%d ",numeros[i]);
    }
    //mudando os elementos do vetor
    // vamos multiplicar cada elemento do vetor numeros e multiplicar por 5

    for(i=0;i<10;i++){
        numeros[i]=numeros[i]*5;
    }
    printf("\n\n");

    for(i=0;i<10;i++){
        printf("%d ",numeros[i]);
    }

    // como preencher um vetor automaticamente
    // usaremos a funcao rand para gerar numeros aleatorios

    srand(time(NULL));//seed para funcao rand e a funcao time para gerar um seed aleatoria

    for(i=0;i<10;i++){
        numeros[i]=rand();
    }
    printf("\n\n");

    for(i=0;i<10;i++){
        printf("%d ",numeros[i]);
    }

    //gerando aleatorio dentro de um intervalo
    //rand() % 100
}
