#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor_1, valor_2, soma;
    int V[5];
    printf("Insira o valor do primeiro salario: \n");
    scanf("%d", &valor_1);
    printf("Insira o valor do segundo salario: \n");
    scanf("%d", &valor_2);

    soma = valor_1 + valor_2;
    printf("Valor total: %d\n", soma);
    int resto_divisao = soma % 5;
    /* Armazenando resto da divisão da soma do salário por 5 */

    while(resto_divisao != 0){
        /* Verifica a condição: enquanto resto da divisão for diferente de 0
            soma +1 no valor do sário com o soma++, atualizando o valor do resto da divisão.
         */
        soma++;
        resto_divisao = soma % 5;
    }
    printf("Soma arredondada = %d\n", soma);
    int i=0; 
    /* while do 100 */
    while(soma > 0){
        soma = soma - 100;
        if(soma < 0){
            soma = soma + 100;
            break;
        }
        i++;
    }
    printf("%d x 100\n", i);
    
    /* while do 50 */
    i=0;
    while(soma > 0){
        soma = soma - 50;
        if(soma < 0){
            soma = soma + 50;
            break;
        }
        i++;
    }
    printf("%d x 50\n", i);
   /* while do 20 */
   
    i=0;
    while(soma > 0){
        soma = soma - 20;
        if(soma < 0){
            soma = soma + 20;
            break;
        }
        i++;
    }
    printf("%d x 20\n", i);
   
   /* while do 10 */
    i=0;
    while(soma > 0){
        soma = soma - 10;
        if(soma < 0){
            soma = soma + 10;
            break;
        }
        i++;
    }
    printf("%d x 10\n", i);
    
    /* while do 5 */
    i=0;
    while(soma > 0){
        soma = soma - 5;
        if(soma < 0){
            soma = soma + 5;
            break;
        }
        i++;
    }
    printf("%d x 5\n", i);
    return 0;
}