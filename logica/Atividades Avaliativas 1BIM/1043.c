// Pedro Henrique Soares Puccinelli

#include <stdio.h>

int main() {
    float A, B, C;

    // Leitura dos três valores
    scanf("%f %f %f", &A, &B, &C);

    // Verificando se os lados formam um triângulo (condição da desigualdade triangular)
    if (A + B > C && A + C > B && B + C > A) {
        float perimetro = A + B + C;
        printf("Perimetro = %.1f\n", perimetro);
    } else {
        // Caso contrário, calcular a área do trapézio
        float area = ((A + B) * C) / 2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}
