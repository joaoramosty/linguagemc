#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, char tipoMedia) {
    float media;

    if (tipoMedia == 'A' || tipoMedia == 'a') {
        media = (nota1 + nota2 + nota3) / 3.0; // Média aritmética
    } else if (tipoMedia == 'P' || tipoMedia == 'p') {
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10.0; // Média ponderada
    } else {
        printf("Tipo de média inválido!\n");
        media = -1; // Retorna -1 se o tipo de média não for válido
    }

    return media;
}

int main() {
    float nota1, nota2, nota3, media;
    char tipo;

    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite A para média aritmética ou P para média ponderada: ");
    scanf(" %c", &tipo);

    media = calcularMedia(nota1, nota2, nota3, tipo);

    if (media != -1) {
        if (tipo == 'A' || tipo == 'a') {
            printf("A média aritmética é: %.2f\n", media);
        } else {
            printf("A média ponderada é: %.2f\n", media);
        }
    }

    return 0;
}
