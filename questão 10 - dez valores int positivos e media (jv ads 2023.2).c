#include <stdio.h>

int main() {
    int numeros_lidos = 0;
    int soma = 0;
    int numero;

    printf("Digite 10 números inteiros positivos:\n");

    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
            numeros_lidos++;
        }
    }

    if (numeros_lidos > 0) {
        float media = (float)soma / numeros_lidos;
        printf("A média dos números inteiros positivos é: %.2f\n", media);
    } else {
        printf("Nenhum número inteiro positivo foi inserido.\n");
    }

    return 0;
}
