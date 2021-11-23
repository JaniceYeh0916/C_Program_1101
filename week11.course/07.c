#include <stdio.h>
#include <math.h>

int main(){
    int a , b;
    int data[100];
    while(scanf("%d%d" , &a , &b) != EOF){
        if(a <= pow(2 , 32) && b <= pow(2 , 32)){
            if(a > b){
                int c = a;
                a = b;
                b = c;
            }
            int d = b - a;
            printf("%d\n" , d);
        }
    }
}