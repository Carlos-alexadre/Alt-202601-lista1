#include <stdio.h>
 
int main() {
    int segundos, horas, minutos, seg;
 
    printf("Digite um numero inteiro de segundos: ");
    scanf("%d", &segundos);
 
    horas   = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    seg     = segundos % 60;
 
    printf("Resultado: %dh %dm %ds\n", horas, minutos, seg);
 
    return 0;
}
