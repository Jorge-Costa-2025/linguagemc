#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int linha = 15;
    int coluna;

    while (linha >= 1) {
        coluna = 1;
        while (coluna <= linha) {
            printf("#$#");
            coluna++;
        }
        printf("\n");
        linha--;
    }

    return 0;
}
