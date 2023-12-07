#include <stdio.h>

float calcMedNotas(float notas[], int tamanho) {
    float soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    return soma / tamanho;
}

int main() {
    float notas[10];
    int tamanho = 10;
    float media;

    printf("Digite as notas dos 10 alunos:\n");

    for (int i = 0; i < tamanho; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    media = calcMedNotas(notas, tamanho);

    printf("A média das notas dos alunos é: %.2f\n", media);

    return 0;
}
