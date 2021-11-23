#include <stdio.h>

int main(){
    int v1 , v2;
    scanf("%d%d" , &v1 ,&v2);
    for(int x = 0 ; x <= v2 ; x++){
        for(int y = x ; y <= (x + v1) ; y++){
            if(y < 10){
                printf("    %d" , y);
            }
            else{
                printf("   %d" , y);
            }
        }
        printf("\n");
    }
}