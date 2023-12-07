#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inserido não é positivo.\n");
    } else {
        printf("Números naturais de 0 até %d em ordem crescente:\n", numero);
        for (int i = 0; i <= numero; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
