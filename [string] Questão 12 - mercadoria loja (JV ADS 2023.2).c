#include <stdio.h>

int main() {
    char nomeMercadoria[100];
    float valorMercadoria, valorDesconto, valorAVista;

    printf("Digite o nome da mercadoria: ");
    scanf("%s", nomeMercadoria);

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valorMercadoria);

    valorDesconto = 0.1 * valorMercadoria;

    valorAVista = valorMercadoria - valorDesconto;

    printf("\nDetalhes da compra:\n");
    printf("Nome da mercadoria: %s\n", nomeMercadoria);
    printf("Valor total: R$ %.2f\n", valorMercadoria);
    printf("Valor do desconto (10%%): R$ %.2f\n", valorDesconto);
    printf("Valor a ser pago à vista: R$ %.2f\n", valorAVista);

    return 0;
}
