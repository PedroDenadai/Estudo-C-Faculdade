#include <stdio.h>
#include <math.h>

//
void cubo1(float l, float *area, float *volume);
float cubo2(float l, float *volume);
float cubo2(float l, float *area);


//
void cubo1(float l, float *area, float *volume){
    *area = 6 * pow(l , 2);
    *volume = pow(l , 3);
}

float cubo2(float l, float *volume){
    float aux;
    aux = 6 * pow(l, 2);
    *volume = pow(l, 3);
    return aux;
}



int main(void){
    float a,b;
    float *c;
    cubo1(5, &a, &b);
    printf("%f\n", &c);
}