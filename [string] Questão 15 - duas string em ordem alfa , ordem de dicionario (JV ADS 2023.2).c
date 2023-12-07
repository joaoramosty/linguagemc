#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];

    printf("Digite a primeira string: ");
    scanf("%s", string1);

    printf("Digite a segunda string: ");
    scanf("%s", string2);

    int result = strcmp(string1, string2);

    if (result < 0) {
        printf("%s\n%s\n", string1, string2);
    } else if (result > 0) {
        printf("%s\n%s\n", string2, string1);
    } else {
        printf("As strings são iguais.\n");
    }

    return 0;
}
