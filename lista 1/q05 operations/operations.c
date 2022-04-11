#include<stdio.h>
#include<math.h>


int main(void){

    double a,b,soma,mult,quad,raiz,sen,mod=0;

    printf("digite os valores de A: ");
    scanf("%lf",&a);
    printf("digite os valores de B: ");
    scanf("%lf",&b);


    soma=a+b;
    mult=a*pow(b, 2);
    quad=pow(a, 2);
    raiz=sqrt(pow(a, 2)+pow(b, 2));
    sen=sin(a-b);
    mod=abs(a);




    printf("A soma dos números: %.2lf \n",soma);
    printf("O produto do primeiro número pelo quadrado do segundo: %.2lf \n",mult);
    printf("O quadrado do primeiro número: %.2lf \n",quad);
    printf(" A raiz quadrada da soma dos quadrados: %.2lf \n",raiz);
    printf("O seno da diferença do primeiro número pelo segundo: %.2lf \n",sin);
    printf(" O módulo do primeiro número: %lf",mod);







    return 0;

}
