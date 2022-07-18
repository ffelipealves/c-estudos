#include<stdio.h>

/*
8. Faça um procedimento que recebe a idade de um nadador
por parâmetro e retorna , também por parâmetro,
a categoria desse nadador de acordo com a tabela abaixo:

Idade	            Categoria
5 a 7 anos	        Infantil A
8 a 10 anos	        Infantil B
11-13 anos	        Juvenil A
14-17 anos	        Juvenil B
Maiores de 18 anos  Adulto
*/


void categoriaNadador(int idade){

    if(idade>=5 && idade<=7){
        printf("\nCategoria do Nadador: Infantil A");
    }else if(idade>=8 && idade<=10){
        printf("\nCategoria do Nadador: Infantil B");
    }else if(idade>=11 && idade<=13){
        printf("\nCategoria do Nadador: Juvenil A");
    }else if(idade>=14 && idade<=17){
        printf("\nCategoria do Nadador: Juvenil B");
    }else if(idade>=18){
        printf("\nCategoria do Nadador: Adulto");
    }else{
        printf("Nadador sem idade minima");
    }

}

int main(){

    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d",&idade);

    categoriaNadador(idade);

    return 0;
}
