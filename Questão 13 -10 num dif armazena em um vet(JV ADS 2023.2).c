#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, num;

    printf("Digite 10 números diferentes para preencher o vetor:\n");

    for (i = 0; i < 10; i++) {
        int repetido;
        do {
            repetido = 0;
            scanf("%d", &num);

            for (j = 0; j < i; j++) {
                if (vetor[j] == num) {
                    printf("Número já digitado. Digite outro número: ");
                    repetido = 1;
                    break;
                }
            }

            if (!repetido) {
                vetor[i] = num;
            }
        } while (repetido);
    }

    printf("Vetor final digitado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
