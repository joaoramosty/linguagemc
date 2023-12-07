#include <stdio.h>

int main() {
    const int alunos = 10;
    const int provas = 3;
    float notas[alunos][provas];

    printf("Digite as notas dos alunos em cada uma das %d provas:\n", provas);
    for (int i = 0; i < alunos; i++) {
        for (int j = 0; j < provas; j++) {
            printf("Nota do aluno %d na prova %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    int piorNotaProva1 = 0, piorNotaProva2 = 0, piorNotaProva3 = 0;

    for (int i = 0; i < alunos; i++) {
        if (notas[i][0] <= notas[i][1] && notas[i][0] <= notas[i][2]) {
            piorNotaProva1++;
        } else if (notas[i][1] <= notas[i][0] && notas[i][1] <= notas[i][2]) {
            piorNotaProva2++;
        } else {
            piorNotaProva3++;
        }
    }

    printf("\nNúmero de alunos com a pior nota na prova 1: %d\n", piorNotaProva1);
    printf("Número de alunos com a pior nota na prova 2: %d\n", piorNotaProva2);
    printf("Número de alunos com a pior nota na prova 3: %d\n", piorNotaProva3);

    return 0;
}
