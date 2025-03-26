#include <stdio.h>

int main() {
    int N, valor;
    int notas[] = {100, 50, 20, 10, 5, 2, 1}; // Notas disponíveis
    int quantidade, i;

    scanf("%d", &N);
    printf("%d\n", N);

    valor = N; // Guardando o valor original

    // Calculando a quantidade mínima de notas
    for (i = 0; i < 7; i++) {
        quantidade = valor / notas[i];
        valor %= notas[i]; // Atualiza o valor restante
        printf("%d nota(s) de R$ %d,00\n", quantidade, notas[i]);
    }

    return 0;
}