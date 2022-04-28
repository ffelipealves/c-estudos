#include<stdio.h>
#include<stdlib.h>




int main(){

    char marcacao[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    int linha,coluna,player;

    do{
        for(player=1;player<=2;player++){
            printf("\n   0   1   2  \n\n0  %c | %c | %c\n   -   -   -\n1  %c | %c | %c\n   -   -   -\n2  %c | %c | %c",marcacao[0][0],marcacao[0][1],marcacao[0][2],marcacao[1][0],marcacao[1][1],marcacao[1][2],marcacao[2][0],marcacao[2][1],marcacao[2][2]);

            printf("\n\nPLAYER %d -Digite o numero da linha e o numero da coluna que ira marcar: ",player);
            scanf("%d%d",&linha,&coluna);
            //if marcacao[linha][coluna] == NULL

            if(player==1){
                marcacao[linha][coluna]='X';
            }else{
                marcacao[linha][coluna]='O';}
        }

    }while(1);





}
