#include <stdio.h>
#include <math.h>


int fat(int n);
int arranjo(int n, int k);
int combinacao(int n, int k);

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

int arranjo(int n, int k){
    int N = fat(n) / fat((n - k));
    return N;
}

int combinacao(int n, int k){
    int a = arranjo(n, k) / fat(k);
    return a;
}

int main(void){
    int opcao;
    int n, k;

    do {
        printf("Menu\n");
        printf("1: Calcular Fatorial\n");
        printf("2: Calcular Arranjo\n");
        printf("3: Calcular Combinação\n");
        printf("0: Sair\n");
        printf("Sua Opção: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("Digite um número para calcular o fatorial: ");
                scanf("%i", &n);
                printf("%i! = %i\n", n, fat(n));
                break;
            case 2:
                printf("Digite n: ");scanf("%i", &n);
                printf("Digite k: ");scanf("%i", &k);
                printf("Arranjo(%i, %i) = %i\n", n, k, arranjo(n, k));
                break;
            case 3:
                printf("Digite n: ");scanf("%i", &n);
                printf("Digite k: ");scanf("%i", &k);
                printf("Combinação(%i, %i) = %i\n", n, k, combinacao(n, k));
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}