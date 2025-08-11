#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int valores[5] = {15, 0, 6, 50, 18};
    int i;
    int soma = 0;
    for (i = 0; i < 5; i++) {
        soma += valores[i];     
    }
    printf("A soma dos valores é: %d\n", soma);
    return 0;   
    
}