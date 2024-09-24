#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double base, altura, perimetro, area, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);

    printf("Digite o altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = (base * 2) + (altura * 2);
    diagonal = sqrt(base * base + altura * altura);

    printf("Area do retangulo = %.4lf\n", area);
    printf("Perimetro do retangulo = %.4lf\n", perimetro);
    printf("Diagonal do retangulo = %.4lf\n", diagonal);

    return 0;
}
