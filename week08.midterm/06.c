#include <stdio.h>
#define SIZE 100

int main(){
    float data[SIZE];
    float ans[SIZE];
    int n = 0 , j = 0;
    while(j == 0){
        scanf("%f" , &data[n]);
        if(data[n] == -999){
            j += 1;
        }
        n++;
    }
    for(int x = 0 ; x < n ; x++){
        for(int y = x ; y < n ; y++){
            if(data[x] < data[y]){
                float a = data[x];
                data[x] = data[y];
                data[y] = a;
            }
        }
    }
    ans[0] = data[0];
    ans[1] = data[n-2];

    float sum = 0;
    for(int x = 0 ; x < (n-1) ; x++){
        sum += data[x];
    }
    ans[2] = sum;
    ans[3] = sum / (n-1);
    printf("%012.3f\n%012.3f\n%012.3f\n%012.3f\n" , ans[0] , ans[1] , ans[2] , ans[3]);
}