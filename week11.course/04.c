#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    unsigned long long int data[n];
    int data1[100][100];
    for(int x = 0 ; x < n ; x++){
        scanf(" %lld" , &data[x]);
    }
    for(int x = 0 ; x < n ; x++){
        int sum = 0;
        int val1 = data[x] / 1000;
        int val2 = (data[x] - (val1 * 1000)) / 100;
        int val3 = (data[x] - (val1 * 1000) - (val2 * 100)) / 10;
        int val4 = data[x] % 10;
        sum = val1 + val2 + val3 + val4;
        data1[x][0] = x;
        data1[x][1] = sum;
    }

    for(int x = 0 ; x < n ; x++){
        for(int y = x ; y < n ; y++){
            if(data1[x][1] > data1[y][1]){
                int a = data1[x][0];
                data1[x][0] = data1[y][0];
                data1[y][0] = a;
                int b = data1[x][1];
                data1[x][1] = data1[y][1];
                data1[y][1] = b;
            }
            if(data1[x][1] == data1[y][1]){
                int a = data1[x][0];
                int b = data1[y][0];
                if(data[a] > data[b]){
                    int c = data1[x][0];
                    data1[x][0] = data1[y][0];
                    data1[y][0] = c;
                }
            }
        }
    }
    for(int x = 0 ; x < n ;){
        int k = data1[x][0];
        printf("%d " , data[k]);
        x++;
    }
    printf("\n");
}