#include <stdio.h>

int main() {
    printf("=== Tabuada de 2 a 10 ===\n");

    for (int t = 2; t <= 10; t++) {
        printf("\n--- Tabuada do %d ---\n", t);
        for (int i = 1; i <= 10; i++)
            printf("%d x %2d = %3d\n", t, i, t * i);
    }

    return 0;
}
