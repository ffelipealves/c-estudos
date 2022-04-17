#include<stdio.h>
#include<stdlib.h>

/*
8) Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair
Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
*/

int main(){

    int opcao; // variavel para o switch case
    float valor1,valor2; //valores para as operaçoes

    while(opcao!=0){//enquanto o usuario nao digitar 0 para sair o programa continuara
        printf("\n\t1 - Soma\n\t2 - Subtrair\n\t3 - Multiplicar\n\t4 - Dividir\n\t0 - Sair\n");//menu
        scanf("%d",&opcao);//ler a opcao do menu
        switch(opcao){
        case 1 :{//Operacao de Soma
                printf("digite o valor1 e valor2: ");
                scanf("%f%f",&valor1,&valor2);
                printf("\n%.2f + %.2f = %.2f\n",valor1,valor2,valor1+valor2);
                break;
            }
            case 2:{//Operacao Subtracao
                printf("digite o valor1 e valor2: ");
                scanf("%f%f",&valor1,&valor2);
                printf("\n%.2f - %.2f = %.2f\n",valor1,valor2,valor1-valor2);
                break;
            }
            case 3:{//Operacao Multiplicacao
                printf("digite o valor1 e valor2: ");
                scanf("%f%f",&valor1,&valor2);
                printf("\n%.2f x %.2f = %.2f\n",valor1,valor2,valor1*valor2);
                break;
            }
            case 4:{//Operacao Dividir
                do{//primeiro pedimos os valores
                    printf("digite o valor1 e valor2: ");
                    scanf("%f%f",&valor1,&valor2);
                }while(valor2==0);//se o divivendo for igual a 0 sera pedidos novos valores para divisao
                printf("\n%.2f / %.2f = %.2f\n",valor1,valor2,valor1/valor2);
                break;
            }
            case 0:{
                printf("\nSaindo...");
                break;
            }
            default:
                printf("\nOpcao Invalida!!!\n");
                break;
            }
    }





}
