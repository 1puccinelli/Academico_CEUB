//Pedro Henrique Soares Puccinelli

#include <stdio.h>

int main () {
    int num1, num2; 
    char operacao;

    printf("Digite o primeiro numero");
    scanf("%d", &num1);

    printf("Digite o segundo numero");
    scanf("%d", &num2);

    while ((getchar()) != '\n');  //Adicionado para não dar erro de 'Operação Inválida' toda hora

    printf("Digite a operacao (+, -, *, /)");
    scanf(" %c", &operacao);  //Adicionado o 'espaço antes do "%c" ' para não dar o erro também

    switch (operacao) {
        case '+':  //Adição
    printf("Resultado: %d\n", num1 + num2);
    break;

        case '-':  //Subtração
    printf("Resultado: %d\n", num1 - num2);
    break;

        case '*':  //Multiplicação
    printf("Resultado: %d\n", num1 * num2);
    break;

        case '/':  //Divisão
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