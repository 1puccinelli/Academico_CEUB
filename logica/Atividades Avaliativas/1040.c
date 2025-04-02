// Pedro Henrique Soares Puccinelli

#include <stdio.h>

int main() {
    float N1, N2, N3, N4, media, exame, media_final;
    
    // Leitura das 4 notas
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    // Cálculo da média ponderada
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    printf("Média: %.1f\n", media);

    // Verificação da situação do aluno
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        // Caso precise fazer exame
        printf("Aluno em exame.\n");

        // Leitura da nota do exame
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);

        // Cálculo da média final
        media_final = (media + exame) / 2;

        // Verificação final após exame
        if (media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        
        printf("Final de média: %.1f\n", media_final);
    }

    return 0;
}
