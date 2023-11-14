//8) Criar uma função que receba um número inteiro qualquer Positivo e retorne: logN π se N for PRIMO
//ou retorne: logπ N se N for NÃO for PRIMO. Dica Matemática: logB A =logC A / logC B

#include <stdio.h>
#include <math.h>

#define PI 3.14159

double loga(double a, double b);
int primo(int x);
double result(int n);

double loga(double a, double b){
    return log(a) / log(b);
}

int primo(int x){
    if(x == 0){
        return 0;
    }
    if( x <= 3){
        return 1;
    }
    for(int i = 2; i <= (int) ceil(sqrt(x)); i++){
        if(x % i == 0){
            return 0;
        }
    }
    return 1;
}

double result(int n){
    if(primo(n)){
        return loga((double) n, PI);
    }else{
        return loga(PI, (double) n);
    }
}

int main(void){
    int c = 0;
    printf("Coloque um numero inteiro: "); scanf("%i", &c);
    printf("Resultado: %.2f", result(c));
}