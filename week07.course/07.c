#include <stdio.h>

int fun(int x){
    int a = x;
    int n = x;
    while(a >= 3){
        int r = a / 3;
        n += r;
        a = ((a % 3) + r);
    }
    printf("%d\n" , n);
}

int main (){
    int v1;
    scanf("%d" , &v1);
    fun(v1);
}