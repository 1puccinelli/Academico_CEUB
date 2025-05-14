#include <stdio.h>

int main() {
    int n, quantidade, total_cobaias = 0, total_coelhos = 0, total_ratos = 0, total_sapos = 0;
    char tipo;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %c", &quantidade, &tipo);
        total_cobaias += quantidade;
        if (tipo == 'C') {
            total_coelhos += quantidade;
        } else if (tipo == 'R') {
            total_ratos += quantidade;
        } else if (tipo == 'S') {
            total_sapos += quantidade;
        }
    }

    double percentual_coelhos = (double)total_coelhos / total_cobaias * 100.0;
    double percentual_ratos = (double)total_ratos / total_cobaias * 100.0;
    double percentual_sapos = (double)total_sapos / total_cobaias * 100.0;

    printf("Total: %d cobaias\n", total_cobaias);
    printf("Total de coelhos: %d\n", total_coelhos);
    printf("Total de ratos: %d\n", total_ratos);
    printf("Total de sapos: %d\n", total_sapos);
    printf("Percentual de coelhos: %.2f %%\n", percentual_coelhos);
    printf("Percentual de ratos: %.2f %%\n", percentual_ratos);
    printf("Percentual de sapos: %.2f %%\n", percentual_sapos);

    return 0;
}