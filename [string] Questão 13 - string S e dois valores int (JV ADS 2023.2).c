#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, j;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite o valor de i: ");
    scanf("%d", &i);

    printf("Digite o valor de j: ");
    scanf("%d", &j);

    int length = strlen(string);

    if (i >= 0 && j >= 0 && i <= length && j <= length && i <= j) {
        printf("Caracteres entre i e j: ");

        for (int k = i; k <= j; k++) {
            printf("%c", string[k]);
        }
        printf("\n");
    } else {
        printf("Valores de i ou j inválidos.\n");
    }

    return 0;
}
