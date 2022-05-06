#include<stdio.h>
#include<string.h>


int main(){

//STRINGS//

    char palavra[50]={"Bom dia flor do dia"};
    char *pt;

    pt=strtok(palavra," ");
    while(pt){
        printf("token: %s\n",pt);
    }


}
