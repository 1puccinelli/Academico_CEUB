#include <stdio.h>

int main() {
    int x, y;

    // Loop para ler os pares de valores X e Y
    while (scanf("%d %d", &x, &y) == 2) {
        // Se X e Y forem iguais, encerra a leitura
        if (x == y) {
            break;
        }

        // Verifica a ordem e imprime a mensagem correspondente
        if (x < y) {
            printf("Crescente\n");
        } else {
            printf("Decrescente\n");
        }
    }

    return 0;
}