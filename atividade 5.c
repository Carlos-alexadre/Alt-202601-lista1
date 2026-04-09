#include <stdio.h>

int main() {
    long long a = 0, b = 1, prox;

    printf("=== 100 primeiros termos da serie de Fibonacci ===\n");
    for (int i = 1; i <= 100; i++) {
        printf("Termo %3d: %lld\n", i, a);
        prox = a + b;
        a = b;
        b = prox;
    }

    return 0;
}
