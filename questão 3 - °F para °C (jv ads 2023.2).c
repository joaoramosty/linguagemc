#include <stdio.h>

float converterFahrenheitParaCelsius(float temperaturaFahrenheit) {
    float temperaturaCelsius;
    temperaturaCelsius = (temperaturaFahrenheit - 32.0) * (5.0 / 9.0);
    return temperaturaCelsius;
}

int main() {
    float temperaturaFahrenheit, temperaturaCelsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    temperaturaCelsius = converterFahrenheitParaCelsius(temperaturaFahrenheit);

    printf("A temperatura %.2f Fahrenheit equivale a %.2f Celsius.\n", temperaturaFahrenheit, temperaturaCelsius);

    return 0;
}
