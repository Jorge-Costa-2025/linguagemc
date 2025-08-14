#include <stdio.h>
#include <stdlib.h>         

int main() {
    system("clear"); // Limpa a tela do terminal

    int idades [5]= {15, 18, 56, 41, 5};
    printf("%d - %p\n" , idades[0], &idades[0]);
    printf("%d - %p\n" , idades[1], &idades[1]);
    printf("%d - %p\n" , idades[2], &idades[2]);
    printf("%d - %p\n" , idades[3], &idades[3]);
    printf("%d - %p\n" , idades[4], &idades[4]);
    printf ("==========================for============================\n");
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d - %p\n", idades[i], &idades[i]);
    }
    
    printf ("==========================ponteiro============================\n");
    // Vamos obter a posição de momoria do primemiro elemento do vetor
    // e atribuir a um ponteiro p
    int *p = idades; // Ponteiro que aponta para o primeiro elemento do vetor
    printf("O primeiro elemento do arrey é: %d - %p\n", *p, p);
    // incrementando o ponteiro para apontar para o próximo elemento do vetor
    p++;
    printf("O segundo elemento do arrey é: %d - %p\n", *p, p);
    p++;
    printf("O terceiro elemento do arrey é: %d - %p\n", *p, p);
    p++;
    printf("O quarto elemento do arrey é: %d - %p\n", *p, p);
    p++;
    printf("O quinto elemento do arrey é: %d - %p\n", *p, p);
    p++;
    printf ("========================For com ponteiro==========================\n");
    int *ptr = idades; // Ponteiro que aponta para o primeiro elemento do vetor
    for (i = 0; i < 5; i++) {
        printf("O %d º elemento %d - %p\n", i+1 , *ptr, ptr);
        ptr++; // Incrementa o ponteiro para o próximo elemento
    }


    
    return 0;



}