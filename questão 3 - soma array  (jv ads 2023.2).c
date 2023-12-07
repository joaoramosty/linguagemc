#include <stdio.h>

int calcularSomaArray(int array[], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }

    return soma;
}

int main() {
    int elementos[10];
    int tamanho = 10;
    int soma;

    printf("Digite 10 elementos para o array:\n");

    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &elementos[i]);
    }

    soma = calcularSomaArray(elementos, tamanho);

    printf("A soma dos elementos do array é: %d\n", soma);

    return 0;
}
