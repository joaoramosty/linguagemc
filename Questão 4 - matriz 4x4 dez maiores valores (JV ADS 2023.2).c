#include <stdio.h>

int main() {
    int matriz[4][4];
    int contador = 0;

    printf("Digite os elementos da matriz 4x4:\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    printf("\nA matriz possui %d valor(es) maior(es) que 10.\n", contador);

    return 0;
}
