#include <stdio.h>
#include <string.h>

#define MAX_EXTRATO 100

int main() {
    int opcao;
    float saldo = 1000.0; // saldo inicial
    char extrato[MAX_EXTRATO][100];
    int qtdOperacoes = 0;

    do {
        printf("\n--- MENU BANCÁRIO ---\n");
        printf("1. Ver Saldo\n");
        printf("2. Fazer Saque\n");
        printf("3. Fazer Depósito\n");
        printf("4. Ver Extrato\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Saldo atual: R$ %.2f\n", saldo);
        } else if (opcao == 2) {
            float valor, taxa = 2.5;
            printf("Digite o valor do saque: R$ ");
            scanf("%f", &valor);
            if (valor + taxa <= saldo) {
                saldo -= (valor + taxa);
                printf("Saque de R$ %.2f realizado com taxa de R$ %.2f\n", valor, taxa);
                sprintf(extrato[qtdOperacoes++], "Saque: -R$ %.2f (Taxa: R$ %.2f)", valor, taxa);
            } else {
                printf("Saldo insuficiente!\n");
            }
        } else if (opcao == 3) {
            float valor;
            printf("Digite o valor do depósito: R$ ");
            scanf("%f", &valor);
            saldo += valor;
            printf("Depósito de R$ %.2f realizado com sucesso.\n", valor);
            sprintf(extrato[qtdOperacoes++], "Depósito: +R$ %.2f", valor);
        } else if (opcao == 4) {
            printf("\n--- EXTRATO ---\n");
            for (int i = 0; i < qtdOperacoes; i++) {
                printf("%s\n", extrato[i]);
            }
            if (qtdOperacoes == 0) {
                printf("Nenhuma operação realizada.\n");
            }
        } else if (opcao == 5) {
            printf("Saindo do sistema. Até logo!\n");
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 5);

    return 0;
}
