#include <stdio.h>

int main() {
    int valores[5];
    int soma = 0;

    printf("Digite cinco valores:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
        soma += valores[i]; 
    }

    printf("Os valores lidos são:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }

    float media = (float)soma / 5; 
    printf("\nA média dos valores é: %.2f\n", media);

    return 0;
}
