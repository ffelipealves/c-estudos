#include<stdio.h>


void pedraPapelTesoura(int opcao){

    if(opcao==1){
        printf("  _.-.-.-.\n ;_|_|_|_|_\n |_|_|\__  \ \n |    . '  ");
    }


}




void main(){

    int jogada;

    printf("\n\tVamos jogar pedra papel e tesoura!!\n\nRegras:\tPedra vence Tesoura\n\tTesoura vence Papel\n\tPapel vence Pedra\n\n");
    printf("\tEscolha [1]-Pedra [2]-Tesoura [3]-Papel: ");
    scanf("%d",&jogada);

    pedraPapelTesoura(jogada);


}
