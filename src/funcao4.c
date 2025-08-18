#include <stdio.h>
#include <stdlib.h>
#include "../lib/funcao4.h"

int main() {
    system("clear"); // Limpa a tela do terminal
    int x = 30; // Declaração e inicialização de uma variável inteira
    printf("Valor no main%d - %p\n", x, &x); // Imprime o valor e o endereço da variável x
    
    valor1(x);
    printf("\n");
    valor2(&x);
    printf("\n"); // Chama a função valor1 passando x por valor
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}   
   