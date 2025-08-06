#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int linhas = 15;

    for (int i = 1; i <= linhas; i++) {
        // Imprime espaços antes dos @ para centralizar
        for (int espaco = 1; espaco <= linhas - i; espaco++) {
            printf(" ");
        }

        // Imprime os @ da linha atual
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("@");
        }

        printf("\n");
    }

    return 0;
}
