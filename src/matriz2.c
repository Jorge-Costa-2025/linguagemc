#include<stdio.h>
#include<stdlib.h>

int main()
{
    int valores[5][4];

    valores [0][0]=10;
    valores [0][1]=21;
    valores [0][2]=14;
    valores [0][3]=15;

    valores [1][0]=20;
    valores [1][1]=32;
    valores [1][2]=45;
    valores [1][3]=60;

    valores [2][0]=80;
    valores [2][1]=10;
    valores [2][2]=110;
    valores [2][3]=90;

    valores [3][0]=88;
    valores [3][1]=5;
    valores [3][2]=18;
    valores [3][3]=23;

    valores [4][0]=55;
    valores [4][1]=1;
    valores [4][2]=69;
    valores [4][3]=666;

    int linha, coluna;
    for ( linha = 0; linha < 5; linha++){
   
       
        for ( coluna = 0; coluna < 4; coluna++){
       
            if (valores[linha][coluna]%2==0)
            {
                printf(" | %d |", valores[linha][coluna]);
            }
        }
            printf("\n");
}
       
   
    return 0;
}
