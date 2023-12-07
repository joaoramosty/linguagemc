#include <stdio.h>

int main() {
    int numero, contador = 0, i = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Os %d primeiros números naturais ímpares são:\n", numero);
    while (contador < numero) {
        if (i % 2 != 0) {
            printf("%d ", i);
            contador++;
        }
        i++;
    }
    printf("\n");

    return 0;
}
