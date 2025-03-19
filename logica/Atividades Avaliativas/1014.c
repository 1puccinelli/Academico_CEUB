//Pedro Henrique Soares Puccinelli

#include <stdio.h>

int main() {

        int distancia;
        float combustivel;

            printf("Digite a distancia percorrida (em km) e o total de combustivel gasto (em litros): \n");
            scanf("%d %f", &distancia, &combustivel);

        float consumo_medio = (float)distancia / combustivel;

            printf("Consumo medio: %.3f km/l\n", consumo_medio);

    return 0;
}