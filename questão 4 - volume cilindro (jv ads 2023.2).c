#include <stdio.h>

#define PI 3.14159265359

float calcularVolumeCilindro(float altura, float raio) {
    float volume;
    volume = PI * raio * raio * altura;
    return volume;
}

int main() {
    float altura, raio, volumeCilindro;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    volumeCilindro = calcularVolumeCilindro(altura, raio);

    printf("O volume do cilindro é: %.2f\n", volumeCilindro);

    return 0;
}
