#include<stdio.h>
#include<stdlib.h>

/*
12) Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.
*/

int main(){
    float mediaIdade=0,altura,mediaAltura=0;
    int i, idade,contador1=0,contador2=0;

    for(i=1;i<=45;i++){
        printf("\nDigite sua idade e altura: ");
        scanf("%d%f",&idade,&altura);
        if(altura<1.7){
            mediaIdade=mediaIdade+idade;
            contador1++;
        }
        if(idade>20){
            mediaAltura=mediaAltura+altura;
            contador2++;
        }


    }
    printf("\nA idade media dos alunos com menos de 1,70m de altura: %f\n",mediaIdade/contador1);
        printf("\nA altura media dos alunos com mais de 20 anos: %f\n",mediaAltura/contador2);

}
