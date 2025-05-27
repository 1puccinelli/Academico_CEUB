//PEDRO HENRIQUE SOARES PUCCINELLI

#include <stdio.h>

int main() {
    int x, y;

    while (scanf("%d %d", &x, &y) == 2) {
        // O algoritmo será encerrado quando pelo menos uma das duas coordenadas for NULA.
        // Se x ou y for zero, encerramos o loop.
        if (x == 0 || y == 0) {
            break;
        }

        if (x > 0 && y > 0) {
            printf("primeiro\n");
        } else if (x < 0 && y > 0) {
            printf("segundo\n");
        } else if (x < 0 && y < 0) {
            printf("terceiro\n");
        } else if (x > 0 && y < 0) {
            printf("quarto\n");
        }
    }

    return 0;
}