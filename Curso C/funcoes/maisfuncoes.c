#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


void maiusculo(char str0[],char str1[]){

    int i=0;

    while(str0[i]!='\0'){
        str1[i] = toupper(str0[i]);
        i++;
    }
    str1[i]='\0';

}

void minusculo(char str0[],char str1[]){

    int i=0;

    while(str0[i]!='\0'){
        str1[i] = tolower(str0[i]);
        i++;
    }
    str1[i]='\0';

}

int main(){

   char string0[]= "Ola. Bom dia.";
   char string1[50];

   printf("%s\n",string0);

   maiusculo(string0,string1);
   printf("%s\n",string1);

   minusculo(string0,string1);
   printf("%s\n",string1);

    return 0;
}
