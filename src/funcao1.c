#include <stdio.h>
#include <stdlib.h>

/* void: significa vazio e. é ujsado para funmções que NÂO 
retornar valores. Elas possuem saida pré definida*/


void mensagem() {
    printf("Olá, seja bem vindo!\n");
}  

int soma (int x, int y) {
    return x + y; // Retorna a soma de x e y
}

int main() {
    system("clear"); // Limpa a tela do terminal
    mensagem(); // Chama a função mensagem
    printf("A soma de 5 e 4 é igual a: %d\n", soma(5,4 )); // Chama a função soma e imprime o resultado

    return 0; // Retorna 0 para indicar que o programa terminou corretamente

}

  


