#include <stdio.h>

int main(){
    int v1 , n , k = 0 , i = 12;
    scanf("%d%d" , &v1 , &n);
    char data[] = "0000000000000";
    while(v1 > n){
        k = v1 % n;
        char ck;
        ck = k+48;
        data[i] = ck;
        i--;
        v1 = (v1 - k)/n;
    }
    char cv1;
    cv1 = v1+48;
    data[i] = cv1;
    printf("%s\n" , data);
}