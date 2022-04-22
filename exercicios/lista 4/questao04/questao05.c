#include<stdio.h>
#include<stdlib.h>

/*
4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados).
*/


int main(){

    int i,quantVendida[5]={10, 6, 2, 5, 9},quantMaisV=0,posicao,j=0;
    float objetoValor[5]={3, 11, 2, 12, 8},valorTotalObjeto=0,valorTotalVendas=0,comissao;
    float valorMaisVendido=0;





    //letra A):
    for(i=0;i<5;i++){

        valorTotalObjeto=quantVendida[i]*objetoValor[i];//valor total da venda de um objeto

        printf("Objeto %d - Quantidade Vendida: %d, Valor total: %.2f\n",i,quantVendida[i],valorTotalObjeto);

        valorTotalVendas=valorTotalVendas+valorTotalObjeto;//valor total de todas vendas
    }
    comissao=valorTotalVendas*0.05;//comissao do vendedor em cima do total de vendas
    printf("Valor total de vendas: %.2f, Comissao recebida: %.2f\n\n",valorTotalVendas,comissao);

    //letra B
    for(i=0;i<5;i++){
        if (quantVendida[i]>quantMaisV){
            quantMaisV=quantVendida[i];
            valorMaisVendido=objetoValor[i];
            posicao=i;
        }


    }
    printf("Valordo objeto mais vendido: %.2f, Posicao do Objeto: %d\n",valorMaisVendido,posicao);



}
