#include <stdio.h>

//o long armazena num inteiros como int, mas deixa ter um leque mais amplo de val custando ocupar mais memoria
long long int calcularPotencia(int x, int y) {
    long long int resultado = 1;

    if (y < 0) {
        printf("Não é possível calcular potência com expoente negativo.\n");
        return -1; 
    }

    // Calcula a potência multiplicando x por x y vezes
    for (int i = 0; i < y; i++) {
        resultado *= x;
    }

    return resultado;
}

int main() {
    int base, expoente;
    long long int resultado;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    resultado = calcularPotencia(base, expoente);

    if (resultado != -1) {
        printf("O resultado de %d elevado a %d é: %lld\n", base, expoente, resultado);
    }

    return 0;
}
