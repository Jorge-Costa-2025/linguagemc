#include <stdio.h>
#include <stdlib.h>

void mensagem(){
    printf("Olá, seja bem vindo!\n");
}

void separador(){
    int i;
    for(i=0; i<5; i++){
        printf("-");
}

}

int precoTotral(int qtd, int preco){
    return qtd * preco;

}