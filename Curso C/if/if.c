#include<stdio.h>




int main(){

    int a;

    printf("\ndigite um valor inteiro: \n");
    scanf("%d",&a);
    //estrutura de decisao SE(IF)//
    if(a>=10){                       //nosso programa ira testar nossa condicao
        printf("valor maior ou igual a 10"); //se ele for verdade ele entrara dentro do if
                                    //e executara o codigo que la esta
    }else{                          //caso contrario o programa continuara normalmente.

        printf("valor menor q 10"); // e se houver a condição else(senao) ele entrata dentro do else
    }                               //e executara seu codigo e dps continuara o programa normalmente

    //essa estrutura de decisao e outras sao baseadas no resultado logico da expressao ex 10>4 = 1, 68<213=0
    //em C o valor 0 sempre significa falso e todo valor !=0 eh verdadeiro

    ////OPERADOR TERNARIO/////

    a<0 ?  printf("\nValor negativo\n") : printf("\nValor Positivo\n");
// condicao      se:veradeiro                  se:falso


}

