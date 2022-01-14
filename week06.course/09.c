#include<stdio.h>

int gcd(int a , int b){
    int r;
    r = a % b;
    if (r == 0){
        return b;
    }
    else{
        gcd(b,r);
    }
}

int lcm(int a , int b){
    return(a*b)/gcd(a,b);
}

int main(){
    int a , b;
    scanf("%d%d" , &a ,&b);
    printf("%d\n" , gcd(a,b));
    printf("%d\n" , lcm(a,b));
    return 0;
}