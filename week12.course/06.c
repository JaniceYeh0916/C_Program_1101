#include <stdio.h>

int main(){
    char data[12];
    int data1[12];
    for(int n = 0 ; n < 10 ; n++){
        scanf(" %c" , &data[n]);
    }
    for(int n = 0 ; n < 10 ; n++){
        int sum = 0;
        for(int x = 0 ; x <= n ; x++){
            if(data[x] == 'X'){
                sum += 10;
            }
            else{
                sum += data[x] - 48;
            }
        }
        data1[n] = sum;
    }
    int total = 0;
    for(int n = 0 ; n < 10 ; n++){
        total += data1[n];
    }
    if(total % 11 == 0){
        printf("%s\n" , "YES");
    }
    else{
        printf("%s\n" , "NO");
    }
}