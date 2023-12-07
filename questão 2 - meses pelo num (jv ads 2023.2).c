#include <stdio.h>

void imprimirMesEQuantidadeDias(int numero) {
    char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho",
                     "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (numero >= 1 && numero <= 12) {
        printf("Mês: %s\n", meses[numero - 1]);
        printf("Quantidade de dias: %d\n", dias[numero - 1]);
    } else {
        printf("Número inválido! Digite um número entre 1 e 12.\n");
    }
}

int main() {
    int numero;

    printf("Digite um número de 1 a 12: ");
    scanf("%d", &numero);

    imprimirMesEQuantidadeDias(numero);

    return 0;
}
