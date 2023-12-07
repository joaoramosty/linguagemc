#include <stdio.h>

int main() {
    int matriz[3][3];
    int menorValor;

    printf("Digite os elementos da matriz 3x3:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if ((i == 0 && j == 0) || matriz[i][j] < menorValor) {
                menorValor = matriz[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < menorValor) {
                menorValor = matriz[i][j];
            }
        }
    }

    printf("\nO menor valor na matriz é: %d\n", menorValor);

    return 0;
}
