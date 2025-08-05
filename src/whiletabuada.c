#include <stdio.h>
#include <stdlib.h>

int main () {
    system("clear");
    // Limpar a tela com system clear
    int num, cont, rs;
    // Variável para armazenar o número e o contador
    cont = 1;
    printf("Digite o numero da tabuada que deseja fazer\n");
    scanf("%d", &num);
    // Ler o número da tabuada que o usuário deseja fazer
    while (cont <= 10) {

        rs = num * cont;
        // Calcular o resultado da tabuada
        printf("%d x %d = %d\n", num, cont, rs);
        // Imprimir o resultado da tabuada
        cont++;
        // Incrementar o contador
    }
    // Retornar 0 para indicar que o programa terminou corretamente
    return 0;
    

}