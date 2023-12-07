#include <stdio.h>

int main() {
    int matriz[5][5];
    int soma = 0;

    printf("Digite os elementos da matriz 5x5:\n");

    // Preenchendo a matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Somando os elementos acima da diagonal principal
            if (j > i) {
                soma += matriz[i][j];
            }
        }
    }

    printf("\nA soma dos elementos acima da diagonal principal é: %d\n", soma);

    return 0;
}
