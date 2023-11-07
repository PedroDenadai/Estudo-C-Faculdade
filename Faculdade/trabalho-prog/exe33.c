//33. Faça um algoritmo em C que preencha dois vetores A e B (TAMANHO: 5) com valores inteiros.
//Depois de preencher os vetores A e B, exiba um vetor C, sendo que C = 3 * A ̶B.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MIN 0
#define MAX 20

int main(void) {
    int A[SIZE], B[SIZE], C[SIZE];
    int i, j, FLAG;
    srand(time(NULL));

    while (1) {
        for (i = 0; i < SIZE; i++) {
            int num;
            do {
                num = rand() % (MAX - MIN + 1) + MIN;
                FLAG = 0;
                for (j = 0; j < i; j++) {
                    if (A[j] == num) {
                        FLAG = 1;
                        break;
                    }
                }
            } while (FLAG);
            A[i] = num;
        }
        for (i = 0; i < SIZE; i++) {
            int num;
            do {
                num = rand() % (MAX - MIN + 1) + MIN;
                FLAG = 0;
                for (j = 0; j < SIZE; j++) {
                    if (B[j] == num) {
                        FLAG = 1;
                        break;
                    }
                }
            } while (FLAG);
            B[i] = num;
        }
        printf("A[");
        for(int i = 0; i<SIZE; i++){
            printf("%i ", A[i]);
        }
        printf("] \n\t ");
        printf("\nB[");
        for(int i = 0; i<SIZE; i++){
            printf("%i ", B[i]);
        }
        printf("]\n");
        printf("Vetor C: [");
        for(int i = 0; i < SIZE; i++){
            C[i] = 3 * A[i] - B[i];
            printf(" %i ", C[i]);
        }
        printf("]\n\n");
        break;
    }
    return 0;
}
