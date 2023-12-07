#include <stdio.h>

int main() {
    int valores[10]; 
    int soma = 0;

    printf("Digite 10 valores:\n");

    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

    
        soma += valores[i];
    }

    printf("A soma dos 10 valores é: %d\n", soma);

    return 0;
}
