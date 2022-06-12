#include<stdio.h>

/*5. Faça uma função que recebe por parâmetro o tempo de
duração de uma fábrica expressa em segundos e retorna também
por parâmetro esse tempo em horas, minutos e segundos.*/



void tempoConvertido(int segundosTotais,int *horas,int *minutos,int *segundos){

    *horas = segundosTotais/3600;
    *minutos = (segundosTotais%3600)/60;
    *segundos = (segundosTotais%3600)%60;

}


int main(){

    int horas,minutos,segundos;

    //chamamos a funcao para converter o tempo passando como parametro os segundos e armazenamos os valores
    //nas variaveis criadas acima
    tempoConvertido(4720,&horas,&minutos,&segundos);

    printf("%d:%d:%d",horas,minutos,segundos);

    return 0;
}
