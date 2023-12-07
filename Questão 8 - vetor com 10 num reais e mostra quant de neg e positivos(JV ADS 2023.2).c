#include <stdio.h>

int main() {
    float vetor[10];
    int i, countNegativos = 0;
    float somaPositivos = 0;

    printf("Digite 10 números reais para preencher o vetor:\n");

    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            countNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }

    printf("Quantidade de números negativos no vetor: %d\n", countNegativos);
    printf("Soma dos números positivos no vetor: %.2f\n", somaPositivos);

    return 0;
}
