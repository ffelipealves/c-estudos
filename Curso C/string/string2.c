#include<stdio.h>



int main(){

//STRINGS//

    int i, tam=0;
    char palavras[55]={"Eae vei beleza, contente aqui pra uma revolution"};

    printf("\nDigite o seu nome");
    fgets(palavras,15,stdin);

    //vai imprimir todo nosso vetor de char
    for(i=0;i<55;i++){
        printf("%d = %c - %d(ASCII)",i,palavras[i],palavras[i]);
        printf("\n");
    }
    //vai imprimir ate o final da string "/0"
    i=0;
    while(palavras[i]!='\0'){
        printf("%d = %c - %d(ASCII)",i,palavras[i],palavras[i]);
        printf("\n");
        i++;
        tam++;//vai dizer o tamanho da string
    }
    printf("Tamanho da string: %d",tam);
}
