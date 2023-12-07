#include <stdio.h>

int main() {
    float salario, prestacao;
    float limitePrestacao;

    printf("Digite o salário do trabalhador: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestação do empréstimo: ");
    scanf("%f", &prestacao);

    limitePrestacao = salario * 0.20;

    if (prestacao > limitePrestacao) {
        printf("Empréstimo não concedido.\n");
    } else {
        printf("Empréstimo concedido.\n");
    }

    return 0;
}
