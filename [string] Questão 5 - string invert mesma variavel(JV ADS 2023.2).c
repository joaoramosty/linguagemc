#include <stdio.h>
#include <string.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%s", string);

    int tamanho = strlen(string);
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio < fim) {
        char temp = string[inicio];
        string[inicio] = string[fim];
        string[fim] = temp;

        inicio++;
        fim--;
    }

    printf("A string invertida é: %s\n", string);

    return 0;
}
