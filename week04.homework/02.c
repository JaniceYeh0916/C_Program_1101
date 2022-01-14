#include <stdio.h>

int main(){
    int v1 , n = 1 , number = 0 , v2 = 0;
    scanf("%d" , &v1);
    while (n <= v1){
        if (v1 % n == 0){
            number++;
            if (number == 2){
                v2 = n;
            }
            n++;
        }
        else{
            n++;
        }
    }
    if (number == 2){
        printf("YES, %d\n" , (v1 / 2));
    }
    else if (v1 == 1){
        printf("NO, %d\n" , 0);
    }
    else{
        printf("NO, %d\n" , v2-1);
    }
}