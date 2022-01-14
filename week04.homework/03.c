#include <stdio.h>
#include <string.h>

int main(){
    int v1 , n = 1;
    scanf("%d" , &v1);
    while(n <= v1){
        for(int i = 1 ; i <= v1 ; i++ ){
            printf("%s" , "#");
        }
        printf("\n");
        n++;
    }
}