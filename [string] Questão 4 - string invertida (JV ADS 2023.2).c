#include <stdio.h>
#include <string.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("A string de trás para frente é: ");
    for (int i = strlen(string) - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}
