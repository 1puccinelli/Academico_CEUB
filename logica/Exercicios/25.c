#include <stdio.h>

int main() {
    int N;

    // Lê o valor de N
    scanf("%d", &N);

    // Verifica se N está dentro do intervalo válido
    if (N > 2 && N < 1000) {
        // Imprime a tabuada de N de 1 a 10
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", i, N, i * N);
        }
    }

    return 0;
}