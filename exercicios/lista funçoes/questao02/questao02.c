#include<stdio.h>

/*2. Escreva um procedimento que recebe as 3 notas de um alu
no por parâmetro e uma letra. Se a letra for A o procediment
o calcula a média aritmética das notas do aluno, se for P, a sua média po
nderada (pesos: 5, 3 e 2) e se for H, a sua média harmônica. A média ca
lculada também deve retornar por parâmetro.*/




int main(){

    float nota1=0,nota2=0,nota3=0;
    char media;

    printf("Digite 3 notas para o aluno: ");
    scanf("%d%d%d",&nota1,&nota2,&nota3);
    printf("Digite agora uma letra referente: \n'A'=Media Aritmetica\n'H'=Media Harmonica\n'P'=Media Ponderada\n");
    scanf(" %c",&media);




    return 0;
}
