#include <stdio.h>
#include <string.h>

int main() {
    char string[100];  

    printf("Digite uma string: ");
    scanf("%s", string); 

    printf("As quatro primeiras letras da string são: ");
    for (int i = 0; i < 4 && string[i] != '\0'; i++) {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}
