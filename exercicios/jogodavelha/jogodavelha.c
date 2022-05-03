#include<stdio.h>
#include<stdlib.h>


int main()
{

    int player=0,opcao=1,vencedor=0,posicaoValida=0,vitoria=0,i=0,j=0,velha=0;
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

            // WHILE CASO POSICAO INVALDIA
            do{
                //LENDO O INPUT DO USUARIO POSICAO A SER MARCADA
                printf("\n\nPLAYER %d -Digite uma posicao disponivel acima: ",player);
                scanf(" %c",&posicao);
                posicaoValida=0;


                //MARCANDO A POSICAO ESCOLHIDA E VALIDANDO SUA POSICAO
                switch(posicao)
                {
                case 'a':
                    if(jogoVelha[0][0]=='X'||jogoVelha[0][0]=='O'){
                        posicaoValida=0;
                    }else{
                        jogoVelha[0][0]=marca;
                        posicaoValida=1;
                    }
                    break;
                case 'b':
                    if(jogoVelha[0][1]=='X'||jogoVelha[0][1]=='O'){
                        posicaoValida=0;
                    }else{
                        jogoVelha[0][1]=marca;
                        posicaoValida=1;
                    }
                    break;
                case 'c':
                    if(jogoVelha[0][2]=='X'||jogoVelha[0][2]=='O'){
                        posicaoValida=0;
                    }else{
                        jogoVelha[0][2]=marca;
                        posicaoValida=1;
                    }
                    break;
                case 'd':
                    if(jogoVelha[1][0]=='X'||jogoVelha[1][0]=='O'){
                        posicaoValida=0;
                    }else{
                        jogoVelha[1][0]=marca;
                        posicaoValida=1;
                    }
                    break;
                case 'e':
                    if(jogoVelha[1][1]=='X'||jogoVelha[1][1]=='O'){
                        posicaoValida=0;
                    }else{
                        jogoVelha[1][1]=marca;
                        posicaoValida=1;
                    }
                    break;
                case 'f':
                    if(jogoVelha[1][2]=='X'||jogoVelha[1][2]=='O'){
                        posicaoValida=0;
                    }else{
                        jogoVelha[1][2]=marca;
                        posicaoValida=1;
                    }
                    break;
                case 'g':
                    if(jogoVelha[2][0]=='X'||jogoVelha[2][0]=='O'){
                        posicaoValida=0;
                    }else{
                        jogoVelha[2][0]=marca;
                        posicaoValida=1;
                    }
                    break;
                case 'h':
                    if(jogoVelha[2][1]=='X'||jogoVelha[2][1]=='O'){
                        posicaoValida=0;
                    }else{
                        jogoVelha[2][1]=marca;
                        posicaoValida=1;
                    }
                    break;
                case 'i':
                    if(jogoVelha[2][2]=='X'||jogoVelha[2][2]=='O'){
                        posicaoValida=0;
                    }else{
                        jogoVelha[2][2]=marca;
                        posicaoValida=1;
                    }
                    break;
                default:
                    posicaoValida=0;
                    break;
                }
                if(posicaoValida==0){
                    printf("\nPosicao Invalida ou Ja Marcada!!!\n");
                }

            }while(posicaoValida==0);

            velha=0;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    if (jogoVelha[i][j]=='X'||jogoVelha[i][j]=='O'){
                        velha++;
                    }
                }
                if(velha==9){
                    vencedor=1;
                    printf("DEU VELHA!!");
                }
            }


            //VERIFICANDO SE ALGUEM GANHOU

            //VERIFICANDO AS LINHAS
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    if(jogoVelha[i][j]==marca)
                    {
                        vitoria++;
                    }
                }
                if(vitoria==3)
                {
                    printf("\n\tO JOGADOR %d VENCEU!!!\n",player);
                    vencedor=1;
                    printf("\n\t#JOGO DA VELHA#\n\n\t  %c | %c | %c\n\t  -   -   -\n\t  %c | %c | %c\n\t  -   -   -\n\t  %c | %c | %c\n\n",jogoVelha[0][0],jogoVelha[0][1],jogoVelha[0][2],jogoVelha[1][0],jogoVelha[1][1],jogoVelha[1][2],jogoVelha[2][0],jogoVelha[2][1],jogoVelha[2][2]);
                    i=20;
                }
                else
                {
                    vitoria=0;
                }
            }

            //VERIFICANDO AS COLUNAS
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    if(jogoVelha[j][i]==marca)
                    {
                        vitoria++;
                    }
                }
                if(vitoria==3)
                {
                    printf("\n\tO JOGADOR %d VENCEU!!!\n",player);
                    vencedor=1;
                    printf("\n\t#JOGO DA VELHA#\n\n\t  %c | %c | %c\n\t  -   -   -\n\t  %c | %c | %c\n\t  -   -   -\n\t  %c | %c | %c\n\n",jogoVelha[0][0],jogoVelha[0][1],jogoVelha[0][2],jogoVelha[1][0],jogoVelha[1][1],jogoVelha[1][2],jogoVelha[2][0],jogoVelha[2][1],jogoVelha[2][2]);
                    i=20;
                }
                else
                {
                    vitoria=0;
                }
            }

            //VERIFICANDO A DIAGONAL PRINCIPAL
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    if(i==j)
                    {
                        if(jogoVelha[i][j]==marca)
                        {
                            vitoria++;
                        }
                    }

                }
                if(vitoria==3)
                {
                    printf("\n\tO JOGADOR %d VENCEU!!!\n",player);
                    vencedor=1;
                    printf("\n\t#JOGO DA VELHA#\n\n\t  %c | %c | %c\n\t  -   -   -\n\t  %c | %c | %c\n\t  -   -   -\n\t  %c | %c | %c\n\n",jogoVelha[0][0],jogoVelha[0][1],jogoVelha[0][2],jogoVelha[1][0],jogoVelha[1][1],jogoVelha[1][2],jogoVelha[2][0],jogoVelha[2][1],jogoVelha[2][2]);
                    i=20;
                }
            }
            vitoria=0;

            //VERIFICANDO A DIAGONAL SECUNDARIA
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    if(i+j==2)
                    {
                        if(jogoVelha[i][j]==marca)
                        {
                            vitoria++;
                        }
                    }

                }
                if(vitoria==3)
                {
                    printf("\n\tO JOGADOR %d VENCEU!!!\n",player);
                    vencedor=1;
                    printf("\n\t#JOGO DA VELHA#\n\n\t  %c | %c | %c\n\t  -   -   -\n\t  %c | %c | %c\n\t  -   -   -\n\t  %c | %c | %c\n\n",jogoVelha[0][0],jogoVelha[0][1],jogoVelha[0][2],jogoVelha[1][0],jogoVelha[1][1],jogoVelha[1][2],jogoVelha[2][0],jogoVelha[2][1],jogoVelha[2][2]);
                    i=20;
                }
            }
            vitoria=0;


        }
        //CONTINUAR O JOGO OU NAO
        do
        {
            printf("\nVoce quer jogar dnovo ?(1-Sim,2-Nao): ");
            scanf("%d",&opcao);
            if(opcao!=1 && opcao!=2)
            {
                printf("\nOpcao Invalida!!\n");
            }
        }
        while(opcao!=1 && opcao!=2);

    }
    while(opcao==1);
}

