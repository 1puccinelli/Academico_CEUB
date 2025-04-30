#include <stdio.h>

int main() {
    int i, positivos = 0;
    float numero, soma = 0.0;

    for (i = 0; i < 6; i++) {
        scanf("%f", &numero);
        if (numero > 0) {
            positivos++;
            soma += numero;
        }
    }

    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", soma / positivos);

    return 0;
}