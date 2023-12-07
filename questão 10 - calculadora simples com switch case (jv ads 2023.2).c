#include <stdio.h>

float realizarOperacao(float num1, float num2, char operador) {
    float resultado;

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
                resultado = 0; // Retorna 0 em caso de divisão por zero
            }
            break;
        default:
            printf("Operador inválido!\n");
            resultado = 0; // Retorna 0 em caso de operador inválido
    }

    return resultado;
}

int main() {
    float valor1, valor2, resultado;
    char operador;

    printf("Digite dois valores numéricos: ");
    scanf("%f %f", &valor1, &valor2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    resultado = realizarOperacao(valor1, valor2, operador);

    printf("O resultado da operação é: %.2f\n", resultado);

    return 0;
}
