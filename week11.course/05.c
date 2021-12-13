#include <stdio.h>

int main(){
    int sum = 0;
    char data[11];
    for(int n = 0 ; n < 10 ; n++){
        scanf("%c" , &data[n]);
    }
    int l = data[0];
    l = l - 65;
    l = l + 9;
    sum += l / 10;
    sum += 9 * (l % 10);
    int k = 8;
    for(int n = 1 ; n < 10 ; n++){
        int datach = data[n] - '0';
        sum += datach * k;
        k--;
        if(k == 0){
            k++;
        }
    }
    //printf("%d\n" , sum);
    if(sum % 10 == 0){
        printf("%s\n" , "CORRECT!!!");
    }
    else{
        printf("%s\n" , "WRONG!!!");
    }
    
}