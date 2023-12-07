#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inserido não é positivo.\n");
    } else {
        printf("Números naturais de %d até 0 em ordem decrescente:\n", numero);
        for (int i = numero; i >= 0; i--) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
