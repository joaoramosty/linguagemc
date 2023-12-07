#include <stdio.h>

void calcularSomas(int vetor[], int tamanho, int *somaPares, int *somaImpares) {
    *somaPares = 0;
    *somaImpares = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            *somaPares += vetor[i];
        } else {
            *somaImpares += vetor[i];
        }
    }
}

int main() {
    int valores[100];
    int tamanho, somaPares = 0, somaImpares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Digite os %d valores inteiros do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &valores[i]);
    }

    calcularSomas(valores, tamanho, &somaPares, &somaImpares);

    printf("A soma dos números pares é: %d\n", somaPares);
    printf("A soma dos números ímpares é: %d\n", somaImpares);

    return 0;
}
