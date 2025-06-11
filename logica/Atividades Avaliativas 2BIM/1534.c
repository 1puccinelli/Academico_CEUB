//PEDRO HENRIQUE SOARES PUCCINELLI

#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j) { // Main diagonal
                    printf("1");
                } else if (i + j == N - 1) { // Anti-diagonal
                    printf("2");
                } else { // Other positions
                    printf("3");
                }
            }
            printf("\n");
        }
    }

    return 0;
}