#include <stdio.h>
#include <stdlib.h>

void valor1(int num){
    printf("%d\n - %p",num, &num);

}

void valor2(int *num){
    printf("%d\n - %p\n", *num, num);
}

