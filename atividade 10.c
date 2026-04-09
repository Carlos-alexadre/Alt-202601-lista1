#include <stdio.h>

int main() {
    float valor, soma = 0;
    int count = 0;

    printf("=== Media de valores positivos ===\n");
    printf("Digite valores positivos (negativo para parar):\n");

    while (1) {
        printf("Valor: ");
        scanf("%f", &valor);
        if (valor < 0) break;
        soma += valor;
        count++;
    }

    if (count > 0)
        printf("Media dos %d valores: %.2f\n", count, soma / count);
    else
        printf("Nenhum valor positivo foi fornecido.\n");

    return 0;
}
