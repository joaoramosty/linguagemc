#include <stdio.h>

int main() {
    int contador = 0;
    int numero = 2; 
    int soma = 0;

    printf("Os 50 primeiros números pares são:\n");
    while (contador < 50) {
        soma += numero; 
        printf("%d\n", numero);
        numero += 2; 
        contador++;
    }

    printf("A soma dos 50 primeiros números pares é: %d\n", soma);

    return 0;
}
