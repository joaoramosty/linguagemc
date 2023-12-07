#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero > 0) {
        float quadrado = numero * numero;
        float raizQuadrada = sqrt(numero);

        printf("O número ao quadrado é: %.2f\n", quadrado);
        printf("A raiz quadrada do número é: %.2f\n", raizQuadrada);
    } else {
        printf("O número digitado não é positivo.\n");
    }

    return 0;
}
