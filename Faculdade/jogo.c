#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int chutes[13];
    srand(time(NULL));

    int numeroAleatorio = rand() % 1000 + 1, chute;

    printf("Voce terá 13 chances para acertar um número entre [1-1000]\n");

    for(int i = 0; i < 13; i++){
        printf("Voce está na tentativa %i\n", i + 1);
        printf("Coloque seu chute: ");
        scanf("%i", &chute);
        
        int chuteRepetido = 0;
        for(int j = 0; j < i; j++){
            if(chute == chutes[j]){
                chuteRepetido = 1;
                printf("Voce ja colocou esse numero.\n");
                break;
            }
        }

        if(chuteRepetido){
            i--;
        }else{
            chutes[i] = chute;
        }

        if(chute == numeroAleatorio){
            printf("Voce acertou!!!\n");
            break;
        }else if (chute > numeroAleatorio){
            printf("O número é MENOR\n");
        }else{
            printf("O número é MAIOR\n");
        }
    }

    printf("O número certo é: %i\n", numeroAleatorio);

    return 0;
}
