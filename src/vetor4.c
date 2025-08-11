#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");

    int valor;
    int qtd=0;
    int i;
    int vetor[qtd];
    printf("Digite um valor \n");
    scanf("%d", &valor);
    while(valor != 99){
        vetor[qtd] = valor;
        qtd++;
        printf("Digite outro valor \n");
        scanf("%d", &valor);
    }
}    