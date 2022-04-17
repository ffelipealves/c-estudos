#include<stdio.h>


/*
26) Escreva um programa para ler as notas da primeira e da segunda avaliação de um aluno. Calcule
e imprima a média semestral. O programa deverá aceitar apenas notas válidas no intervalo [0,10].
Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem “novo
calculo? (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2), indicando se ele
deseja ou não executar o programa novamente. Se for informado o código 1, deve ser repetida a
execução de todo o programa para permitir um novo cálculo, se for informado o código 2 o
programa deve ser encerrado.
*/

int main(){

    float n1,n2,mediaSemestre;
    int opcao;

    do{
        do{
            printf("Digite o valor de n1: ");
            scanf("%f",&n1);
        }while(n1<0 || n1>10);

        do{
            printf("Digite o valor de n2: ");
            scanf("%f",&n2);
        }while(n2<0 || n2>10);

        mediaSemestre=(n1+n2)/2;

        printf("\nMedia = %f\n",mediaSemestre);

        do{
            printf("\nNovo Calculo ?(1-sim 2-nao) ");
            scanf("%d",&opcao);
            if(opcao!=1 && opcao!=2){
                printf("\nOPCAO INVALIDA\n");
            }
        }while(opcao!=1 && opcao!=2);
    }while(opcao==1);








}
