#include <stdio.h>

int main() {
    int vetor[8];
    int x, y;

    printf("Digite 8 valores para o vetor:\n");

    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite dois valores (X e Y) correspondentes a duas posições no vetor:\n");
    scanf("%d %d", &x, &y);

    if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        int soma = vetor[x] + vetor[y];
        printf("A soma dos valores encontrados nas posições %d e %d é: %d\n", x, y, soma);
    } else {
        printf("Os valores de X e Y devem estar entre 0 e 7 (inclusive) para serem posições válidas no vetor.\n");
    }

    return 0;
}
