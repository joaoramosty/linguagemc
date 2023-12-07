#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Os divisores de %d (excluindo o próprio número) são: ", numero);

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
            printf("%d ", i);
        }
    }

    printf("\nA soma dos divisores de %d (excluindo o próprio número) é: %d\n", numero, soma);

    return 0;
}
