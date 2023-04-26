#include <stdio.h>
#include <stdlib.h>

int main (){
    float celsius = 0;
    float fahrenheit = 0;

    printf("insira uma temperatura em graus celsius (C): ");
    scanf ("%f", &celsius);
    printf("%f", celsius);

    fahrenheit = (1.8*celsius)+32;

    printf ("os graus celsius eram: %.2f", celsius);
    printf ("/apos realizar a conta '(9*%.2f+160)/5', conseguimos o resultado: %.2f", celsius, fahrenheit);
    
}