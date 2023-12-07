#include <stdio.h>

int main() {
    int matriz[3][3];
    int somaDiagonal = 0;

    printf("Digite os elementos da matriz 3x3:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == j) {
                somaDiagonal += matriz[i][j];
            }
        }
    }

    printf("\nA soma dos valores da diagonal principal é: %d\n", somaDiagonal);

    return 0;
}
