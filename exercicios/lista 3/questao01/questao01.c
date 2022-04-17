#include<stdio.h>

/*
1) Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a
tabuada.
*/

int main(){

    int numero,i;//inicializamos duas variveis um pra receber o input
                //e outra para ser contador

    printf("Digite um numero para exibir sua tabuada: ");
    scanf("%d",&numero);

    for(i=0;i<=10;i++){//usaremos o contador i como o outro elemento
                        // da multiplicação assim incrementamos ele a cada
                        //iteração

        printf("%d x %d = %d\n",numero,i,numero*i);//ira gerar a tabuada

    }


}
