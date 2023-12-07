#include <stdio.h>

int converterParaSegundos(int horas, int minutos, int segundos) {
    int totalSegundos;
    totalSegundos = horas * 3600 + minutos * 60 + segundos;
    return totalSegundos;
}

int main() {
    int horas, minutos, segundos, totalSegundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    totalSegundos = converterParaSegundos(horas, minutos, segundos);

    printf("O total de segundos é: %d\n", totalSegundos);

    return 0;
}
