#include <stdio.h>

int main() {
    int vetor[100];
    int numero = 1; 

    printf("Os primeiros 100 números naturais que não são múltiplos de 7:\n");

    int contador = 0;
    while (contador < 100) {
        if (numero % 7 != 0) {
            vetor[contador] = numero;
            contador++;
        }
        numero++;
    }

    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
