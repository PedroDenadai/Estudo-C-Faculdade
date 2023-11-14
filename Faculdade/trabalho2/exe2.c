#include <stdio.h>
#include <string.h>

int emBranco(char *a);

int emBranco(char *a) {
    int count = 0;
    
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == ' ' || a[i] == '\n') {
            count++;
        }
    }
    
    return count;
}

int main(void) {
    char mensagem[100]; 
    printf("Escreva a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    int contagem = emBranco(mensagem);
    printf("\nContagem de brancos: %i\n", contagem);
    printf("%c\n", mensagem[strlen(mensagem)]);

    return 0;
}
