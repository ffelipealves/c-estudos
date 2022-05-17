#include<stdio.h>


//Recursividade: funcao ou procedimento que chama a si mesmo



int maior(int vet[],int tam,int indice){
    if(tam==0){
        return vet[indice];
    }else{
        if(vet[tam-1]>vet[indice]){
            return maior(vet,tam-1,tam-1);
        }else{
            return maior(vet,tam-1,indice);
        }
    }

}

int main(){

    int n,vet[10]={11,23,453,32123,43,27,3,89,90,45};

    printf("\nMaior Elemento do vetor: %d",maior(vet,10,0));


    return 0;

}
