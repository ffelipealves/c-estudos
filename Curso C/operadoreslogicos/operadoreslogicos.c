#include<stdio.h>




int main(){

    //Operadores lógicos

    int a;

    printf("\ndigite um valor inteiro: ");
    scanf("%d",&a);


    /*NEGACAO
      Tabela verdade x !x
                     v  f
                     f  v
    */
    if(!(a>=10) ){
        printf("Valor maior ou igual a 10\n");
    }else{
        printf("Valor menor que 10\n");
    }
    //perceba que a negação trocou o resultado do nosso if esta invertido

    /*E
      Tabela verdade a  b  a&b
                     v  v   v
                     v  f   f
                     f  v   f
                     f  f   f
    */

    int idade;
    char sexo;

    printf("\ndigite seu sexo(f ou m) e sua idade: ");
    scanf(" %c %d",&sexo,&idade);


    if(sexo == 'm' && idade == 18){
        printf("Alistamento obrigatorio\n");
    }else{
        printf("Dispensado\n");
    }

    /*OU
      Tabela verdade a  b  a|b
                     v  v   v
                     v  f   v
                     f  v   v
                     f  f   f
    */



    printf("\ndigite sua idade: ");
    scanf(" %d",&idade);


    if(idade<=8 || idade>=60){
        printf("Voce tem gratuidade\n");
    }else{
        printf("Voce nao tem gratuidade\n");
    }
}

