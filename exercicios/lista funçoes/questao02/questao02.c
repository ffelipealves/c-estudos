#include<stdio.h>

/*2. Escreva um procedimento que recebe as 3 notas de um alu
no por parâmetro e uma letra. Se a letra for A o procediment
o calcula a média aritmética das notas do aluno, se for P, a sua média po
nderada (pesos: 5, 3 e 2) e se for H, a sua média harmônica. A média ca
lculada também deve retornar por parâmetro.*/


//Calcula a media escolhida
void calcMedia(float n1, float n2, float n3,char tipoMedia){


    switch(tipoMedia){

    case 'A':
        printf("Media Aritmerica: ");
        float MA = (n1+n2+n3)/3;
        printf("%.2f",MA);
        break;
    case 'H':
        printf("Media Harmonica: ");
        float MH = 3/(1/n1+1/n2+1/n3);
        printf("%.2f",MH);
        break;
    case 'P':
        printf("Media Ponderada: ");
        float MP = (n1*5+n2*3+n3*2)/10;
        printf("%.2f",MP);
        break;
    default:
        printf("Opcao Invalida!!: ");
        break;
    }

}

int main(){

    float nota1=0,nota2=0,nota3=0;
    char media;


    printf("Digite 3 notas para o aluno: ");
    scanf("%f%f%f",&nota1,&nota2,&nota3);

    printf("Digite agora uma letra referente: \n'A'=Media Aritmetica\n'H'=Media Harmonica\n'P'=Media Ponderada(pesos: 5, 3 e 2)\n");
    scanf(" %c",&media);

    calcMedia(nota1,nota2,nota3,media);


    return 0;
}
