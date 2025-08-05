#include <stdio.h>
#include <stdlib.h>

int main() {
    // Limpar a tela com system clear
    system("clear");

    // Variável para armazenar o número
    int x = 1;
    while (x <= 200) {
        // Verificar se o número é múltiplo de 4
        if (x % 4 == 0) {
            printf("%d é múltiplo de 4\n", x);
        }
        // Incrementar o número
        x++;
    }
    
    // Retornar 0 para indicar que o programa terminou corretamente
    return 0;                           
    
    

}