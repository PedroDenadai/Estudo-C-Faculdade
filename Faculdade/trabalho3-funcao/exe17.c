/*
17) Crie uma função e seu protótipo que determine An e Sn de uma Progressão Geométrica (P.G). Após
isso, use a função 50 vezes para calcular os dados de 50 P.G's com valores de a1, q e n lidos do usuário.
Enésimo termo ∶ An = a1 ∗ q**(n−1)
Soma dos termos: Sn = a1 ∗ (q**n − 1) / q − 1
Sendo que:
a1 = primeiro termo da P. G
q = Razão da P. G
n = Quantidade de termos da P. G
*/

#include <stdio.h>
#include <math.h>

float An(float a1,float q, float n);
float Sn(float a1,float q, float n);

float An(float a1,float q, float n){
    return a1 * pow(q, n - 1);
}

float Sn(float a1, float q, float n) {
    return a1 * (pow(q, n) - 1) / (q - 1); 
}

int main(void){
    float a1, q, n;

    for(int i = 0; i < 50; i++){
        printf("Progessão Geométrica %i vez\n\t", i);
        printf("Coloque o a1: "); scanf("%f", &a1);
        printf("Coloque o q (Razao da P.G): "); scanf("%f", &q);
        printf("Coloque o n (Quantidade de termos da P.G): "); scanf("%f", &n);
        printf("O Enésimo termo da P.G é: %.2f", An(a1, 1, n));
        printf("O Soma dos termo da P.G é: %.2f", Sn(a1, 1, n));
    }
}