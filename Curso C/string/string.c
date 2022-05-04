#include<stdio.h>



int main(){

//STRINGS//

//Strings sao nada mais que um vetor de caracteres
//usamos pra representar textos, palavras, trechos de texto etc..

    char palavra[50]={"Arroz com feijao"};

    printf("\n%c\n",palavra[0]);// <- vai mostrar a primeira letra
    printf("\n%s\n",palavra);//<- vai mostrar toda palavra

//Lendo strings
//scanf(nao le espaço)

    printf("\nDigite um texto:\n");
    scanf("%9[^\n]",palavra); //scanf flexivel, agr conseguimos ler com espaco(ate o primeiro enter) e limitar a quant de caracteres
    //scanf("%s",palavra);            //nao usa & pra ler a string
    printf("\n%s\n",palavra);

//gets-nao recomendavel
    /*
    printf("\nDigite outro texto:\n");
    gets(palavra);
    printf("\n%s\n",palavra);
    */


//fgets

    setbuf(stdin,NULL);//<- vai limpar o buffer
    printf("\nDigite outro texto:\n");
    fgets(palavra, 50, stdin);  //<- onde sera armazenado/limitacao de char/de onde vira o texto
    printf("\n%s\n",palavra);
}
