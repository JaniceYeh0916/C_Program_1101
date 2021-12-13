#include <stdio.h>
#include <string.h>

int main(){
    char data[101][101];
    int n = 0 , data1[101];
    int max = 0;
    while (gets(data[n])){
        data1[n] = strlen(data[n]);
        if(data1[n] > max){
            max = data1[n];
        }
        n++;
    }
    for(int i = 0 ; i < max ; i++){
        for(int j = n - 1 ; j >= 0 ; j--){
            if(i < data1[j]){
                printf("%c", data[j][i]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}