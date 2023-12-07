#include <stdio.h>

void convertForMaiscula(char *string) {
    int i = 0;

    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 32; 
        }
        i++;
    }
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    scanf("%s", texto);

    convertForMaiscula(texto);

    printf("A string em maiúsculas é: %s\n", texto);

    return 0;
}
