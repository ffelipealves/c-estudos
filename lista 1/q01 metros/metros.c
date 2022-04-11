#include<stdio.h>

int main(){

    int i,j,tabu;

    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            tabu=i*j;
            printf("%d x %d = %d \n",i,j,tabu);
        }
    }

    return 0;



}
