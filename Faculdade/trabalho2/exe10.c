//10) Escrever um programa em C que leia várias palavras (uma por uma) e exiba a palavra e seu tamanho.
//Pare o programa quando for digitada a palavra “OK” ou "ok".
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void mostrarString(char *a);

void mostrarString(char *a){
    int tam = strlen(a) - 1;

    for(int i = 0; i < tam; i++){
        printf("%c", a[i]);
    }
    printf("\nTamanho: %i\n", tam);
}


int main(void) {
    char mensagem[100];
    

    while (1) {
        printf("Digite uma mensagem ('ok' ou 'OK' para encerrar): ");
        fgets(mensagem, sizeof(mensagem), stdin);

        mensagem[strlen(mensagem)-1] = NULL;

        for (int i = 0; mensagem[i]; i++) {
            mensagem[i] = tolower(mensagem[i]);
        }

        if(strcmp(mensagem, "ok") == 0) {
            break;
        }
        mostrarString(mensagem);

    }

    return 0;
}
