#include <stdio.h>
#include <stdlib.h>

int main(){
    int a , b , seed;
    int data[100];
    int redata[100][100];
    scanf("%d%d%d" , &a , &b , &seed);
    srand(seed);
    for(int n = 0 ; n < a * b ; n++){
        data[n] = rand()%100+1;
    }
    for(int x = 1 ; x <= a ; x++){
        for(int y = 0 ; y < b ; y++){
            int t = 3 * (x-1);
            printf("%4d" , data[y+t]);
            redata[x-1][y] = data[y+t];
        }
        printf("\n");
    }
    for(int n = 1 ; n <= 20 ; n++){
        printf("%s" , "-");
    }
    printf("\n");
    for(int x = 0 ; x < b ; x++){
        for(int y = 0 ; y < a ; y++){
            printf("%4d" , redata[y][x]);
        }
        printf("\n");
    }
}