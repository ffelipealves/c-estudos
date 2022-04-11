#include<stdio.h>

// funçao getchar basciamente recebe um caractera
// ela é como fosse um scanf voltado para char

int main(){

char letra;

printf("digite uma letra: ");

letra = getchar(); //aqui atribuimos ao espaço de memoria chamado letra
                    // o retorno da funcao getchar q vai armazenar o cara
                    // caractere q nos digitarmos
printf("\n sua letra eh %c",letra);


////////////GETC///////////

// outra funçao para ler valores digitas pelo teclado

printf("\ndigite uma letra: ");

letra = getc(stdin); //-> pode ler de outras fontes, como arquivos txt etc

printf("\ncaraterece lido eh %c",letra);

/////////////////FGETC//////////////////////

printf("digite uma letra\n");
letra = fgetc(stdin); // -> le arquivos geralmente
printf("%c",letra);

////////////////LENDO VARIOS VALORES////////////////////////

 int a,b,c,d,e;
printf("digite 5 valores inteiro: ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

printf("\nvalores digitados %d %d %d %d %d %d",a,b,c,d,e);

}
