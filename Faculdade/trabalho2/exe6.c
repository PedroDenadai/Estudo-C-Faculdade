#include <stdio.h>
#include <string.h>

#define size 100

int palindromo(char *a);

int palindromo(char *a) {
    int tam = strlen(a) - 1;

    for (int i = 0, j = tam - 1; i < j; i++, j--) {
        if (a[i] != a[j]) {
            return 0; 
        }
    }

    return 1; 
}

int main(void) {
    char mensagem[size];

    printf("Mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    if (palindromo(mensagem)) {
        printf("A mensagem é um palíndromo.\n");
    } else {
        printf("A mensagem não é um palíndromo.\n");
    }

    return 0;
}
