#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
    char data[SIZE] = {0};
    int l = 0 , n = 0;
    scanf("%s" , data);
    l = strlen(data);
    for(int i = 0 ; i < (int)l/2 ; i++){
        if(data[i] != data[l-i-1]){
            n++;
        }
    }
    if(n != 0){
        printf("%s\n" , "No");
    }
    else{
        printf("%s\n" , "Yes");
    }
}




