#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];
    int inicio, fim, ehPalindromo = 1;

    printf("Digite uma string: ");
    scanf("%s", string);

    inicio = 0;
    fim = strlen(string) - 1;

    while (fim > inicio) {
        if (tolower(string[inicio]) != tolower(string[fim])) {
            ehPalindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (ehPalindromo) {
        printf("A string \"%s\" é um palíndromo.\n", string);
    } else {
        printf("A string \"%s\" não é um palíndromo.\n", string);
    }

    return 0;
}
