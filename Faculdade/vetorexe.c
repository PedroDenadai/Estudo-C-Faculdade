#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 9
#define MIN 0
#define MAX 20

int main(void) {
    int V1[SIZE], V2[SIZE];
    int i, j, FLAG;
    srand(time(NULL));

    while (1) {
        for (i = 0; i < SIZE; i++) {
            int num;
            do {
                num = rand() % (MAX - MIN + 1) + MIN;
                FLAG = 0;
                for (j = 0; j < i; j++) {
                    if (V1[j] == num) {
                        FLAG = 1;
                        break;
                    }
                }
            } while (FLAG);
            V1[i] = num;
        }
        for (i = 0; i < SIZE; i++) {
            int num;
            do {
                num = rand() % (MAX - MIN + 1) + MIN;
                FLAG = 0;
                for (j = 0; j < SIZE; j++) {
                    if (V2[j] == num) {
                        FLAG = 1;
                        break;
                    }
                }
            } while (FLAG);
            V2[i] = num;
        }
        int iguais = 0;
        for (i = 0; i < SIZE; i++) {
            for(int j = 0; j < SIZE; j++){
                if(V1[i] == V2[j]){
                    iguais++;
                }
            }
        }
        if(iguais == SIZE){
            printf("V1[");
            for(int i = 0; i<SIZE; i++){
                printf("%i ", V1[i]);
            }
            printf("] = ");
            printf("V2[");
            for(int i = 0; i<SIZE; i++){
                printf("%i ", V2[i]);
            }
            printf("]\n");
            break; 
        }
    }
    return 0;
}
