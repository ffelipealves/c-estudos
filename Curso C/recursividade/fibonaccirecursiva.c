#include<stdio.h>


//Recursividade: funcao ou procedimento que chama a se mesmo

int fibonacci(int x){

    if(x==1){
        return 0;
    }else if(x==2){
        return 1;
    }else{
        return fibonacci(x-1)+fibonacci(x-2);
    }
}

int main(){

    int n;

    printf("Digite a posicao do enesimo termo: ");
    scanf("%d",&n);

    printf("o termo %d eh:%d",n,fibonacci(n));


    return 0;

}
