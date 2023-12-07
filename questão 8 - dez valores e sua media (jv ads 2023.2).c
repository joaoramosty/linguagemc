#include <stdio.h>

int main() {
    int numeros[10]; 
    int soma = 0;
    float media;

    printf("Digite 10 números inteiros:\n");

    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }


    media = (float)soma / 10;

    printf("A média dos 10 números é: %.2f\n", media);

    return 0;
}
