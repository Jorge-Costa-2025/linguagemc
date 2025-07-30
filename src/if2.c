#include <stdio.h>
int main(){
    int opcao;
    printf("Selecione uma opção\n");
    printf("1. Ver Saldo\n");
    printf("2. Fazer Saque\n");
    printf("3. Fazer Depósito\n");
    printf("4. Sair \n");
    printf("Digite a sua opção: ");
    scanf("%d",&opcao); // Lê a opção do usuario 
    if (opcao == 1) {
        printf("Você escolheu 'Ver Saldo'.\n");
        // Lógica para ver o saldo
    }else if (opcao == 2) {
        printf("Você escolheu 'Fazer Saque'.\n ");
        // Lógica para fazer saque
    }else if (opcao ==3 ){
        printf("Você escolheu 'Fazer Deposito'.\n" );
        // Lógica para fazer depósito
    }else if (opcao ==4 ){
        printf("Saindo do Programa. Até mais\n");
    }else {
        printf("Opção invalida. Por favor, escolha um número entre 1 e 4.\n");
    }
    return 0;
    
}