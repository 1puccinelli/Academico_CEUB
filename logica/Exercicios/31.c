#include <stdio.h>

int main() {
    int codigo;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    // Loop que continua lendo códigos até que o código 4 (Fim) seja inserido
    while (1) {
        scanf("%d", &codigo); // Lê o código do combustível

        if (codigo == 1) { // Se o código for 1 (Álcool)
            alcool++;      // Incrementa o contador de Álcool
        } else if (codigo == 2) { // Se o código for 2 (Gasolina)
            gasolina++;           // Incrementa o contador de Gasolina
        } else if (codigo == 3) { // Se o código for 3 (Diesel)
            diesel++;             // Incrementa o contador de Diesel
        } else if (codigo == 4) { // Se o código for 4 (Fim)
            break;                // Sai do loop, encerrando a leitura
        }
        // Se o código for inválido (fora da faixa de 1 a 4), o loop continua
        // e simplesmente solicita um novo código, conforme a descrição do problema.
    }

    // Imprime a mensagem de agradecimento e as quantidades de cada combustível
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}