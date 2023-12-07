#include <stdio.h>
#include <math.h>

int ehQuadradoPerfeito(int numero) {
    int raiz = sqrt(numero); // Calcula a raiz quadrada do número

    // Verifica se a raiz elevada ao quadrado é igual ao número original
    if (raiz * raiz == numero) {
        return 1; // Retorna 1 se for quadrado perfeito
    } else {
        return 0; // Retorna 0 se não for quadrado perfeito
    }
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (ehQuadradoPerfeito(numero)) {
        printf("%d é um quadrado perfeito.\n", numero);
    } else {
        printf("%d não é um quadrado perfeito.\n", numero);
    }

    return 0;
}
