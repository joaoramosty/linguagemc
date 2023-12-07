#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        int a = 0, b = 1, resultado;

        for (int i = 2; i <= n; i++) {
            resultado = a + b;
            a = b;
            b = resultado;
        }

        return resultado;
    }
}

int main() {
    int n;

    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um número inteiro maior ou igual a zero.\n");
    } else {
        int termo = fibonacci(n);

        printf("O enésimo termo da sequência de Fibonacci para n = %d é: %d\n", n, termo);
    }

    return 0;
}
