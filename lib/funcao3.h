#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
    printf("============= projeto ============\n");
    printf("=                                =\n");
    printf("=                                =\n");
    printf("========== Programa em C =========\n");
    printf("\n\n");

}
int potencia(int base, int expoente){
    int rs = base;
    for(int i = 1; i < expoente; i++){
        rs *= base;
    }
    return rs;
}

float jurosSimples(float preco, float taxa){
    return preco * (taxa / 100);
}

void separador(){
    int i;
    for(i = 1; i <= 50; i++){
        printf("#");
    }
    printf("\n");
}