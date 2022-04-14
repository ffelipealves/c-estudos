#include<stdio.h>

int main (){

    float x = 3.1415; // o float nao aceita long e short

    printf("Um float precisa de %d bytes de memoria\n",sizeof x);

    // para representarmos numeros reais muito grandes ou pequenos
    // podemos usar o double muito mais preciso

    double y = 3.141576547;
    printf("Valor de y: %.10lf\n",y); // por padrao imprime apenas 6 digitos apos da virgula
    printf("Um double precisa de %d bytes de memoria\n",sizeof y);

    // tambem podemos usar o long double //

    long double z = 3.1238912421;
    //printf("valor de z: %Lf\n",z); windows n aceita
    __mingw_printf("valor de z: %Lf\n",z);
    printf("Um long double precisa de %d bytes de memoria\n",sizeof z);



}
