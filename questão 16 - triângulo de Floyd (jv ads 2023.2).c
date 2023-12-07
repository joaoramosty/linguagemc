#include <stdio.h>

int main() {
    int linhas, contador = 1, numero = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &linhas);

    printf("Triângulo de Floyd com %d linhas:\n", linhas);

    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}
