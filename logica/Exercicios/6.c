#include <stdio.h>
#include <stdlib.h>

int main(){

    double A, B;
    printf("Choose two numbers and type them:");

    scanf("%lf", &A);
    scanf("%lf", &B);

    double peso1 = 3.5;
    double peso2 = 7.5;
    double resultado = ((A * peso1) + (B * peso2)) / (peso1 + peso2);

    printf("resultado: %lf\n", resultado);

    return 0;
}