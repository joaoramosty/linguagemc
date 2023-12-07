#include <stdio.h>

void findMaiorVal(int vetor[], int tamanho, int *maior, int *menor) {
    *maior = vetor[0];
    *menor = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int valores[100];
    int tamanho, maior, menor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Digite os %d valores inteiros do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &valores[i]);
    }

    findMaiorVal(valores, tamanho, &maior, &menor);

    printf("O maior elemento do vetor é: %d\n", maior);
    printf("O menor elemento do vetor é: %d\n", menor);

    return 0;
}
