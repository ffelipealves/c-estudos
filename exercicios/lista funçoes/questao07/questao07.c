#include<stdio.h>
#include<stdbool.h>

/*7. Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é
igual a soma dos seus divisores excetuando ele próprio.
(Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar um valor booleano.*/


bool perfeito(int numero){

    int i,divisor=0;

    for(i=1;i<=(numero/2);i++){
        if(numero%i==0){
            divisor=divisor+i;
        }
    }
    // se a soma dos divisores for igual ao numero, ele eh perfeito
    if(divisor==numero){
        return true;
    }
    // caso contrario não
    if(divisor!=numero){
        return false;
    }
}


int main(){


    printf("%d",perfeito(8128));

    return 0;
}
