#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int valor1 = 0, valor2 = 0;
    int notas[5] = {100, 50, 20, 10, 5};
    int qtd100 = 0, qtd50 = 0, qtd20 = 0, qtd10 = 0, qtd5 = 0;
    printf("Process started\n");

    printf("Valor 1: ");
    scanf("%d", &valor1);
    printf("%d\n", qtd100);
    int restante = valor1;

    for (int i = 0; i < 5; i++) {
        int x = notas[i];
        int roudedto5 = floor(restante / 5) * 5;
        int qtdNotasAtuais = floor(roudedto5 / x);

        if (qtdNotasAtuais == 0) {
            continue;
        }

        restante = valor1 % x;

        if (x == 100) {
            qtd100 += qtdNotasAtuais;
        }
        else if (x == 50) {
            qtd50 += qtdNotasAtuais;
        }
        else if (x == 20) {
            qtd20 += qtdNotasAtuais;
        }
        else if (x == 10) {
            qtd10 += qtdNotasAtuais;
        }
        else if (x == 5) {
            qtd5 += qtdNotasAtuais;
        }
    }

    printf("Valor 2: ");
    scanf("%d", &valor2);
    restante = valor2;

    for (int i = 0; i < 5; i++) {
        int x = notas[i];
        int roudedto5 = ceil(restante / 5) * 5;
        int qtdNotasAtuais = floor(roudedto5 / x);

        if (qtdNotasAtuais == 0) {
            continue;
        }

        restante = restante % x;

        if (x == 100) {
            qtd100 += qtdNotasAtuais;
        }
        else if (x == 50) {
            qtd50 += qtdNotasAtuais;
        }
        else if (x == 20) {
            qtd20 += qtdNotasAtuais;
        }
        else if (x == 10) {
            qtd10 += qtdNotasAtuais;
        }
        else if (x == 5) {
            qtd5 += qtdNotasAtuais;
        }
    }

    printf("$100:%d\n$50:%d\n$20:%d\n$10:%d\n$5:%d\n", qtd100, qtd50, qtd20, qtd10, qtd5);
}