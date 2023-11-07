#include <stdio.h>
#include <string.h>

#define SIZE 100

int count(char *a);
void removeSpaces(char *str);

int count(char *a) {
    int count = 0;

    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] == 'u' || a[i] == 'U' || a[i] == 'v' || a[i] == 'V'){
            count++;
        }
    }

    return count;
}

void removeSpaces(char *str) {
    int i, j = 0;
    for (i = 0; str[i]; i++) {
        if(str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main(void){
    char mensagem[SIZE];

    printf("Mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    removeSpaces(mensagem);
    printf("Mensagem sem espaços: %s\n", mensagem);

    int cnt = count(mensagem);
    printf("A quantidade de 'U' e 'V' que a mensagem tem é: %d\n", cnt);

    return 0;
}
