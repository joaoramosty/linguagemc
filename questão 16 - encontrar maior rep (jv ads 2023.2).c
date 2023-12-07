#include <stdio.h>

void encontrarMaiorRepeticoes(int vetor[], int tamanho, int *maiorElemento, int *numRepeticoes) {
    *maiorElemento = vetor[0]; 
    *numRepeticoes = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > *maiorElemento) {
            *maiorElemento = vetor[i];
        }
    }

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == *maiorElemento) {
            (*numRepeticoes)++;
        }
    }
}

int main() {
    int valores[100];
    int tamanho, maiorElemento, numRepeticoes;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Digite os %d valores inteiros do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &valores[i]);
    }

    encontrarMaiorRepeticoes(valores, tamanho, &maiorElemento, &numRepeticoes);

    printf("O maior elemento do vetor é: %d\n", maiorElemento);
    printf("O número de vezes que o maior elemento ocorreu no vetor é: %d\n", numRepeticoes);

    return 0;
}
