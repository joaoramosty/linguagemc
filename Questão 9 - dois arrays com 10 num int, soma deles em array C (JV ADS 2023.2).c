#include <stdio.h>

int main() {
    int A[10], B[10], C[10];

    printf("Digite 10 números inteiros para preencher o array A:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite 10 números inteiros para preencher o array B:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }

    printf("Array C (resultado de A - B) é:\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
