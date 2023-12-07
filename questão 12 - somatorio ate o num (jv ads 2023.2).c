#include <stdio.h>

int somatorio(int n) {
    int soma = 0;

    if (n <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return -1;
    }

  
    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    int numero, resultado;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    resultado = somatorio(numero);

    if (resultado != -1) {
        printf("O somatório de 1 até %d é: %d\n", numero, resultado);
    }

    return 0;
}
