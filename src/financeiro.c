#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/financeiro.h"


int main() {
    char nome[100];
    float salario_bruto, desconto_convenio, percentual_premio;
    float valor_desconto, valor_premio, salario_liquido;

    // Solicita os dados ao usuário
    printf("Digite o nome do funcionário:\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o '\n' do final
    printf("Digite o salário bruto (use ponto para casas decimais):\n");
    scanf("%f", &salario_bruto);

    printf("Digite o percentual de desconto do convênio (ex: 0.05 para 5%%):\n");
    scanf("%f", &desconto_convenio);

    printf("Digite o percentual de prêmio (ex: 0.10 para 10%%):\n");
    scanf("%f", &percentual_premio);

    // Calcula os valores
    valor_desconto = salario_bruto * desconto_convenio;
    valor_premio = salario_bruto * percentual_premio;
    salario_liquido = salario_bruto - valor_desconto + valor_premio;

    // Exibe os resultados
    printf("\n--- Resultado ---\n");
    printf("Nome: %s\n", nome);
    printf("Salário Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto do Convênio: R$ %.2f\n", valor_desconto);
    printf("Prêmio: R$ %.2f\n", valor_premio);
    printf("Salário Líquido: R$ %.2f\n", salario_liquido);

    // Grava os dados em um arquivo
    FILE *arquivo = fopen("funcionario.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "Nome: %s\nSalário Bruto: %.2f\nDesconto: %.2f\nPrêmio: %.2f\nSalário Líquido: %.2f\n\n",
            nome, salario_bruto, valor_desconto, valor_premio, salario_liquido);
    fclose(arquivo);

    printf("\nDados gravados com sucesso no arquivo 'funcionario.txt'.\n");

    return 0;
}

