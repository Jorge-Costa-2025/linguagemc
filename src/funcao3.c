#include <stdio.h>
#include <stdlib.h>
#include "../lib/funcao3.h"

int main() {
    system("clear"); // Limpa a tela do terminal
    cabecalho(); // Chama a função cabecalho
    int p = potencia(2, 4); // Calcula 2^4
    float juros = jurosSimples(500.00, 6.0); // Calcula juros simples de 1000 com taxa de 5%
    printf ("O resultado da potencia é: %d\n", p); // Imprime o resultado da potencia
    printf ("O resultado do juros simples é: %.2f\n", juros); // Imprime o resultado dos juros simples
    separador(); // Chama a função separador
    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}

