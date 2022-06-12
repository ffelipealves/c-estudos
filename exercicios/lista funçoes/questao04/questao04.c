#include<stdio.h>
#include<stdlib.h>
#include<math.h>



/*
4. Faça um procedimento que recebe por parâmetro os valores necessário para o cálculo da fórmula de
báskara e retorna, também por parâmetro, as suas raízes, caso seja possível calcular.
*/

//FUNCAO QUE CALCULA DELTA
float calc_delta(float a,float b,float c){

    float delta;

    delta=pow(b,2) - 4*a*c;

    return delta;

}

//PROCEDIMENTO QUE RETORNA AS DUAS RAIZES
void calc_bhaskara(float delta,float a,float b,float c){

    float x1,x2;

    x1= (-b + sqrt(delta))/2*a;
    x2= (-b - sqrt(delta))/2*a;

    printf("\nRaiz 1: %.2f\nRaiz 2: %.2f\n",x1,x2);

}

int main()
{
    float a=1;
    float b=12;
    float c=-13;



    float delta=calc_delta(a,b,c);
    if(delta<0){
        printf("A equacao nao tem raizes reais");
    }else{
        calc_bhaskara(delta,a,b,c);
    }



    return 0;
}
