#include <stdio.h>

int main (){
    int v1 , t = 0 , sum = 0 , ten = 10;
    scanf("%d" , &v1);
    while((v1 % 10) != 0){
        int k = v1 % ten;
        sum = sum + k;
        v1 = (v1 - k) / ten;
        t += 1;
    }
    printf("%d\n" , t);
    printf("%d\n" , sum + v1);
}