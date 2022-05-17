#include<stdio.h>
#include<stdlib.h>


//escopo de variaveis
// o escopo da variavel idade eh a funcao main

int idadeglobal = 10;// essa variavel tem escopo global

void imprimir(int id){

    //printf("Idade: %d",idade); nao funciona pois a variavel "idade"
    // so existe na nossa main
    printf("Id: %d\n",id);
    printf("idade global: %d",idadeglobal);

}

int main(){

    int idade = 25;//variavel local (so existe nessa funcao)

    printf("Idade: %d\n",idade);
    printf("idade global: %d\n",idadeglobal);
    imprimir(idade);


    return 0;
}
