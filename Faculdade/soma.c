#include <stdio.h>

#define PI 3.14159

int main(void){

    float s = PI, m;
    int n, i;
    printf("Insira o valor de n (n >= 1): ");
    scanf("%i", &n);

    if (n < 1){
        return 0;
    }else {
        for(i = 1; i <= n;i++){
            if(i % 2 == 0){
                s += PI / i;
            }else{
                m *= i / PI;
            }
        }


    }

    printf("%.2f\n", s);
    printf("%.2f\n", m);
    return 0;
}