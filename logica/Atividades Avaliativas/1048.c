// Pedro Henrique Soares Puccinelli

#include <stdio.h>

    int main() {
        float salario, novoSalario, reajuste;
        int percentual;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario >= 0 && salario <= 400.00) {
        percentual = 15;
    } else if (salario <= 800.00) {
        percentual = 12;
    } else if (salario <= 1200.00) {
        percentual = 10;
    } else if (salario <= 2000.00) {
        percentual = 7;
    } else {
        percentual = 4;
    }  

    reajuste = salario * percentual / 100.0;
    novoSalario = salario + reajuste;

    printf("Novo salario: %2.f\n", novoSalario);
    printf("Reajuste ganho: %2.f\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}