#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo_inicial, salario, saldo_parcial, retirada;
    printf("Saldo inicial: ");
    printf("Salario: ");
    scanf("%f%f", &saldo_inicial, &salario);
    printf("Extrato bancario: \n");
    printf("Saldo inicial: %.2f \n", saldo_inicial);
    printf("Salario: %.2f \n", salario);
    saldo_parcial = saldo_inicial + salario;
    printf("Saldo parcial: %.2f\n", saldo_parcial);
    
    for(int i = 1; i<=3; i++){
        printf("Retirada: ");
        scanf("%f", &retirada);
        printf("%da retirada: %.2f\n", i, retirada);
        saldo_parcial = saldo_parcial - retirada;
        if(i!=3){
            printf("Saldo parcial: %.2f \n", saldo_parcial);
        }else{
            printf("Saldo final: %.2f", saldo_parcial);
        }
    }
}