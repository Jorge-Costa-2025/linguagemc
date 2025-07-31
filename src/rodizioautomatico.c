#include <stdio.h>
#include <time.h>

int main() {
    int placa;

    // Obter o dia da semana atual
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int dia_semana = tm.tm_wday; // 0 = Domingo, 1 = Segunda, ..., 6 = Sábado

    // Entrada do usuário
    printf("Digite o número final da placa do veículo (0 a 9): ");
    scanf("%d", &placa);

    if (placa < 0 || placa > 9) {
        printf("Número de placa inválido.\n");
        return 1;
    }

    // Verificar se hoje é dia de rodízio para o final da placa
    int restrito = 0;

    switch (dia_semana) {
        case 1: // Segunda
            if (placa == 1 || placa == 2) restrito = 1;
            break;
        case 2: // Terça
            if (placa == 3 || placa == 4) restrito = 1;
            break;
        case 3: // Quarta
            if (placa == 5 || placa == 6) restrito = 1;
            break;
        case 4: // Quinta
            if (placa == 7 || placa == 8) restrito = 1;
            break;
        case 5: // Sexta
            if (placa == 9 || placa == 0) restrito = 1;
            break;
        default:
            restrito = 0; // Sábado e Domingo não têm rodízio
    }

    // Exibir resultado
    if (restrito) {
        printf("Hoje é dia de rodízio para veículos com final %d. Não pode circular!\n", placa);
    } else {
        printf("Hoje o veículo com final %d pode circular normalmente.\n", placa);
    }

    return 0;
}
