#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];

    printf("Digite a primeira string: ");
    scanf("%s", string1);

    printf("Digite a segunda string: ");
    scanf("%s", string2);

    int count = 0;
    int len1 = strlen(string1);
    int len2 = strlen(string2);

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (string1[i + j] != string2[j]) {
                break;
            }
        }
        if (j == len2) {
            count++;
        }
    }

    printf("A segunda string está contida na primeira %d vezes.\n", count);

    return 0;
}
