#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, digite um número positivo.\n");
    } else {
        printf("Os divisores de %d são: ", numero);

        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                printf("%d", i);

                if (i != numero) {
                    printf(", ");
                }
            }
        }

        printf("\n");
    }

    return 0;
}
