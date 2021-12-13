#include <stdio.h>
#include <string.h>

int main(){
    int num = 0;
    char data[100];
    scanf("%[^\n]" , data);
    int l = strlen(data);
    for(int n = 0 ; n < l ; n++){
        for(int y = n ; y < l ; y++){
            if(data[y] < data[n]){
                char ch = data[y];
                data[y] = data[n];
                data[n] = ch;
            }
        }
    }
    for(int n = 0 ; n < l ; n++){
        if(data[n] == ' '){
            num++;
        }   
    }
    printf("%d\n" , num + 1);
    for(int n = num ; n < l ; n++){
        int z = 1;
        if(97 <= data[n] && data[n] <= 122){
            while(data[n] == data[n+1]){
                z++;
                n++;
            }
            printf("%c=%d\n" , data[n] , z);
        }
    }
    for(int n = num ; n < l ; n++){
        int z = 1;
        if(65 <= data[n] && data[n] <= 90){
            while(data[n] == data[n+1]){
                z++;
                n++;
            }
            printf("%c=%d\n" , data[n] , z);
        }
    }
}