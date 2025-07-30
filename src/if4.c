#include <stdio.h>
int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("%d é um numero positivo.\n", numero);
    }else {
        printf("%d é um numero negativo ou zero. \n", numero);
    }
return 0;
}

