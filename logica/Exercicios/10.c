#include <stdio.h>
#include <math.h>

    int main() {
        double A, B, C;

        printf("Digite os valores de A, B e C: ");
        scanf("%lf %lf %lf", &A, &B, &C);

        double area_triangulo = (A * C) / 2.0;
        double area_circulo = 3.1416 * pow(C, 2);
        double area_trapezio = ((A + B) * C) / 2.0;
        double area_quadrado = pow(B, 2);
        double area_retangulo = A * B;

        printf ("Triangulo: %.3lf\n", area_triangulo);
        printf ("Circulo: %.3lf\n", area_circulo);
        printf ("Trapezio: %.3lf\n", area_trapezio);
        printf ("Quadrado: %.3lf\n", area_quadrado);
        printf ("Retangulo: %.3lf\n", area_retangulo);

    return 0;

    }