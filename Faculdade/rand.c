#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));


    for(int i = 0;i< 60;i++){
        printf("%i\n", rand() % 1000000);        
    }

    return 0;
}
