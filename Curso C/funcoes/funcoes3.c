#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// FUNCOES E PROCEDIMENTOS

//Funcao para contar os caracteres de uma string

//tipo de retorno - identificador - parametros
int contaCaractere(char str[]){

    int tam=0;

    while(str[tam]!= '\0'){
        tam++;
    }

    return tam;
}

//Procedimento nao tem retorno
void imprimeString(char palavra[]){

    int tam=0;

    while(palavra[tam]!='\0'){
        printf("%c\n",palavra[tam]);
        tam++;
    }

}

int main(){

    char palavra[20]={"cachorro"};
    printf("Funcao strlen :%d\n",strlen(palavra));
    printf("Minha funcao :%d\n",contaCaractere(palavra));
    imprimeString(palavra); // -> procedimento


    return 0;
}
