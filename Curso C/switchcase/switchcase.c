#include<stdio.h>




int main(){

    int opcao;

    printf("1-Cadastrar Produto\n2-Excluir Produto\n3-Buscar Produto\n4-Imprimir\n5-Sair\n");
    scanf("%d",&opcao);
    //Estrutura de seleção Switch Case//
    // aqui temos um estrutura de decisao onde conseguimos fazer varias comparaçoes de igualdade
    // basicamente cade case eh um if = condiçao

    switch(opcao){

    case 1:
        printf("\nCadastrando Produto");
        break;
    case 2:
        printf("\nExluindo Produto");
        break;
    case 3:
        printf("\nBuscando Produto");
        break;
    case 4:
        printf("\nImprimindo...");
        break;
    case 5:
        printf("\nSaindo...");
        break;
    default:
        printf("\nOpcao Invalida");


    }



    /* Essa eh um forma de encadear o if else

    int numero;

    printf("\nDigite um numero: ");
    scanf("%d",&numero);

    if(numero>0){
        printf("Positivo");
    }else if(numero<0){
        printf("Negativo");
    }else{
        printf("Igual a 0");
    }
    */
}

