//PEDRO HENRIQUE SOARES PUCCINELLI

#include <stdio.h>

int main() {
    double N[100];
    double X;

    scanf("%lf", &X); // Read the initial value X

    N[0] = X; // Assign X to the first position

    // Fill the rest of the vector
    for (int i = 1; i < 100; i++) {
        N[i] = N[i - 1] / 2.0;
    }

    // Print the vector
    for (int i = 0; i < 100; i++) {
        printf("N[%d] = %.4f\n", i, N[i]);
    }

    return 0;
}