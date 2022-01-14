#include <stdio.h>

int fun(int x);
int fun(int x){
    int total = 1;
    for(x ; x > 0 ; x--){
        total = total * x;
    }
    return total;
}

int main(){
    int x;
    scanf("%d" , &x);
    printf("%d\n" , fun(x));
}