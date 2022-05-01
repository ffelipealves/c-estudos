#include<stdio.h>
#include<stdlib.h>


int main()
{

    int player=0,opcao=1,vencedor=0;
    char posicao,marca,jogoVelha[3][3]= {0};

    do //RESETA O JOGO
    {
        //CONFIG INICIAL
        vencedor=0;
        player=0;
        char jogoVelha[3][3]= {'a','b','c','d','e','f','g','h','i'};

        //COMEÇO DO JOGO
        while(vencedor==0)
        {
            //ALTERNANDO JOGADOR E ALTERANDO A MARCAÇAO DE CADA JOGADOR
            player++;
            if(player==1 || player>2)
            {
                marca='X';
                player=1;
            }
            else
            {
                marca='O';
            }


            //PRINTANDO JOGO DA VELHA
            printf("\n\t#JOGO DA VELHA#\n\n\t  %c | %c | %c\n\t  -   -   -\n\t  %c | %c | %c\n\t  -   -   -\n\t  %c | %c | %c\n\n",jogoVelha[0][0],jogoVelha[0][1],jogoVelha[0][2],jogoVelha[1][0],jogoVelha[1][1],jogoVelha[1][2],jogoVelha[2][0],jogoVelha[2][1],jogoVelha[2][2]);


            //LENDO O INPUT DO USUARIO POSICAO A SER MARCADA
            printf("\n\nPLAYER %d -Digite uma posicao disponivel acima: ",player);
            scanf(" %c",&posicao);


            //MARCANDO A POSICAO ESCOLHIDA
            switch(posicao)
            {
            case 'a':
                jogoVelha[0][0]=marca;
                break;
            case 'b':
                jogoVelha[0][1]=marca;
                break;
            case 'c':
                jogoVelha[0][2]=marca;
                break;
            case 'd':
                jogoVelha[1][0]=marca;
                break;
            case 'e':
                jogoVelha[1][1]=marca;
                break;
            case 'f':
                jogoVelha[1][2]=marca;
                break;
            case 'g':
                jogoVelha[2][0]=marca;
                break;
            case 'h':
                jogoVelha[2][1]=marca;
                break;
            case 'i':
                jogoVelha[2][2]=marca;
                break;
            default:
                printf("\nPosicao Invalida!!!\n");
            }

            //VERIFICANDO SE ALGUEM GANHOU

        }
        //CONTINUAR O JOGO OU NAO
        do{
            printf("\nVoce quer jogar dnovo ?(1-Sim,2-Nao): ");
            scanf("%d",&opcao);
            if(opcao!=1 && opcao!=2){
                printf("\nOpcao Invalida!!\n");
            }
        }while(opcao!=1 && opcao!=2);

    }while(opcao==1);
}


/*
if(jogoVelha[0][0]==marca && jogoVelha[0][1]==marca && jogoVelha[0][2]==marca)
{
printf("\n\tO JOGADOR %d GANHOU!!!\n",player);
vencedor=player;
}
if(jogoVelha[1][0]==marca && jogoVelha[1][1]==marca && jogoVelha[1][2]==marca)
{
printf("\n\tO JOGADOR %d GANHOU!!!\n",player);
vencedor=player;
}
if(jogoVelha[2][0]==marca && jogoVelha[2][1]==marca && jogoVelha[2][2]==marca)
{
printf("\n\tO JOGADOR %d GANHOU!!!\n",player);
vencedor=player;
}
if(jogoVelha[0][0]==marca && jogoVelha[1][0]==marca && jogoVelha[2][0]==marca)
{
printf("\n\tO JOGADOR %d GANHOU!!!\n",player);
vencedor=player;
}
if(jogoVelha[0][1]==marca && jogoVelha[1][1]==marca && jogoVelha[2][1]==marca)
{
printf("\n\tO JOGADOR %d GANHOU!!!\n",player);
vencedor=player;
}
if(jogoVelha[0][2]==marca && jogoVelha[1][2]==marca && jogoVelha[2][2]==marca)
{
printf("\n\tO JOGADOR %d GANHOU!!!\n",player);
vencedor=player;
}
if(jogoVelha[0][0]==marca && jogoVelha[1][1]==marca && jogoVelha[2][2]==marca)
{
printf("\n\tO JOGADOR %d GANHOU!!!\n",player);
vencedor=player;
}
if(jogoVelha[0][2]==marca && jogoVelha[1][1]==marca && jogoVelha[2][0]==marca)
{
printf("\n\tO JOGADOR %d GANHOU!!!\n",player);
vencedor=player;
}

}
*/
