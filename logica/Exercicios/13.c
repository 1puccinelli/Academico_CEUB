#include <stdio.h>

int main() {
    int dias, anos, meses;

        scanf("%d", &dias);

    // Calculando anos, meses e dias restantes
    anos = dias / 365;
    dias %= 365;
    meses = dias / 30;
    dias %= 30;

        printf("%d ano(s)\n", anos);
        printf("%d mes(es)\n", meses);
        printf("%d dia(s)\n", dias);

    return 0;
}