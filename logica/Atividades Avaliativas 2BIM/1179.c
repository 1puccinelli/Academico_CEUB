//PEDRO HENRIQUE SOARES PUCCINELLI

#include <stdio.h>

int main() {
    int par[5];
    int impar[5];
    int count_par = 0;
    int count_impar = 0;
    int value;

    for (int k = 0; k < 15; k++) {
        scanf("%d", &value);

        if (value % 2 == 0) { // Even number
            par[count_par] = value;
            count_par++;
            if (count_par == 5) {
                for (int i = 0; i < 5; i++) {
                    printf("par[%d] = %d\n", i, par[i]);
                }
                count_par = 0; // Reset for reuse
            }
        } else { // Odd number
            impar[count_impar] = value;
            count_impar++;
            if (count_impar == 5) {
                for (int i = 0; i < 5; i++) {
                    printf("impar[%d] = %d\n", i, impar[i]);
                }
                count_impar = 0; // Reset for reuse
            }
        }
    }

    // Print remaining odd numbers first (as per example output: impar, then par)
    for (int i = 0; i < count_impar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    // Print remaining even numbers
    for (int i = 0; i < count_par; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}