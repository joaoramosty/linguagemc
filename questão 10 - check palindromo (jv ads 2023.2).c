#include <stdio.h>
#include <string.h>

int checkPalindromo(char *palavra) {
    int tamanho = strlen(palavra);
    int i, j;

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char palavra[100];

    printf("Digite uma palavra para verificar se é um palíndromo: ");
    scanf("%s", palavra);

    if (checkPalindromo(palavra)) {
        printf("%s é um palíndromo.\n", palavra);
    } else {
        printf("%s não é um palíndromo.\n", palavra);
    }

    return 0;
}
