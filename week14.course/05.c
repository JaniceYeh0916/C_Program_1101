#include <stdio.h>

int main(){
    int n , m , v1 , num = 0;
    scanf("%d%d%d" , &n , &m , &v1);
    int data[n+1][m+1];
    int *dataPrt = data[0];
    for(int x = 0 ; x < n ; x++){
        for(int y = 0 ; y < m ; y++){
            scanf("%d" , &data[x][y]);
        }
    }
    for(int x = 0 ; x < n ; x++){
        for(int y = 0 ; y < m ; y++){
            if(*(dataPrt + (x*(m+1)+y)) == v1){
                printf("%d %d\n" , x , y);
                num++;
            }
        }
    }
    if(num == 0){
        printf("%d %d\n" , -1 , -1);
    }
}