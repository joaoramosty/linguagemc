#include <stdio.h>

int main() {
    printf("Contagem regressiva iniciando em 10:\n");
    
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }

    printf("FIM!\n");

    return 0;
}
