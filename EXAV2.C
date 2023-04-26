#include <stdio.h>
#include <stdlib.h>

int main(){
    float altura, valor, peso;

    printf("Peso: ");
    scanf("%f", &peso);
    printf("Altura: ");
    scanf("%f", &altura);

    valor=peso/(altura*altura);
    printf("IMC: %.2f", valor);
    
    return 0;
}