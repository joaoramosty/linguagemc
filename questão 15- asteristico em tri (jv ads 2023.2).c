#include <stdio.h>

void escreveTrianguloLat(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    escreveTrianguloLat(valor);

    return 0;
}

