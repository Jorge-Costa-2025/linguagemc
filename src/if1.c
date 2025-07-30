#include <stdio.h>
int main(){
int pontuacao = 85;
char conceito;
if (pontuacao >=90){ // primeira condição 
    conceito = 'A';
} else if (pontuacao >= 80) { // segunda condição, só avaliada se a primeira for falsa 
    conceito = 'B';
} else if (pontuacao >= 70){ // Terceira condição, só avaliada se as anteriores forem falsas
    conceito = 'C';
} else if (pontuacao >= 60){ // Quarta condição, 
    conceito = 'D'; 
} else { // se nenhuma das condiçoes acima for verdadeira
    conceito ='F';

}
printf("Pontuação: %d -> Conceito: %c\n ", pontuacao, conceito);

return 0;
}