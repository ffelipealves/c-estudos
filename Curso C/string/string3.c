#include<stdio.h>
#include<string.h>



int main(){

//STRINGS//

    //funcao strlen vai retornar o tamanho da string
    char palavras[55]={0};

    printf("Digite o seu nome: ");
    fgets(palavras,15,stdin);

    printf("Tamanho do string: %d",strlen(palavras));

    //funcao strcat vai concatenar strings

    strcat(palavras,"mensagem de felipe");
    printf("\n\n\t%s\n\n",palavras);

    char nome[10]={"Felipe"};
    char sobrenome[10]={"Alves"};

    strcat(nome,sobrenome);
    printf("\n\n\t%s\n\n",nome);

    //strcmp - compara strings
    //0 -> strings iguais
    //1 -> string1 < string2
    //-1 ->string>string2

    char palavra1[50]={"Januario"};
    char palavra2[50]={"Alou"};

    printf("\nResultado: %d\n",strcmp(palavra1,palavra2));

    //copiando string
    char palavra3[50]={"Arroz"};
    char palavra4[50]={"Feijao"};

    //     ctrl v     crtl c
    strcpy(palavra3,palavra4);


}
