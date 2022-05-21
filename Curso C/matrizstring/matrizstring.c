#include<stdio.h>



int main(){

//STRINGS//

//Podemos utilizar uma matriz de strings para armazenar varias strings.

    char nomes[5][25];

    int linha;

    //usamos o for para armazenar 5 nomes (um em cada linha)

    for(linha=0;linha<5;linha++){
        printf("Digite o nome da posicao %d: ",linha);
        scanf(" %25[^\n]",nomes[linha]);
    }

        for(linha=0;linha<5;linha++){
        printf("Nome posicao %d: %s\n",linha,nomes[linha]);

    }

    return 0;

}
