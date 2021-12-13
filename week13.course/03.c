#include <stdio.h>
#include <string.h>

int main(){
    char data[10000];
    scanf("%[^\n]" , data);
    int l = strlen(data);
    for(int n = 0 ; n < l ; n++){
        int v = data[n];
        if(65 <= v && v <= 90){
            char a = data[n] + 32;
            printf("%c" , a);
        }
        else{
            printf("%c" , data[n]);
        }
    }
}