#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if ((numero % 3 == 0 || numero % 5 == 0) && !(numero % 3 == 0 && numero % 5 == 0)) {
        printf("O número %d é divisível por 3 ou por 5, mas não pelos dois simultaneamente.\n", numero);
    } else {
        printf("O número %d não satisfaz as condições.\n", numero);
    }

    return 0;
}
