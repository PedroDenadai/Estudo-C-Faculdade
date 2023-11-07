//Escreva um algoritmo que leia as notas (1° e 2° Bimestre) e o sexo (1: Masculino ou 2: Feminino) de 30
//alunos e armazene os dados em (3) vetores apropriados. Após isso, exiba na tela:
//26. A média final das notas dos alunos do sexo Feminino.


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
        if (sexo[i] == 2) { 
            media += (notas1[i] + notas2[i]) / 2.0; 
            count++; 
        }
    }

    if (count > 0) { 
        media = media / count;
        printf("A média das notas finais de todas as alunas é: %.2f\n", media);
    } else {
        printf("Não foram inseridas notas de alunas.\n");
    }


    return 0;
}