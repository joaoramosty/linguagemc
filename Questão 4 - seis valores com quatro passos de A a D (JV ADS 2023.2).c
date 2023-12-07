#include <stdio.h>

int main() {
    // letra a - aqui atribui os valores ao array
    int A[] = {1, 0, 5, -2, -5, 7};

    // letra b - armazena a uma variavel a soma das posicoes
    int soma = A[0] + A[1] + A[5];
    printf("A soma dos valores de A[0], A[1] e A[5] é: %d\n", soma);

    // letra c - muda o array na pos. 4 ,atribui o valor 100 
    A[4] = 100;

    // letra d - mostra na tela cada valor do array A , um em cada linha 
    printf("Valores do array A:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }

    return 0;
}
