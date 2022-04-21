#include<stdio.h>

/*
6) Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um
código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.
*/

int main()
{

    float numeros[10];
    int i,opcao;

    for(i=0;i<10;i++){
        printf("Digite o valor para o vetor posicao %d: ",i);
        scanf("%f",&numeros[i]);
    }

    do{
        printf("\n\n0-Sair do programa\n1-Imprima o vetor\n2-Imprima o vetor invertido\n\n");
        scanf("%d",&opcao);

        switch(opcao){

        case 1:
            for(i=0;i<10;i++){
                printf("%.2f ",numeros[i]);
            }
            break;
        case 2:
            for(i=9;i>=0;i--){
                printf("%.2f ",numeros[i]);
            }
            break;
        case 0:
            printf("\nSaindo....\n");
            break;
        default:
            printf("\nOPCAO INVALIDA\n");
            break;
        }


    }while(opcao!=0);




}
