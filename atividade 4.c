#include <stdio.h>

int main() {
    char op;
    float a, b;

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite dois numeros reais: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+': printf("Resultado: %.2f\n", a + b); break;
        case '-': printf("Resultado: %.2f\n", a - b); break;
        case '*': printf("Resultado: %.2f\n", a * b); break;
        case '/':
            if (b != 0)
                printf("Resultado: %.2f\n", a / b);
            else
                printf("Erro: divisao por zero!\n");
            break;
        default:
            printf("Operador invalido!\n");
    }

    return 0;
}
