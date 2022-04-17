#include<stdio.h>
#include<stdlib.h>

/*
18) Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00

*/

int main(){

    int pessoas,idade,contador,idadeMin=0,idadeMax=0,mulherSalario=0;
    char sexo;
    float salario,mediaSalario;

    printf("Digite o numero de pessoas: ");
    scanf("%d",&pessoas);

    for(contador=pessoas;contador>0;contador--){
        printf("Digite seu sexo(m ou f),sua idade e seu salario: ");
        scanf(" %c %d %f",&sexo,&idade,&salario);

        mediaSalario=mediaSalario+salario;

        if(idadeMax<idade){
            idadeMax=idade;
        }
        if(idadeMin==0){
            idadeMin=idade;
        }else if(idadeMin>idade){
            idadeMin=idade;
        }

        if(sexo='m' && salario<=2000){
            mulherSalario++;
        }



    }

    printf("\nA média de salário do grupo: %d\nA maior idade do grupo: %d\nA menor idade do grupo: %d\nA quantidade de mulheres com salário até R$2000,00: %d",mediaSalario/pessoas,idadeMax,idadeMin,mulherSalario);



    return 0;

}


