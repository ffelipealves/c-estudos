#include<stdio.h>


//Recursividade: funcao ou procedimento que chama a se mesmo

void imprimeVetor(int v[],int tam){

    if(tam==1){
        printf("%d ",v[tam-1]);
    }else{
        imprimeVetor(v,tam-1);
        printf("%d ",v[tam-1]);
    }

}

void inverteVetor(int v[],int inicio,int fim){
    int aux;
    if(inicio<fim){
        aux=v[inicio];
        v[inicio]=v[fim];
        v[fim]=aux;
        inverteVetor(v,inicio+1,fim-1);
    }

}

int main(){

    int vet[10]={1,2,3,4,5,6,7,8,9,10};

    imprimeVetor(vet,10);
    inverteVetor(vet,0,9);
    printf("\n");
    imprimeVetor(vet,10);

    return 0;

}
