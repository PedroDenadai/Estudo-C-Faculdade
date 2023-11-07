#include <stdio.h>

int main(void){
    
    for(int i = 1; i <= 40;i++){
        for(int j = 1; j <= 40; j++){
            if(j == 20 || j == 21 || j == 19){
                printf(" ");
            }else if(i == 20 || i == 21 || i == 19){
                printf(" ");
            }else{
                printf("* ");
            }
 
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}