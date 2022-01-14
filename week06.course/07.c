#include <stdio.h>

int main(){
    int v1 , k = 1 , sum = 0;
    scanf("%d" , &v1);
    while( k <= v1 ){
        if (v1 % k == 0){
            sum = sum + k;
            k++;
        }
        else{
            k++;
        } 
    }
    if (sum == (1 + v1)){
        printf("%s\n" , "YES");
    }
    else{
        printf("%s\n" , "NO");
    }
}