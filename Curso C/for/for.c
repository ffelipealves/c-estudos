#include<stdio.h>

int main(){

    //estruturas de repetição
    //o comando FOR vai repetir um bloco de codigo por determinadas vezes

    int i=0,p=0;
    //basicamente repetimos o bloco de comando por determinadas vezes
    //e por determinada regra de incremento
    //assim conseguimos evitar repetição de código
    for(i=0;i<11;i++){
        printf("%d\n",i);//vamos printar o valor de i e incrementamo
                        //em 1 nossa variavel e printamos dnovo e assim por diante
    //FOR(condiçao de inicio;condiçao de parada; incremento)
    }
    for(i=10;i>=0;i--){
        printf("%d\n",i);//for decrescente
    }
    for(p=0;p<=100;p+=2){
        printf("%d ",p);//for com numeros pares
    }

}
