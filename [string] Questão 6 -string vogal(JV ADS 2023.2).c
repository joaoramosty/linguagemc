#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100], substituir;
    int vogais = 0;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &substituir);

    for (int i = 0; string[i] != '\0'; i++) {
        switch (tolower(string[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vogais++;
                string[i] = substituir;
                break;
            default:
                break;
        }
    }

    printf("Nova string após substituir as vogais: %s\n", string);
    printf("Número de vogais na string original: %d\n", vogais);

    return 0;
}
