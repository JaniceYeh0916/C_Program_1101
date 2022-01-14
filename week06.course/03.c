#include <stdio.h>

int main(){
    int v1;
    scanf("%d" , &v1);
    for(int n = 1 ; n <= v1 ; n++){
        if(v1 % n == 0){
            printf("%d\n" , n);
        }
    }
}