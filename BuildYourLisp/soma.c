#include <stdio.h>
#include <math.h>

// protótipo da função
float equacao(int a, int b, int c);

int main() {
   printf("%f\n", equacao(2, 8, -24));
   return 0;
}

// definição da função
float equacao(int a, int b, int c) {
   float delta = pow(b, 2) - 4 * a * c;
   if (delta > 0) {
    float x1 = (- b + (pow(delta, 1/2))) / 2 * a;
    float x2 = (- b - (pow(delta, 1/2))) / 2 * a;
    printf("%f \n", delta);
    
    return x1; 
    }
}

