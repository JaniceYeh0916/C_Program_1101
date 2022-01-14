#include <stdio.h>

int fun(int x);
int fun(int x){
    unsigned long long int total = 1;
    int n = 0;
    for(x ; x > 0 ; x--){
        total = total * x;
    }
    while(total % 10 == 0){
        n += 1;
        total = total / 10;
    }

    if(n != 0){
        printf("%d\n" , n);
    }
    else{
        printf("%s\n" , "NO");
    }
    
}


int main(){
    unsigned long long int a;
    scanf("%d" , &a);
    fun(a);
}