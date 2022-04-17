#include<stdio.h>

/*
2) Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
encerrado. Considere que a senha correta é o valor 123456.
*/

int main(){

    int senha;

    do{//usamos o dowhile para fazer o primeiro pedido da senha
        printf("Digite a senha do seu cartao: ");
        scanf("%d",&senha);
        if(senha!=123456){// se a senha estiver errada mostre senha invalida
            printf("Senha Invalida\n");
        }
    }while(senha!=123456);//enquanto a senha for diferente de 12345
                          //repita o processo
    printf("Acesso Liberado");

   //OUTRO MODO
   /* printf("Digite a senha do seu cartao: ");
    scanf("%d",&senha);

    while(senha!=123456){
        printf("senha invalida\n");
        scanf("%d",&senha);
    }
    printf("Acesso permitido\n") */
}
