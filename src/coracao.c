#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");

    int i, j;
    int altura = 6;

    for (i = altura / 2; i <= altura; i += 2) {
        // Espaços antes do primeiro arco
        for (j = 1; j < altura - i; j += 2) {
            printf(" ");
        }

        // Primeiro arco
        for (j = 1; j <= i; j++) {
            printf("@");
        }

        // Espaços entre os dois arcos
        for (j = 1; j <= altura - i; j++) {
            printf(" ");
        }

        // Segundo arco
        for (j = 1; j <= i; j++) {
            printf("@");
        }

        printf("\n");
    }

    // Parte inferior do coração
    for (i = altura; i >= 1; i--) {
        for (j = 0; j < altura - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= (i * 2) - 1; j++) {
            printf("@");
        }

        printf("\n");
    }

    return 0;
}
