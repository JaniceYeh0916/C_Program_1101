#include <stdio.h>
#include <math.h>
#define SIZE 100

int main(){
    int n = 0 , k = 0;
    int data[SIZE] = {0};
    scanf("%d" , &n);
    for(int x = 0 ; x < n ; x++){
        scanf(" %d" , &data[x]);
    }
    for(int t = 0 ; t < n ; t++){
        k = pow(data[t] , 2);
        printf("%d " , k);
        k = 0;
    }
    printf("\n");  
}