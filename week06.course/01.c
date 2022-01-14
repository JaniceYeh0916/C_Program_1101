#include <stdio.h>

int main(){
    int v1 , sum = 0;
    scanf("%d" , &v1);
    for (int n = 1 ; n <= v1 ; n++){
        if (n % 3 == 0){
            sum = sum + n;
        }
    }
    printf("%d\n" , sum);
}
