//28. A quantidade de alunos que ficaram acima da média final 7.0 para aprovação.

#include <stdio.h>
#include <string.h>

#define size 3

int main(void){

    printf("Coloque as notas dos %i alunos e o sexo de cada um\n\n", size);
    int notas1[size];
    int notas2[size];
    int sexo[size];

    for(int i = 1; i <= size; i++){
        printf("ALuno %i: \n", i);
        printf("Nota do 1: ");
        scanf("%i", &notas1[i]);
        printf("Nota do 2: ");
        scanf("%i", &notas2[i]);
        printf("Sexo (1: Masculino ou 2: Feminino): ");
        scanf("%i", &sexo[i]);
    }

    printf("Alunos [\n");
    char sexo_char[10];
    for (int i = 1; i <= size; i++){
        if(sexo[i] == 1){
            strcpy(sexo_char, "Masculino");
        }else if(sexo[i] == 2){
            strcpy(sexo_char, "Feminino");
        }
        printf("Notas do aluno %i [Nota 1: %i , Nota 2: %i, Sexo: %s]\n", i, notas1[i], notas2[i], sexo_char);
    }
     printf("\n]");

 float media = 0.0;
    int count = 0; 
    for (int i = 0; i < size; i++) {
        media += (notas1[i] + notas2[i]) / 2.0;
        if(media > 7.0){
            printf("O aluno %i ficou acima da media final 7", i);
        } 
    }


    return 0;
}