#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int inicio, fim;

    printf("Digite o primeiro número: ");
    scanf("%d", &inicio);

    printf("Digite o segundo número: ");
    scanf("%d", &fim);

    printf("Contagem de números pares entre %d e %d:\n", inicio, fim);

    // Verifica se o início é menor que o fim
    if (inicio <= fim) {
        for (int i = inicio; i <= fim; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    } else {
        // Caso o início seja maior que o fim, conta regressivamente
        for (int i = inicio; i >= fim; i--) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    }

    printf("\n");
    return 0;
}
