#include <stdio.h>

int main(){
    int v1 , v2 , v3;
    int data[3];
    for(int n = 0 ; n < 3 ; n++){
        scanf("%d" , &data[n]);
    }
    for(int x = 0 ; x < 3 ; x++){
        for(int y = x ; y < 3 ; y++){
            if(data[x] < data[y]){
                int a = data[x];
                data[x] = data[y];
                data[y] = a;
            }
        }
    }
    int k = data[1] + data[2];
    if(k > data[0]){
        printf("%s\n" , "True");
    }
    else{
        printf("%s\n" , "False");
    }
}