#include<stdio.h>
#include<string.h>



int main(){

//STRINGS//
//procurando um char num string

//strchr->retorna a primeira ocorrencia
//strrchr->retorna a ultima ocorrencia

    char palavra[50]={"Yolanda"};
    char *letra;

    letra=strchr(palavra,'a');

    printf("\n%c encontrado\n",*letra);
    printf("\n%c eh o proximo\n",*(letra+1));
    printf("\n%c eh o proximo\n",*(letra+2));

    letra=strrchr(palavra,'a');

    printf("\n%c encontrado\n",*letra);
    printf("\n%c eh o anterior\n",*(letra-1));
    printf("\n%c eh o anterior\n",*(letra-2));

//substring

    char palavra2[50]={"eae vei beleza ?"};
    char str[]={"vei"};
    char *ponteiro;

    ponteiro=strstr(palavra2,str);

    if(ponteiro){
        printf("\n%c\n",*ponteiro);
    }else{
        printf("\ponteiro nulo\n");
    }

//outras funcoes
//strupr()-deixa string em maiuscula
//strlwr()-deixa string em minuscula




}
