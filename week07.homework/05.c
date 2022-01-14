#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
    int n , y = 0;
    char way[SIZE] = {0};
    int data[SIZE] = {0};
    scanf("%d" , &n);
    getchar();
    scanf("%[^\n]" , way);
    getchar();
    for(int i = 0 ; i < n ; i++){
        scanf(" %d" , &data[i]);
    }
    if(way[0] == 'a'){
        for(int k = 0 ; k < n ; k++){
            for(int t = k ; t < n ; t++){
                if(data[t] < data[k]){
                    y = data[t];
                    data[t] = data[k];
                    data[k] = y;
                }
            }
        }
    }
    else if (way[0] == 'd'){
        for(int k = 0 ; k < n ; k++){
            for(int t = k ; t < n ; t++){
                if(data[t] > data[k]){
                    y = data[t];
                    data[t] = data[k];
                    data[k] = y;
                }
            }
        }
    }
    for(int f = 0 ; f < n ; f++){
        printf("%d " , data[f]);
    }
    printf("\n");
}