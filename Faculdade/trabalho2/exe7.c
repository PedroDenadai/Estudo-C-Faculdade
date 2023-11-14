//7) Escrever um programa que leia várias mensagens (uma por uma) e exiba cada mensagem com um
//espaço em branco entre todos os caracteres. Pare o programa quando for digitada a palavra “FIM”.
#include <stdio.h>
#include <string.h>

void mostrarComEspacosEmBranco(char *a);


void mostrarComEspacosEmBranco(char *a) {
    int tam = strlen(a);

    for (int i = 0; i < tam; i++) {
        printf("%c ", a[i]);
    }

    printf("\n");
}


int main(void) {
    char mensagem[100];

    while (1) {
        printf("Digite uma mensagem (ou 'FIM' para encerrar): ");
        fgets(mensagem, sizeof(mensagem), stdin);

        if (strcmp(mensagem, "FIM") == 0) {
            break;
        }

        mostrarComEspacosEmBranco(mensagem);
    }

    return 0;
}
