#include <stdio.h>

void ordenarDecrescente(double *a, double *b, double *c) {
    double temp;
    if (*a < *b) { temp = *a; *a = *b; *b = temp; }
    if (*a < *c) { temp = *a; *a = *c; *c = temp; }
    if (*b < *c) { temp = *b; *b = *c; *c = temp; }
}

int main() {
    double A, B, C;
    
    // Leitura dos lados do triângulo
    scanf("%lf %lf %lf", &A, &B, &C);

    // Ordem decrescente
    ordenarDecrescente(&A, &B, &C);

    // Tipo de triângulo
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (A * A == B * B + C * C) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (A * A > B * B + C * C) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (A * A < B * B + C * C) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (A == B || B == C || A == C) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
