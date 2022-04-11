#include<stdio.h>

int main(){

    float x = 12314.1242;
    // usamos %d pq sizeof gera um inteiro
    //sizeof nao eh função
    printf("tamanho de mem de um float %d bytes\n",sizeof x);
    printf("tamanho de mem de um int %d bytes\n\n\n",sizeof(int));
    //int = 4 bytes = 32bits

    // operador short
    int y = 0;
    short int z = 3124; // temos um intervalo menor com o short
                        // -32.768 ate 32.767, se ultrapassarmos o limite
                        // iremos voltar para o extremo negativo -32.768

    printf("tamanho de mem de um int sem short %d bytes\n",sizeof y);
    printf("tamanho de mem de um int com short %d bytes\n",sizeof z);

    short int w = 32768; // ultrapassamos o limite
    printf("estouramos a memoria do short int %d bytes\n\n",w);

    // o int normal tbm tem um limite -2.147.483.648 até 2.147.483.647
    int a = 2147483647; // ultrapassamos o limite
    a++;
    printf("estouramos a memoria do int %d bytes\n\n",a);

    // usando o long temo um limite maior para nosso int
    long long int b = 2147483647; // ultrapassamos o limite
    b++;
    printf("tamanho de um long long int %d bytes\n",sizeof b);
    printf("agora temos um valor long long int %lli bytes\n\n",b);
}
