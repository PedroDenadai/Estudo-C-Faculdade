#include <stdio.h>

int main(void) {
    
    float nota1, nota2, media_final;
  

    printf("Coloque a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nColoque a segunda nota: ");
    scanf("%f", &nota2);

    media_final = (nota1 + nota2) / 2;

    if ((nota1 >= 0 || nota1 <= 10) && (nota2 >= 0 || nota2 <= 10) ){
        if (media_final >= 5){
            printf("Voce passou!!!");
        } else {
            printf("Voce Não PASSOU!!");
        }
    } else {
        printf("Algumas das notas está invalida.");
    }


    
    return 0;
}