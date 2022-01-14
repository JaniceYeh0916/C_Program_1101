#include <stdio.h>

int fun(int a , int b);
int fun(int a , int b){
    int c = 0 , i;
    for(i = a ; i <= b ; i++){
        c = 0;
        for(int j = 1 ; j <= i ; j++){
            if(i % j == 0){
                c += 1;
            }
        }
        if (c == 2){
            printf("%d " , i);
        }        
    }

}

int main(){
    int a, b;
    scanf("%d%d" , &a , &b);
    fun(a, b);
}