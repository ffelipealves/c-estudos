#include<stdio.h>


/*
18) Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.
*/


int main(){

    int pessoas,contador,idade,idadeMin=0,idadeMax=0,salarioF=0;
    char sexo;
    float salario,mediaSalario;


    printf("Digite quantas pessoas serao consultadas: ");
    scanf("%d",&pessoas);


    while(pessoas>0){

        printf("Digite seu sexo(m ou f), idade, e salario: ");
        scanf(" %c %d %f",&sexo,&idade,&salario);

        mediaSalario=mediaSalario+salario;//vai amazenar todos os salarios
        contador++;                        //ira dividir a media

        if(idade>idadeMax){ //ira armazenar a maior idade a cada iteracao
            idadeMax=idade;
        }

        if(idadeMin==0){
            idadeMin=idade;
        }                   // ira armazenar a menor idade a cada iteracao
        if(idade<idadeMin){
            idadeMin=idade;
        }


        if(sexo=='f' && salario<=2000){
            salarioF++;             //contara a quantidade de mulheres com
        }                           //salario menor igual a 2000


        pessoas--;//sera usado para parar o while

    }


    printf("\nA media de salario do grupo: %f\nA maior idade: %d ,A menor idade: %d\nA quantidade de mulheres com salario ate R$2000,00: %d\n",mediaSalario/contador,idadeMax,idadeMin,salarioF);

}
