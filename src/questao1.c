#include <stdio.h>

int main() {
    int N;

    // Solicita ao usuário que digite um número
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    // Verifica se o número é positivo
    if (N < 0) {
        printf("Por favor, digite um número positivo.\n");
    } else {
        printf("Números de 0 até %d:\n", N);
        for (int i = 0; i <= N; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}


