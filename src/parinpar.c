#include <stdio.h>

int main(){
    int numero;
    printf("digite um numero e tecle enter\n");
    scanf("%d",&numero);
    if(numero % 2 == 0){
        printf(" Então man, o numero %d é PAR\n",numero);
    
    }
    else{
       printf("O numero %d é IMPAR\n",numero); 
    }
    return 0;


}