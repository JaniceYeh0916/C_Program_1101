#include <stdio.h>
#define SIZE 100

int main(){
    int v1 , val = 0 , k;
    int data[SIZE] = {0};
    scanf("%d" , &v1);
    getchar();
    for(int n = 0 ; n < v1 ; n++){
        scanf(" %d" , &data[n]);
    }
    val = data[0];
    for(int x = 0 ; x < (v1-1) ; x++){
        k = 1;
        for(int y = x ; y < v1 ; y++){
            k *= data[y];
            if(val < k){
                val = k;
            }
        }
    }
    printf("%d\n" , val);
}