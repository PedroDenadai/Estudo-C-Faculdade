#include <stdio.h>
#include <stdlib.h> // Para a função rand()
#include <time.h>   // Para inicializar a semente randômica

#define TAMANHO 50

int main(void) {
    int espacos = TAMANHO -1;
    int asteriscos = 1;
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < espacos; j++) {
            printf(" ");
        }
        for (int j = 0; j < asteriscos; j++) {
            printf("*");
        }
        printf("\n");
        espacos--;
        asteriscos += 2;
    }

    return 0;
}
