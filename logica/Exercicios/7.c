#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C, D;
    printf("Write 4 numbers so we can have the difference");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    int Difference = ((A * B) - (C * D));

    printf("Difference: %d\n", Difference);

    return 0;

}