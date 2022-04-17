#include<stdio.h>
#include<stdlib.h>

/*
13) Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
informado é primo ou não.
*/

int main(){
    //um numero primo eh um numero q eh apenas dividido por 1 e ele mesmo
    //ou seja dois divisores nosso contador2 vai armazenar quanto divisores tem um numero
    //se o numero de divisores for igual a 2 ele eh primo

   int numero,contador,resto,contador2=0;

   printf("\ndigite um numero inteiro maior q 2: ");
   scanf("%d",&numero);                     //input do numero
   contador=numero;//igualamos o contador ao input do usuario

   while(contador>0){
        resto=numero%contador;//enquanto o contador for maior q zer
        contador--;           //vamos pegar o resto da divisao entre o numero e contador
        if(resto==0){         //se o resto for 0 adicionamos ++ no contador2
            contador2++;
        }

   }
    if(contador2==2){           //no final se o contador2 for ==2 devolvemos que o numero eh primo
        printf("\nEH PRIMO\n"); //se nao devolva nao eh primo
    }else{
        printf("\nnao eh primo\n");
    }

    //UMA FORMA MELHOR
    /*
    for(i=0;i<=numero/2;i++){
        if(mumero%i==0){
            divisores++;
        }

    }
    if(divisores>2){
        printf("nao eh primo");
    }else if(divisores==2){
        printf(""eh primo)
    }

    */

}
