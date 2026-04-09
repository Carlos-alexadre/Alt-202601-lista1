#include <stdio.h>

int main() {
    float a, b, c, maior, menor, media;

    printf("Digite 3 numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    media = (a + b + c) / 3.0;

    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}
