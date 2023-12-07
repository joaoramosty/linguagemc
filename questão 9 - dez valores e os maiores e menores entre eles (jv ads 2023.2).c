#include <stdio.h>

int main() {
    int numeros[10]; // Array para armazenar os 10 números
    int menor, maior;

    printf("Digite 10 números:\n");

    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    menor = numeros[0];
    maior = numeros[0];

    for (int i = 1; i < 10; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O menor valor lido é: %d\n", menor);
    printf("O maior valor lido é: %d\n", maior);

    return 0;
}
