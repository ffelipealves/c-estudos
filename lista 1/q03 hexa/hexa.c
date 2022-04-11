#include<stdio.h>

int main(){

    int d,r,i;
    int cont = 0;
    i=0;
    printf("digite um valor inteiro em decimal: ");
    scanf("%d",&d);


    while(d>=16){

        r=d%16;
        lista[i]=r;
        d=d/16;
        i++;
        if(r>9){
           switch(r){
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
           }

        }else{
            for (i;i>=0;i--){
                printf("%d",lista[i]);
            }
            printf("%d",r);
        }


    }

    if(r>9){
           switch(r){
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
           }

        }else{
            printf("%d",r);
        }


    printf("%d \n",d);

    return 0;


}
