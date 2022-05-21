#include<stdio.h>


//Recursividade: funcao ou procedimento que chama a se mesmo

int fatorial(int x){

    if(x==0){
        return 1;
    }
    return x*fatorial(x-1);
}

int main(){

    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d",&n);

    printf("%d",fatorial(n));


    return 0;

}
