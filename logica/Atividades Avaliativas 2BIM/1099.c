//PEDRO HENRIQUE SOARES PUCCINELLI

#include <stdio.h>

#include <stdio.h>

int main() {
    int N, X, Y, soma;

    scanf("%d", &N);  // Lê o número de casos de teste

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &X, &Y);
        
        soma = 0;

        // Troca para garantir que X seja menor que Y
        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        // Soma os ímpares entre X e Y
        for (int j = X + 1; j < Y; j++) {
            if (j % 2 != 0) {
                soma += j;
            }
        }

        printf("%d\n", soma);
    }

    return 0;
}