#include <stdio.h>
// unsigned so aceita val positvo e o zero
unsigned long long calcularFatorial(int n) {
    unsigned long long fatorial = 1;

    if (n < 0) {
        printf("Por favor, insira um número inteiro não negativo.\n");
        return 0; 
    }

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int numero;
    unsigned long long resultado;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    resultado = calcularFatorial(numero);

    if (resultado != 0) {
        printf("O fatorial de %d é: %llu\n", numero, resultado);
    }

    return 0;
}
