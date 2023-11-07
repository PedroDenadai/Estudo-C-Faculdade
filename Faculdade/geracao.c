#include <stdio.h>

int main(void){
    int age;
    printf("\nInsira sua idade: ");
    scanf("%i", &age);

    if(age >= 15 && age <=20){
        printf("\nSua geracao é a Z\n\n");
    } else if(age >= 21 && age <= 34){
        printf("\nSua geracao é a Y\n"); 
    } else if(age >= 35 && age <= 49){
        printf("\nSua geracao é a X\n"); 
    } else if(age >= 50 && age <= 64){
        printf("\nSua geracao é a BABY BOOMERS\n"); 
    } else if(age >= 60){
        printf("\nSua geracao é a SILENCIOSA\n"); 
    }
}