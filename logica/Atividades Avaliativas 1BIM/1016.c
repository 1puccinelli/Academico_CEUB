//Pedro Henrique Soares Puccinelli

#include <stdio.h>

    int main() {
        
        const int velocidade_X = 60;
        const int velocidade_Y = 90;
        int distancia;

            printf("Digite a distancia em km: ");
            scanf("%d", &distancia);

                int diferenca_velocidade = velocidade_Y - velocidade_X;

                float tempo_em_horas = (float)distancia / diferenca_velocidade;
                int tempo_em_minutos = (int)(tempo_em_horas * 60);

            printf("%d minutos\n", tempo_em_minutos);
    
    return 0;
}