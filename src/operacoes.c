/* Este programa pede dois numeros e com eles 
realiza as quatro operaçoes matematica*/

#include <stdio.h>

int main() {
    float numero1, numero2;
    float soma, subtrair, dividir, multiplicar;

    printf("Digite o primeiro número e tecle Enter: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número e tecle Enter: ");
    scanf("%f", &numero2);

    soma = numero1 + numero2;
    subtrair = numero1 - numero2;
    dividir = numero1 / numero2;
    multiplicar = numero1 * numero2;

    printf("\nSegue os resultados:\n");
    printf("O resultado da soma é: %.2f\n", soma);
    printf("O resultado da subtração é: %.2f\n", subtrair);
    printf("O resultado da divisão é: %.2f\n", dividir);
    printf("O resultado da multiplicação é: %.2f\n", multiplicar);

    return 0;
}
