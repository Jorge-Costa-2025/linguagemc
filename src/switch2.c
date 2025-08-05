#include <stdio.h>
#include <stdlib.h>
int main() {
    system("clear");
// chamar o comamdo system clear para limpar a tela do terminal
// criar a variavel do tipo char para quardar a operação matemática
// que pódera ser: + - * / .
char ch;
// criar variavel para quardar dois numeros para operação matemática
int a, b;
printf("================ Programa Calculadora =================\n");
printf("\nDigite a operação matemática (+, -, *, /): ");
ch = getchar();
printf("\n\n Digite um numero e aperte o enter\n");
// vamos capturar o sinal digitado pelo usuário e alocar na variável ch
// usaremos o comando getchar, que vem da biblioteca stdio.h
// Caso voce queira usar o scanf, poderia ser feito ad seguinte forma:
// scanf(" %c", &ch);
// O espaço antes do %c é para ignorar qualquer espaço em branco ou nova linha
// que possa ter sido deixado no buffer de entrada
// Isso é importante para garantir que o scanf leia corretamente o caractere
// digitado pelo usuário.
// Aqui, usamos o scanf para ler o caractere digitado pelo usuário
// e armazená-lo na variável ch.
scanf(" %d%d", &a, &b);
switch (ch) {
    case '+':{
        int c = a + b;
        printf("\nResultado da soma é: %d\n", c);
        break;
    }
    case '-':{
        int d = a - b;
        printf("\nResultado da subtração é: %d\n", d);
        break;
    }
    case '*':{
        int e = a * b;
        printf("\nResultado da multiplicação é: %d\n", e);
        break;
    }
    case '/':{
        int f = a / b;
        printf("\nResultado da divisão é: %d\n", f);
        break;
    }
    break;
    default:
    printf("\nOperação inválida!\n");
}
return 0;

}
        
    
