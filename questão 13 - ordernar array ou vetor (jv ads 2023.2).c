#include <stdio.h>

void ordArray(int vetor[], int tamanho) {
    int i, j, aux;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    int valores[100];
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Digite os %d valores inteiros do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &valores[i]);
    }

    ordArray(valores, tamanho);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}
