#include <stdio.h>

// Vinicius Hidalgo Silva - 202302381201
// Otavio Rodrigues Machado - 202302380972
// Wellington José de Lima - 202302380921

float conta (float notas[], int n);

int main(){

    int n;
    float resultado;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &n);

    float notas [n];  // {6,6,6,6,6}

    for(int i = 0 ; i < n ; i++){

        printf("Qual a nota do %d aluno?: ",i+1);
        scanf("%f", &notas[i]); // {6,6,6,6,6}
    }

    resultado = conta(notas, n);
    printf("A media da turma eh: %f ", resultado);

    return 0;
}

float conta (float notas[], int n){
    float soma = 0;
    float media;
    for(int i = 0 ; i < n ; i++){
        soma += notas[i];
    }
    return soma/n;
}