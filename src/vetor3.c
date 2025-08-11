#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int qtd[8];
    qtd[0] = 10;
    qtd[1] = 12;
    qtd[2] = 0;
    qtd[3] = 45;
    qtd[4] = 110;
    qtd[5] = 13;
    qtd[6] = 20;
    qtd[7] = 57;
    int i;
    for (i = 0; i < 8; i++) {
        if (qtd[i] % 2 == 0) {
            printf("%d\n",qtd[i]);
        }
        
    }
    return 0;

}
    