#include<stdio.h>
#include<stdlib.h>

/*
14) Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
média dos salários informados, o salário mais alto e o salário mais baixo.
*/

int main(){

    int funcionario,contador=0;
    float salario,minSalario=0,maxSalario=0,mediaSalario=0;

    printf("\nDigite quantos funcionarios tem sua empresa: ");
    scanf("%d",&funcionario);//pedimos o numeros de funcionarios

    while(funcionario>0){//funcionario vai definir quantas vezes o while vai rodar

        printf("Digite o salario do funcionario: ");//vai pedir salario x vezes igual ao numero de funcionarios
        scanf("%f",&salario);

        if(minSalario==0){//se o minSalario for 0 vamos atribuir a ele o salario digitado
            minSalario=salario;
        }else if(salario<minSalario){//se o salario digitado for menor q o minsalario
            minSalario=salario;     //min salario vai receber esse salario e armazenar
        }

        if(salario>maxSalario){//da mesma forma se o salario digitado for maior que o maxSalario
            maxSalario=salario;//maxSalario vai armazenar salario
        }

        mediaSalario=mediaSalario+salario;//vamos somando os salarios digitados pelo usuario
        contador++;//sera usado para dividir nossa media
        funcionario--;//aproxima o numero de funcionarios a condicao de parada do while

    }
    printf("\nMedia dos Salaros: %.2f\nSalario mais alto: %.2f\nSalario mais baixo: %.2f\n",mediaSalario/contador,maxSalario,minSalario);
}
