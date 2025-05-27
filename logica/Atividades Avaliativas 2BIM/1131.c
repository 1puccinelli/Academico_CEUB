//PEDRO HENRIQUE SOARES PUCCINELLI

#include <stdio.h>

int main() {
    int gols_inter, gols_gremio;
    int novo_grenal = 1; // Variável para controlar a repetição do programa
    int total_grenais = 0;
    int vitorias_inter = 0;
    int vitorias_gremio = 0;
    int empates = 0;

    while (novo_grenal == 1) {
        // Leitura dos gols de Inter e Grêmio
        scanf("%d %d", &gols_inter, &gols_gremio);

        total_grenais++; // Incrementa o contador de grenais

        // Verifica o resultado do grenal
        if (gols_inter > gols_gremio) {
            vitorias_inter++;
        } else if (gols_gremio > gols_inter) {
            vitorias_gremio++;
        } else {
            empates++;
        }

        // Solicita ao usuário se deseja um novo grenal
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novo_grenal);
    }

    // Impressão das estatísticas finais
    printf("%d grenais\n", total_grenais);
    printf("Inter:%d\n", vitorias_inter);
    printf("Gremio:%d\n", vitorias_gremio);
    printf("Empates:%d\n", empates);

    // Mensagem indicando qual time venceu mais ou se houve empate
    if (vitorias_inter > vitorias_gremio) {
        printf("Inter venceu mais\n");
    } else if (vitorias_gremio > vitorias_inter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}