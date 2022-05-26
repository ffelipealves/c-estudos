#include<stdio.h>
#include<stdlib.h>


void print_ppt(int opcao)
{

    switch(opcao)
    {
    case 0:
        printf("Pedra\n");
        break;
    case 1:
        printf("Papel\n");
        break;
    case 2:
        printf("Tesoura\n");
        break;
    }


}

void vencedor(int jogada,int jogada2){



}


int main()
{
    //Gera numero aleatorio
    time_t t;
    srand((unsigned) time(&t));

    int jogadaPlayer,jogadaComputador;

    printf("\n\tVamos jogar pedra papel e tesoura!!\n\nRegras:\tPedra vence Tesoura\n\tTesoura vence Papel\n\tPapel vence Pedra\n\n");
    printf("\tEscolha [0]-Pedra [1]-Papel [2]-Tesoura: ");
    scanf("%d",&jogadaPlayer);

    jogadaComputador=(rand() % 3);


    return 0;
}
