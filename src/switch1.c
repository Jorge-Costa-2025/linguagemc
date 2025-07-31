#include <stdio.h>
// Vamos incluir uma nova biblioteca de sistema
// Que possui o comando clear
#include <stdlib.h>

int main() {
    // Vamos chamar a funcao de sistema para executar o comando clear
    // que limpa a tela do terminal
    system("clear");

    // Declarando uma variavel inteira
    int nummes;

    // Solicitando ao usuario que digite um numero
    printf("================ Programa mês =================\n"); 
    printf("\nPergunte ao programa. Qual é mês de numero: ");
    scanf("%d", &nummes);
    printf("\n\n==============================================\n");

    switch (nummes)
    {
    case 1:
        printf("\nJaneiro\n");
        break;
    case 2:
        printf("Fevereiro\n");
        break;
    case 3:
        printf("Março\n");
        break;
    case 4:
        printf("Abril\n");
        break;
    case 5:
        printf("Maio\n");
        break;
    case 6:
        printf("Junho\n");
        break;
    case 7:
        printf("Julho\n");
        break;
    case 8:
        printf("Agosto\n");
        break;
    case 9:
        printf("Setembro\n");
        break;
    case 10:
        printf("Outubro\n");
        break;
    case 11:
        printf("Novembro\n");
        break;
    case 12:
        printf("Dezembro\n");
        break;
    // Caso o usuario digite um numero fora do intervalo de 1 a 12
    // O programa informa que o numero é invalido
    // E encerra o programa
    // O comando break é usado para sair do switch
    // E não executar os outros casos
    // O default é usado para tratar casos não previstos
    default:
        printf("Este mês não existe, digite um número entre 1 e 12.\n");
    }
    return 0;
}
// O programa termina com o retorno 0, indicando que foi executado com sucesso
// O comando return 0 é usado para indicar que o programa terminou sem erros
// E o valor 0 é retornado para o sistema operacional
// O comando return é usado para sair da função main e retornar um valor para o sistema operacional
// O valor 0 é usado para indicar que o programa foi executado com sucesso
// E não houve erros durante a execução     

