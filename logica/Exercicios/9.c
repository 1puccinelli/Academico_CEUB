#include <stdio.h>

int main() {
    int Quantidade1;
    double Valor1;
    int Quantidade2;
    double Valor2;

    scanf("%d", &Quantidade1);
    scanf("%lf", &Valor1);
    scanf("%d", &Quantidade2);
    scanf("%lf", &Valor2);

    double ValorTotal = (Valor1 + Valor2);
    printf ("\n ValorTotal: %.2lf\n", ValorTotal);

    return 0;
}