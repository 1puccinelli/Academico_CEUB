// Pedro Henrique Soares Puccinelli

#include <stdio.h>

int main() {

    int horaInicio, minutoInicio, horaFim, minutoFim;
    int duracaoHoras, duracaoMinutos;

    printf("Digite a hora inicial do jogo: ");
    scanf("%d", &horaInicio );

    printf("Digite o minuto de inicio do jogo: ");
    scanf("%d", &minutoInicio);

    printf("Digite a hora final do jogo: ");
    scanf("%d", &horaFim );
    
    printf("Digite o minuto de fim do jogo ");
    scanf("%d", &minutoFim);

    int inicioTotal = horaInicio + 60 + minutoInicio;
    int fimTotal = horaFim * 60 + minutoFim;

    if (fimTotal <= inicioTotal) {
        fimTotal += 24 + 60;
    }

    int duracaoTotal = fimTotal - inicioTotal;
    duracaoHoras = duracaoTotal / 60;
    duracaoMinutos = duracaoTotal % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHoras, duracaoMinutos);

    return 0;

}