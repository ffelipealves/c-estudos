#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


/*
3. Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o
valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.
*/

//CHECA SE O NUMERO EH PRIMO OU NAO
//DEVOLVE 1 CASO SIM E 0 CASO CONTRARIO
bool eh_primo(int numero)
{

    int i;
    int divisores=0;
    bool primo;

    //SE O NUMERO FOR MENOR QUE 0 OU 1 RETORNA 0
    if(numero<=0 || numero ==1)
    {
        return primo=false;
    }
    //CASO CONTRARIO IRA PROCURAR OS DIVISORES DO NUMERO COM UM FOR
    else
    {
        for(i=1; i<=numero; i++)
        {
            //FAZ A DIVISAO DO NUMERO POR I SE TIVER RESTO 0 ACRESCENTA 1 DIVISOR
            if(numero%i==0)
            {
                divisores++;
            }
        }
        //SE FOR ENCONTRADO APENAS 2 DIVISORES O NUMERO E PRIMO
        if(divisores==2)
        {
            return primo=true;
        }
        //CASO CONTRARIO RETORNA FALSO
        else
        {
            return primo=false;
        }
    }

}


int main()
{

    int x=12;

    printf("\n\tE PRIMO ?\n0-Nao 1-Sim : %d",eh_primo(x));

    return 0;
}
