#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    system("clear");
    char nome[10]="Roberto";
    char sobrenome[6]="Gomes";
    printf("Letra==============Dec===============Bin============Memória\n");
   
    int i;
    for(i=0; i<10 ;i++)
    {
         printf("%c=================%d================%i===============%p\n", nome[i],nome[i],nome[i],&nome[i] );
    }
    return 0;
}