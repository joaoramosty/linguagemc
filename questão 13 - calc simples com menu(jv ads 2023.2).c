#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Escolha a operação desejada:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Digite o número da operação: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da adição: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divisão: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero.\n");
            }
            break;
        default:
            printf("Opção inválida. Por favor, escolha um número de 1 a 4.\n");
            break;
    }

    return 0;
}
