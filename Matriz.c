#include <stdio.h>
#include <stdlib.h>

// Vinicius Hidalgo Silva - 202302381201
// Otavio Rodrigues Machado - 202302380972
// Wellington José de Lima - 202302380921

int main() {
    int i, j, b, a;

    printf("Informe a quantidade de produtos: ");
    scanf("%d", &i);

    float matriz[i][12];
    char produtos[i][100];
    void resultado(float matriz[i][12], int linhas, int colunas, char produtos[i][100]);
    a = 5;
    resultado(matriz, i, 12, produtos);
    while (1) {
        printf("Qual coluna deseja alterar?\n");
        scanf("%d", &j);

        if (j != -1) {
            printf("Qual linha deseja alterar?\n");
            scanf("%d", &b);

            printf("Qual valor deseja alterar?\n");
            scanf("%f", &matriz[b][j]);
            printf("\nValores da matriz:\n");

            for (a = 0; a < i; a++) {
                printf("%s: ", produtos[a]);
                for (int col = 0; col < 3; col++) {
                    printf("%.2f ", matriz[a][col]);
                }
                printf("\n");
            }
        } else {
            break;
        }
    }

    return 0;
}

void resultado(float matriz[][12], int linhas, int colunas, char produtos[][100]) {
    int i, j;

    printf("\nDigite valores para os elementos da matriz:\n\n");

    for (i = 0; i < linhas; i++) {
        printf("Digite o nome do produto: ");
        scanf("%s", produtos[i]);
        for (j = 0; j < colunas; j++) {
            printf("Elemento[%d][%d] = ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nValores da matriz:\n");

    for (i = 0; i < linhas; i++) {
        printf("%s: ", produtos[i]);
        for (j = 0; j < colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}