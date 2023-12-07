#include <stdio.h>

void calcVolAreaEsf(float raio, float *volume, float *area) {
    float pi = 3.1414592;

    *volume = (4.0 / 3.0) * pi * raio * raio * raio;
    *area = 4.0 * pi * raio * raio;
}

int main() {
    float raio, volume, area;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calcVolAreaEsf(raio, &volume, &area);

    printf("O volume da esfera é: %.2f\n", volume);
    printf("A área da superfície da esfera é: %.2f\n", area);

    return 0;
}
