#include <stdio.h>

int fun(int x){
    unsigned long long int total = 1;
    int n = 0;
    while(total <= 100000){
        total *= x;
        n += 1;
    }
    printf("%d\n" , n);
}

int main(){
    int a;
    scanf("%d" , &a);
    fun(a);
}