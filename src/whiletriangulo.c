#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int linha = 1;
    // Variável para armazenar o número da linha
    int coluna = 1;
    // Variável para armazenar o número da coluna

    while (linha <= 15) {
        while (coluna <= linha) {
            printf("@");
            coluna++;
        } 
        coluna = 1;
        printf("\n");
        linha++;
        // Incrementar a linha  

    }        
    return 0;
}
