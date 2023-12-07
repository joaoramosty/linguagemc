#include <stdio.h>

int main() {
    int quantidade, numero, maior, vezesMaior = 0;

    printf("Digite a quantidade de números a serem lidos: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade inválida. Insira um número positivo maior que zero.\n");
        return 1;
    }

    printf("Digite os números:\n");

    scanf("%d", &maior);
    vezesMaior = 1;

    for (int i = 1; i < quantidade; i++) {
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
            vezesMaior = 1;
        } else if (numero == maior) {
            vezesMaior++;
        }
    }

    printf("O maior número lido é: %d\n", maior);
    printf("O maior número foi lido %d vez(es).\n", vezesMaior);

    return 0;
}
