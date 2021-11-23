#include <stdio.h>
#include <stdlib.h>

int main(){
    int seed;
    int data[6];
    scanf("%d" , &seed);
    srand(seed);
    for(int n = 0 ; n < 6 ; n++){
        int a = rand()%42+1;
        data[n] = a;
        for(int x = 0 ; x < n ; x++){
            while(data[x] == a){
                int k = rand()%42+1;
                a = k;
            }
            data[n] = a;
        }
    }
    for(int m = 0 ; m < 6 ; m++){
        for(int l = m ; l < 6 ; l++){
            if(data[m] > data[l]){
                int q = data[m];
                data[m] = data[l];
                data[l] = q;
            }
        }
    }
    for(int y = 0 ; y < 6 ; y++){
        printf("%-4d" , data[y]);
    }
    printf("\n");
}
