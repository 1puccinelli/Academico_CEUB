#include <stdio.h>

int main() {

    int inicio, fim, duracao;

    printf("Digite a hora inicial do jogo: ");
    scanf("%d", &inicio );

    printf("Digite a hora final do jogo: ");
    scanf("%d", &fim );

    if( inicio < fim) {
        duracao = fim - inicio;
    } else {
        duracao = (24 - inicio) + 
    fim;
        }
    
    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;

}