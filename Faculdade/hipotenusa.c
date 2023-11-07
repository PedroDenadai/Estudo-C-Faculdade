#include <stdio.h>

int main(void) {
    double a,b ,c;

    printf("Insira o valor de B: ");
    scanf("%lf", &b);

    printf("Insira o valor de C: ");
    scanf("%lf", &c);

    a = sqrt((pow(b, 2) + pow(c, 2)), 2);
    
    printf("A hipotenusa do triangulo é: %.2lf", a);
    
    
    return 0;
}