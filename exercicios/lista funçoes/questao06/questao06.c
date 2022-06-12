#include<stdio.h>

/*6. Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias.*/


int converteDias(int anos, int meses, int dias){

    int diasTotais;
    //considerei que todo mes tem 30 dias e todo ano 365
    diasTotais=(anos*365)+(meses*30)+dias;

    return diasTotais;

}


int main(){


    printf("\nVoce tem %d dias de idade\n",converteDias(5,12,22));

    return 0;
}
