#include <stdio.h>

int main(){
    int v1 , k = 0 , sum = 0;
    scanf("%d" , &v1);
    for (int n = 1 ; n <= v1 ; n++){
        k = n * (n + 1);
        sum  = sum + k;
    }
    printf("%d\n" , sum);
}