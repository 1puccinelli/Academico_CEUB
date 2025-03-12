#include <stdio.h>
#include<math.h>

int main() {
    float raio = 10;
    float pi = 3.14159;

    float area = pi * pow(raio, 2); // area = pi . raio ^ 2

    printf("%.1f", area);

    return 0;
}