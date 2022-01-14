#include <stdio.h>

int main(){
    int v1 , n = 1 , t = 1;
    scanf("%d" , &v1);
    for(int n = 1 ; n <= v1 ; n++){
        for( t = 1 ; t <= v1 ; t++ ){
            printf("%d" , (n * t));
            printf("\t");
        }
        printf("\n");
    }
}