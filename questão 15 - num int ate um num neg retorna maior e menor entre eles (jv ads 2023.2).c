#include <stdio.h>

int main() {
    int numero, maior, menor;
    int primeiro = 1;

    printf("Digite uma sequência de números inteiros (insira um número negativo para parar):\n");

    printf("Número: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;

    if (numero < 0) {
        printf("Nenhum número positivo foi inserido.\n");
    } else {
        while (numero >= 0) {
            if (primeiro == 0) {
                if (numero > maior) {
                    maior = numero;
                }
                if (numero < menor) {
                    menor = numero;
                }
            } else {
                primeiro = 0;
            }

            printf("Número: ");
            scanf("%d", &numero);
        }

        printf("O maior número lido é: %d\n", maior);
        printf("O menor número lido é: %d\n", menor);
    }

    return 0;
}
