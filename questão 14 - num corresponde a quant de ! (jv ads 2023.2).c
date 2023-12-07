#include <stdio.h>

void digitarLinhasDeExclamacao(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("!");
        }
        printf("\n");
    }
}

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    digitarLinhasDeExclamacao(valor);

    return 0;
}
