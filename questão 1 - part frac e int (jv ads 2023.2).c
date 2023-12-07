#include <stdio.h>

void separarPartes(float numero, int *parteInt, float *parteFracao) {
    *parteInt = (int)numero; 
    *parteFracao = numero - *parteInt; 
}

int main() {
    float numero;
    int parteInt;
    float parteFracao;

    printf("Digite um número real: ");  
    scanf("%f", &numero);

    separarPartes(numero, &parteInt, &parteFracao);

    printf("A parte inteira do número é: %d\n", parteInt);
    printf("A parte fracionária do número é: %.2f\n", parteFracao);

    return 0;
}
