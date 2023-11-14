//Crie uma função que calcule o IMC (Índice de Massa Corpórea) de uma pessoa com base na sua idade,
//massa e sexo conforme tabela. Na main, use a função e exiba o IMC de 100 entrevistados (um por um).

#include <math.h>
#include <stdio.h>
#include <string.h>

float imc(float h, float massa, char a);

float imc(float h, float massa, char a){
    float resultado = 0;
    if(a == 'f' || a == 'F'){
        resultado = 0.95 * massa / pow(h, 2);
    }else if(a == 'm' || a == 'M'){
        resultado = 1.05 * massa / pow(h, 2);
    }
    return resultado;
}

int main(void){
    char sexo;
    float massa = 0;
    float altura = 0;
    for(int i = 1; i <= 100;i++){
        printf("\nEntrevistado %i\n", i);
        printf("\tSexo(Masculino = m, Feminino = f): ");scanf(" %c", &sexo);
        printf("\n\tMassa(Kg): ");scanf("%f", &massa);
        printf("\n\tAltura: ");scanf("%f", &altura);
        printf("\tIMC: %.2f", imc(altura, massa, sexo));
    }
}