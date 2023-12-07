#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O primeiro número (%d) é maior que o segundo número (%d).\n", num1, num2);
    } else if (num2 > num1) {
        printf("O segundo número (%d) é maior que o primeiro número (%d).\n", num2, num1);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}
