#include <stdio.h>

int main(){
    int ano;

    printf("Digite um ano e tecle enter\n");
    scanf("%d", &ano);

    if( ano % 4 == 0 ){
        printf("Este ano %d é BISSEXTO\n",ano);
    }
else{
    printf("Este ano %d NÃO é BISSEXTO\n",ano);

}
return 0;

}
