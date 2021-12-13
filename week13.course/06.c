#include <stdio.h>
#include <string.h>

int main(){
    char data[10000];
    scanf("%[^\n]" , data);
    int l = strlen(data);
    for(int n = 0 ; n < l ; n++){
        int num = data[n];
        if(65 <= data[n] && data[n] <= 90){
            data[n] = data[n] + 32;
            printf("%c" , data[n]);
        }
        else if(97 <= data[n] && data[n] <= 122){
            data[n] = data[n] - 32;
            printf("%c" , data[n]);            
        }
        else{
            printf("%c" , data[n]);
        }
    }
    printf("\n");
}