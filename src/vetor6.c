#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    system("clear");
    char cidade[10]="Guarulhos";
    int i;
    for(i=0; i<9; i++){
        printf("%c | ",cidade[i]);
    }
    printf("\n");

    return 0;
}
