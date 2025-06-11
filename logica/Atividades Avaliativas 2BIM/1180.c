//PEDRO HENRIQUE SOARES PUCCINELLI

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the size of the vector

    int X[N]; // Declare the vector of size N

    int smallest_value;
    int smallest_position;

    // Read the N values and find the smallest
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        if (i == 0) { // Initialize with the first element
            smallest_value = X[i];
            smallest_position = i;
        } else {
            if (X[i] < smallest_value) {
                smallest_value = X[i];
                smallest_position = i;
            }
        }
    }

    printf("Menor valor: %d\n", smallest_value);
    printf("Posicao: %d\n", smallest_position);

    return 0;
}