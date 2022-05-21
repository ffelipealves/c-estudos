#include<stdio.h>


//Recursividade: funcao ou procedimento que chama a si mesmo

int somatorio(int n){

    if(n==0){
        return 0;
    }else{
        return n + somatorio(n-1);
    }

}

int somatorioVetor(int vet[],int tam){
    if(tam==0){
        return 0;
    }else{
        return vet[tam-1]+somatorioVetor(vet,tam-1);
    }

}

int main(){

    int n,vet[10]={1,2,3,4,5,6,7,8,9,10};

    printf("Digite um valor inteiro para N: ");
    scanf("%d",&n);

    printf("Resultado de 1 ate %d: %d",n,somatorio(n));
    printf("\nSoma do vetor: %d",somatorioVetor(vet,10));


    return 0;

}
