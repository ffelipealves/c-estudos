#include<stdio.h>

char criaTabuleiro(){

    char jogoVelha[3][3]= {'a','b','c','d','e','f','g','h','i'};
    return jogoVelha;
}

void mostraTabuleiro(){

    printf("\n\t#JOGO DA VELHA#\n\n\t  X | O | X\n\t  -   -   -\n\t  O | X | O\n\t  -   -   -\n\t  X | O | X\n\n");

}

void jogada(){

    char posicao;
    printf("\n\nPLAYER  -Digite uma posicao disponivel acima: ");
    scanf(" %c",&posicao);
}

char teste(){
    char jogoVelha[3][3]= {'a','b','c','d','e','f','g','h','i'};
    return jogoVelha;
}

void teste2(char array){

    printf("%c",array[0][0]);
}

int main(){


    teste2(teste());


    return 0;
}
