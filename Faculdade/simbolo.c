#include <stdio.h>
#include <ctype.h>

int main() {
    char simbolo;

    printf("Digite um símbolo: ");
    scanf("%c", &simbolo);

    if (isalpha(simbolo)) {
        if (simbolo == 'a' || simbolo == 'e' || simbolo == 'i' || simbolo == 'o' || simbolo == 'u') {
            if (islower(simbolo)) {
                printf("É uma vogal minúscula.\n");
            } else {
                printf("É uma vogal maiúscula.\n");
            }
        } else {
            if (islower(simbolo)) {
                printf("É uma consoante minúscula.\n");
            } else {
                printf("É uma consoante maiúscula.\n");
            }
        }
    } else {
        printf("Não é uma letra.\n");
    }

    return 0;
}
