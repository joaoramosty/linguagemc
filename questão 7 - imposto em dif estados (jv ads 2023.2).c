#include <stdio.h>
#include <string.h>

int main() {
    char estado[3];
    float valorProduto, imposto = 0, precoFinal = 0;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite o estado de destino (MG, SP, RJ ou MS): ");
    scanf("%s", estado);

    if (strcmp(estado, "MG") == 0) {
        imposto = 0.07; 
    } else if (strcmp(estado, "SP") == 0) {
        imposto = 0.12; 
    } else if (strcmp(estado, "RJ") == 0) {
        imposto = 0.15; 
    } else if (strcmp(estado, "MS") == 0) {
        imposto = 0.08; 
    } else {
        printf("Erro: Estado de destino inválido.\n");
        return 1; 
    }


    precoFinal = valorProduto + (valorProduto * imposto);

    printf("O preço final do produto no estado %s é: R$ %.2f\n", estado, precoFinal);

    return 0;
}
