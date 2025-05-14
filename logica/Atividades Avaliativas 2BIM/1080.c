//PEDRO HENRIQUE SOARES PUCCINELLI

#include <stdio.h>

int main() {
    int numero, maior = 0, posicao = 0;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior, posicao);
    
    return 0;
}