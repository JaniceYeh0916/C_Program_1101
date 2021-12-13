#include <stdio.h>

int main(){
    int n , m;
    scanf("%d%d" , &n , &m);

    int data[n+1][m+1];
    for(int x = 0 ; x < n ; x++){
        for(int y = 0 ; y < m ; y++){
            scanf("%d" , &data[x][y]);

        }
    }
    int num = 0;
    for(int x = 1 ; x < (n - 1) ; x++){
        for(int y = 1 ; y < (m - 1) ; y++){
            if(data[x][y] > data[x][y-1]){
                if(data[x][y] > data[x][y+1]){
                    if(data[x][y] > data[x-1][y]){
                        if(data[x][y] > data[x+1][y]){
                            printf("%d %d %d\n" , data[x][y] , x+1 , y+1);
                            num++;
                        }
                    }
                }
            }
        }
    }
    if(num == 0){
        printf("%s %d %d" , "None" , n , m);
    }  
}