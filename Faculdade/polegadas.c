#include <stdio.h>

int main(void){
    float cm;
    printf("CM: ");
    scanf("%f", &cm);
    float pole = cm / 2.54;
    printf("\nCM -> Polegadas: %.3f\n",pole);
    float pes = pole / 12;
    printf("CM -> PÉS: %.3f\n", pes);

}