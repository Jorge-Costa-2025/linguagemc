#include <stdio.h>

int main (){

    int placa;
    printf("Digite o numero final da placa do veiculo\n");
    scanf("%d",&placa);

    if ( placa == 1 || placa == 2){
        printf("Rodizio de Segunda-feira\n");

    }
    else if ( placa == 3 || placa == 4){
        printf("Rodizio de Terça-Feira\n");
    }
    else if ( placa == 5 || placa == 6){
        printf("Rodizio de Quarta-Feira\n");
    }
    else if ( placa == 7 || placa == 8){
        printf("Rodizio de Quinta-Feira");
    }
    else if ( placa == 9 || placa == 0){
        printf("Rodizio de Sexta-Feira\n");
    }
    else {
        printf("Final de placa invalido\n");
    } 
    return 0;
}