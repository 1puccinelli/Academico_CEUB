#include <stdio.h>

int main() {
    double A;
    double B;
    double C;
    
    printf("Type three numbers: ");
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    int Weight1 = 2;
    int Weight2 = 3;
    int Weight3 = 5;

    double Media = ((A * Weight1) + (B * Weight2) + (C * Weight3)) / (Weight1 + Weight2 + Weight3);
    printf("Media: %.2lf\n", Media);

    return 0;

}