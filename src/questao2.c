#include <stdio.h>

int main() {
    int N;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Por favor, insira um número positivo.\n");
        return 1;
    }

    for (int i = N; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}
