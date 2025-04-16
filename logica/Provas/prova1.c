//Pedro Henrique Soares Puccinelli

#include <stdio.h>

int main () {
    int num1, num2; 
    char operacao;

    printf("Digite o primeiro numero");
    scanf("%d", &num1);

    printf("Digite o segundo numero");
    scanf("%d", &num2);

    while ((getchar()) != '\n');

    printf("Digite a operacao (+, -, *, /)");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
    printf("Resultado: %d\n", num1 + num2);
    break;

        case '-':
    printf("Resultado: %d\n", num1 - num2);
    break;

        case '*':
    printf("Resultado: %d\n", num1 * num2);
    break;

        case '/':
    if (num2 != 0) {
    printf("Resultado: %d\n", num1 / num2);
    break;
    } else {
        printf("Erro: divisao por zero nao e permitida. \n");
    }
    break;

    default:
    printf("Operacao invalida. \n");

    }

    return 0;
}