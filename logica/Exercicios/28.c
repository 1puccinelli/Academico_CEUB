#include <stdio.h>

int main() {
    int senha;
    int senha_correta = 2002;

    while (1) { // Loop infinito que será quebrado quando a senha correta for digitada
        scanf("%d", &senha);

        if (senha == senha_correta) {
            printf("Acesso Permitido\n");
            break; // Sai do loop
        } else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}