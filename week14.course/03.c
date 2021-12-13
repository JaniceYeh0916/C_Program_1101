#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d" , &n);
    int data[n+1][n+1];
    for(int x = 0 ; x < n ; x++){
        for(int y = 0 ; y < n ; y++){
            scanf("%d" , &data[x][y]);
        }
    }
    int max = 0 , i = 0;
    int box[n+1][4];
    int a = 0 , b = 0 , z = 0;
    for(int x = 0 ; x < n ; x++){
        max = data[x][0];
        for(int y = 1 ; y < n ; y++){
            if(max < data[x][y]){
                max = data[x][y];
                a = x;
                b = y;
            }
        }
        int w = 0;
        for(int y = 0 ; y < n ; y++){
            if(max > data[y][b]){
                w++;
            }
        }
        if(w == 0){
            printf("(%d,%d) = %d" , a , b , max);
            z++;
        }
    }
    if(z == 0){
        printf("%s" , "NONE");
    }
}