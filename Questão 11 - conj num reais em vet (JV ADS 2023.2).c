#include <stdio.h>

int main() {
    float vetorOriginal[20], vetorQuadrados[20];
    int tamanho;

    printf("Digite o número de elementos (até 20): ");
    scanf("%d", &tamanho);

    printf("Digite %d números reais:\n", tamanho);

    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vetorOriginal[i]);
        vetorQuadrados[i] = vetorOriginal[i] * vetorOriginal[i]; // Calcula o quadrado e armazena no vetorQuadrados
    }

    printf("\nVetor Original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorOriginal[i]);
    }
    printf("\n");

    printf("\nVetor dos Quadrados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorQuadrados[i]);
    }
    printf("\n");

    return 0;
}
