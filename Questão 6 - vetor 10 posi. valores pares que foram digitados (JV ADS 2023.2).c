#include <stdio.h>

int main() {
    int vetor[10];
    int countPares = 0;

    printf("Digite 10 valores para preencher o vetor:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            countPares++;
        }
    }

    printf("A quantidade de valores pares armazenados no vetor é: %d\n", countPares);

    return 0;
}
