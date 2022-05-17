#include<stdio.h>


//Recursividade: funcao ou procedimento que chama a se mesmo

void imprimeNumeros(int x){

    if(x==0){
        printf("%d\n",x);
    }else{
        printf("%d\n",x);//decrescente
        imprimeNumeros(x-1);//printamos antes de chamar a recursao
    }

}

void imprimeNumerosInvertido(int x){

    if(x==0){
        printf("%d\n",x);
    }else{
        imprimeNumerosInvertido(x-1);//chamamos a recursao antes de printar
        printf("%d\n",x);//crescente

    }


}

int main(){

    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d",&n);
    imprimeNumeros(n);
    imprimeNumerosInvertido(n);

    return 0;

}
