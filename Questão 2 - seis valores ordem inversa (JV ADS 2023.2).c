#include <stdio.h>

int main() {
    int valores[6];

    printf("Digite seis valores inteiros:\n");

    // Lê os seis valores inteiros
    for (int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Os valores lidos na ordem inversa são:\n");

    // Mostra na tela os valores lidos na ordem inversa
    for (int i = 5; i >= 0; i--) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}
