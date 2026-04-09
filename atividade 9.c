#include <stdio.h>

int main() {
    int soma = 0;

    printf("=== Soma de todos os valores do domino ===\n");

    for (int i = 0; i <= 6; i++)
        for (int j = i; j <= 6; j++)
            soma += i + j;

    printf("Soma total: %d\n", soma);

    return 0;
}v
