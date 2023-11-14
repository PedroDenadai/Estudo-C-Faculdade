//6) Criar duas funções e seus protótipos que calculem a Combinação e o Arranjo de n elementos
//combinados p a p. Após isso, na main, use as funções criadas várias vezes e exiba o resultado da
//Combinação e do Arranjo enquanto os valores lidos do usuário: n e p estiverem corretos. Sabe-se que:
//Arranjo(n, p) =n!/(n−p)!
//Combinação(n, p) =Arranjo(n,p)/ p!
// sendo que: n e p ≥ 0 e n ≥ p

#include <stdio.h>
#include <math.h>

int fat(int n);
int arranjo(int n, int p);
int combinacao(int n, int p);

int fat(int n){
    int i,f = 1;
    if(n == 0 || n == 1){
        return 1;
    }else{
        for(i = 2; i <= n; i++){
            f *= i;
        }
        return f;
    }
}

int arranjo(int n, int p){
    int N = fat(n) / fat((n - p));
    return N;
}

int combinacao(int n, int p){
    int a = arranjo(n, p) / fat(p);
    return a;
}

int main(void){
    int n, p;

    while (1) {
        printf("Digite o valor de n (não negativo): ");
        scanf("%d", &n);

        printf("Digite o valor de p (não negativo): ");
        scanf("%d", &p);

        if (n < 0 || p < 0 || n < p) {
            printf("Valores inválidos. Certifique-se de que n e p são não negativos e n é maior ou igual a p.\n");
            break;
        }

        int resultadoArranjo = arranjo(n, p);
        int resultadoCombinacao = combinacao(n, p);

        printf("Arranjo(%d, %d) = %d\n", n, p, resultadoArranjo);
        printf("Combinação(%d, %d) = %d\n", n, p, resultadoCombinacao);
    }

    return 0;
}