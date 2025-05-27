#include <stdio.h>

int main() {
    double nota, soma_notas = 0.0;
    int notas_validas = 0;

    while (notas_validas < 2) {
        scanf("%lf", &nota);

        if (nota >= 0.0 && nota <= 10.0) {
            soma_notas += nota;
            notas_validas++;
        } else {
            printf("nota invalida\n");
        }
    }

    printf("media = %.2f\n", soma_notas / 2.0);

    return 0;
}