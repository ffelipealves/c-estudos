#include<stdio.h>

int main (){

    int contador1 = 5 ;
    printf("meu contador1 eh %d\n",++contador1);
    // usamos ++ para incrementar em 1 uma variavel
    //se usarmos ++variavel primeiro incrementamos dps a utilizamos
    //se fizermos variavel++ primeiro a variavel sera utilizada e dps teremos o incremento

    int contador2 = 5;
    printf("meu contador2 eh %d\n",contador2++);
    // aqui temos 5 pois o ++ foi feito dps da impressao
    // pode usar tbm
    // variavel++; variavel+=1; variavel=variavel+1;


    // da mesma forma temos o operador de decremento

    int resultado = --contador1;

    printf("nosso resultado eh: %d",resultado);
}
