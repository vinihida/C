#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    system("cls");
    system("color a");
    int x, y;
    printf("Digite um numero: \n");
    scanf("%d", &x);
    printf("Digite outro numero: \n");
    scanf("%d", &y);
    
    if(x != 0){
        printf("Primeiro numero verdadeiro: %d\n", x);
    }
    else{
        printf("Primeiro numero falso: %d\n", x);
    }
    if(y != 0){
        printf("Segundo numero verdadeiro: %d\n", y);
    }
    else{
        printf("Segundo numero falso: %d\n", y);
    }

    return 0;
}