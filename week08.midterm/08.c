#include <stdio.h>

int main(){
    int v1;
    scanf("%d" , &v1);
    for(int n = v1 ; n > 0 ; n--){
        for(int x = n ; x < v1 ; x++){
            printf("%s" , " ");
        }
        for(int y = n ; y > 0 ; y--){
            printf("%s" , "#");
        }
        printf("\n");
    }
}