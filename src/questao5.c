#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear"); // Limpa a tela do terminal
    int i;
    int soma = 0;

    for (i = 1; i <=50; i++) {
        if (i % 2 == 0) { // Verifica se o número é par
            printf("%d + %d = ", soma, i);
            soma += i; // Adiciona o número par à soma
            printf("%d\n", soma); // Exibe a soma atualizada
        }
        

    }
printf("A soma dos 50 primeiros números pares é: %d\n", soma);
return 0;
      
}
 




