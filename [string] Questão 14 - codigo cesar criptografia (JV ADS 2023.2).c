#include <stdio.h>
#include <string.h>

void cifraCesar(char string[], int deslocamento) {
    int tamanho = strlen(string);
    for (int i = 0; i < tamanho; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = 'a' + (string[i] - 'a' + deslocamento) % 26;
        } else if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] = 'A' + (string[i] - 'A' + deslocamento) % 26;
        }
    }
}

int main() {
    char string[1000];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    int deslocamento = 3; 

    cifraCesar(string, deslocamento);

    printf("Nova string: %s\n", string);

    return 0;
}
