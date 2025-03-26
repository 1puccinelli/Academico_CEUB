//Pedro Henrique Soares Puccinelli

#include <stdio.h>

int main() {
    int N, horas, minutos, segundos;

    scanf("%d", &N);

    horas = N / 3600;        // 1 hora tem 3600 segundos
    minutos = (N % 3600) / 60; // O restante dividido por 60 dá os minutos
    segundos = N % 60;       // O restante são os segundos

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}