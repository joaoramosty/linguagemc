#include <stdio.h>

int main() {
    int matriz[4][4];
    int maiorValor, linha, coluna;

    printf("Digite os elementos da matriz 4x4:\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if ((i == 0 && j == 0) || matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("\nO maior valor na matriz é: %d\n", maiorValor);
    printf("Localização (linha e coluna): [%d][%d]\n", linha, coluna);

    return 0;
}
