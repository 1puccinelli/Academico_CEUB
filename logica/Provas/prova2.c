//Pedro Henrique Soares Puccinelli

#include <stdio.h>

int main () {
    int idade;

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if (idade <= 0) {
            printf("Idade invalida. A idade deve ser maior que 0.\n");
        } else if (idade < 12) {
            printf("Voce e uma crianca.\n");
        } else if (idade <= 17) {
            printf("Voce e um Adolescente.\n");
        } else if (idade <= 59) {
            printf("Voce e um Adulto.\n");
        } else {
            printf("Voce e um Idoso.\n");
        }

    return 0;
}