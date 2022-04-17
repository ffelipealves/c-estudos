#include<stdio.h>
#include<stdlib.h>

/*
10) Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

int main(){

    float dinheiro=0.01,soma;//iniciamos 3 variaveis, dinheiro com 1 centavo guardado
    int dias;               //soma para o dinheiro guardado e dias para os dias e sera usado como contador do for


    for(dias=1;dias<=30;dias++){
        dinheiro=dinheiro*2;//multiplicamos por 2 o dinheiro a cada dia
        soma=soma+dinheiro;//depois somamos o dinheiro ao dinheiro ja guardado
    }
    printf("\nDinheiro Guardado = %.2f\n",soma);
}
