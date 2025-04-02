#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco, total;

    // Tabela de preços
    float precos[] = {4.00, 4.50, 5.00, 2.00, 1.50};

    // Valores de entrada
    scanf("%d %d", &codigo, &quantidade);

    // Calcula o total com base no código do item
    preco = precos[codigo - 1]; // O array começa do índice 0, então subtraímos 1
    total = preco * quantidade;

    printf("Total: R$ %.2f\n", total);

    return 0;
}