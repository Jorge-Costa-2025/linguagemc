#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int linha = 1;
    // Variável para armazenar o número da linha
    int coluna = 1;
    // Variável para armazenar o número da coluna

    while (linha <= 10) {
        while (coluna <= 20) {
            printf("*");
            // Imprimir o asterisco na tela
            coluna++;
            // Incrementar a coluna
        }
        coluna = 1;
        printf("\n");
        linha++;

        

        
            
        }
        return 0;

}

