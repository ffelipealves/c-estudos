#include<stdio.h>


//Recursividade: funcao ou procedimento que chama a se mesmo

int potencia(int x, int n){

    if(n==0){
        return 1;
    }else{
        return x * potencia(x,n-1);
    }

}

int main(){

    int x,n;

    printf("Digite um valor inteiro para X e para N: ");
    scanf("%d%d",&x,&n);

    printf("Resultado de %d elevado a %d: %d",x,n,potencia(x,n));


    return 0;

}
