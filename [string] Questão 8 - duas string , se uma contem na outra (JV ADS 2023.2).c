#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];

    printf("Digite a primeira string: ");
    scanf("%s", string1);

    printf("Digite a segunda string: ");
    scanf("%s", string2);

    if (strstr(string1, string2) != NULL) {
        printf("A segunda string está contida na primeira.\n");
    } else {
        printf("A segunda string NÃO está contida na primeira.\n");
    }

    return 0;
}
