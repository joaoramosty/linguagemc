#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal para um homem com %.2f metros de altura é: %.2f kg\n", altura, peso_ideal);
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher com %.2f metros de altura é: %.2f kg\n", altura, peso_ideal);
    } else {
        printf("Opção de sexo inválida. Por favor, insira M para masculino ou F para feminino.\n");
    }

    return 0;
}
