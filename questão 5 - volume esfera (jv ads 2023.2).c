#include <stdio.h>

#define PI 3.14159265359

float calcularVolumeEsfera(float raio) {
    float volume;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;
    return volume;
}

int main() {
    float raio, volumeEsfera;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volumeEsfera = calcularVolumeEsfera(raio);

    printf("O volume da esfera é: %.2f\n", volumeEsfera);

    return 0;
}
