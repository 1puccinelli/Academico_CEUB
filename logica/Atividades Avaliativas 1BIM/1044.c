// Pedro Henrique Soares Puccinelli

#include <stdio.h>

int main() {
    int A, B;

    // Leitura dos dois números inteiros
    scanf("%d %d", &A, &B);

    // Verifica se A é múltiplo de B ou vice-versa
    if (A % B == 0 || B % A == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}
