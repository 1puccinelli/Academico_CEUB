//Pedro Henrique Soares Puccinelli

#include <stdio.h>

#define PI  3.14159

    int main() {

        double raio, volume;

        printf("Digite o valor do raio: ");
        scanf("%lf", &raio);

        volume = (4.0/3.0) * PI * (raio * raio * raio);

        printf("Volume = %.3lf\n", volume);

    return 0;

    }