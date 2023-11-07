#include <stdio.h>

int main(void) {
    
    for (int i = 0; i <= 1000000; i++) {
        if (i % 2 == 0) {
            printf("%d é par.\n", i);
        }
    }

    return 0;
}
