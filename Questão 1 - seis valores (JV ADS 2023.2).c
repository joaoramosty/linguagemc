#include <stdio.h>

int main() {
    int valores[6];

    printf("Digite seis valores inteiros:\n");

    // Lê os seis valores inteiros
    for (int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Os valores lidos foram:\n");

    // Mostra na tela os valores lidos
    for (int i = 0; i < 6; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}
